module	dram_ctrl_sim(
	// control signal
	input				clock,
	input				rst,

	input				dram_rd_req,
	input		[31:0]	dram_rd_address,
	output reg			dram_rd_vld,
	output		[31:0]	dram_rd_data
	);
	
	parameter	BLOCK_WIDTH	=	8;
	parameter	IDLE	=	0;
	parameter	WAIT_1	=	1;
	parameter	WAIT_2	=	2;
	parameter	WAIT_3	=	3;
	parameter	WAIT_4	=	4;
	parameter	WAIT_5	=	5;
	parameter	WAIT_6	=	6;
	parameter	WAIT_7	=	7;
	parameter	WAIT_8	=	8;
	parameter	WAIT_9	=	9;
	parameter	WAIT_10	=	10;
	parameter	WAIT_11	=	11;
	parameter	WAIT_12	=	12;
	parameter	WAIT_13	=	13;
	parameter	WAIT_14	=	14;
	parameter	WAIT_15	=	15;
	parameter	GETDATA	=	16;
	
	reg			dram_rd_req_dly;
	reg	[31:0]	dram_rd_addr_bak;
	reg	[4:0]	state;
	reg	[31:0]	counter;
	wire		last_data;
	
	dram	u0(
		.clock(clock),
		// write
		.wraddress(),
		.wren(),
		.data(),
		// read
		.rdaddress(dram_rd_addr_bak+counter),
		.q(dram_rd_data)
		);	
		
	always@(posedge clock)
	begin
		if(rst)
			state	<=	IDLE;
		else
			case(state)
				IDLE:	if({dram_rd_req,dram_rd_req_dly}==2'b10)
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
				WAIT_10:state	<=	WAIT_11;
				WAIT_11:state	<=	WAIT_12;
				WAIT_12:state	<=	WAIT_13;
				WAIT_13:state	<=	WAIT_14;
				WAIT_14:state	<=	WAIT_15;
				WAIT_15:state	<=	GETDATA;
				GETDATA:if(last_data)
							state	<=	IDLE;
						else
							state	<=	WAIT_1;
				default:state	<=	IDLE;
			endcase
	end
	
	assign	last_data = (counter==BLOCK_WIDTH-1);
	assign	dram_rd_en = (state==GETDATA);
	
	always@(posedge clock)
		if(rst)
			dram_rd_addr_bak	<=	0;
		else if({dram_rd_req,dram_rd_req_dly}==2'b10)
			dram_rd_addr_bak	<=	dram_rd_address;
			
	always@(posedge clock)
		if(rst)
			counter	<=	0;
		else if(state==GETDATA)
			counter	<=	counter+1'b1;
		else if(state==IDLE)
			counter	<=	0;
	
	always@(posedge clock)
		if(rst)
			dram_rd_vld	<=	0;
		else
			dram_rd_vld	<=	dram_rd_en;
	
	always@(posedge clock)
		if(rst)
			dram_rd_req_dly	<=	0;
		else
			dram_rd_req_dly	<=	dram_rd_req;
	
endmodule
