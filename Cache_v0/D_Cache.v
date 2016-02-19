
module D_Cache(
   // control signal
	input						clock,            // D_cache clock, the same as cpu.
	input						rst,              // D_cache reset.
	
	/* 当读取指令不在cache中时，需要从dram中加载.以下部分用于与dram交互.*/
	/* dram_ctrl_sim的write和read是分开的，使用不同的地址线和数据线.*/
   // dram read
	input			[31:0]	dram_rd_data,     // read data from dram.
	input						dram_rd_val,      // read a word valid.
	output   				dram_rd_req,      // request reading data from dram.
	output   	[31:0]	dram_rd_addr,     // read data address.
	// dram write
	output reg	[31:0]	dram_wr_data,     // write data to dram.
	input						dram_wr_val,      // write a word valid.
	output    				dram_wr_req,      // request writing data to dram.
	output    	[31:0]	dram_wr_addr,     // write data address.
	
	/* cpu side.*/
	input			[31:0]	cpu_addr,         // cpu address to read or write in D_Cache.
	input						data_req,			// data request, read or write.
	input                wren,             // 1/0 = write/read.
	output reg  [31:0]	cpu_rd_data,	   // data cpu read from D_Cache.
	input       [31:0]   cpu_wr_data,      // data cpu write to D_Cache.
	output					hit,              // cache hit or miss.
	output					ram_abort         // cpu waiting for D_Cache write or read dram.
);

/*------------------------ Parameter Definition -----------------------------*/	
	parameter BLOCK_SIZE	= 8;              // default block size is 8.
                                          // D_Cache Three States.
	parameter CPU_EXEC = 0;
	parameter WR_DRAM = 1;
	parameter RD_DRAM = 2;
	
/*------------------------ Global wire/reg Definition -----------------------*/
   reg		[275:0]		D_SRAM[511:0];    // D_Cache memory, each block 1 bit more for dirty bit.
	integer					i;  
	wire                 dirty;            // block dirty flag.
	
/*--------------------- D_Cache FSM -----------------------------------------*/
	reg [1:0] state;                       // D_Cache state.
   always@(posedge clock)
     begin
	    if(rst) state <= CPU_EXEC;
		 else begin
		   case(state)                      // 不命中时CPU需要等待D_Cache 读/写 Dram.
			  CPU_EXEC : if(~hit & dirty & data_req) state <= WR_DRAM;   		                                
			             else if(~hit & data_req) state <= RD_DRAM;
			  WR_DRAM  : if(dram_wr_ready) state <= RD_DRAM;
			  RD_DRAM  : if(dram_rd_ready) state <= CPU_EXEC;
			  default  : state <= CPU_EXEC;
			endcase
		 end
     end

/*-------------------------------------- Write D_Cache -------------------------------------------*/
/* Description: Cpu can write D_Cache, given the cpu write data and address.
       However, when cache miss happen, miss block should be taken into D_Cache,
		 then to write data can be written into it. Besides, when Cache reading miss,
		 miss block should also be taken into before reading. 
 */
 	reg cpu_wr_wait_flag;     // cpu写Cache等待标志.
 
 
// assignment for dirty, the writing block's dirty bit.
assign dirty = D_SRAM[cpu_addr[13:5]][274];
	
// assignment for output signals to cpu.
// hit or not?
assign hit = D_SRAM[cpu_addr[13:5]][275] & (cpu_addr[31:14]==D_SRAM[cpu_addr[13:5]][273:256]);
// write/read data_cache miss, ask cpu waiting...
assign ram_abort = ( dram_wr_req || dram_rd_req || dram_rd_req_dly ); 
                              // dram_rd_req_dly表明cpu需要在cache完成搬运的下下个周期才能继续.

