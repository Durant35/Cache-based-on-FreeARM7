/*
* --------------------------------------------------------------------------
* Copyright (c) 2014 by SYSU ASIC VIDEO
* --------------------------------------------------------------------------
*
* ------------------------ File Info ---------------------------------------
* File Name:		stimulus.m
* Discription:		1. perform a simulation of ARM
*
* ------------------------ Revision History --------------------------------
* Ver		Revisor		Mod. Date		Changes Made:
* v1.0	Li Feng		2014-04-19		Initial Revision
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

// 循环变量

/*********************************** 模块调用 ************************************/

arm	u0( 
	.clk			(	clock			), 
	.cpu_en		(	cpu_en		), 
	.cpu_restart(	rst			), 
	.fiq			(	1'b0			), 
	.irq			(	1'b0			), 
	.ram_abort	(	1'b0			), 
	.ram_rdata	(	ram_rdata	), 
	.rom_abort	(	1'b0			), 
	.rom_data	(	rom_data		), 
	.rst			(	rst			), 
	
	.ram_addr	(	ram_addr		), 
	.ram_cen		(	ram_cen		), 
	.ram_flag	(	ram_flag		), 
	.ram_wdata	(	ram_wdata	), 
	.ram_wen		(	ram_wen		), 
	.rom_addr	(	rom_addr		), 
	.rom_en		(	rom_en		)  
	);  

Instruction_memory	u1(
	.address		(	rom_addr[WIDTH-1:2]), 
	.clock		(	clock			), 
	.clken		(	rom_en		), 
	.q				(	rom_data		)
	);
	
Data_memory	u2(
	.address		(	ram_addr[WIDTH-1:2]), 
	.byteena		(	ram_flag		), 
	.clken		(	ram_cen		), 
	.clock		(	clock			), 
	.data			(	ram_wdata	), 
	.wren			(	ram_wen		), 
	.rden			(	~ram_wen		), 
	.q				(	ram_rdata	)
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
	u0.rb_usr	=	32'h0200; 
	u0.rd			=	32'h0100; 
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
