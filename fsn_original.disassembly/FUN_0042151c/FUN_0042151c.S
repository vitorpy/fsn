# Function: FUN_0042151c
# Address: 0x0042151c - 0x004216c0
# Size: 0x1a4 (420 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042151c <overviewPickPointer+0x160>:
  42151c:	3c1c0fc0 	lui	gp,0xfc0
  421520:	279cc614 	addiu	gp,gp,-14828
  421524:	0399e021 	addu	gp,gp,t9
  421528:	27bdffb8 	addiu	sp,sp,-72
  42152c:	8f998660 	lw	t9,-31136(gp)
  421530:	afbf003c 	sw	ra,60(sp)
  421534:	afbc0038 	sw	gp,56(sp)
  421538:	afa40048 	sw	a0,72(sp)
  42153c:	afa5004c 	sw	a1,76(sp)
  421540:	afa60050 	sw	a2,80(sp)
  421544:	0320f809 	jalr	t9
  421548:	afa70054 	sw	a3,84(sp)
  42154c:	8fbc0038 	lw	gp,56(sp)
  421550:	00000000 	nop
  421554:	8f998684 	lw	t9,-31100(gp)
  421558:	00000000 	nop
  42155c:	0320f809 	jalr	t9
  421560:	00000000 	nop
  421564:	8fbc0038 	lw	gp,56(sp)
  421568:	10400047 	beqz	v0,421688 <overviewPickPointer+0x2cc>
  42156c:	00000000 	nop
  421570:	8f99854c 	lw	t9,-31412(gp)
  421574:	afa20044 	sw	v0,68(sp)
  421578:	0320f809 	jalr	t9
  42157c:	00000000 	nop
  421580:	8fbc0038 	lw	gp,56(sp)
  421584:	8fa40044 	lw	a0,68(sp)
  421588:	8f99863c 	lw	t9,-31172(gp)
  42158c:	00000000 	nop
  421590:	0320f809 	jalr	t9
  421594:	00000000 	nop
  421598:	8fbc0038 	lw	gp,56(sp)
  42159c:	8fa40044 	lw	a0,68(sp)
  4215a0:	8f83897c 	lw	v1,-30340(gp)
  4215a4:	3c014000 	lui	at,0x4000
  4215a8:	8c630000 	lw	v1,0(v1)
  4215ac:	00000000 	nop
  4215b0:	8c65003c 	lw	a1,60(v1)
  4215b4:	00000000 	nop
  4215b8:	10a0000a 	beqz	a1,4215e4 <overviewPickPointer+0x228>
  4215bc:	00000000 	nop
  4215c0:	1085003c 	beq	a0,a1,4216b4 <overviewPickPointer+0x2f8>
  4215c4:	8fbf003c 	lw	ra,60(sp)
  4215c8:	8f99855c 	lw	t9,-31396(gp)
  4215cc:	00000000 	nop
  4215d0:	0320f809 	jalr	t9
  4215d4:	00000000 	nop
  4215d8:	8fbc0038 	lw	gp,56(sp)
  4215dc:	10000035 	b	4216b4 <overviewPickPointer+0x2f8>
  4215e0:	8fbf003c 	lw	ra,60(sp)
  4215e4:	44819800 	mtc1	at,$f19
  4215e8:	44809000 	mtc1	zero,$f18
  4215ec:	c490003c 	lwc1	$f16,60(a0)
  4215f0:	8f828a24 	lw	v0,-30172(gp)
  4215f4:	46008421 	cvt.d.s	$f16,$f16
  4215f8:	00000000 	nop
  4215fc:	46328483 	div.d	$f18,$f16,$f18
  421600:	c4500088 	lwc1	$f16,136(v0)
  421604:	c48a0034 	lwc1	$f10,52(a0)
  421608:	c4680014 	lwc1	$f8,20(v1)
  42160c:	c4460084 	lwc1	$f6,132(v0)
  421610:	c4840024 	lwc1	$f4,36(a0)
  421614:	c4820038 	lwc1	$f2,56(a0)
  421618:	46008421 	cvt.d.s	$f16,$f16
  42161c:	460031a1 	cvt.d.s	$f6,$f6
  421620:	46002121 	cvt.d.s	$f4,$f4
  421624:	46243100 	add.d	$f4,$f6,$f4
  421628:	c4660018 	lwc1	$f6,24(v1)
  42162c:	46004221 	cvt.d.s	$f8,$f8
  421630:	e7a50010 	swc1	$f5,16(sp)
  421634:	e7a40014 	swc1	$f4,20(sp)
  421638:	846e000c 	lh	t6,12(v1)
  42163c:	8f998558 	lw	t9,-31400(gp)
  421640:	afae0018 	sw	t6,24(sp)
  421644:	846f000e 	lh	t7,14(v1)
  421648:	46309000 	add.d	$f0,$f18,$f16
  42164c:	afaf001c 	sw	t7,28(sp)
  421650:	46204202 	mul.d	$f8,$f8,$f0
  421654:	460031a1 	cvt.d.s	$f6,$f6
  421658:	460052a1 	cvt.d.s	$f10,$f10
  42165c:	460010a1 	cvt.d.s	$f2,$f2
  421660:	afa50020 	sw	a1,32(sp)
  421664:	46203182 	mul.d	$f6,$f6,$f0
  421668:	46285301 	sub.d	$f12,$f10,$f8
  42166c:	afa00024 	sw	zero,36(sp)
  421670:	afa00028 	sw	zero,40(sp)
  421674:	0320f809 	jalr	t9
  421678:	46261381 	sub.d	$f14,$f2,$f6
  42167c:	8fbc0038 	lw	gp,56(sp)
  421680:	1000000c 	b	4216b4 <overviewPickPointer+0x2f8>
  421684:	8fbf003c 	lw	ra,60(sp)
  421688:	8f99801c 	lw	t9,-32740(gp)
  42168c:	8fa40048 	lw	a0,72(sp)
  421690:	8fa5004c 	lw	a1,76(sp)
  421694:	8fa60050 	lw	a2,80(sp)
  421698:	8fa70054 	lw	a3,84(sp)
  42169c:	273911d4 	addiu	t9,t9,4564
  4216a0:	0320f809 	jalr	t9
  4216a4:	00000000 	nop
  4216a8:	8fbc0038 	lw	gp,56(sp)
  4216ac:	00000000 	nop
  4216b0:	8fbf003c 	lw	ra,60(sp)
  4216b4:	27bd0048 	addiu	sp,sp,72
  4216b8:	03e00008 	jr	ra
  4216bc:	00000000 	nop
