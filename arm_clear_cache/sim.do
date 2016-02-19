#
# --------------------------------------------------------------------------
# Copyright (c) 2014 by SYSU ASIC VIDEO
# --------------------------------------------------------------------------
# Auther:			Li Feng	
# Contact:			lifeng28@mail2.sysu.edu.cn	
#
# ------------------------------- File Info --------------------------------
# File Name:		model.m
# Auther:			Li Feng	
# Discription:		1. 
#
# ---------------------------- Revision History ----------------------------
# Ver		Author		Mod. Date		Changes Made:
# v1.0		Li Feng		2014-xx-xx		Initial Revision
#
# --------------------------------------------------------------------------
#

# 建立ModelSim工程
transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

# 编译源文件
vlog -vlog01compat -work work {arm6.v}
vlog -vlog01compat -work work {Instruction_memory.v}
vlog -vlog01compat -work work {Data_memory.v}
vlog -vlog01compat -work work {stimulus.v}

# 开始ModelSim功能仿真
vsim -t 1ns -L work -L 220model_ver -L altera_mf_ver -voptargs="+acc" work.stimulus

# 时序仿真（添加网表.vo与延迟文件.sdo，仿真选项加上cycloneive_ver库）
# vlog -vlog01compat {model.vo}
# vsim -t 1ps -L work -L altera_ver -L cycloneive_ver -voptargs="+acc" work.stimulus

view structure
view signals

# 颜色定义
# 输入信号：	橙色	Orange
# 输出信号：	绿色	Green
# 内部信号：	紫色	Purple
# 无关信号：	白色	White

# 添加模块信号到波形窗口
add wave -noupdate	-group top	/stimulus/*

add wave -noupdate	-color Orange	-group arm	/stimulus/u0/*

add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r0
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r1
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r2
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r3
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r4
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r5
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r6
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r7
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r8
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/r9
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/ra
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/rb
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/rc
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/rd
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/re
add wave -noupdate	-color Orange	-group r0-rf	/stimulus/u0/rf

add wave -noupdate	-color White	-group rom	/stimulus/u1/address
add wave -noupdate	-color White	-group rom	/stimulus/u1/clock
add wave -noupdate	-color White	-group rom	/stimulus/u1/q

add wave -noupdate	-color Purple	-group ram	/stimulus/u2/address
add wave -noupdate	-color Purple	-group ram	/stimulus/u2/byteena
add wave -noupdate	-color Purple	-group ram	/stimulus/u2/clken	
add wave -noupdate	-color Purple	-group ram	/stimulus/u2/clock	
add wave -noupdate	-color Purple	-group ram	/stimulus/u2/data	
add wave -noupdate	-color Purple	-group ram	/stimulus/u2/wren	
add wave -noupdate	-color Purple	-group ram	/stimulus/u2/q		

# 设置为十进制数显示
radix -Hexadecimal 

# 仿真时间设置
run 1us
