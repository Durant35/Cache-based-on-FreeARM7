
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
/*---------------------------------------------------------------------------
   采用二路组相连映射方式下, 同时块大小为8 words, cpu指定的32-bit的地址分布情况:
 |31-------------13-12---------------5-4-----------------2-1---------------0|
 |       Tag(19)           Index(8)       Word-Offset(3)     Byte-offset(2) |
 |--------------------------------------------------------------------------|
  $ ARM按照四个字节对齐      ====> Byte-offset[1:0]
  $ 每个块有8个字，即2^3     ====> Word-Offset[4:2]
  $ Cache有512个块，即2*2^8 ====> Index[12:5]
  $ 32-2-8-3 = 19          ====> Tag[31:13]
----------------------------------------------------------------------------*/

/*------------------------ Parameter Definition -----------------------------*/	
	parameter BLOCK_SIZE	= 8;              // default block size is 8.
 //parameter CLR_PERIOD = 500;            // clear use bit every 500 clocks.
                                          // D_Cache Three States.
	parameter CPU_EXEC = 0;
	parameter WR_DRAM = 1;
	parameter RD_DRAM = 2;
	
/*------------------------ Global wire/reg Definition -----------------------*/
   reg		[277:0]		D_SRAM[511:0]; /* D_Cache memory,19 bits for tag.
                                          each block 1 bit more for dirty bit,
         	                              and 1 bit more for use bit, 1 for recently used.*/
	integer					i;             // use in for loop.
	wire                 dirty;         // replace block dirty signal.
//	reg       [31:0]     use_counter;   // count for cpu enable clock.
	
/*--------------------- D_Cache FSM -----------------------------------------*/
	reg [1:0] state;                       // D_Cache state.
   always@(posedge clock)
     begin
	    if(rst) state <= CPU_EXEC;
		 else begin
		   case(state)                      // 不命中时CPU需要等待D_Cache 读/写 Dram.
			  CPU_EXEC : if(~hit & data_req & dirty)
			               state <= WR_DRAM;   		                                
			             else if(~hit & data_req) 
							   state <= RD_DRAM;
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
 	reg cpu_wr_wait_flag;                         // cpu写Cache等待标志.
	reg [277:0] entry_data[1:0];                  // entry data according to the cpu address.
	wire hit0, hit1;                              // Upper entry hit or bottom.
	reg [8:0] hit_block_index, miss_block_index;  // choose which block in an entry.
   wire replace_bottom;                          // signal for replace bottom entry block.
	wire dirty0, dirty1;                          // block dirty flag.
	
// entry data is always corresponding to the cpu_addr entry.
   always@(*) begin 
     entry_data[0] <= D_SRAM[{0, cpu_addr[12:5]}];
     entry_data[1] <= D_SRAM[{1, cpu_addr[12:5]}];
	end

// which block in the same entry hit?
assign hit0 = entry_data[0][277] & (cpu_addr[31:13]==entry_data[0][274:256]);
assign hit1 = entry_data[1][277] & (cpu_addr[31:13]==entry_data[1][274:256]);

// assignment for output signals to cpu, hit or not?
assign hit = hit0 | hit1;

// assignment for bottom block replace signal.
assign replace_bottom = ((entry_data[0][276] == 1'b1) & (entry_data[1][276] == 1'b0))
	                   | ((entry_data[0][275] == 1'b1) & (entry_data[1][275] == 1'b0));
/* when the upper block is valid but the bottom, 
   or both are valid but bottom block is never used recently, replace the bottom one.
 */
	
