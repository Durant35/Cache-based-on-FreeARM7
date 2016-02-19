onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -expand -group top /stimulus/clock
add wave -noupdate -expand -group top /stimulus/rst
add wave -noupdate -expand -group top /stimulus/cpu_en
add wave -noupdate -expand -group top /stimulus/ram_rdata
add wave -noupdate -expand -group top /stimulus/rom_data
add wave -noupdate -expand -group top /stimulus/ram_addr
add wave -noupdate -expand -group top /stimulus/ram_cen
add wave -noupdate -expand -group top /stimulus/ram_flag
add wave -noupdate -expand -group top /stimulus/ram_wdata
add wave -noupdate -expand -group top /stimulus/ram_wen
add wave -noupdate -expand -group top /stimulus/rom_addr
add wave -noupdate -expand -group top /stimulus/rom_en
add wave -noupdate -group arm -color Orange /stimulus/u0/clk
add wave -noupdate -group arm -color Orange /stimulus/u0/cpu_en
add wave -noupdate -group arm -color Orange /stimulus/u0/cpu_restart
add wave -noupdate -group arm -color Orange /stimulus/u0/fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/irq
add wave -noupdate -group arm -color Orange /stimulus/u0/ram_abort
add wave -noupdate -group arm -color Orange /stimulus/u0/ram_rdata
add wave -noupdate -group arm -color Orange /stimulus/u0/rom_abort
add wave -noupdate -group arm -color Orange /stimulus/u0/rom_data
add wave -noupdate -group arm -color Orange /stimulus/u0/rst
add wave -noupdate -group arm -color Orange /stimulus/u0/ram_addr
add wave -noupdate -group arm -color Orange /stimulus/u0/ram_cen
add wave -noupdate -group arm -color Orange /stimulus/u0/ram_flag
add wave -noupdate -group arm -color Orange /stimulus/u0/ram_wdata
add wave -noupdate -group arm -color Orange /stimulus/u0/ram_wen
add wave -noupdate -group arm -color Orange /stimulus/u0/rom_addr
add wave -noupdate -group arm -color Orange /stimulus/u0/rom_en
add wave -noupdate -group arm -color Orange /stimulus/u0/add_flag
add wave -noupdate -group arm -color Orange /stimulus/u0/all_code
add wave -noupdate -group arm -color Orange /stimulus/u0/cha_num
add wave -noupdate -group arm -color Orange /stimulus/u0/cha_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_addr
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_flag
add wave -noupdate -group arm -color Orange /stimulus/u0/code_abort
add wave -noupdate -group arm -color Orange /stimulus/u0/code_flag
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rm
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rma
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rot_num
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rs
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rs_flag
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rsa
add wave -noupdate -group arm -color Orange /stimulus/u0/code_und
add wave -noupdate -group arm -color Orange /stimulus/u0/cond_satisfy
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr_c
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr_f
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr_i
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr_m
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr_n
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr_v
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr_z
add wave -noupdate -group arm -color Orange /stimulus/u0/dp_ans
add wave -noupdate -group arm -color Orange /stimulus/u0/extra_num
add wave -noupdate -group arm -color Orange /stimulus/u0/fiq_flag
add wave -noupdate -group arm -color Orange /stimulus/u0/go_data
add wave -noupdate -group arm -color Orange /stimulus/u0/go_fmt
add wave -noupdate -group arm -color Orange /stimulus/u0/go_num
add wave -noupdate -group arm -color Orange /stimulus/u0/go_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/hold_en_dly
add wave -noupdate -group arm -color Orange /stimulus/u0/irq_flag
add wave -noupdate -group arm -color Orange /stimulus/u0/ldm_change
add wave -noupdate -group arm -color Orange /stimulus/u0/ldm_num
add wave -noupdate -group arm -color Orange /stimulus/u0/ldm_sel
add wave -noupdate -group arm -color Orange /stimulus/u0/ldm_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/ldm_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/multl_extra_num
add wave -noupdate -group arm -color Orange /stimulus/u0/r0
add wave -noupdate -group arm -color Orange /stimulus/u0/r1
add wave -noupdate -group arm -color Orange /stimulus/u0/r2
add wave -noupdate -group arm -color Orange /stimulus/u0/r3
add wave -noupdate -group arm -color Orange /stimulus/u0/r4
add wave -noupdate -group arm -color Orange /stimulus/u0/r5
add wave -noupdate -group arm -color Orange /stimulus/u0/r6
add wave -noupdate -group arm -color Orange /stimulus/u0/r7
add wave -noupdate -group arm -color Orange /stimulus/u0/r8_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/r8_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/r9_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/r9_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/ra_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/ra_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/rb_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/rb_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/rc_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/rc_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/rd
add wave -noupdate -group arm -color Orange /stimulus/u0/rd_abt
add wave -noupdate -group arm -color Orange /stimulus/u0/rd_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/rd_irq
add wave -noupdate -group arm -color Orange /stimulus/u0/rd_svc
add wave -noupdate -group arm -color Orange /stimulus/u0/rd_und
add wave -noupdate -group arm -color Orange /stimulus/u0/rd_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/re
add wave -noupdate -group arm -color Orange /stimulus/u0/re_abt
add wave -noupdate -group arm -color Orange /stimulus/u0/re_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/re_irq
add wave -noupdate -group arm -color Orange /stimulus/u0/re_svc
add wave -noupdate -group arm -color Orange /stimulus/u0/re_und
add wave -noupdate -group arm -color Orange /stimulus/u0/re_usr
add wave -noupdate -group arm -color Orange /stimulus/u0/reg_ans
add wave -noupdate -group arm -color Orange /stimulus/u0/rf
add wave -noupdate -group arm -color Orange /stimulus/u0/rm_msb
add wave -noupdate -group arm -color Orange /stimulus/u0/rn
add wave -noupdate -group arm -color Orange /stimulus/u0/rn_register
add wave -noupdate -group arm -color Orange /stimulus/u0/rna
add wave -noupdate -group arm -color Orange /stimulus/u0/rnb
add wave -noupdate -group arm -color Orange /stimulus/u0/rs_msb
add wave -noupdate -group arm -color Orange /stimulus/u0/sec_operand
add wave -noupdate -group arm -color Orange /stimulus/u0/spsr
add wave -noupdate -group arm -color Orange /stimulus/u0/spsr_abt
add wave -noupdate -group arm -color Orange /stimulus/u0/spsr_fiq
add wave -noupdate -group arm -color Orange /stimulus/u0/spsr_irq
add wave -noupdate -group arm -color Orange /stimulus/u0/spsr_svc
add wave -noupdate -group arm -color Orange /stimulus/u0/spsr_und
add wave -noupdate -group arm -color Orange /stimulus/u0/sum_m
add wave -noupdate -group arm -color Orange /stimulus/u0/to_data
add wave -noupdate -group arm -color Orange /stimulus/u0/to_num
add wave -noupdate -group arm -color Orange /stimulus/u0/and_ans
add wave -noupdate -group arm -color Orange /stimulus/u0/bic_ans
add wave -noupdate -group arm -color Orange /stimulus/u0/bit_cy
add wave -noupdate -group arm -color Orange /stimulus/u0/bit_ov
add wave -noupdate -group arm -color Orange /stimulus/u0/cha_rf_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_b
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_bx
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_dp0
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_dp1
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_dp2
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldm
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldr0
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldr1
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldrh0
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldrh1
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldrsb0
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldrsb1
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldrsh0
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_ldrsh1
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_mrs
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_msr0
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_msr1
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_mult
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_multl
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_multlx
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_swi
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_swp
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_is_swpx
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_ok
add wave -noupdate -group arm -color Orange /stimulus/u0/cmd_sum_m
add wave -noupdate -group arm -color Orange /stimulus/u0/code
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_b
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_bx
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_dp0
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_dp1
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_dp2
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldm
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldr0
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldr1
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldrh0
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldrh1
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldrsb0
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldrsb1
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldrsh0
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_ldrsh1
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_mrs
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_msr0
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_msr1
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_mult
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_multl
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_swi
add wave -noupdate -group arm -color Orange /stimulus/u0/code_is_swp
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rm_num
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rm_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rn_num
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rn_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rnhi_num
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rnhi_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rs_num
add wave -noupdate -group arm -color Orange /stimulus/u0/code_rs_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/code_sum_m
add wave -noupdate -group arm -color Orange /stimulus/u0/cpsr
add wave -noupdate -group arm -color Orange /stimulus/u0/cy_high_bits
add wave -noupdate -group arm -color Orange /stimulus/u0/eor_ans
add wave -noupdate -group arm -color Orange /stimulus/u0/fiq_en
add wave -noupdate -group arm -color Orange /stimulus/u0/go_rf_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/high_bit
add wave -noupdate -group arm -color Orange /stimulus/u0/hold_en
add wave -noupdate -group arm -color Orange /stimulus/u0/hold_en_rising
add wave -noupdate -group arm -color Orange /stimulus/u0/int_all
add wave -noupdate -group arm -color Orange /stimulus/u0/irq_en
add wave -noupdate -group arm -color Orange /stimulus/u0/ldm_data
add wave -noupdate -group arm -color Orange /stimulus/u0/ldm_rf_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/mult_ans
add wave -noupdate -group arm -color Orange /stimulus/u0/or_ans
add wave -noupdate -group arm -color Orange /stimulus/u0/r8
add wave -noupdate -group arm -color Orange /stimulus/u0/r9
add wave -noupdate -group arm -color Orange /stimulus/u0/ra
add wave -noupdate -group arm -color Orange /stimulus/u0/rb
add wave -noupdate -group arm -color Orange /stimulus/u0/rc
add wave -noupdate -group arm -color Orange /stimulus/u0/rf_b
add wave -noupdate -group arm -color Orange /stimulus/u0/sum_middle
add wave -noupdate -group arm -color Orange /stimulus/u0/sum_rn_rm
add wave -noupdate -group arm -color Orange /stimulus/u0/to_rf_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/to_vld
add wave -noupdate -group arm -color Orange /stimulus/u0/wait_en
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r0
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r1
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r2
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r3
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r4
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r5
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r6
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r7
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r8
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/r9
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/ra
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/rb
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/rc
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/rd
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/re
add wave -noupdate -expand -group r0-rf -color Orange /stimulus/u0/rf
add wave -noupdate -expand -group rom -color White /stimulus/u1/address
add wave -noupdate -expand -group rom -color White /stimulus/u1/clock
add wave -noupdate -expand -group rom -color White /stimulus/u1/q
add wave -noupdate -expand -group ram -color Purple /stimulus/u2/address
add wave -noupdate -expand -group ram -color Purple /stimulus/u2/byteena
add wave -noupdate -expand -group ram -color Purple /stimulus/u2/clken
add wave -noupdate -expand -group ram -color Purple /stimulus/u2/clock
add wave -noupdate -expand -group ram -color Purple /stimulus/u2/data
add wave -noupdate -expand -group ram -color Purple /stimulus/u2/wren
add wave -noupdate -expand -group ram -color Purple /stimulus/u2/q
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {27521 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 196
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {26065 ns} {27681 ns}
