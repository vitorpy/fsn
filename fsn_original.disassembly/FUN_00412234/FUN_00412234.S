# Function: FUN_00412234
# Address: 0x00412234 - 0x004123f4
# Size: 0x1c0 (448 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00412234 <layout_db+0x39c>:
  412234:	3c1c0fc1 	lui	gp,0xfc1
  412238:	279cb8fc 	addiu	gp,gp,-18180
  41223c:	0399e021 	addu	gp,gp,t9
  412240:	27bdffb8 	addiu	sp,sp,-72
  412244:	afbf001c 	sw	ra,28(sp)
  412248:	afbc0018 	sw	gp,24(sp)
  41224c:	afb00014 	sw	s0,20(sp)
  412250:	8c8e000c 	lw	t6,12(a0)
  412254:	8f818a24 	lw	at,-30172(gp)
  412258:	448e2000 	mtc1	t6,$f4
  41225c:	c42800fc 	lwc1	$f8,252(at)
  412260:	468021a1 	cvt.d.w	$f6,$f4
  412264:	8f99810c 	lw	t9,-32500(gp)
  412268:	27b0002c 	addiu	s0,sp,44
  41226c:	460042a1 	cvt.d.s	$f10,$f8
  412270:	462a3402 	mul.d	$f16,$f6,$f10
  412274:	00803025 	move	a2,a0
  412278:	afa60048 	sw	a2,72(sp)
  41227c:	02002025 	move	a0,s0
  412280:	2405001c 	li	a1,28
  412284:	444ff800 	cfc1	t7,c1_fcsr
  412288:	00000000 	nop
  41228c:	35e10003 	ori	at,t7,0x3
  412290:	38210002 	xori	at,at,0x2
  412294:	44c1f800 	ctc1	at,c1_fcsr
  412298:	00000000 	nop
  41229c:	462084a4 	cvt.w.d	$f18,$f16
  4122a0:	44079000 	mfc1	a3,$f18
  4122a4:	44cff800 	ctc1	t7,c1_fcsr
  4122a8:	0320f809 	jalr	t9
  4122ac:	afa70024 	sw	a3,36(sp)
  4122b0:	8fa60048 	lw	a2,72(sp)
  4122b4:	8fbc0018 	lw	gp,24(sp)
  4122b8:	8cd8000c 	lw	t8,12(a2)
  4122bc:	8fa70024 	lw	a3,36(sp)
  4122c0:	1b000015 	blez	t8,412318 <layout_db+0x480>
  4122c4:	00001825 	move	v1,zero
  4122c8:	00002025 	move	a0,zero
  4122cc:	8cd90010 	lw	t9,16(a2)
  4122d0:	24630001 	addiu	v1,v1,1
  4122d4:	03244021 	addu	t0,t9,a0
  4122d8:	8d090000 	lw	t1,0(t0)
  4122dc:	24840004 	addiu	a0,a0,4
  4122e0:	8d2a0028 	lw	t2,40(t1)
  4122e4:	00000000 	nop
  4122e8:	000a5f42 	srl	t3,t2,0x1d
  4122ec:	000b6080 	sll	t4,t3,0x2
  4122f0:	020c1021 	addu	v0,s0,t4
  4122f4:	8c4d0000 	lw	t5,0(v0)
  4122f8:	00000000 	nop
  4122fc:	25ae0001 	addiu	t6,t5,1
  412300:	ac4e0000 	sw	t6,0(v0)
  412304:	8ccf000c 	lw	t7,12(a2)
  412308:	00000000 	nop
  41230c:	006f082a 	slt	at,v1,t7
  412310:	1420ffee 	bnez	at,4122cc <layout_db+0x434>
  412314:	00000000 	nop
  412318:	8fb8002c 	lw	t8,44(sp)
  41231c:	00000000 	nop
  412320:	00f8082a 	slt	at,a3,t8
  412324:	10200003 	beqz	at,412334 <layout_db+0x49c>
  412328:	00000000 	nop
  41232c:	1000002d 	b	4123e4 <layout_db+0x54c>
  412330:	acc00068 	sw	zero,104(a2)
  412334:	8fb90030 	lw	t9,48(sp)
  412338:	8fa90034 	lw	t1,52(sp)
  41233c:	00f9082a 	slt	at,a3,t9
  412340:	10200003 	beqz	at,412350 <layout_db+0x4b8>
  412344:	24080001 	li	t0,1
  412348:	10000026 	b	4123e4 <layout_db+0x54c>
  41234c:	acc80068 	sw	t0,104(a2)
  412350:	00e9082a 	slt	at,a3,t1
  412354:	10200004 	beqz	at,412368 <layout_db+0x4d0>
  412358:	24030003 	li	v1,3
  41235c:	240a0002 	li	t2,2
  412360:	10000020 	b	4123e4 <layout_db+0x54c>
  412364:	acca0068 	sw	t2,104(a2)
  412368:	00035880 	sll	t3,v1,0x2
  41236c:	020b1021 	addu	v0,s0,t3
  412370:	8c4c0000 	lw	t4,0(v0)
  412374:	00000000 	nop
  412378:	00ec082a 	slt	at,a3,t4
  41237c:	10200003 	beqz	at,41238c <layout_db+0x4f4>
  412380:	00000000 	nop
  412384:	10000017 	b	4123e4 <layout_db+0x54c>
  412388:	acc30068 	sw	v1,104(a2)
  41238c:	8c4d0004 	lw	t5,4(v0)
  412390:	246e0001 	addiu	t6,v1,1
  412394:	00ed082a 	slt	at,a3,t5
  412398:	10200003 	beqz	at,4123a8 <layout_db+0x510>
  41239c:	00000000 	nop
  4123a0:	10000010 	b	4123e4 <layout_db+0x54c>
  4123a4:	acce0068 	sw	t6,104(a2)
  4123a8:	8c4f0008 	lw	t7,8(v0)
  4123ac:	24780002 	addiu	t8,v1,2
  4123b0:	00ef082a 	slt	at,a3,t7
  4123b4:	10200003 	beqz	at,4123c4 <layout_db+0x52c>
  4123b8:	00000000 	nop
  4123bc:	10000009 	b	4123e4 <layout_db+0x54c>
  4123c0:	acd80068 	sw	t8,104(a2)
  4123c4:	8c59000c 	lw	t9,12(v0)
  4123c8:	24680003 	addiu	t0,v1,3
  4123cc:	00f9082a 	slt	at,a3,t9
  4123d0:	10200003 	beqz	at,4123e0 <layout_db+0x548>
  4123d4:	24090007 	li	t1,7
  4123d8:	10000002 	b	4123e4 <layout_db+0x54c>
  4123dc:	acc80068 	sw	t0,104(a2)
  4123e0:	acc90068 	sw	t1,104(a2)
  4123e4:	8fbf001c 	lw	ra,28(sp)
  4123e8:	8fb00014 	lw	s0,20(sp)
  4123ec:	03e00008 	jr	ra
  4123f0:	27bd0048 	addiu	sp,sp,72