// D_cache writing from cpu or dram.
	always@(posedge clock)
	  begin
		 if(rst) begin                  // cache初始化
		   for(i=0;i<512;i=i+1)
				D_SRAM[i] <= 0;
		 end
		 else if(dram_rd_ready)         // 由于cache miss, 需要将对应块从Dram写入Cache, buffer缓存.
			D_SRAM[cpu_addr_buf[13:5]]	<=	{2'b10,cpu_addr_buf[31:14],
														dram_data_buffer[7],dram_data_buffer[6],
														dram_data_buffer[5],dram_data_buffer[4],
														dram_data_buffer[3],dram_data_buffer[2],
														dram_data_buffer[1],dram_data_buffer[0]};
												  // no cache miss, cpu直接写Cache.
		 else if(hit & data_req & wren) begin         
		   D_SRAM[cpu_addr[13:5]][274] <= 1'b1;       // set the dirty bit.
         case(cpu_addr[4:2])                        // 将字写入对应的位置
			  0: D_SRAM[cpu_addr[13:5]][31:0] <= cpu_wr_data;
			  1: D_SRAM[cpu_addr[13:5]][63:32] <= cpu_wr_data;
			  2: D_SRAM[cpu_addr[13:5]][95:64] <= cpu_wr_data;
			  3: D_SRAM[cpu_addr[13:5]][127:96] <= cpu_wr_data;
			  4: D_SRAM[cpu_addr[13:5]][159:128] <= cpu_wr_data;
			  5: D_SRAM[cpu_addr[13:5]][191:160] <= cpu_wr_data;
			  6: D_SRAM[cpu_addr[13:5]][223:192] <= cpu_wr_data;
			  7: D_SRAM[cpu_addr[13:5]][255:224] <= cpu_wr_data;
			  default: ;                               // otherwise, D_SRAM never changes.
         endcase				
		 end
		                                 // cache miss, 等待数据搬入cache后,再完成写操作.
		 else if(cpu_wr_wait_flag & {dram_rd_req, dram_rd_req_dly}==2'b01) begin
		   D_SRAM[cpu_addr_buf[13:5]][274] <= 1'b1;   // set the dirty bit.
         case(cpu_addr_buf[4:2])                    // 将字写入对应的位置
			  0: D_SRAM[cpu_addr_buf[13:5]][31:0] <= cpu_wr_data_buf;
			  1: D_SRAM[cpu_addr_buf[13:5]][63:32] <= cpu_wr_data_buf;
			  2: D_SRAM[cpu_addr_buf[13:5]][95:64] <= cpu_wr_data_buf;
			  3: D_SRAM[cpu_addr_buf[13:5]][127:96] <= cpu_wr_data_buf;
			  4: D_SRAM[cpu_addr_buf[13:5]][159:128] <= cpu_wr_data_buf;
			  5: D_SRAM[cpu_addr_buf[13:5]][191:160] <= cpu_wr_data_buf;
			  6: D_SRAM[cpu_addr_buf[13:5]][223:192] <= cpu_wr_data_buf;
			  7: D_SRAM[cpu_addr_buf[13:5]][255:224] <= cpu_wr_data_buf;
			  default: ;                                // otherwise, D_SRAM never changes.
         endcase
		 end
	  end

// cpu write wait flag, wait until target writing block has been moved into cache.
	always@(posedge clock)
	begin
		if(rst)
			cpu_wr_wait_flag	<=	0;
			        /* 写cache没有命中，至少需要读取数据块，cpu写等待...*/
		else if(~hit & data_req & wren)       
			cpu_wr_wait_flag	<=	1;
		else if(~dram_wr_req & ~dram_rd_req)  
		           /* 要写的数据块不在cache内, 检查要覆盖的块的脏位，
					     假如原数据块经过修改，需要先将其写入dram, dram_wr_req置1;
					     写入dram完成, dram_wr_req复0, 然后请求从dram读如cache, dram_rd_req置1,完成时复0.
						  所以, 二者都为0时, 写cache才可以进行, cpu要写的一个字数据写入cache.*/
			cpu_wr_wait_flag	<=	0;
	end

/*--------------------------------------- Read D_Cache ----------------------------------------*/
/* Description: Cpu can read D_Cache, given the address, getting the data.
       However, when cache miss happen, miss block should be taken into 
		 D_Cache before reading. 
 */
//	assignment for the cpu read word, getting target word.
   always@(posedge clock)
	  begin
	    if(rst) cpu_rd_data <= 0;
		 /* 直接从D_Cache读取.*/
		 else if(hit & data_req & ~wren) begin
		  case(cpu_addr[4:2])                 // find target word.
			0:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][31:0];
			1:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][63:32];
			2:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][95:64];
			3:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][127:96];
			4:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][159:128];
			5:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][191:160];
			6:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][223:192];
			7:	cpu_rd_data <= D_SRAM[cpu_addr[13:5]][255:224];
			default:cpu_rd_data <= 0;          // otherwise, 0 will be read.
		  endcase
		 end
		 /* D_Cache读缺失，从dram中搬数据完成后读取.*/
		 else if(~cpu_wr_wait_flag & ({dram_rd_req, dram_rd_req_dly} == 2'b01)) begin
		   case(cpu_addr_buf[4:2])            
			0:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][31:0];
			1:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][63:32];
			2:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][95:64];
			3:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][127:96];
			4:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][159:128];
			5:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][191:160];
			6:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][223:192];
			7:	cpu_rd_data <= D_SRAM[cpu_addr_buf[13:5]][255:224];
			default:cpu_rd_data <= 0;
		  endcase
		 end
	  end

