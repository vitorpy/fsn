# Function: FUN_0041a358
# Address: 0x0041a358 - 0x0041a63c
# Size: 0x2e4 (740 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041a358 <pickWarp+0xc>:
  41a358:	27bdfbc8 	addiu	sp,sp,-1080
  41a35c:	8f9984b8 	lw	t9,-31560(gp)
  41a360:	afbf0024 	sw	ra,36(sp)
  41a364:	afb00018 	sw	s0,24(sp)
  41a368:	240effff 	li	t6,-1
  41a36c:	afbc0020 	sw	gp,32(sp)
  41a370:	afb1001c 	sw	s1,28(sp)
  41a374:	afa40438 	sw	a0,1080(sp)
  41a378:	afa5043c 	sw	a1,1084(sp)
  41a37c:	afa60440 	sw	a2,1088(sp)
  41a380:	afa00434 	sw	zero,1076(sp)
  41a384:	afa00430 	sw	zero,1072(sp)
  41a388:	2410ffff 	li	s0,-1
  41a38c:	0320f809 	jalr	t9
  41a390:	afae002c 	sw	t6,44(sp)
  41a394:	8fbc0020 	lw	gp,32(sp)
  41a398:	00000000 	nop
  41a39c:	8f998220 	lw	t9,-32224(gp)
  41a3a0:	00000000 	nop
  41a3a4:	0320f809 	jalr	t9
  41a3a8:	00000000 	nop
  41a3ac:	8fbc0020 	lw	gp,32(sp)
  41a3b0:	2404000a 	li	a0,10
  41a3b4:	8f998230 	lw	t9,-32208(gp)
  41a3b8:	2405000a 	li	a1,10
  41a3bc:	0320f809 	jalr	t9
  41a3c0:	00000000 	nop
  41a3c4:	8fbc0020 	lw	gp,32(sp)
  41a3c8:	27b10048 	addiu	s1,sp,72
  41a3cc:	8f99822c 	lw	t9,-32212(gp)
  41a3d0:	02202025 	move	a0,s1
  41a3d4:	0320f809 	jalr	t9
  41a3d8:	240501f4 	li	a1,500
  41a3dc:	8fbc0020 	lw	gp,32(sp)
  41a3e0:	00000000 	nop
  41a3e4:	8f998524 	lw	t9,-31452(gp)
  41a3e8:	00000000 	nop
  41a3ec:	0320f809 	jalr	t9
  41a3f0:	00000000 	nop
  41a3f4:	8fbc0020 	lw	gp,32(sp)
  41a3f8:	3c013f80 	lui	at,0x3f80
  41a3fc:	8f8f897c 	lw	t7,-30340(gp)
  41a400:	44817000 	mtc1	at,$f14
  41a404:	8def0000 	lw	t7,0(t7)
  41a408:	3c013ff0 	lui	at,0x3ff0
  41a40c:	c5e60034 	lwc1	$f6,52(t7)
  41a410:	44812800 	mtc1	at,$f5
  41a414:	44802000 	mtc1	zero,$f4
  41a418:	46003221 	cvt.d.s	$f8,$f6
  41a41c:	00000000 	nop
  41a420:	46282283 	div.d	$f10,$f4,$f8
  41a424:	8f998494 	lw	t9,-31596(gp)
  41a428:	44067000 	mfc1	a2,$f14
  41a42c:	0320f809 	jalr	t9
  41a430:	46205320 	cvt.s.d	$f12,$f10
  41a434:	8fbc0020 	lw	gp,32(sp)
  41a438:	24050078 	li	a1,120
  41a43c:	8f98897c 	lw	t8,-30340(gp)
  41a440:	8f998498 	lw	t9,-31592(gp)
  41a444:	8f180000 	lw	t8,0(t8)
  41a448:	00000000 	nop
  41a44c:	8704000e 	lh	a0,14(t8)
  41a450:	0320f809 	jalr	t9
  41a454:	00000000 	nop
  41a458:	8fbc0020 	lw	gp,32(sp)
  41a45c:	2405007a 	li	a1,122
  41a460:	8f99897c 	lw	t9,-30340(gp)
  41a464:	00000000 	nop
  41a468:	8f390000 	lw	t9,0(t9)
  41a46c:	00000000 	nop
  41a470:	8724000c 	lh	a0,12(t9)
  41a474:	8f998498 	lw	t9,-31592(gp)
  41a478:	00000000 	nop
  41a47c:	0320f809 	jalr	t9
  41a480:	00000000 	nop
  41a484:	8fbc0020 	lw	gp,32(sp)
  41a488:	00000000 	nop
  41a48c:	8f82897c 	lw	v0,-30340(gp)
  41a490:	8f9984a0 	lw	t9,-31584(gp)
  41a494:	8c420000 	lw	v0,0(v0)
  41a498:	00000000 	nop
  41a49c:	c4500008 	lwc1	$f16,8(v0)
  41a4a0:	c44c0000 	lwc1	$f12,0(v0)
  41a4a4:	c44e0004 	lwc1	$f14,4(v0)
  41a4a8:	46008487 	neg.s	$f18,$f16
  41a4ac:	44069000 	mfc1	a2,$f18
  41a4b0:	46006307 	neg.s	$f12,$f12
  41a4b4:	0320f809 	jalr	t9
  41a4b8:	46007387 	neg.s	$f14,$f14
  41a4bc:	8fbc0020 	lw	gp,32(sp)
  41a4c0:	24050001 	li	a1,1
  41a4c4:	8f89897c 	lw	t1,-30340(gp)
  41a4c8:	8f998604 	lw	t9,-31228(gp)
  41a4cc:	8d290000 	lw	t1,0(t1)
  41a4d0:	00000000 	nop
  41a4d4:	8d24003c 	lw	a0,60(t1)
  41a4d8:	0320f809 	jalr	t9
  41a4dc:	00000000 	nop
  41a4e0:	8fbc0020 	lw	gp,32(sp)
  41a4e4:	02202025 	move	a0,s1
  41a4e8:	8f998228 	lw	t9,-32216(gp)
  41a4ec:	00000000 	nop
  41a4f0:	0320f809 	jalr	t9
  41a4f4:	00000000 	nop
  41a4f8:	8fbc0020 	lw	gp,32(sp)
  41a4fc:	afa20044 	sw	v0,68(sp)
  41a500:	8f9984d8 	lw	t9,-31528(gp)
  41a504:	00000000 	nop
  41a508:	0320f809 	jalr	t9
  41a50c:	00000000 	nop
  41a510:	8fa80044 	lw	t0,68(sp)
  41a514:	8fbc0020 	lw	gp,32(sp)
  41a518:	00002025 	move	a0,zero
  41a51c:	19000016 	blez	t0,41a578 <pickWarp+0x22c>
  41a520:	00002825 	move	a1,zero
  41a524:	24070002 	li	a3,2
  41a528:	24060001 	li	a2,1
  41a52c:	00045040 	sll	t2,a0,0x1
  41a530:	022a1021 	addu	v0,s1,t2
  41a534:	84430000 	lh	v1,0(v0)
  41a538:	24420002 	addiu	v0,v0,2
  41a53c:	14660005 	bne	v1,a2,41a554 <pickWarp+0x208>
  41a540:	24840001 	addiu	a0,a0,1
  41a544:	06010003 	bgez	s0,41a554 <pickWarp+0x208>
  41a548:	00000000 	nop
  41a54c:	84500000 	lh	s0,0(v0)
  41a550:	00000000 	nop
  41a554:	14670006 	bne	v1,a3,41a570 <pickWarp+0x224>
  41a558:	24a50001 	addiu	a1,a1,1
  41a55c:	844b0002 	lh	t3,2(v0)
  41a560:	84500000 	lh	s0,0(v0)
  41a564:	10000004 	b	41a578 <pickWarp+0x22c>
  41a568:	afab002c 	sw	t3,44(sp)
  41a56c:	24a50001 	addiu	a1,a1,1
  41a570:	14a8ffee 	bne	a1,t0,41a52c <pickWarp+0x1e0>
  41a574:	00832021 	addu	a0,a0,v1
  41a578:	06000021 	bltz	s0,41a600 <pickWarp+0x2b4>
  41a57c:	8fab0434 	lw	t3,1076(sp)
  41a580:	8f998584 	lw	t9,-31356(gp)
  41a584:	02002025 	move	a0,s0
  41a588:	0320f809 	jalr	t9
  41a58c:	00000000 	nop
  41a590:	8fac002c 	lw	t4,44(sp)
  41a594:	8fbc0020 	lw	gp,32(sp)
  41a598:	05800018 	bltz	t4,41a5fc <pickWarp+0x2b0>
  41a59c:	afa20434 	sw	v0,1076(sp)
  41a5a0:	8f8d897c 	lw	t5,-30340(gp)
  41a5a4:	8fb8002c 	lw	t8,44(sp)
  41a5a8:	8dad0000 	lw	t5,0(t5)
  41a5ac:	00000000 	nop
  41a5b0:	8dae003c 	lw	t6,60(t5)
  41a5b4:	00000000 	nop
  41a5b8:	104e000a 	beq	v0,t6,41a5e4 <pickWarp+0x298>
  41a5bc:	00000000 	nop
  41a5c0:	8f848098 	lw	a0,-32616(gp)
  41a5c4:	8f85805c 	lw	a1,-32676(gp)
  41a5c8:	8f9983f8 	lw	t9,-31752(gp)
  41a5cc:	24840020 	addiu	a0,a0,32
  41a5d0:	0320f809 	jalr	t9
  41a5d4:	24a5ae9c 	addiu	a1,a1,-20836
  41a5d8:	8fbc0020 	lw	gp,32(sp)
  41a5dc:	10000007 	b	41a5fc <pickWarp+0x2b0>
  41a5e0:	afa00434 	sw	zero,1076(sp)
  41a5e4:	8c4f0010 	lw	t7,16(v0)
  41a5e8:	0018c880 	sll	t9,t8,0x2
  41a5ec:	01f94821 	addu	t1,t7,t9
  41a5f0:	8d2a0000 	lw	t2,0(t1)
  41a5f4:	00000000 	nop
  41a5f8:	afaa0430 	sw	t2,1072(sp)
  41a5fc:	8fab0434 	lw	t3,1076(sp)
  41a600:	8fac0438 	lw	t4,1080(sp)
  41a604:	00000000 	nop
  41a608:	ad8b0000 	sw	t3,0(t4)
  41a60c:	8fae043c 	lw	t6,1084(sp)
  41a610:	8fad0430 	lw	t5,1072(sp)
  41a614:	00000000 	nop
  41a618:	adcd0000 	sw	t5,0(t6)
  41a61c:	8fb80440 	lw	t8,1088(sp)
  41a620:	00000000 	nop
  41a624:	af000000 	sw	zero,0(t8)
  41a628:	8fbf0024 	lw	ra,36(sp)
  41a62c:	8fb1001c 	lw	s1,28(sp)
  41a630:	8fb00018 	lw	s0,24(sp)
  41a634:	03e00008 	jr	ra
  41a638:	27bd0438 	addiu	sp,sp,1080
