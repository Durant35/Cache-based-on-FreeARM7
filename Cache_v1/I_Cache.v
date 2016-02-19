module	I_Cache(
	// control signal
	input						clock,
	input						rst,
	// dram side
	/* 当读取指令不在cache中时，需要从dram中加载指令到I_Cache,以下部分用于与dram交互.*/
	input			[31:0]	dram_rd_data,        // data read from dram.
	input						dram_val,            // read a word valid.
	output reg				dram_rd_req,         // request reading dram.
	output reg	[31:0]	dram_rd_addr,        // atsrting address of reading.
	// cpu side
	input			[31:0]	cpu_addr,            // address of instruction(pc).
	input						ins_req,			      // instruction request使能信号.
	output reg	[31:0]	instuction,			   // instruction for cpu.
	output					hit,                 // hit or not.
	output					rom_abort            // if not hit, CPU waiting for reading I_Cache.
);
   
	parameter BLOCK_SIZE = 16;
	
/*---------------------------------------------------------------------------
     采用直接相连映射方式下, 同时块大小为16 words, cpu指定的32-bit的地址分布情况:
 |31-------------15-14---------------6-5-----------------2-1---------------0|
 |       Tag(17)           Index(9)       Word-Offset(4)     Byte-offset(2) |
 |--------------------------------------------------------------------------|
  $ ARM按照四个字节对齐    ====> Byte-offset[1:0]
  $ 每个块有16个字，即2^4   ====> Word-Offset[5:2]
  $ Cache有512个块，即2^9 ====> Index[14:6]
  $ 32-2-9-4 = 17        ====> Tag[31:15]
----------------------------------------------------------------------------*/
	
	reg		[4:0]		   rd_counter;             // count for dram read words(0~8).
   reg      [31:0]      cpu_addr_buf;           // buffer for cpu address.
	reg						ins_req_dly;            // delay signal for instruction request.
	reg						dram_rd_req_dly;        // delay signal for dram read request.
	reg		[31:0]		dram_data_buf[15:0];    // buffer for 16 words read from dram.
	reg		[529:0]		block_data;             // data of the target block.
	wire						dram_rd_ready;          // signal for dram read finishing.
	
	reg		[529:0]		I_SRAM[511:0];          // I_Cache memory, Depth:512, Width: 530.
	integer					i;
	
/*-------------------------------- Dram write I_Cache ---------------------------------*/
	always@(posedge clock)
	begin
		if(rst)
		begin                               // I_Cache initialization.
			for(i=0; i<512; i=i+1)
				I_SRAM[i] <= 0;
		end
		else if(dram_rd_ready)              // 8 words write into I_Cache from dram data buffer.
			I_SRAM[cpu_addr_buf[14:6]]	<=	{1'b1,cpu_addr_buf[31:15],
			                               dram_data_buf[15],dram_data_buf[14],
													 dram_data_buf[13],dram_data_buf[12],
													 dram_data_buf[11],dram_data_buf[10],
													 dram_data_buf[9],dram_data_buf[8],
													 dram_data_buf[7],dram_data_buf[6],
													 dram_data_buf[5],dram_data_buf[4],
													 dram_data_buf[3],dram_data_buf[2],
													 dram_data_buf[1],dram_data_buf[0]};
	end

// assignment for output signals for cpu: hit, rom_abort, instruction.
/* 状态位为1、 Tag相同表明命中.*/
	assign hit = block_data[529] & (cpu_addr_buf[31:15] == block_data[528:512]);
	
/* request instruction but not hit, cpu have to wait until the instruction got.*/
	assign rom_abort = (~hit & ins_req_dly) | dram_rd_req | dram_rd_req_dly;
	
	   
