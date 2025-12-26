# Function: FUN_00420408
# Address: 0x00420408 - 0x004207a8
# Size: 0x3a0 (928 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420408 <drawOverviewDirectory+0xc>:
  420408:	27bdff78 	addiu	sp,sp,-136
  42040c:	afbf003c 	sw	ra,60(sp)
  420410:	afbc0038 	sw	gp,56(sp)
  420414:	afb60034 	sw	s6,52(sp)
  420418:	afb50030 	sw	s5,48(sp)
  42041c:	afb4002c 	sw	s4,44(sp)
  420420:	afb30028 	sw	s3,40(sp)
  420424:	afb20024 	sw	s2,36(sp)
  420428:	afb10020 	sw	s1,32(sp)
  42042c:	afb0001c 	sw	s0,28(sp)
  420430:	e7b50010 	swc1	$f21,16(sp)
  420434:	e7b40014 	swc1	$f20,20(sp)
  420438:	afa5008c 	sw	a1,140(sp)
  42043c:	8c8e0074 	lw	t6,116(a0)
  420440:	00808825 	move	s1,a0
  420444:	000ec0c0 	sll	t8,t6,0x3
  420448:	070100cb 	bgez	t8,420778 <drawOverviewDirectory+0x37c>
  42044c:	30b400ff 	andi	s4,a1,0xff
  420450:	8f9981e4 	lw	t9,-32284(gp)
  420454:	8484005e 	lh	a0,94(a0)
  420458:	0320f809 	jalr	t9
  42045c:	00000000 	nop
  420460:	8e390074 	lw	t9,116(s1)
  420464:	8fbc0038 	lw	gp,56(sp)
  420468:	00194880 	sll	t1,t9,0x2
  42046c:	05210008 	bgez	t1,420490 <drawOverviewDirectory+0x94>
  420470:	00000000 	nop
  420474:	8f8a8974 	lw	t2,-30348(gp)
  420478:	00000000 	nop
  42047c:	8d4a0000 	lw	t2,0(t2)
  420480:	00000000 	nop
  420484:	8d440010 	lw	a0,16(t2)
  420488:	10000007 	b	4204a8 <drawOverviewDirectory+0xac>
  42048c:	00000000 	nop
  420490:	8f8b8974 	lw	t3,-30348(gp)
  420494:	00000000 	nop
  420498:	8d6b0000 	lw	t3,0(t3)
  42049c:	00000000 	nop
  4204a0:	8d640000 	lw	a0,0(t3)
  4204a4:	00000000 	nop
  4204a8:	8f998464 	lw	t9,-31644(gp)
  4204ac:	00000000 	nop
  4204b0:	0320f809 	jalr	t9
  4204b4:	00000000 	nop
  4204b8:	8e2c0074 	lw	t4,116(s1)
  4204bc:	8fbc0038 	lw	gp,56(sp)
  4204c0:	000c7340 	sll	t6,t4,0xd
  4204c4:	05c1001f 	bgez	t6,420544 <drawOverviewDirectory+0x148>
  4204c8:	3c014000 	lui	at,0x4000
  4204cc:	c626003c 	lwc1	$f6,60(s1)
  4204d0:	3c014000 	lui	at,0x4000
  4204d4:	4481a800 	mtc1	at,$f21
  4204d8:	4480a000 	mtc1	zero,$f20
  4204dc:	46003221 	cvt.d.s	$f8,$f6
  4204e0:	00000000 	nop
  4204e4:	46344003 	div.d	$f0,$f8,$f20
  4204e8:	c6240034 	lwc1	$f4,52(s1)
  4204ec:	c62a0058 	lwc1	$f10,88(s1)
  4204f0:	460020a1 	cvt.d.s	$f2,$f4
  4204f4:	46005121 	cvt.d.s	$f4,$f10
  4204f8:	c6280038 	lwc1	$f8,56(s1)
  4204fc:	8f998210 	lw	t9,-32240(gp)
  420500:	460044a1 	cvt.d.s	$f18,$f8
  420504:	46240402 	mul.d	$f16,$f0,$f4
  420508:	46209281 	sub.d	$f10,$f18,$f0
  42050c:	46301181 	sub.d	$f6,$f2,$f16
  420510:	46301100 	add.d	$f4,$f2,$f16
  420514:	46209200 	add.d	$f8,$f18,$f0
  420518:	46203320 	cvt.s.d	$f12,$f6
  42051c:	462053a0 	cvt.s.d	$f14,$f10
  420520:	462042a0 	cvt.s.d	$f10,$f8
  420524:	462021a0 	cvt.s.d	$f6,$f4
  420528:	44075000 	mfc1	a3,$f10
  42052c:	44063000 	mfc1	a2,$f6
  420530:	0320f809 	jalr	t9
  420534:	00000000 	nop
  420538:	8fbc0038 	lw	gp,56(sp)
  42053c:	1000001e 	b	4205b8 <drawOverviewDirectory+0x1bc>
  420540:	8e230014 	lw	v1,20(s1)
  420544:	c626003c 	lwc1	$f6,60(s1)
  420548:	4481a800 	mtc1	at,$f21
  42054c:	4480a000 	mtc1	zero,$f20
  420550:	46003221 	cvt.d.s	$f8,$f6
  420554:	00000000 	nop
  420558:	46344003 	div.d	$f0,$f8,$f20
  42055c:	c6240034 	lwc1	$f4,52(s1)
  420560:	c62a0058 	lwc1	$f10,88(s1)
  420564:	460020a1 	cvt.d.s	$f2,$f4
  420568:	46005121 	cvt.d.s	$f4,$f10
  42056c:	c6280038 	lwc1	$f8,56(s1)
  420570:	8f9981e0 	lw	t9,-32288(gp)
  420574:	460044a1 	cvt.d.s	$f18,$f8
  420578:	46240402 	mul.d	$f16,$f0,$f4
  42057c:	46209281 	sub.d	$f10,$f18,$f0
  420580:	46301181 	sub.d	$f6,$f2,$f16
  420584:	46301100 	add.d	$f4,$f2,$f16
  420588:	46209200 	add.d	$f8,$f18,$f0
  42058c:	46203320 	cvt.s.d	$f12,$f6
  420590:	462053a0 	cvt.s.d	$f14,$f10
  420594:	462042a0 	cvt.s.d	$f10,$f8
  420598:	462021a0 	cvt.s.d	$f6,$f4
  42059c:	44075000 	mfc1	a3,$f10
  4205a0:	44063000 	mfc1	a2,$f6
  4205a4:	0320f809 	jalr	t9
  4205a8:	00000000 	nop
  4205ac:	8fbc0038 	lw	gp,56(sp)
  4205b0:	00000000 	nop
  4205b4:	8e230014 	lw	v1,20(s1)
  4205b8:	00001025 	move	v0,zero
  4205bc:	1860006e 	blez	v1,420778 <drawOverviewDirectory+0x37c>
  4205c0:	00009025 	move	s2,zero
  4205c4:	8f938a24 	lw	s3,-30172(gp)
  4205c8:	27b60070 	addiu	s6,sp,112
  4205cc:	27b50078 	addiu	s5,sp,120
  4205d0:	8e2f0018 	lw	t7,24(s1)
  4205d4:	00000000 	nop
  4205d8:	01f2c021 	addu	t8,t7,s2
  4205dc:	8f100000 	lw	s0,0(t8)
  4205e0:	00000000 	nop
  4205e4:	8e020074 	lw	v0,116(s0)
  4205e8:	00000000 	nop
  4205ec:	0002c8c0 	sll	t9,v0,0x3
  4205f0:	07200003 	bltz	t9,420600 <drawOverviewDirectory+0x204>
  4205f4:	00000000 	nop
  4205f8:	1000005b 	b	420768 <drawOverviewDirectory+0x36c>
  4205fc:	00031080 	sll	v0,v1,0x2
  420600:	1280000f 	beqz	s4,420640 <drawOverviewDirectory+0x244>
  420604:	00025080 	sll	t2,v0,0x2
  420608:	8f998670 	lw	t9,-31120(gp)
  42060c:	02002025 	move	a0,s0
  420610:	0320f809 	jalr	t9
  420614:	24050001 	li	a1,1
  420618:	8fbc0038 	lw	gp,56(sp)
  42061c:	8604005e 	lh	a0,94(s0)
  420620:	8f9981e4 	lw	t9,-32284(gp)
  420624:	00000000 	nop
  420628:	0320f809 	jalr	t9
  42062c:	00000000 	nop
  420630:	8fbc0038 	lw	gp,56(sp)
  420634:	8e020074 	lw	v0,116(s0)
  420638:	00000000 	nop
  42063c:	00025080 	sll	t2,v0,0x2
  420640:	05410004 	bgez	t2,420654 <drawOverviewDirectory+0x258>
  420644:	00000000 	nop
  420648:	8e640178 	lw	a0,376(s3)
  42064c:	10000003 	b	42065c <drawOverviewDirectory+0x260>
  420650:	00000000 	nop
  420654:	8e64017c 	lw	a0,380(s3)
  420658:	00000000 	nop
  42065c:	8f998464 	lw	t9,-31644(gp)
  420660:	00000000 	nop
  420664:	0320f809 	jalr	t9
  420668:	00000000 	nop
  42066c:	c604004c 	lwc1	$f4,76(s0)
  420670:	c6280058 	lwc1	$f8,88(s1)
  420674:	460021a1 	cvt.d.s	$f6,$f4
  420678:	460042a1 	cvt.d.s	$f10,$f8
  42067c:	462a3102 	mul.d	$f4,$f6,$f10
  420680:	c6280034 	lwc1	$f8,52(s1)
  420684:	8fbc0038 	lw	gp,56(sp)
  420688:	460041a1 	cvt.d.s	$f6,$f8
  42068c:	8f998484 	lw	t9,-31612(gp)
  420690:	46243280 	add.d	$f10,$f6,$f4
  420694:	46205220 	cvt.s.d	$f8,$f10
  420698:	e7a80078 	swc1	$f8,120(sp)
  42069c:	c60a0050 	lwc1	$f10,80(s0)
  4206a0:	c6260038 	lwc1	$f6,56(s1)
  4206a4:	46005221 	cvt.d.s	$f8,$f10
  4206a8:	46003121 	cvt.d.s	$f4,$f6
  4206ac:	46282180 	add.d	$f6,$f4,$f8
  4206b0:	462032a0 	cvt.s.d	$f10,$f6
  4206b4:	e7aa007c 	swc1	$f10,124(sp)
  4206b8:	c6040034 	lwc1	$f4,52(s0)
  4206bc:	00000000 	nop
  4206c0:	e7a40070 	swc1	$f4,112(sp)
  4206c4:	c60a003c 	lwc1	$f10,60(s0)
  4206c8:	c6080038 	lwc1	$f8,56(s0)
  4206cc:	46005107 	neg.s	$f4,$f10
  4206d0:	460041a1 	cvt.d.s	$f6,$f8
  4206d4:	46002221 	cvt.d.s	$f8,$f4
  4206d8:	00000000 	nop
  4206dc:	46344283 	div.d	$f10,$f8,$f20
  4206e0:	462a3100 	add.d	$f4,$f6,$f10
  4206e4:	46202220 	cvt.s.d	$f8,$f4
  4206e8:	0320f809 	jalr	t9
  4206ec:	e7a80074 	swc1	$f8,116(sp)
  4206f0:	8fbc0038 	lw	gp,56(sp)
  4206f4:	02a02025 	move	a0,s5
  4206f8:	8f9981f8 	lw	t9,-32264(gp)
  4206fc:	00000000 	nop
  420700:	0320f809 	jalr	t9
  420704:	00000000 	nop
  420708:	8fbc0038 	lw	gp,56(sp)
  42070c:	02c02025 	move	a0,s6
  420710:	8f9981f8 	lw	t9,-32264(gp)
  420714:	00000000 	nop
  420718:	0320f809 	jalr	t9
  42071c:	00000000 	nop
  420720:	8fbc0038 	lw	gp,56(sp)
  420724:	00000000 	nop
  420728:	8f99846c 	lw	t9,-31636(gp)
  42072c:	00000000 	nop
  420730:	0320f809 	jalr	t9
  420734:	00000000 	nop
  420738:	8fbc0038 	lw	gp,56(sp)
  42073c:	16800007 	bnez	s4,42075c <drawOverviewDirectory+0x360>
  420740:	00000000 	nop
  420744:	8f998670 	lw	t9,-31120(gp)
  420748:	02002025 	move	a0,s0
  42074c:	0320f809 	jalr	t9
  420750:	00002825 	move	a1,zero
  420754:	8fbc0038 	lw	gp,56(sp)
  420758:	00000000 	nop
  42075c:	8e230014 	lw	v1,20(s1)
  420760:	00000000 	nop
  420764:	00031080 	sll	v0,v1,0x2
  420768:	26520004 	addiu	s2,s2,4
  42076c:	0242082a 	slt	at,s2,v0
  420770:	1420ff97 	bnez	at,4205d0 <drawOverviewDirectory+0x1d4>
  420774:	00000000 	nop
  420778:	8fbf003c 	lw	ra,60(sp)
  42077c:	c7b50010 	lwc1	$f21,16(sp)
  420780:	c7b40014 	lwc1	$f20,20(sp)
  420784:	8fb0001c 	lw	s0,28(sp)
  420788:	8fb10020 	lw	s1,32(sp)
  42078c:	8fb20024 	lw	s2,36(sp)
  420790:	8fb30028 	lw	s3,40(sp)
  420794:	8fb4002c 	lw	s4,44(sp)
  420798:	8fb50030 	lw	s5,48(sp)
  42079c:	8fb60034 	lw	s6,52(sp)
  4207a0:	03e00008 	jr	ra
  4207a4:	27bd0088 	addiu	sp,sp,136
