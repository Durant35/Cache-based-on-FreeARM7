/*
* --------------------------------------------------------------------------
* Copyright (c) 2014 by SYSU ASIC VIDEO
* --------------------------------------------------------------------------
*
* ------------------------ File Info ---------------------------------------
* File Name:		stimulus.m
* Discription:		1. perform a simulation of ARM
*						2. using instruction cache and data cache
*
* ------------------------ Revision History --------------------------------
* Ver		Revisor		Mod. Date		Changes Made:
* v1.0	Li Feng		2014-04-19		Initial Revision
* v1.1	Li Feng		2014-05-16		Add Cache and dram_sim
*
* --------------------------------------------------------------------------
*/


`timescale 1ns/10ps
module stimulus();

/*********************************** 变量声明 ************************************/

// 参数定义
parameter	WIDTH		=	32;
parameter	PERIOD	=	100;

// 内部变量
reg					clock;
reg					rst; 
reg            	cpu_en; 
wire	[WIDTH-1:0] ram_rdata; 
wire	[WIDTH-1:0]	rom_data; 
  
  
wire	[WIDTH-1:0]	ram_addr; 
wire					ram_cen; 
wire	[3:0]			ram_flag; 
wire	[WIDTH-1:0]	ram_wdata; 
wire					ram_wen; 
wire	[WIDTH-1:0]	rom_addr; 
wire					rom_en; 

wire					rom_abort; 
wire					ram_abort; 

// D_Cache writes dram
wire 					dram_wr_req;		//	request writing
wire	[31:0]		dram_wr_addr;		//	write data address
wire	[31:0]		dram_wr_data;		//	write data
wire					dram_wr_val;		//	write a word valid
// D_Cache reads dram
wire 					dram_rd_req_d;		//	request reading
wire	[31:0]		dram_rd_addr_d;	//	read data address
wire	[31:0]		dram_rd_data;		//	read data
wire					dram_rd_val;		//	read a word valid 
// I_Cache reads dram
wire 					dram_rd_req_i;		//	request reading
wire	[31:0]		dram_rd_addr_i;	//	read data address
// 循环变量

/*********************************** 模块调用 ************************************/

arm	u0(
   // input signal. 
	.clk			(	clock			), 
	.cpu_en		(	cpu_en & ~ram_abort & ~rom_abort), 
	.cpu_restart(	rst			), 
	.fiq			(	1'b0			), 
	.irq			(	1'b0			), 
	.ram_abort	(	1'b0			), 
	.ram_rdata	(	ram_rdata	), 
	.rom_abort	(	1'b0			), 
	.rom_data	(	rom_data		), 
	.rst			(	rst			), 
	// output signal.
	.ram_addr	(	ram_addr		), 
	.ram_cen		(	ram_cen		), 
	.ram_flag	(	ram_flag		), 
	.ram_wdata	(	ram_wdata	), 
	.ram_wen		(	ram_wen		), 
	.rom_addr	(	rom_addr		), 
	.rom_en		(	rom_en		)  
	);  

I_Cache	#(.BLOCK_SIZE(8))u1(
	// control signal
	.clock		(	clock			),
	.rst			(	rst			),
	// dram side
	.dram_rd_data(	dram_rd_data),
	.dram_val	(	dram_rd_val	&& dram_rd_req_i),
	.dram_rd_req(	dram_rd_req_i),
	.dram_rd_addr(	dram_rd_addr_i),
	// cpu side
	.cpu_addr  (	rom_addr		),
	.ins_req		(	rom_en		),			// instruction request from cpu
	.instuction	(	rom_data		),			// instruction for cpu
	.hit			(					),
	.rom_abort	(	rom_abort	)
	);	

D_Cache	#(.BLOCK_SIZE(8))u2(
	// control signal
	.clock			(	clock				),		// cache clock, the same as cpu
	.rst				(	rst				),		// cache reset
	// dram side(write)
	.dram_wr_req	(	dram_wr_req		),		//	request writing data to dram
	.dram_wr_addr	(	dram_wr_addr	),		//	write data address
	.dram_wr_data	(	dram_wr_data	),		//	write data
	.dram_wr_val	(	dram_wr_val		),		//	write a word valid
	// dram side(read)
	.dram_rd_req	(	dram_rd_req_d	),		//	request reading data from dram
	.dram_rd_addr	(	dram_rd_addr_d	),		//	read data address
	.dram_rd_data	(	dram_rd_data	),		//	read data
	.dram_rd_val	(	dram_rd_val && dram_rd_req_d && ~dram_rd_req_i),		//	read a word valid
	// cpu side
	.cpu_addr		(	ram_addr			),		// cpu address
	.data_req		(	ram_cen			),		// data request
	.wren				(	ram_wen			),		// write/read
	.cpu_wr_data	(	ram_wdata		),		// data for cpu
	.cpu_rd_data	(	ram_rdata		),		// data for cpu
	.hit				(						),		// cache hit or miss
	.ram_abort		(	ram_abort		)		// waiting for cache
	);	
	
dram_ctrl_sim	#(.BLOCK_SIZE(8))u3(
	// control signal
	.clock			(	clock				),	
	.rst				(	rst				),		// dram reset
	// write dram
	.dram_wr_req	(	dram_wr_req	),			//	request writing
	.dram_wr_addr	(	dram_wr_addr	),		//	write data address
	.dram_wr_data	(	dram_wr_data	),		//	write data
	.dram_wr_val	(	dram_wr_val		),		//	write a word valid
	// read dram
	.dram_rd_req	(	dram_rd_req_i || dram_rd_req_d),	//	request reading
	.dram_rd_addr	(	rom_abort ? dram_rd_addr_i : dram_rd_addr_d),		//	read data address
	.dram_rd_data	(	dram_rd_data	),		//	read data
	.dram_rd_val	(	dram_rd_val		)		//	read a word valid 
	);
		
/*********************************** 仿真激励 ************************************/
initial
begin
	clock		=	0;
	cpu_en	=	0;
	rst		=	1;
	#(PERIOD*5);
	rst		=	0;
	#(PERIOD*5);
	cpu_en	=	1;
end

initial
begin
	#(PERIOD*10);
	u0.rd			=	32'hf000; 
	u0.re			=	32'hff00; 
end

always
begin
	#PERIOD;
	if( 32'h0000ff00 == u0.rf)
		cpu_en	=	0;		
end

always	#(PERIOD/2) clock = ~clock;

endmodule