// block data是cpu_addr输入地址对应的索引组的内容.
	always@(posedge clock)
		if(rst)
			block_data <= 0;
	   /* 分直接可以读取还有需要等待I_Cache从Dram里面搬运完成后读取两种情况.*/
		else if(ins_req)  
			block_data <= I_SRAM[cpu_addr[13:6]];                  // cpu_addr索引组内容赋给block data.
		/* Added 6.10.*/
		else if({dram_rd_req_dly, dram_rd_req} == 2'b10)
		   block_data <= I_SRAM[cpu_addr_buf[13:6]]; 
	
/* assignment for instruction.*/	
	always@(*)
		case(cpu_addr_buf[5:2])                    // 块中对哪个字？
			0:	 instuction = block_data[31:0];
			1:	 instuction = block_data[63:32];
			2:	 instuction = block_data[95:64];
			3:	 instuction = block_data[127:96];
			4:	 instuction = block_data[159:128];
			5:	 instuction = block_data[191:160];
			6:	 instuction = block_data[223:192];
			7:	 instuction = block_data[255:224];
			8:	 instuction = block_data[287:256];
			9:	 instuction = block_data[319:288];
			10: instuction = block_data[351:320];
			11: instuction = block_data[383:352];
			12: instuction = block_data[415:384];
			13: instuction = block_data[447:416];
			14: instuction = block_data[479:448];
			15: instuction = block_data[511:480];
			default:instuction = 0;
		endcase
	
/*---------------------------- I_Cache read Dram -------------------------------------*/	
// assignment for dram read ready signal.				
	assign	dram_rd_ready = (rd_counter == BLOCK_SIZE);
	
// dram data buffer
	always@(posedge clock)
	begin
		if(rst)
		begin
		   for(i = 0; i < BLOCK_SIZE; i = i+1) begin
			   dram_data_buf[i] <= 0;
			end
		end
		else if(dram_rd_ready)
		begin
		   for(i = 0; i < BLOCK_SIZE; i = i+1) begin
			   dram_data_buf[i] <= 0;
			end
		end
		/* 通过移位寄存器保存读取指令，dram data buffer由低到高依次为先后读取的16个字的指令.*/
		else if(dram_val)
		begin
			dram_data_buf[0] <= dram_data_buf[1];
			dram_data_buf[1] <= dram_data_buf[2];
			dram_data_buf[2] <= dram_data_buf[3];
			dram_data_buf[3] <= dram_data_buf[4];
			dram_data_buf[4] <= dram_data_buf[5];
			dram_data_buf[5] <= dram_data_buf[6];
			dram_data_buf[6] <= dram_data_buf[7];
			dram_data_buf[7] <= dram_data_buf[8];
			dram_data_buf[8] <= dram_data_buf[9];
			dram_data_buf[9] <= dram_data_buf[10];
			dram_data_buf[10] <= dram_data_buf[11];
			dram_data_buf[11] <= dram_data_buf[12];
			dram_data_buf[12] <= dram_data_buf[13];
			dram_data_buf[13] <= dram_data_buf[14];
			dram_data_buf[14] <= dram_data_buf[15];
			dram_data_buf[15] <= dram_rd_data;
		end
	end
	
// read word counter.
	always@(posedge clock)
	begin
		if(rst) rd_counter <= 0;
		else if(dram_rd_ready) rd_counter <= 0;
		else if(dram_val) rd_counter <= rd_counter + 1'b1;
	end	
	
// output signals for dram: dram_rd_req, dram_rd_addr.
// dram read request signal.
	always@(posedge clock)
	begin
		if(rst)
			dram_rd_req <= 1'b0;
		else if(~hit & ins_req_dly)
			dram_rd_req <= 1;
		else if(dram_rd_ready)
			dram_rd_req <= 0;
	end
	
// phisical address of instructions, address from I_Cache to dram.
	always@(posedge clock)
	begin
		if(rst)
	     dram_rd_addr <= 0;
		/*所谓的块是以{cpu_addr_dly[31:6], 4'b0}为起始地址，长度为8的一块dram.*/
		/*本来应该是cpu_address[31:2],去掉低两位的字节偏移量.*/
		else if(~hit & ins_req_dly)    
		  dram_rd_addr <= {2'b0, cpu_addr_buf[31:6], 4'b0};
		else if(hit & ins_req)
		  dram_rd_addr <= 0;
	end
	
/*-------------------------------------- Signal Delay -------------------------------------------*/
/* delay signal for dram read request, dram_rd_req_dly.*/
	always@(posedge clock)
	  if(rst) 
	    dram_rd_req_dly <= 0;
	  else 
	    dram_rd_req_dly <= dram_rd_req;
	
/* delay signal for cpu address, cpu_addr_buf.*/
	always@(posedge clock)
	begin
		if(rst) 
		  ins_req_dly <= 0;
		else 
		  ins_req_dly <= ins_req;
	end
   
/*-------------------------------------- Signal Buffer -----------------------------------------*/
/* buffer for cpu address, cpu_addr_buf.*/
	
	always@(posedge clock)
	begin
		if(rst)
			cpu_addr_buf <= 0;
		else if((ins_req_dly & ~hit) || dram_rd_req)
			cpu_addr_buf <= cpu_addr_buf;
		else if(ins_req)
			cpu_addr_buf <= cpu_addr;
	end
	
endmodule
