
hightest.out:     file format elf32-littlearm

Disassembly of section .text:

00008000 <__gccmain>:
    8000:	e1a0c00d 	mov	ip, sp
    8004:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
    8008:	e24cb004 	sub	fp, ip, #4	; 0x4
    800c:	e24ddc7e 	sub	sp, sp, #32256	; 0x7e00
    8010:	e24dd09c 	sub	sp, sp, #156	; 0x9c
    8014:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8018:	e2433083 	sub	r3, r3, #131	; 0x83
    801c:	e3a02067 	mov	r2, #103	; 0x67
    8020:	e24b1014 	sub	r1, fp, #20	; 0x14
    8024:	e7812003 	str	r2, [r1, r3]
    8028:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    802c:	e2433087 	sub	r3, r3, #135	; 0x87
    8030:	e3a0201d 	mov	r2, #29	; 0x1d
    8034:	e24b4014 	sub	r4, fp, #20	; 0x14
    8038:	e7842003 	str	r2, [r4, r3]
    803c:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8040:	e243308b 	sub	r3, r3, #139	; 0x8b
    8044:	e3a02025 	mov	r2, #37	; 0x25
    8048:	e24b5014 	sub	r5, fp, #20	; 0x14
    804c:	e7852003 	str	r2, [r5, r3]
    8050:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8054:	e243308f 	sub	r3, r3, #143	; 0x8f
    8058:	e3a02000 	mov	r2, #0	; 0x0
    805c:	e24bc014 	sub	ip, fp, #20	; 0x14
    8060:	e78c2003 	str	r2, [ip, r3]
    8064:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8068:	e242208f 	sub	r2, r2, #143	; 0x8f
    806c:	e24be014 	sub	lr, fp, #20	; 0x14
    8070:	e79e3002 	ldr	r3, [lr, r2]
    8074:	e3a02d7e 	mov	r2, #8064	; 0x1f80
    8078:	e282201f 	add	r2, r2, #31	; 0x1f
    807c:	e1530002 	cmp	r3, r2
    8080:	da000000 	ble	8088 <__gccmain+0x88>
    8084:	ea00001a 	b	80f4 <__gccmain+0xf4>
    8088:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    808c:	e243307f 	sub	r3, r3, #127	; 0x7f
    8090:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8094:	e242208f 	sub	r2, r2, #143	; 0x8f
    8098:	e24b4014 	sub	r4, fp, #20	; 0x14
    809c:	e7941002 	ldr	r1, [r4, r2]
    80a0:	e1a0c001 	mov	ip, r1
    80a4:	e1a0210c 	mov	r2, ip, lsl #2
    80a8:	e08b5003 	add	r5, fp, r3
    80ac:	e2453014 	sub	r3, r5, #20	; 0x14
    80b0:	e3e01c7e 	mvn	r1, #32256	; 0x7e00
    80b4:	e241108f 	sub	r1, r1, #143	; 0x8f
    80b8:	e24be014 	sub	lr, fp, #20	; 0x14
    80bc:	e79ec001 	ldr	ip, [lr, r1]
    80c0:	e783c002 	str	ip, [r3, r2]
    80c4:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    80c8:	e242208f 	sub	r2, r2, #143	; 0x8f
    80cc:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    80d0:	e243308f 	sub	r3, r3, #143	; 0x8f
    80d4:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    80d8:	e242208f 	sub	r2, r2, #143	; 0x8f
    80dc:	e24b4014 	sub	r4, fp, #20	; 0x14
    80e0:	e7941002 	ldr	r1, [r4, r2]
    80e4:	e2812001 	add	r2, r1, #1	; 0x1
    80e8:	e24b5014 	sub	r5, fp, #20	; 0x14
    80ec:	e7852003 	str	r2, [r5, r3]
    80f0:	eaffffdb 	b	8064 <__gccmain+0x64>
    80f4:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    80f8:	e243307f 	sub	r3, r3, #127	; 0x7f
    80fc:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8100:	e2422083 	sub	r2, r2, #131	; 0x83
    8104:	e24bc014 	sub	ip, fp, #20	; 0x14
    8108:	e79c1002 	ldr	r1, [ip, r2]
    810c:	e24be014 	sub	lr, fp, #20	; 0x14
    8110:	e78e1003 	str	r1, [lr, r3]
    8114:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8118:	e243308f 	sub	r3, r3, #143	; 0x8f
    811c:	e3a02001 	mov	r2, #1	; 0x1
    8120:	e24b1014 	sub	r1, fp, #20	; 0x14
    8124:	e7812003 	str	r2, [r1, r3]
    8128:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    812c:	e242208f 	sub	r2, r2, #143	; 0x8f
    8130:	e24b4014 	sub	r4, fp, #20	; 0x14
    8134:	e7943002 	ldr	r3, [r4, r2]
    8138:	e3a02d7e 	mov	r2, #8064	; 0x1f80
    813c:	e282201f 	add	r2, r2, #31	; 0x1f
    8140:	e1530002 	cmp	r3, r2
    8144:	da000000 	ble	814c <__gccmain+0x14c>
    8148:	ea000033 	b	821c <__gccmain+0x21c>
    814c:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8150:	e242207f 	sub	r2, r2, #127	; 0x7f
    8154:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8158:	e243308f 	sub	r3, r3, #143	; 0x8f
    815c:	e24b5014 	sub	r5, fp, #20	; 0x14
    8160:	e7951003 	ldr	r1, [r5, r3]
    8164:	e1a0c001 	mov	ip, r1
    8168:	e1a0310c 	mov	r3, ip, lsl #2
    816c:	e08bc002 	add	ip, fp, r2
    8170:	e24c2014 	sub	r2, ip, #20	; 0x14
    8174:	e3e01c7e 	mvn	r1, #32256	; 0x7e00
    8178:	e2411087 	sub	r1, r1, #135	; 0x87
    817c:	e3e0cc7e 	mvn	ip, #32256	; 0x7e00
    8180:	e24cc07f 	sub	ip, ip, #127	; 0x7f
    8184:	e3e0ec7e 	mvn	lr, #32256	; 0x7e00
    8188:	e24ee08f 	sub	lr, lr, #143	; 0x8f
    818c:	e24b5014 	sub	r5, fp, #20	; 0x14
    8190:	e795400e 	ldr	r4, [r5, lr]
    8194:	e244e001 	sub	lr, r4, #1	; 0x1
    8198:	e1a0400e 	mov	r4, lr
    819c:	e1a0e104 	mov	lr, r4, lsl #2
    81a0:	e08b400c 	add	r4, fp, ip
    81a4:	e244c014 	sub	ip, r4, #20	; 0x14
    81a8:	e24b5014 	sub	r5, fp, #20	; 0x14
    81ac:	e7951001 	ldr	r1, [r5, r1]
    81b0:	e79cc00e 	ldr	ip, [ip, lr]
    81b4:	e001019c 	mul	r1, ip, r1
    81b8:	e3e0cc7e 	mvn	ip, #32256	; 0x7e00
    81bc:	e24cc08b 	sub	ip, ip, #139	; 0x8b
    81c0:	e24b4014 	sub	r4, fp, #20	; 0x14
    81c4:	e794e00c 	ldr	lr, [r4, ip]
    81c8:	e081100e 	add	r1, r1, lr
    81cc:	e1a0cfc1 	mov	ip, r1, asr #31
    81d0:	e1a0eb2c 	mov	lr, ip, lsr #22
    81d4:	e081c00e 	add	ip, r1, lr
    81d8:	e1a0e54c 	mov	lr, ip, asr #10
    81dc:	e1a0c00e 	mov	ip, lr
    81e0:	e1a0e50c 	mov	lr, ip, lsl #10
    81e4:	e06e1001 	rsb	r1, lr, r1
    81e8:	e7821003 	str	r1, [r2, r3]
    81ec:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    81f0:	e242208f 	sub	r2, r2, #143	; 0x8f
    81f4:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    81f8:	e243308f 	sub	r3, r3, #143	; 0x8f
    81fc:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8200:	e242208f 	sub	r2, r2, #143	; 0x8f
    8204:	e24b5014 	sub	r5, fp, #20	; 0x14
    8208:	e7951002 	ldr	r1, [r5, r2]
    820c:	e2812001 	add	r2, r1, #1	; 0x1
    8210:	e24bc014 	sub	ip, fp, #20	; 0x14
    8214:	e78c2003 	str	r2, [ip, r3]
    8218:	eaffffc2 	b	8128 <__gccmain+0x128>
    821c:	e1a00000 	nop			(mov r0,r0)
    8220:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8224:	e243308f 	sub	r3, r3, #143	; 0x8f
    8228:	e3a02000 	mov	r2, #0	; 0x0
    822c:	e24be014 	sub	lr, fp, #20	; 0x14
    8230:	e78e2003 	str	r2, [lr, r3]
    8234:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8238:	e242208f 	sub	r2, r2, #143	; 0x8f
    823c:	e24b1014 	sub	r1, fp, #20	; 0x14
    8240:	e7913002 	ldr	r3, [r1, r2]
    8244:	e3a02d7e 	mov	r2, #8064	; 0x1f80
    8248:	e282201e 	add	r2, r2, #30	; 0x1e
    824c:	e1530002 	cmp	r3, r2
    8250:	da000000 	ble	8258 <__gccmain+0x258>
    8254:	ea00008f 	b	8498 <__gccmain+0x498>
    8258:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    825c:	e2433093 	sub	r3, r3, #147	; 0x93
    8260:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8264:	e242208f 	sub	r2, r2, #143	; 0x8f
    8268:	e24b4014 	sub	r4, fp, #20	; 0x14
    826c:	e7941002 	ldr	r1, [r4, r2]
    8270:	e24b5014 	sub	r5, fp, #20	; 0x14
    8274:	e7851003 	str	r1, [r5, r3]
    8278:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    827c:	e2433097 	sub	r3, r3, #151	; 0x97
    8280:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8284:	e242208f 	sub	r2, r2, #143	; 0x8f
    8288:	e24bc014 	sub	ip, fp, #20	; 0x14
    828c:	e79c1002 	ldr	r1, [ip, r2]
    8290:	e2812001 	add	r2, r1, #1	; 0x1
    8294:	e24be014 	sub	lr, fp, #20	; 0x14
    8298:	e78e2003 	str	r2, [lr, r3]
    829c:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    82a0:	e2422097 	sub	r2, r2, #151	; 0x97
    82a4:	e24b1014 	sub	r1, fp, #20	; 0x14
    82a8:	e7913002 	ldr	r3, [r1, r2]
    82ac:	e3a02d7e 	mov	r2, #8064	; 0x1f80
    82b0:	e282201f 	add	r2, r2, #31	; 0x1f
    82b4:	e1530002 	cmp	r3, r2
    82b8:	da000000 	ble	82c0 <__gccmain+0x2c0>
    82bc:	ea00002b 	b	8370 <__gccmain+0x370>
    82c0:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    82c4:	e242207f 	sub	r2, r2, #127	; 0x7f
    82c8:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    82cc:	e2433093 	sub	r3, r3, #147	; 0x93
    82d0:	e24b4014 	sub	r4, fp, #20	; 0x14
    82d4:	e7941003 	ldr	r1, [r4, r3]
    82d8:	e1a0c001 	mov	ip, r1
    82dc:	e1a0310c 	mov	r3, ip, lsl #2
    82e0:	e08b5002 	add	r5, fp, r2
    82e4:	e2452014 	sub	r2, r5, #20	; 0x14
    82e8:	e3e01c7e 	mvn	r1, #32256	; 0x7e00
    82ec:	e241107f 	sub	r1, r1, #127	; 0x7f
    82f0:	e3e0cc7e 	mvn	ip, #32256	; 0x7e00
    82f4:	e24cc097 	sub	ip, ip, #151	; 0x97
    82f8:	e24b4014 	sub	r4, fp, #20	; 0x14
    82fc:	e794e00c 	ldr	lr, [r4, ip]
    8300:	e1a0400e 	mov	r4, lr
    8304:	e1a0c104 	mov	ip, r4, lsl #2
    8308:	e08b5001 	add	r5, fp, r1
    830c:	e2451014 	sub	r1, r5, #20	; 0x14
    8310:	e7923003 	ldr	r3, [r2, r3]
    8314:	e791200c 	ldr	r2, [r1, ip]
    8318:	e1530002 	cmp	r3, r2
    831c:	da000007 	ble	8340 <__gccmain+0x340>
    8320:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8324:	e2433093 	sub	r3, r3, #147	; 0x93
    8328:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    832c:	e2422097 	sub	r2, r2, #151	; 0x97
    8330:	e24bc014 	sub	ip, fp, #20	; 0x14
    8334:	e79c1002 	ldr	r1, [ip, r2]
    8338:	e24be014 	sub	lr, fp, #20	; 0x14
    833c:	e78e1003 	str	r1, [lr, r3]
    8340:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8344:	e2422097 	sub	r2, r2, #151	; 0x97
    8348:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    834c:	e2433097 	sub	r3, r3, #151	; 0x97
    8350:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8354:	e2422097 	sub	r2, r2, #151	; 0x97
    8358:	e24b4014 	sub	r4, fp, #20	; 0x14
    835c:	e7941002 	ldr	r1, [r4, r2]
    8360:	e2812001 	add	r2, r1, #1	; 0x1
    8364:	e24b5014 	sub	r5, fp, #20	; 0x14
    8368:	e7852003 	str	r2, [r5, r3]
    836c:	eaffffca 	b	829c <__gccmain+0x29c>
    8370:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8374:	e2433093 	sub	r3, r3, #147	; 0x93
    8378:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    837c:	e242208f 	sub	r2, r2, #143	; 0x8f
    8380:	e24bc014 	sub	ip, fp, #20	; 0x14
    8384:	e79c3003 	ldr	r3, [ip, r3]
    8388:	e24be014 	sub	lr, fp, #20	; 0x14
    838c:	e79e2002 	ldr	r2, [lr, r2]
    8390:	e1530002 	cmp	r3, r2
    8394:	0a000033 	beq	8468 <__gccmain+0x468>
    8398:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    839c:	e243309b 	sub	r3, r3, #155	; 0x9b
    83a0:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    83a4:	e242207f 	sub	r2, r2, #127	; 0x7f
    83a8:	e3e01c7e 	mvn	r1, #32256	; 0x7e00
    83ac:	e2411093 	sub	r1, r1, #147	; 0x93
    83b0:	e24b4014 	sub	r4, fp, #20	; 0x14
    83b4:	e794c001 	ldr	ip, [r4, r1]
    83b8:	e1a0100c 	mov	r1, ip
    83bc:	e1a0c101 	mov	ip, r1, lsl #2
    83c0:	e08b5002 	add	r5, fp, r2
    83c4:	e2452014 	sub	r2, r5, #20	; 0x14
    83c8:	e792100c 	ldr	r1, [r2, ip]
    83cc:	e24bc014 	sub	ip, fp, #20	; 0x14
    83d0:	e78c1003 	str	r1, [ip, r3]
    83d4:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    83d8:	e242207f 	sub	r2, r2, #127	; 0x7f
    83dc:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    83e0:	e2433093 	sub	r3, r3, #147	; 0x93
    83e4:	e24be014 	sub	lr, fp, #20	; 0x14
    83e8:	e79e1003 	ldr	r1, [lr, r3]
    83ec:	e1a0c001 	mov	ip, r1
    83f0:	e1a0310c 	mov	r3, ip, lsl #2
    83f4:	e08b1002 	add	r1, fp, r2
    83f8:	e2412014 	sub	r2, r1, #20	; 0x14
    83fc:	e3e01c7e 	mvn	r1, #32256	; 0x7e00
    8400:	e241107f 	sub	r1, r1, #127	; 0x7f
    8404:	e3e0cc7e 	mvn	ip, #32256	; 0x7e00
    8408:	e24cc08f 	sub	ip, ip, #143	; 0x8f
    840c:	e24b4014 	sub	r4, fp, #20	; 0x14
    8410:	e794e00c 	ldr	lr, [r4, ip]
    8414:	e1a0c00e 	mov	ip, lr
    8418:	e1a0e10c 	mov	lr, ip, lsl #2
    841c:	e08b5001 	add	r5, fp, r1
    8420:	e2451014 	sub	r1, r5, #20	; 0x14
    8424:	e791c00e 	ldr	ip, [r1, lr]
    8428:	e782c003 	str	ip, [r2, r3]
    842c:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8430:	e243307f 	sub	r3, r3, #127	; 0x7f
    8434:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    8438:	e242208f 	sub	r2, r2, #143	; 0x8f
    843c:	e24bc014 	sub	ip, fp, #20	; 0x14
    8440:	e79c1002 	ldr	r1, [ip, r2]
    8444:	e1a0c001 	mov	ip, r1
    8448:	e1a0210c 	mov	r2, ip, lsl #2
    844c:	e08be003 	add	lr, fp, r3
    8450:	e24e3014 	sub	r3, lr, #20	; 0x14
    8454:	e3e01c7e 	mvn	r1, #32256	; 0x7e00
    8458:	e241109b 	sub	r1, r1, #155	; 0x9b
    845c:	e24b4014 	sub	r4, fp, #20	; 0x14
    8460:	e794c001 	ldr	ip, [r4, r1]
    8464:	e783c002 	str	ip, [r3, r2]
    8468:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    846c:	e242208f 	sub	r2, r2, #143	; 0x8f
    8470:	e3e03c7e 	mvn	r3, #32256	; 0x7e00
    8474:	e243308f 	sub	r3, r3, #143	; 0x8f
    8478:	e3e02c7e 	mvn	r2, #32256	; 0x7e00
    847c:	e242208f 	sub	r2, r2, #143	; 0x8f
    8480:	e24b5014 	sub	r5, fp, #20	; 0x14
    8484:	e7951002 	ldr	r1, [r5, r2]
    8488:	e2812001 	add	r2, r1, #1	; 0x1
    848c:	e24bc014 	sub	ip, fp, #20	; 0x14
    8490:	e78c2003 	str	r2, [ip, r3]
    8494:	eaffff66 	b	8234 <__gccmain+0x234>
    8498:	e3a00000 	mov	r0, #0	; 0x0
    849c:	eaffffff 	b	84a0 <__gccmain+0x4a0>
    84a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
