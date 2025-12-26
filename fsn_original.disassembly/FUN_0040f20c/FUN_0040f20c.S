# Function: FUN_0040f20c
# Address: 0x0040f20c - 0x0040f36c
# Size: 0x160 (352 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f20c <activeWorkProc+0x28>:
  40f20c:	3c1c0fc1 	lui	gp,0xfc1
  40f210:	279ce924 	addiu	gp,gp,-5852
  40f214:	0399e021 	addu	gp,gp,t9
  40f218:	8f85897c 	lw	a1,-30340(gp)
  40f21c:	27bdffd0 	addiu	sp,sp,-48
  40f220:	8ca20000 	lw	v0,0(a1)
  40f224:	afbf001c 	sw	ra,28(sp)
  40f228:	afbc0018 	sw	gp,24(sp)
  40f22c:	8c4e0c4c 	lw	t6,3148(v0)
  40f230:	8f81805c 	lw	at,-32676(gp)
  40f234:	448e2000 	mtc1	t6,$f4
  40f238:	c42ba738 	lwc1	$f11,-22728(at)
  40f23c:	468021a0 	cvt.s.w	$f6,$f4
  40f240:	c42aa73c 	lwc1	$f10,-22724(at)
  40f244:	c4520008 	lwc1	$f18,8(v0)
  40f248:	46003221 	cvt.d.s	$f8,$f6
  40f24c:	00000000 	nop
  40f250:	462a4403 	div.d	$f16,$f8,$f10
  40f254:	c486000c 	lwc1	$f6,12(a0)
  40f258:	46009121 	cvt.d.s	$f4,$f18
  40f25c:	46003221 	cvt.d.s	$f8,$f6
  40f260:	8f81805c 	lw	at,-32676(gp)
  40f264:	462080a0 	cvt.s.d	$f2,$f16
  40f268:	46001021 	cvt.d.s	$f0,$f2
  40f26c:	46204282 	mul.d	$f10,$f8,$f0
  40f270:	462a2400 	add.d	$f16,$f4,$f10
  40f274:	462084a0 	cvt.s.d	$f18,$f16
  40f278:	e4520008 	swc1	$f18,8(v0)
  40f27c:	8ca20000 	lw	v0,0(a1)
  40f280:	c424a744 	lwc1	$f4,-22716(at)
  40f284:	c4460008 	lwc1	$f6,8(v0)
  40f288:	c425a740 	lwc1	$f5,-22720(at)
  40f28c:	46003221 	cvt.d.s	$f8,$f6
  40f290:	4624403c 	c.lt.d	$f8,$f4
  40f294:	00000000 	nop
  40f298:	45000006 	bc1f	40f2b4 <activeWorkProc+0xd0>
  40f29c:	00000000 	nop
  40f2a0:	8f81805c 	lw	at,-32676(gp)
  40f2a4:	00000000 	nop
  40f2a8:	c42aa748 	lwc1	$f10,-22712(at)
  40f2ac:	00000000 	nop
  40f2b0:	e44a0008 	swc1	$f10,8(v0)
  40f2b4:	84830008 	lh	v1,8(a0)
  40f2b8:	00000000 	nop
  40f2bc:	1060001e 	beqz	v1,40f338 <activeWorkProc+0x154>
  40f2c0:	00000000 	nop
  40f2c4:	44833000 	mtc1	v1,$f6
  40f2c8:	8ca20000 	lw	v0,0(a1)
  40f2cc:	46803221 	cvt.d.w	$f8,$f6
  40f2d0:	844f000c 	lh	t7,12(v0)
  40f2d4:	46204102 	mul.d	$f4,$f8,$f0
  40f2d8:	448f8000 	mtc1	t7,$f16
  40f2dc:	00000000 	nop
  40f2e0:	468084a1 	cvt.d.w	$f18,$f16
  40f2e4:	46249281 	sub.d	$f10,$f18,$f4
  40f2e8:	4458f800 	cfc1	t8,c1_fcsr
  40f2ec:	00000000 	nop
  40f2f0:	37010003 	ori	at,t8,0x3
  40f2f4:	38210002 	xori	at,at,0x2
  40f2f8:	44c1f800 	ctc1	at,c1_fcsr
  40f2fc:	00000000 	nop
  40f300:	46205424 	cvt.w.d	$f16,$f10
  40f304:	44198000 	mfc1	t9,$f16
  40f308:	44d8f800 	ctc1	t8,c1_fcsr
  40f30c:	a459000c 	sh	t9,12(v0)
  40f310:	8f998528 	lw	t9,-31448(gp)
  40f314:	e7a00024 	swc1	$f0,36(sp)
  40f318:	e7a10020 	swc1	$f1,32(sp)
  40f31c:	0320f809 	jalr	t9
  40f320:	afa40030 	sw	a0,48(sp)
  40f324:	8fbc0018 	lw	gp,24(sp)
  40f328:	8fa40030 	lw	a0,48(sp)
  40f32c:	c7a10020 	lwc1	$f1,32(sp)
  40f330:	c7a00024 	lwc1	$f0,36(sp)
  40f334:	00000000 	nop
  40f338:	c4860004 	lwc1	$f6,4(a0)
  40f33c:	c4920000 	lwc1	$f18,0(a0)
  40f340:	46003221 	cvt.d.s	$f8,$f6
  40f344:	46204302 	mul.d	$f12,$f8,$f0
  40f348:	8f99853c 	lw	t9,-31428(gp)
  40f34c:	46009121 	cvt.d.s	$f4,$f18
  40f350:	0320f809 	jalr	t9
  40f354:	46202382 	mul.d	$f14,$f4,$f0
  40f358:	8fbf001c 	lw	ra,28(sp)
  40f35c:	8fbc0018 	lw	gp,24(sp)
  40f360:	27bd0030 	addiu	sp,sp,48
  40f364:	03e00008 	jr	ra
  40f368:	00001025 	move	v0,zero