/*---------------------------------- D_Cache read Dram ------------------------------------------*/
/* Description: When cache miss happen, read or write, miss block should be taken into D_Cache.
		 D_Cache have to read dram word by word until get all words in the target block.
		 Request reading dram and give the addr, then get the corresponding word.
		 Use the read counter to exactly get words in the target block.
 */
   reg [31:0] dram_data_buffer[7:0];        // buffer for data reading from dram.
	wire dram_rd_ready;                      // signals for all words reading finish.
	reg [3:0] rd_counter;                    // counter for read words number.

// Cache need to read dram when in RD_DRAM state, request reading.
   assign dram_rd_req = (state == RD_DRAM);
	
/* Get the physical address of the block in D_Cache to read,
   that's the first address of the block in dram.*/
   assign dram_rd_addr = {2'b0, cpu_addr_buf[31:5],3'b0};
	
// assignment for dram read data ready.
   assign dram_rd_ready = (rd_counter == BLOCK_SIZE);

// dram data buffer, buffer for words read from dram.
	always@(posedge clock)
	begin
		if(rst) begin
		  for(i = 0; i <= 7; i = i + 1)
			 dram_data_buffer[i]	<=	0;
		end
		else if(dram_rd_ready) begin
			for(i = 0; i <= 7; i = i + 1)
			 dram_data_buffer[i]	<=	0;
		end
		else if(dram_rd_val) begin
			dram_data_buffer[0]	<=	dram_data_buffer[1];
			dram_data_buffer[1]	<=	dram_data_buffer[2];
			dram_data_buffer[2]	<=	dram_data_buffer[3];
			dram_data_buffer[3]	<=	dram_data_buffer[4];
			dram_data_buffer[4]	<=	dram_data_buffer[5];
			dram_data_buffer[5]	<=	dram_data_buffer[6];
			dram_data_buffer[6]	<=	dram_data_buffer[7];
			dram_data_buffer[7]	<=	dram_rd_data;
		end
	end

// read counter.
	always@(posedge clock)
	begin
		if( rst )
			rd_counter <= 0;
		else if( dram_rd_ready )
			rd_counter <= 0;
		else if(dram_rd_val)
			rd_counter <= rd_counter + 1'b1;
	end

