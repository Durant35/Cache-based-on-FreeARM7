module	I_Cache(
	// control signal
	input						clock,
	input						rst,
	// dram side内存
	input			[31:0]	dram_data,
	input						dram_valid,
	output reg				dram_request,
	output reg	[31:0]	dram_request_addr,
	// cpu side
	input			[31:0]	cpu_address,
	input						ins_req,			// instruction request
	output reg	[31:0]	instuction,			// instruction for cpu
	output					hit,
	output					rom_abort
	);
	
	reg		[31:0]		counter;
	reg		[31:0]		cpu_address_dly;
	reg						ins_req_dly;
	reg						dram_req_dly;
	reg		[31:0]		dram_data_shift[7:0];
	reg		[274:0]		I_SRAM_data;
	wire						dram_data_ready;
	
	reg		[274:0]		I_SRAM[511:0];//快有多大//有多少个块
	integer					i;
	
	// instruction sram block
	always@(posedge clock)
	begin
		if(rst)
		begin//清除内存
			for(i=0;i<512;i=i+1)
				I_SRAM[i]	<=	0;
		end
		else if(dram_data_ready)//判断index
			I_SRAM[cpu_address_dly[13:5]]	<=	{1'b1,cpu_address_dly[31:14],
														dram_data_shift[7],dram_data_shift[6],
														dram_data_shift[5],dram_data_shift[4],
														dram_data_shift[3],dram_data_shift[2],
														dram_data_shift[1],dram_data_shift[0]};
	end

	always@(posedge clock)
		if(rst)
			I_SRAM_data	<=	0;
		else if( ins_req | ({dram_req_dly,dram_request}==2'b10) )
			I_SRAM_data	<=	I_SRAM[cpu_address[13:5]];//把组名赋给他

	// output signals
	assign	hit = I_SRAM_data[274] & (cpu_address_dly[31:14]==I_SRAM_data[273:256]);
	assign	rom_abort = (~hit & ins_req_dly) | dram_request | dram_req_dly;
	assign	dram_data_ready = (8==counter);	
		
	always@(*)
		case(cpu_address_dly[4:2])//组中对应哪个块
			0:	instuction = I_SRAM_data[31:0];
			1:	instuction = I_SRAM_data[63:32];
			2:	instuction = I_SRAM_data[95:64];
			3:	instuction = I_SRAM_data[127:96];
			4:	instuction = I_SRAM_data[159:128];
			5:	instuction = I_SRAM_data[191:160];
			6:	instuction = I_SRAM_data[223:192];
			7:	instuction = I_SRAM_data[255:224];
			default:instuction = I_SRAM_data[31:0];
		endcase
	
	always@(posedge clock)
	begin
		if( rst )
			dram_request	<=	0;
		else if( ~hit & ins_req_dly )
			dram_request	<=	1;
		else if( dram_data_ready )
			dram_request	<=	0;
	end
	
	always@(posedge clock)
		dram_req_dly	<=	dram_request;
	
	// phisical address of instructions
	always@(posedge clock)
	begin
		if( rst )
			dram_request_addr	<=	0;
		else
			dram_request_addr	<=	{2'b0,cpu_address_dly[31:5],3'b0};
	end
	
	// input signal buffer
	always@(posedge clock)
	begin
		if( rst )
			ins_req_dly			<=	0;
		else
			ins_req_dly			<=	ins_req;
	end
	
	always@(posedge clock)
	begin
		if( rst )
			cpu_address_dly	<=	0;
		else if( (ins_req_dly & ~hit) || dram_request )
			cpu_address_dly	<=	cpu_address_dly;
		else if(ins_req)
			cpu_address_dly	<=	cpu_address;
	end
	
	// block counter
	always@(posedge clock)
	begin
		if( rst )
			counter	<=	0;
		else if( dram_data_ready )
				counter	<=	0;
		else if(dram_valid)
				counter	<=	counter + 1'b1;
	end
	
	// dram data buffer
	always@(posedge clock)
	begin
		if( rst )
		begin
			dram_data_shift[0]	<=	0;
			dram_data_shift[1]	<=	0;
			dram_data_shift[2]	<=	0;
			dram_data_shift[3]	<=	0;
			dram_data_shift[4]	<=	0;
			dram_data_shift[5]	<=	0;
			dram_data_shift[6]	<=	0;
			dram_data_shift[7]	<=	0;
		end
		else if( dram_data_ready )
		begin
			dram_data_shift[0]	<=	0;
			dram_data_shift[1]	<=	0;
			dram_data_shift[2]	<=	0;
			dram_data_shift[3]	<=	0;
			dram_data_shift[4]	<=	0;
			dram_data_shift[5]	<=	0;
			dram_data_shift[6]	<=	0;
			dram_data_shift[7]	<=	0;
		end
		else if(dram_valid)
		begin
			dram_data_shift[0]	<=	dram_data_shift[1];
			dram_data_shift[1]	<=	dram_data_shift[2];
			dram_data_shift[2]	<=	dram_data_shift[3];
			dram_data_shift[3]	<=	dram_data_shift[4];
			dram_data_shift[4]	<=	dram_data_shift[5];
			dram_data_shift[5]	<=	dram_data_shift[6];
			dram_data_shift[6]	<=	dram_data_shift[7];
			dram_data_shift[7]	<=	dram_data;
		end
	end
	
	
endmodule