// hit block index is always corresponding to the index of D_SRAM when hit.
	always@(*) begin
	  if(hit & hit0 & data_req) hit_block_index <= {1'b0, cpu_addr[12:5]};
	  else if(hit & hit1 & data_req) hit_block_index <= {1'b1, cpu_addr[12:5]};
	  else hit_block_index = 0;
	end

// miss block index is used to get the miss D_SRAM index.
	always@(posedge clock) begin
	  if(rst) miss_block_index <= 0;
	  else begin
	    if(~hit & data_req & replace_bottom) 
	      miss_block_index <= {1'b1, cpu_addr[12:5]};
	    else if(~hit & data_req & ~replace_bottom) 
	      miss_block_index <= {1'b0, cpu_addr[12:5]};
	  end
	end
	
// assignment for dirty, the writing block's dirty bit.
assign dirty0 = entry_data[0][276];
assign dirty1 = entry_data[1][276];
assign dirty = ((dirty0 & ~replace_bottom) | (dirty1 & replace_bottom));
	
// write/read data_cache miss, ask cpu waiting...
assign ram_abort = ( dram_wr_req || dram_rd_req || dram_rd_req_dly ); 
                              // dram_rd_req_dly表明cpu需要在cache完成搬运的下下个周期才能继续.

// D_cache writing from cpu or dram.
	always@(posedge clock)
	  begin
		 if(rst) begin                       // cache初始化
		   for(i=0;i<512;i=i+1)
				D_SRAM[i] <= 0;
		 end
		 else if(dram_rd_ready) begin        // 由于cache miss, 需要将对应块从Dram写入Cache, buffer缓存.
		   if(D_SRAM[{~miss_block_index[8], miss_block_index[7:0]}][275] == 1'b1) begin
			  D_SRAM[{~miss_block_index[8], miss_block_index[7:0]}][275] <= 1'b0;
			end
			D_SRAM[miss_block_index]	<=	{3'b101,cpu_addr_buf[31:13],
														dram_data_buffer[7],dram_data_buffer[6],
														dram_data_buffer[5],dram_data_buffer[4],
														dram_data_buffer[3],dram_data_buffer[2],
														dram_data_buffer[1],dram_data_buffer[0]};
												  // no cache miss, cpu直接写Cache.
		 end
		 else if(hit & data_req & wren) begin         
		   D_SRAM[hit_block_index][276] <= 1'b1;      // set the dirty bit.
			D_SRAM[hit_block_index][275] <= 1'b1;      // recently used.
         case(cpu_addr[4:2])                        // 将字写入对应的位置
			  0: D_SRAM[hit_block_index][31:0] <= cpu_wr_data;
			  1: D_SRAM[hit_block_index][63:32] <= cpu_wr_data;
			  2: D_SRAM[hit_block_index][95:64] <= cpu_wr_data;
			  3: D_SRAM[hit_block_index][127:96] <= cpu_wr_data;
			  4: D_SRAM[hit_block_index][159:128] <= cpu_wr_data;
			  5: D_SRAM[hit_block_index][191:160] <= cpu_wr_data;
			  6: D_SRAM[hit_block_index][223:192] <= cpu_wr_data;
			  7: D_SRAM[hit_block_index][255:224] <= cpu_wr_data;
			  default: ;                               // otherwise, D_SRAM never changes.
         endcase
			
         if(D_SRAM[{~hit_block_index[8], hit_block_index[7:0]}][275] == 1'b1) begin
			  D_SRAM[{~hit_block_index[8], hit_block_index[7:0]}][275] <= 1'b0;
			end			
		 end
		                                 // cache miss, 等待数据搬入cache后,再完成写操作.
		 else if(cpu_wr_wait_flag & {dram_rd_req, dram_rd_req_dly}==2'b01) begin
		   D_SRAM[miss_block_index][276] <= 1'b1;   // set the dirty bit.
			D_SRAM[miss_block_index][275] <= 1'b1;   // recently used.
         case(cpu_addr_buf[4:2])                    // 将字写入对应的位置
			  0: D_SRAM[miss_block_index][31:0] <= cpu_wr_data_buf;
			  1: D_SRAM[miss_block_index][63:32] <= cpu_wr_data_buf;
			  2: D_SRAM[miss_block_index][95:64] <= cpu_wr_data_buf;
			  3: D_SRAM[miss_block_index][127:96] <= cpu_wr_data_buf;
			  4: D_SRAM[miss_block_index][159:128] <= cpu_wr_data_buf;
			  5: D_SRAM[miss_block_index][191:160] <= cpu_wr_data_buf;
			  6: D_SRAM[miss_block_index][223:192] <= cpu_wr_data_buf;
			  7: D_SRAM[miss_block_index][255:224] <= cpu_wr_data_buf;
			  default: ;                                // otherwise, D_SRAM never changes.
         endcase
			
			if(D_SRAM[{~miss_block_index[8], miss_block_index[7:0]}][275] == 1'b1) begin
			  D_SRAM[{~miss_block_index[8], miss_block_index[7:0]}][275] <= 1'b0;
			end
			
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
		  D_SRAM[hit_block_index][275] <= 1'b1;      // recently used.
		 
		  case(cpu_addr[4:2])                 // find target word.
			0:	cpu_rd_data <= D_SRAM[hit_block_index][31:0];
			1:	cpu_rd_data <= D_SRAM[hit_block_index][63:32];
			2:	cpu_rd_data <= D_SRAM[hit_block_index][95:64];
			3:	cpu_rd_data <= D_SRAM[hit_block_index][127:96];
			4:	cpu_rd_data <= D_SRAM[hit_block_index][159:128];
			5:	cpu_rd_data <= D_SRAM[hit_block_index][191:160];
			6:	cpu_rd_data <= D_SRAM[hit_block_index][223:192];
			7:	cpu_rd_data <= D_SRAM[hit_block_index][255:224];
			default:cpu_rd_data <= 0;          // otherwise, 0 will be read.
		  endcase
		  
		  if(D_SRAM[{~hit_block_index[8], hit_block_index[7:0]}][275] == 1'b1) begin
			  D_SRAM[{~hit_block_index[8], hit_block_index[7:0]}][275] <= 1'b0;
			end
		 end
		 /* D_Cache读缺失，从dram中搬数据完成后读取.*/
		 else if(~cpu_wr_wait_flag & ({dram_rd_req, dram_rd_req_dly} == 2'b01)) begin
		   D_SRAM[miss_block_index][275] <= 1'b1;   // recently used.
			
		   case(cpu_addr_buf[4:2])           
			0:	cpu_rd_data <= D_SRAM[miss_block_index][31:0];
			1:	cpu_rd_data <= D_SRAM[miss_block_index][63:32];
			2:	cpu_rd_data <= D_SRAM[miss_block_index][95:64];
			3:	cpu_rd_data <= D_SRAM[miss_block_index][127:96];
			4:	cpu_rd_data <= D_SRAM[miss_block_index][159:128];
			5:	cpu_rd_data <= D_SRAM[miss_block_index][191:160];
			6:	cpu_rd_data <= D_SRAM[miss_block_index][223:192];
			7:	cpu_rd_data <= D_SRAM[miss_block_index][255:224];
			default:cpu_rd_data <= 0;
		  endcase
		  
		  if(D_SRAM[{~miss_block_index[8], miss_block_index[7:0]}][275] == 1'b1) begin
			  D_SRAM[{~miss_block_index[8], miss_block_index[7:0]}][275] <= 1'b0;
		  end
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
		if(rst)
			rd_counter <= 0;
		else if(dram_rd_ready)
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

	reg [18:0] wr_block_tag;    // block's tag of the original block, used to get the physcial address.
	wire dram_wr_ready;         // signals for write ready.
	reg [3:0] wr_counter;       // counter for write words number.

// assignment for write block tag.
   always@(posedge clock)
     begin
	    if(rst) wr_block_tag <= 19'b0;
		 else if((~hit & dirty & data_req) & ~dram_wr_req & ~dram_rd_req)
		   wr_block_tag <= D_SRAM[miss_block_index][274:256];    
			                           /* 存放CPU写cache缺失时, 需要写回的块的tag.*/
     end		
	  
// assignment for dram read/write data ready.
   assign dram_wr_ready = (wr_counter == BLOCK_SIZE);	

// Cache need to write dram when in WR_DRAM state.
   assign dram_wr_req = (state == WR_DRAM);  
	
// Get the physical starting address of the block in D_Cache to write. 
   assign dram_wr_addr = {2'b0, wr_block_tag, miss_block_index,3'b0};
	
// assignment for word to write into Dram. 
   always@(posedge clock)
     begin
	    if(rst) dram_wr_data <= 32'b0;
		 else if(dram_wr_req) begin
		   case(wr_counter[2:0])
			  0: dram_wr_data <= D_SRAM[miss_block_index][31:0];
			  1: dram_wr_data <= D_SRAM[miss_block_index][63:32];
			  2: dram_wr_data <= D_SRAM[miss_block_index][95:64];
			  3: dram_wr_data <= D_SRAM[miss_block_index][127:96]; 
			  4: dram_wr_data <= D_SRAM[miss_block_index][159:128];
			  5: dram_wr_data <= D_SRAM[miss_block_index][191:160];
			  6: dram_wr_data <= D_SRAM[miss_block_index][223:192];
			  7: dram_wr_data <= D_SRAM[miss_block_index][255:224];
           default: dram_wr_data <= 0;	            /* 还是选择第一个字?*/		  
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
		 /*else if(({data_req, data_req_dly} == 2'b10) & ~hit) || dram_rd_req || dram_wr_req)
			cpu_addr_buf <= cpu_addr_buf;*/
		 else if(~hit & data_req)
			cpu_addr_buf <= cpu_addr;
	end
	
// assignment for cpu_wr_data_buf, buffer for cpu_wr_data.
   always@(posedge clock)
   	begin
   		if(rst)
   			cpu_wr_data_buf <= 0;
   		/*else if((data_req_dly & ~hit) || dram_rd_req || dram_wr_req)
   		   cpu_wr_data_buf <= cpu_wr_data_buf;*/
   		else if(data_req & wren & ~hit)
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
