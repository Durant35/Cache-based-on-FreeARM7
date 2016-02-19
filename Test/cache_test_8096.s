
8096test.out:     file format elf32-littlearm

Disassembly of section .text:

00008000 <__gccmain>:
    8000:	e1a0c00d 	mov	ip, sp
    8004:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
    8008:	e24cb004 	sub	fp, ip, #4	; 0x4
    800c:	e24ddc7e 	sub	sp, sp, #32256	; 0x7e00
    8010:	e24dd084 	sub	sp, sp, #132	; 0x84
    8014:	e1a00000 	nop			(mov r0,r0)
    8018:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    801c:	e2433083 	sub	r3, r3, #131	; 0x83
    8020:	e3a02000 	mov	r2, #0	; 0x0
    8024:	e24b100c 	sub	r1, fp, #12	; 0xc
    8028:	e7812003 	str	r2, [r1, r3]
    802c:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8030:	e2422083 	sub	r2, r2, #131	; 0x83
    8034:	e24bc00c 	sub	ip, fp, #12	; 0xc
    8038:	e79c3002 	ldr	r3, [ip, r2]
    803c:	e3a02d7e 	mov	r2, #8064	; 0x1f80
    8040:	e282201f 	add	r2, r2, #31	; 0x1f
    8044:	e1530002 	cmp	r3, r2
    8048:	da000000 	ble	8050 <__gccmain+0x50>
    804c:	ea00001a 	b	80bc <__gccmain+0xbc>
    8050:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8054:	e243307f 	sub	r3, r3, #127	; 0x7f
    8058:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    805c:	e2422083 	sub	r2, r2, #131	; 0x83
    8060:	e24be00c 	sub	lr, fp, #12	; 0xc
    8064:	e79e1002 	ldr	r1, [lr, r2]
    8068:	e1a0c001 	mov	ip, r1
    806c:	e1a0210c 	mov	r2, ip, lsl #2
    8070:	e08b1003 	add	r1, fp, r3
    8074:	e241300c 	sub	r3, r1, #12	; 0xc
    8078:	e3e01c7e 	mvn	r1, #32256	; 0x7e00
    807c:	e2411083 	sub	r1, r1, #131	; 0x83
    8080:	e24be00c 	sub	lr, fp, #12	; 0xc
    8084:	e79ec001 	ldr	ip, [lr, r1]
    8088:	e783c002 	str	ip, [r3, r2]
    808c:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8090:	e2422083 	sub	r2, r2, #131	; 0x83
    8094:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8098:	e2433083 	sub	r3, r3, #131	; 0x83
    809c:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    80a0:	e2422083 	sub	r2, r2, #131	; 0x83
    80a4:	e24bc00c 	sub	ip, fp, #12	; 0xc
    80a8:	e79c1002 	ldr	r1, [ip, r2]
    80ac:	e2812001 	add	r2, r1, #1	; 0x1
    80b0:	e24be00c 	sub	lr, fp, #12	; 0xc
    80b4:	e78e2003 	str	r2, [lr, r3]
    80b8:	eaffffdb 	b	802c <__gccmain+0x2c>
    80bc:	e3a00000 	mov	r0, #0	; 0x0
    80c0:	eaffffff 	b	80c4 <__gccmain+0xc4>
    80c4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
