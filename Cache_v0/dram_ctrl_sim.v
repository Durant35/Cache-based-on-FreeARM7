module	dram_ctrl_sim(
	// control signal
	input						clock,
	input						rst,					// dram reset
	// write dram
	input 					dram_wr_req,		//	request writing
	input		[31:0]		dram_wr_addr,		//	write data address
	input		[31:0]		dram_wr_data,		//	write data
	output reg				dram_wr_val,		//	write a word valid
	// read dram
	input 					dram_rd_req,		//	request reading
	input		[31:0]		dram_rd_addr,		//	read data address
	output	[31:0]		dram_rd_data,		//	read data
	output reg				dram_rd_val			//	read a word valid 
	);
	
	parameter	BLOCK_SIZE	=	8;
	parameter	IDLE			=	0;
	parameter	WAIT_1		=	1;
	parameter	WAIT_2		=	2;
	parameter	WAIT_3		=	3;
	parameter	WAIT_4		=	4;
	parameter	WAIT_5		=	5;
	parameter	WAIT_6		=	6;
	parameter	WAIT_7		=	7;
	parameter	WAIT_8		=	8;
	parameter	WAIT_9		=	9;
	parameter	WAIT_10		=	10;
	parameter	WAIT_11		=	11;
	parameter	WAIT_12		=	12;
	parameter	WAIT_13		=	13;
	parameter	WAIT_14		=	14;
	parameter	WAIT_15		=	15;
	parameter	WR_DATA		=	16;
	parameter	RD_DATA		=	17;
	parameter	RETURN_1		=	18;
	parameter	RETURN_2		=	19;
	parameter	RETURN_3		=	20;
	
	reg	[4:0]		state;										// FSM.
	reg	[4:0]		state_dly;
	reg	[31:0]	wr_counter, rd_counter;					// counter for block.
	wire				wr_last_data, rd_last_data;		   // block finished.
	wire				dram_wr_en, dram_rd_en;					// write/read dram enable.
	reg	[31:0]	dram_wr_addr_buf, dram_rd_addr_buf;	// write/read address back up.
	reg				dram_wr_req_dly, dram_rd_req_dly;	// delay for request signal.
	
	// dram storage space
	dram	u0(
		.clock(clock),
		// write
		.wraddress(dram_wr_addr_buf+wr_counter),
		.wren(dram_wr_en),
		.data(dram_wr_data),
		// read
		.rdaddress(dram_rd_addr_buf+rd_counter),
		.q(dram_rd_data)
		);	
		
	/*	the principle of writing/reading dram: wait 15 clocks before accessing a block 
	                                            and 6 clocks before accessing a word.*/ 
	always@(posedge clock)
	begin
		if(rst)
			state	<=	IDLE;
		else
		begin
			case(state)
				IDLE:	if( dram_wr_req | dram_rd_req )
							state	<=	WAIT_1;
						else
							state	<=	IDLE;
				WAIT_1:	state	<=	WAIT_2;
				WAIT_2:	state	<=	WAIT_3;
				WAIT_3:	state	<=	WAIT_4;
				WAIT_4:	state	<=	WAIT_5;
				WAIT_5:	state	<=	WAIT_6;
				WAIT_6:	state	<=	WAIT_7;
				WAIT_7:	state	<=	WAIT_8;
				WAIT_8:	state	<=	WAIT_9;
				WAIT_9:	state	<=	WAIT_10;
				WAIT_10:	state	<=	WAIT_11;
				WAIT_11:	state	<=	WAIT_12;
				WAIT_12:	state	<=	WAIT_13;
				WAIT_13:	state	<=	WAIT_14;
				WAIT_14:	state	<=	WAIT_15;
				WAIT_15:	if(dram_wr_req)
								state	<=	WR_DATA;
							else if(dram_rd_req)
								state	<=	RD_DATA;
							else
								state	<=	IDLE;
				WR_DATA:	if(wr_last_data)         // 写完直接跳到IDLE.
								state	<=	IDLE;
							else
								state	<=	WAIT_10;
				RD_DATA:	if(rd_last_data)         // 读完跳到RETURN1, 三个周期后IDLE.
								state	<=	RETURN_1;
							else
								state	<=	WAIT_10;
				RETURN_1:	state	<=	RETURN_2;
				RETURN_2:	state	<=	RETURN_3;
				RETURN_3:	state	<=	IDLE;
				default:		state	<=	IDLE;
			endcase
		end
	end
	
	// block wrting/read finished
	assign	wr_last_data = (wr_counter==BLOCK_SIZE-1);
	assign	rd_last_data = (rd_counter==BLOCK_SIZE-1);
	
	// dram write/read enable signals
	assign	dram_wr_en = (state==WR_DATA);
	assign	dram_rd_en = (state==RD_DATA);
	
	// state_dly, delay signal for state.
	always@(posedge clock)
		state_dly	<=	state;
		
	// write/read address back up
	always@(posedge clock)
		if(rst)
		begin
			dram_wr_addr_buf	<=	0;
			dram_rd_addr_buf	<=	0;
		end
		else 
		begin
			if( (state==WAIT_1) && (state_dly==IDLE) )
			begin
				dram_wr_addr_buf	<=	dram_wr_addr;
				dram_rd_addr_buf	<=	dram_rd_addr;
			end
		end
	
	// block counter
	always@(posedge clock)
		if(rst)
		begin
			wr_counter	<=	0;
			rd_counter	<=	0;
		end
		else
		begin
			if(state==WR_DATA)
				wr_counter	<=	wr_counter+1'b1;
			else if(state==IDLE)
				wr_counter	<=	0;
			if(state==RD_DATA)
				rd_counter	<=	rd_counter+1'b1;
			else if(state==IDLE)
				rd_counter	<=	0;
		end
	
	// input signal delay
	always@(posedge clock)
		if(rst)
		begin
			dram_wr_req_dly	<=	0;
			dram_rd_req_dly	<=	0;
		end
		else
		begin
			dram_wr_req_dly	<=	dram_wr_req;
			dram_rd_req_dly	<=	dram_rd_req;
		end
	
	// write/read valid. valid信号为dram使能信号的一个延迟.
	always@(posedge clock)
	begin
		dram_wr_val	<=	dram_wr_en;
		dram_rd_val	<=	dram_rd_en;
	end
		
		
endmodule