/*------------------------- D_Cache write Dram --------------------------------------*/
/* Description: When cache miss happen, read or write, miss block should be taken into D_Cache.
		 However, if the original block in the target block position, that's the block is dirty,
		 we should write the original one into dram first.
		 Request dram writing, give the write data and its address to dram to write.
		 Block writing can be achieveed by several words writing.
 */

	reg [17:0] wr_block_tag;    // block's tag of the original block, used to get the physcial address.
	wire dram_wr_ready;         // signals for write ready.
	reg [3:0] wr_counter;       // counter for write words number.

// assignment for write block tag.
   always@(posedge clock)
     begin
	    if(rst) wr_block_tag <= 18'b0;
		 else if((~hit & dirty & data_req) & ~dram_wr_req & ~dram_rd_req)
		   wr_block_tag <= D_SRAM[cpu_addr[13:5]][273:256];    /* 存放CPU写cache缺失时, 需要写回的块的tag.*/
     end		
	  
// assignment for dram read/write data ready.
   assign dram_wr_ready = (wr_counter == BLOCK_SIZE);	

// Cache need to write dram when in WR_DRAM state.
   assign dram_wr_req = (state == WR_DRAM);  
	
// Get the physical starting address of the block in D_Cache to write. 
   assign dram_wr_addr = {2'b0, wr_block_tag, cpu_addr_buf[13:5],3'b0};
	
// assignment for word to write into Dram. 
   always@(posedge clock)
     begin
	    if(rst) dram_wr_data <= 32'b0;
		 else if(dram_wr_req) begin
		   case(wr_counter[2:0])
			  0: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][31:0];
			  1: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][63:32];
			  2: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][95:64];
			  3: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][127:96]; 
			  4: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][159:128];
			  5: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][191:160];
			  6: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][223:192];
			  7: dram_wr_data <= D_SRAM[cpu_addr_buf[13:5]][255:224];
           default: dram_wr_data <= 32'b0;	/* 还是选择第一个字?*/		  
			endcase
		 end
     end	 

// write counter.
   always@(posedge clock)
	begin
		if( rst )
			wr_counter <= 0;
		else if( dram_wr_ready )
			wr_counter <= 0;
		else if(dram_wr_val)
			wr_counter <= wr_counter + 1'b1;
	end	  
	
/*------------------------------------ Signal Buffer ------------------------------------------*/
/* Description: Signal buffers are used to hold input signal during cache-miss time.
 */
	reg [31:0] cpu_addr_buf;             // buffer for cpu read/write address.
	reg [31:0] cpu_wr_data_buf;          // buffer for data to write in D_Cache.            
		
// assignment for cpu_addr_buf, buffer for cpu_addr.
   always@(posedge clock)
	  begin
	    if(rst)
			cpu_addr_buf <= 0;
		 else if((data_req_dly & ~hit) || dram_rd_req || dram_wr_req)
			cpu_addr_buf <= cpu_addr_buf;
		 else if(data_req)
			cpu_addr_buf <= cpu_addr;
	end
	
// assignment for cpu_wr_data_buf, buffer for cpu_wr_data.
   always@(posedge clock)
   	begin
   		if(rst)
   			cpu_wr_data_buf <= 0;
   		else if((data_req_dly & ~hit) || dram_rd_req || dram_wr_req)
   		   cpu_wr_data_buf <= cpu_wr_data_buf;
   		else if(data_req & wren)
   			cpu_wr_data_buf <= cpu_wr_data;
   	end

/*----------------------------------- Signal Delay ----------------------------------------------*/
/* Description: Delay signals are used to keep clock synchronization.
 */
	reg dram_rd_req_dly;                          // dram reading request delay.
	reg data_req_dly;                             // delay for input signal data_req.
	
// assignment for dram request delay.
	always@(posedge clock)
		dram_rd_req_dly	<=	dram_rd_req;

// assignment for data_req_dly, delay for data request signal.
	always@(posedge clock)
	   data_req_dly <= data_req;	

endmodule
