# Function: FUN_0041919c
# Address: 0x0041919c - 0x00419418
# Size: 0x27c (636 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041919c <draw_dir+0x258>:
  41919c:	3c1c0fc0 	lui	gp,0xfc0
  4191a0:	279c4994 	addiu	gp,gp,18836
  4191a4:	0399e021 	addu	gp,gp,t9
  4191a8:	27bdffb0 	addiu	sp,sp,-80
  4191ac:	8f9984b8 	lw	t9,-31560(gp)
  4191b0:	afbf004c 	sw	ra,76(sp)
  4191b4:	afb30040 	sw	s3,64(sp)
  4191b8:	afb2003c 	sw	s2,60(sp)
  4191bc:	00809025 	move	s2,a0
  4191c0:	30b300ff 	andi	s3,a1,0xff
  4191c4:	afbc0048 	sw	gp,72(sp)
  4191c8:	afb40044 	sw	s4,68(sp)
  4191cc:	afb10038 	sw	s1,56(sp)
  4191d0:	afb00034 	sw	s0,52(sp)
  4191d4:	e7b90028 	swc1	$f25,40(sp)
  4191d8:	e7b8002c 	swc1	$f24,44(sp)
  4191dc:	e7b70020 	swc1	$f23,32(sp)
  4191e0:	e7b60024 	swc1	$f22,36(sp)
  4191e4:	e7b50018 	swc1	$f21,24(sp)
  4191e8:	e7b4001c 	swc1	$f20,28(sp)
  4191ec:	0320f809 	jalr	t9
  4191f0:	afa50054 	sw	a1,84(sp)
  4191f4:	c644003c 	lwc1	$f4,60(s2)
  4191f8:	3c014000 	lui	at,0x4000
  4191fc:	4481c800 	mtc1	at,$f25
  419200:	4480c000 	mtc1	zero,$f24
  419204:	46002187 	neg.s	$f6,$f4
  419208:	46003221 	cvt.d.s	$f8,$f6
  41920c:	00000000 	nop
  419210:	46384283 	div.d	$f10,$f8,$f24
  419214:	8fbc0048 	lw	gp,72(sp)
  419218:	44806000 	mtc1	zero,$f12
  41921c:	8f9984a0 	lw	t9,-31584(gp)
  419220:	44066000 	mfc1	a2,$f12
  419224:	0320f809 	jalr	t9
  419228:	462053a0 	cvt.s.d	$f14,$f10
  41922c:	8fbc0048 	lw	gp,72(sp)
  419230:	8e420014 	lw	v0,20(s2)
  419234:	8f948a24 	lw	s4,-30172(gp)
  419238:	3c013fe0 	lui	at,0x3fe0
  41923c:	c69000d0 	lwc1	$f16,208(s4)
  419240:	44813800 	mtc1	at,$f7
  419244:	44803000 	mtc1	zero,$f6
  419248:	46008487 	neg.s	$f18,$f16
  41924c:	46009121 	cvt.d.s	$f4,$f18
  419250:	244effff 	addiu	t6,v0,-1
  419254:	46262202 	mul.d	$f8,$f4,$f6
  419258:	448e5000 	mtc1	t6,$f10
  41925c:	00008025 	move	s0,zero
  419260:	00008825 	move	s1,zero
  419264:	46805421 	cvt.d.w	$f16,$f10
  419268:	46304482 	mul.d	$f18,$f8,$f16
  41926c:	18400014 	blez	v0,4192c0 <draw_dir+0x37c>
  419270:	462095a0 	cvt.s.d	$f22,$f18
  419274:	8e4f0018 	lw	t7,24(s2)
  419278:	4600b521 	cvt.d.s	$f20,$f22
  41927c:	8f998600 	lw	t9,-31232(gp)
  419280:	01f1c021 	addu	t8,t7,s1
  419284:	8f040000 	lw	a0,0(t8)
  419288:	4407a000 	mfc1	a3,$f20
  41928c:	4406a800 	mfc1	a2,$f21
  419290:	0320f809 	jalr	t9
  419294:	afb30010 	sw	s3,16(sp)
  419298:	c68400d0 	lwc1	$f4,208(s4)
  41929c:	8e590014 	lw	t9,20(s2)
  4192a0:	26100001 	addiu	s0,s0,1
  4192a4:	460021a1 	cvt.d.s	$f6,$f4
  4192a8:	4626a280 	add.d	$f10,$f20,$f6
  4192ac:	8fbc0048 	lw	gp,72(sp)
  4192b0:	0219082a 	slt	at,s0,t9
  4192b4:	26310004 	addiu	s1,s1,4
  4192b8:	1420ffee 	bnez	at,419274 <draw_dir+0x330>
  4192bc:	462055a0 	cvt.s.d	$f22,$f10
  4192c0:	8f9984d8 	lw	t9,-31528(gp)
  4192c4:	00000000 	nop
  4192c8:	0320f809 	jalr	t9
  4192cc:	00000000 	nop
  4192d0:	8e440028 	lw	a0,40(s2)
  4192d4:	8fbc0048 	lw	gp,72(sp)
  4192d8:	10800012 	beqz	a0,419324 <draw_dir+0x3e0>
  4192dc:	00000000 	nop
  4192e0:	c648003c 	lwc1	$f8,60(s2)
  4192e4:	c68400dc 	lwc1	$f4,220(s4)
  4192e8:	46004421 	cvt.d.s	$f16,$f8
  4192ec:	00000000 	nop
  4192f0:	46388483 	div.d	$f18,$f16,$f24
  4192f4:	460021a1 	cvt.d.s	$f6,$f4
  4192f8:	8f85805c 	lw	a1,-32676(gp)
  4192fc:	8f9985fc 	lw	t9,-31236(gp)
  419300:	24060000 	li	a2,0
  419304:	24070000 	li	a3,0
  419308:	24a5ae90 	addiu	a1,a1,-20848
  41930c:	46269280 	add.d	$f10,$f18,$f6
  419310:	e7aa0014 	swc1	$f10,20(sp)
  419314:	0320f809 	jalr	t9
  419318:	e7ab0010 	swc1	$f11,16(sp)
  41931c:	8fbc0048 	lw	gp,72(sp)
  419320:	00000000 	nop
  419324:	8e44002c 	lw	a0,44(s2)
  419328:	00000000 	nop
  41932c:	10800015 	beqz	a0,419384 <draw_dir+0x440>
  419330:	00000000 	nop
  419334:	c652003c 	lwc1	$f18,60(s2)
  419338:	c68800e0 	lwc1	$f8,224(s4)
  41933c:	460091a1 	cvt.d.s	$f6,$f18
  419340:	00000000 	nop
  419344:	46383283 	div.d	$f10,$f6,$f24
  419348:	46004407 	neg.s	$f16,$f8
  41934c:	46008121 	cvt.d.s	$f4,$f16
  419350:	c68800dc 	lwc1	$f8,220(s4)
  419354:	44072000 	mfc1	a3,$f4
  419358:	44062800 	mfc1	a2,$f5
  41935c:	46004421 	cvt.d.s	$f16,$f8
  419360:	8f85805c 	lw	a1,-32676(gp)
  419364:	8f9985fc 	lw	t9,-31236(gp)
  419368:	24a5ae94 	addiu	a1,a1,-20844
  41936c:	46305100 	add.d	$f4,$f10,$f16
  419370:	e7a40014 	swc1	$f4,20(sp)
  419374:	0320f809 	jalr	t9
  419378:	e7a50010 	swc1	$f5,16(sp)
  41937c:	8fbc0048 	lw	gp,72(sp)
  419380:	00000000 	nop
  419384:	8e440030 	lw	a0,48(s2)
  419388:	00000000 	nop
  41938c:	10800015 	beqz	a0,4193e4 <draw_dir+0x4a0>
  419390:	8fbf004c 	lw	ra,76(sp)
  419394:	c648003c 	lwc1	$f8,60(s2)
  419398:	c69200e0 	lwc1	$f18,224(s4)
  41939c:	460042a1 	cvt.d.s	$f10,$f8
  4193a0:	00000000 	nop
  4193a4:	46385403 	div.d	$f16,$f10,$f24
  4193a8:	460091a1 	cvt.d.s	$f6,$f18
  4193ac:	c68400dc 	lwc1	$f4,220(s4)
  4193b0:	44073000 	mfc1	a3,$f6
  4193b4:	44063800 	mfc1	a2,$f7
  4193b8:	460024a1 	cvt.d.s	$f18,$f4
  4193bc:	8f85805c 	lw	a1,-32676(gp)
  4193c0:	8f9985fc 	lw	t9,-31236(gp)
  4193c4:	24a5ae98 	addiu	a1,a1,-20840
  4193c8:	46328180 	add.d	$f6,$f16,$f18
  4193cc:	e7a60014 	swc1	$f6,20(sp)
  4193d0:	0320f809 	jalr	t9
  4193d4:	e7a70010 	swc1	$f7,16(sp)
  4193d8:	8fbc0048 	lw	gp,72(sp)
  4193dc:	00000000 	nop
  4193e0:	8fbf004c 	lw	ra,76(sp)
  4193e4:	c7b50018 	lwc1	$f21,24(sp)
  4193e8:	c7b4001c 	lwc1	$f20,28(sp)
  4193ec:	c7b70020 	lwc1	$f23,32(sp)
  4193f0:	c7b60024 	lwc1	$f22,36(sp)
  4193f4:	c7b90028 	lwc1	$f25,40(sp)
  4193f8:	c7b8002c 	lwc1	$f24,44(sp)
  4193fc:	8fb00034 	lw	s0,52(sp)
  419400:	8fb10038 	lw	s1,56(sp)
  419404:	8fb2003c 	lw	s2,60(sp)
  419408:	8fb30040 	lw	s3,64(sp)
  41940c:	8fb40044 	lw	s4,68(sp)
  419410:	03e00008 	jr	ra
  419414:	27bd0050 	addiu	sp,sp,80
