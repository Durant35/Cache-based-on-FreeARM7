
512test.out:     file format elf32-littlearm

Disassembly of section .text:

00008000 <__gccmain>:
    8000:	e1a0c00d 	mov	ip, sp
    8004:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
    8008:	e24cb004 	sub	fp, ip, #4	; 0x4
    800c:	e24dde81 	sub	sp, sp, #2064	; 0x810
    8010:	e24dd00c 	sub	sp, sp, #12	; 0xc
    8014:	e3a03067 	mov	r3, #103	; 0x67
    8018:	e50b3810 	str	r3, [fp, -#2064]
    801c:	e3a0301d 	mov	r3, #29	; 0x1d
    8020:	e50b3814 	str	r3, [fp, -#2068]
    8024:	e3a03025 	mov	r3, #37	; 0x25
    8028:	e50b3818 	str	r3, [fp, -#2072]
    802c:	e3a03000 	mov	r3, #0	; 0x0
    8030:	e50b381c 	str	r3, [fp, -#2076]
    8034:	e51b381c 	ldr	r3, [fp, -#2076]
    8038:	e3a02f7f 	mov	r2, #508	; 0x1fc
    803c:	e2822003 	add	r2, r2, #3	; 0x3
    8040:	e1530002 	cmp	r3, r2
    8044:	da000000 	ble	804c <__gccmain+0x4c>
    8048:	ea00000a 	b	8078 <__gccmain+0x78>
    804c:	e51b381c 	ldr	r3, [fp, -#2076]
    8050:	e1a02003 	mov	r2, r3
    8054:	e1a03102 	mov	r3, r2, lsl #2
    8058:	e24b2b02 	sub	r2, fp, #2048	; 0x800
    805c:	e242200c 	sub	r2, r2, #12	; 0xc
    8060:	e3a01000 	mov	r1, #0	; 0x0
    8064:	e7821003 	str	r1, [r2, r3]
    8068:	e51b381c 	ldr	r3, [fp, -#2076]
    806c:	e2832001 	add	r2, r3, #1	; 0x1
    8070:	e50b281c 	str	r2, [fp, -#2076]
    8074:	eaffffee 	b	8034 <__gccmain+0x34>
    8078:	e51b3810 	ldr	r3, [fp, -#2064]
    807c:	e50b380c 	str	r3, [fp, -#2060]
    8080:	e3a03001 	mov	r3, #1	; 0x1
    8084:	e50b381c 	str	r3, [fp, -#2076]
    8088:	e51b381c 	ldr	r3, [fp, -#2076]
    808c:	e3a02f7f 	mov	r2, #508	; 0x1fc
    8090:	e2822003 	add	r2, r2, #3	; 0x3
    8094:	e1530002 	cmp	r3, r2
    8098:	da000000 	ble	80a0 <__gccmain+0xa0>
    809c:	ea00001b 	b	8110 <__gccmain+0x110>
    80a0:	e51b381c 	ldr	r3, [fp, -#2076]
    80a4:	e1a02003 	mov	r2, r3
    80a8:	e1a03102 	mov	r3, r2, lsl #2
    80ac:	e24b2b02 	sub	r2, fp, #2048	; 0x800
    80b0:	e242200c 	sub	r2, r2, #12	; 0xc
    80b4:	e51bc81c 	ldr	ip, [fp, -#2076]
    80b8:	e24c1001 	sub	r1, ip, #1	; 0x1
    80bc:	e1a0c001 	mov	ip, r1
    80c0:	e1a0110c 	mov	r1, ip, lsl #2
    80c4:	e24bcb02 	sub	ip, fp, #2048	; 0x800
    80c8:	e24cc00c 	sub	ip, ip, #12	; 0xc
    80cc:	e51be814 	ldr	lr, [fp, -#2068]
    80d0:	e79cc001 	ldr	ip, [ip, r1]
    80d4:	e0010e9c 	mul	r1, ip, lr
    80d8:	e51bc818 	ldr	ip, [fp, -#2072]
    80dc:	e081100c 	add	r1, r1, ip
    80e0:	e1a0cfc1 	mov	ip, r1, asr #31
    80e4:	e1a0eb2c 	mov	lr, ip, lsr #22
    80e8:	e081c00e 	add	ip, r1, lr
    80ec:	e1a0e54c 	mov	lr, ip, asr #10
    80f0:	e1a0c00e 	mov	ip, lr
    80f4:	e1a0e50c 	mov	lr, ip, lsl #10
    80f8:	e06e1001 	rsb	r1, lr, r1
    80fc:	e7821003 	str	r1, [r2, r3]
    8100:	e51b381c 	ldr	r3, [fp, -#2076]
    8104:	e2832001 	add	r2, r3, #1	; 0x1
    8108:	e50b281c 	str	r2, [fp, -#2076]
    810c:	eaffffdd 	b	8088 <__gccmain+0x88>
    8110:	e1a00000 	nop			(mov r0,r0)
    8114:	e3a03000 	mov	r3, #0	; 0x0
    8118:	e50b381c 	str	r3, [fp, -#2076]
    811c:	e51b381c 	ldr	r3, [fp, -#2076]
    8120:	e3a02f7f 	mov	r2, #508	; 0x1fc
    8124:	e2822002 	add	r2, r2, #2	; 0x2
    8128:	e1530002 	cmp	r3, r2
    812c:	da000000 	ble	8134 <__gccmain+0x134>
    8130:	ea000040 	b	8238 <__gccmain+0x238>
    8134:	e51b381c 	ldr	r3, [fp, -#2076]
    8138:	e50b3820 	str	r3, [fp, -#2080]
    813c:	e51b381c 	ldr	r3, [fp, -#2076]
    8140:	e2832001 	add	r2, r3, #1	; 0x1
    8144:	e50b2824 	str	r2, [fp, -#2084]
    8148:	e51b3824 	ldr	r3, [fp, -#2084]
    814c:	e3a02f7f 	mov	r2, #508	; 0x1fc
    8150:	e2822003 	add	r2, r2, #3	; 0x3
    8154:	e1530002 	cmp	r3, r2
    8158:	da000000 	ble	8160 <__gccmain+0x160>
    815c:	ea000013 	b	81b0 <__gccmain+0x1b0>
    8160:	e51b3820 	ldr	r3, [fp, -#2080]
    8164:	e1a02003 	mov	r2, r3
    8168:	e1a03102 	mov	r3, r2, lsl #2
    816c:	e24b2b02 	sub	r2, fp, #2048	; 0x800
    8170:	e242200c 	sub	r2, r2, #12	; 0xc
    8174:	e51b1824 	ldr	r1, [fp, -#2084]
    8178:	e1a0c001 	mov	ip, r1
    817c:	e1a0110c 	mov	r1, ip, lsl #2
    8180:	e24bcb02 	sub	ip, fp, #2048	; 0x800
    8184:	e24cc00c 	sub	ip, ip, #12	; 0xc
    8188:	e7923003 	ldr	r3, [r2, r3]
    818c:	e79c2001 	ldr	r2, [ip, r1]
    8190:	e1530002 	cmp	r3, r2
    8194:	da000001 	ble	81a0 <__gccmain+0x1a0>
    8198:	e51b3824 	ldr	r3, [fp, -#2084]
    819c:	e50b3820 	str	r3, [fp, -#2080]
    81a0:	e51b3824 	ldr	r3, [fp, -#2084]
    81a4:	e2832001 	add	r2, r3, #1	; 0x1
    81a8:	e50b2824 	str	r2, [fp, -#2084]
    81ac:	eaffffe5 	b	8148 <__gccmain+0x148>
    81b0:	e51b3820 	ldr	r3, [fp, -#2080]
    81b4:	e51b281c 	ldr	r2, [fp, -#2076]
    81b8:	e1530002 	cmp	r3, r2
    81bc:	0a000019 	beq	8228 <__gccmain+0x228>
    81c0:	e51b3820 	ldr	r3, [fp, -#2080]
    81c4:	e1a02003 	mov	r2, r3
    81c8:	e1a03102 	mov	r3, r2, lsl #2
    81cc:	e24b2b02 	sub	r2, fp, #2048	; 0x800
    81d0:	e242200c 	sub	r2, r2, #12	; 0xc
    81d4:	e7923003 	ldr	r3, [r2, r3]
    81d8:	e50b3828 	str	r3, [fp, -#2088]
    81dc:	e51b3820 	ldr	r3, [fp, -#2080]
    81e0:	e1a02003 	mov	r2, r3
    81e4:	e1a03102 	mov	r3, r2, lsl #2
    81e8:	e24b2b02 	sub	r2, fp, #2048	; 0x800
    81ec:	e242200c 	sub	r2, r2, #12	; 0xc
    81f0:	e51b181c 	ldr	r1, [fp, -#2076]
    81f4:	e1a0c001 	mov	ip, r1
    81f8:	e1a0110c 	mov	r1, ip, lsl #2
    81fc:	e24bcb02 	sub	ip, fp, #2048	; 0x800
    8200:	e24cc00c 	sub	ip, ip, #12	; 0xc
    8204:	e79c1001 	ldr	r1, [ip, r1]
    8208:	e7821003 	str	r1, [r2, r3]
    820c:	e51b381c 	ldr	r3, [fp, -#2076]
    8210:	e1a02003 	mov	r2, r3
    8214:	e1a03102 	mov	r3, r2, lsl #2
    8218:	e24b2b02 	sub	r2, fp, #2048	; 0x800
    821c:	e242200c 	sub	r2, r2, #12	; 0xc
    8220:	e51b1828 	ldr	r1, [fp, -#2088]
    8224:	e7821003 	str	r1, [r2, r3]
    8228:	e51b381c 	ldr	r3, [fp, -#2076]
    822c:	e2832001 	add	r2, r3, #1	; 0x1
    8230:	e50b281c 	str	r2, [fp, -#2076]
    8234:	eaffffb8 	b	811c <__gccmain+0x11c>
    8238:	e3a00000 	mov	r0, #0	; 0x0
    823c:	eaffffff 	b	8240 <__gccmain+0x240>
    8240:	e91ba800 	ldmdb	fp, {fp, sp, pc}
