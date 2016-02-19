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

# ����ModelSim����
transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

# ����Դ�ļ�
vlog -vlog01compat -work work {arm6.v}
vlog -vlog01compat -work work {Instruction_memory.v}
vlog -vlog01compat -work work {Data_memory.v}
vlog -vlog01compat -work work {stimulus.v}

# ��ʼModelSim���ܷ���
vsim -t 1ns -L work -L 220model_ver -L altera_mf_ver -voptargs="+acc" work.stimulus

# ʱ����棨�������.vo���ӳ��ļ�.sdo������ѡ�����cycloneive_ver�⣩
# vlog -vlog01compat {model.vo}
# vsim -t 1ps -L work -L altera_ver -L cycloneive_ver -voptargs="+acc" work.stimulus

view structure
view signals

# ��ɫ����
# �����źţ�	��ɫ	Orange
# ����źţ�	��ɫ	Green
# �ڲ��źţ�	��ɫ	Purple
# �޹��źţ�	��ɫ	White

# ���ģ���źŵ����δ���
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

# ����Ϊʮ��������ʾ
radix -Hexadecimal 

# ����ʱ������
run 1us
