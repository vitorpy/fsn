# Function: draw_directory
# Address: 0x00424250 - 0x00425100
# Size: 0xeb0 (3760 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00424250 <draw_directory>:
  424250:	3c1c0fc0 	lui	gp,0xfc0
  424254:	279c98e0 	addiu	gp,gp,-26400
  424258:	0399e021 	addu	gp,gp,t9
  42425c:	27bdff10 	addiu	sp,sp,-240
  424260:	afbf0084 	sw	ra,132(sp)
  424264:	afbc0080 	sw	gp,128(sp)
  424268:	afb3007c 	sw	s3,124(sp)
  42426c:	afb20078 	sw	s2,120(sp)
  424270:	afb10074 	sw	s1,116(sp)
  424274:	afb00070 	sw	s0,112(sp)
  424278:	e7bd0068 	swc1	$f29,104(sp)
  42427c:	e7bc006c 	swc1	$f28,108(sp)
  424280:	e7bb0060 	swc1	$f27,96(sp)
  424284:	e7ba0064 	swc1	$f26,100(sp)
  424288:	e7b90058 	swc1	$f25,88(sp)
  42428c:	e7b8005c 	swc1	$f24,92(sp)
  424290:	e7b70050 	swc1	$f23,80(sp)
  424294:	e7b60054 	swc1	$f22,84(sp)
  424298:	e7b50048 	swc1	$f21,72(sp)
  42429c:	e7b4004c 	swc1	$f20,76(sp)
  4242a0:	afa500f4 	sw	a1,244(sp)
  4242a4:	8c8e0074 	lw	t6,116(a0)
  4242a8:	00808825 	move	s1,a0
  4242ac:	000ec0c0 	sll	t8,t6,0x3
  4242b0:	07010382 	bgez	t8,4250bc <draw_directory+0xe6c>
  4242b4:	24120007 	li	s2,7
  4242b8:	8f83897c 	lw	v1,-30340(gp)
  4242bc:	8f81805c 	lw	at,-32676(gp)
  4242c0:	8c630000 	lw	v1,0(v1)
  4242c4:	c434bb24 	lwc1	$f20,-17628(at)
  4242c8:	c4640018 	lwc1	$f4,24(v1)
  4242cc:	c4680020 	lwc1	$f8,32(v1)
  4242d0:	460021a1 	cvt.d.s	$f6,$f4
  4242d4:	460042a1 	cvt.d.s	$f10,$f8
  4242d8:	462a3102 	mul.d	$f4,$f6,$f10
  4242dc:	c4680008 	lwc1	$f8,8(v1)
  4242e0:	c48a0024 	lwc1	$f10,36(a0)
  4242e4:	460041a1 	cvt.d.s	$f6,$f8
  4242e8:	8f888990 	lw	t0,-30320(gp)
  4242ec:	46005221 	cvt.d.s	$f8,$f10
  4242f0:	46283281 	sub.d	$f10,$f6,$f8
  4242f4:	c4680004 	lwc1	$f8,4(v1)
  4242f8:	462a2182 	mul.d	$f6,$f4,$f10
  4242fc:	46004121 	cvt.d.s	$f4,$f8
  424300:	c4880038 	lwc1	$f8,56(a0)
  424304:	e7b400e4 	swc1	$f20,228(sp)
  424308:	e7b400d8 	swc1	$f20,216(sp)
  42430c:	46262281 	sub.d	$f10,$f4,$f6
  424310:	8d080000 	lw	t0,0(t0)
  424314:	46004121 	cvt.d.s	$f4,$f8
  424318:	46245181 	sub.d	$f6,$f10,$f4
  42431c:	3c014000 	lui	at,0x4000
  424320:	46203020 	cvt.s.d	$f0,$f6
  424324:	46000005 	abs.s	$f0,$f0
  424328:	e7a000c8 	swc1	$f0,200(sp)
  42432c:	8c820074 	lw	v0,116(a0)
  424330:	00000000 	nop
  424334:	0002cf82 	srl	t9,v0,0x1e
  424338:	03284824 	and	t1,t9,t0
  42433c:	15200008 	bnez	t1,424360 <draw_directory+0x110>
  424340:	00025880 	sll	t3,v0,0x2
  424344:	05600006 	bltz	t3,424360 <draw_directory+0x110>
  424348:	00000000 	nop
  42434c:	948c0074 	lhu	t4,116(a0)
  424350:	00000000 	nop
  424354:	318d0001 	andi	t5,t4,0x1
  424358:	11a001b2 	beqz	t5,424a24 <draw_directory+0x7d4>
  42435c:	00000000 	nop
  424360:	c62a003c 	lwc1	$f10,60(s1)
  424364:	44813800 	mtc1	at,$f7
  424368:	44803000 	mtc1	zero,$f6
  42436c:	46005121 	cvt.d.s	$f4,$f10
  424370:	00000000 	nop
  424374:	46262383 	div.d	$f14,$f4,$f6
  424378:	c6280034 	lwc1	$f8,52(s1)
  42437c:	c4640000 	lwc1	$f4,0(v1)
  424380:	46004021 	cvt.d.s	$f0,$f8
  424384:	c6280058 	lwc1	$f8,88(s1)
  424388:	46002321 	cvt.d.s	$f12,$f4
  42438c:	460042a1 	cvt.d.s	$f10,$f8
  424390:	24100010 	li	s0,16
  424394:	462a7082 	mul.d	$f2,$f14,$f10
  424398:	46220180 	add.d	$f6,$f0,$f2
  42439c:	4626603e 	c.le.d	$f12,$f6
  4243a0:	46220201 	sub.d	$f8,$f0,$f2
  4243a4:	45000002 	bc1f	4243b0 <draw_directory+0x160>
  4243a8:	00000000 	nop
  4243ac:	24100012 	li	s0,18
  4243b0:	462c403e 	c.le.d	$f8,$f12
  4243b4:	00000000 	nop
  4243b8:	45000002 	bc1f	4243c4 <draw_directory+0x174>
  4243bc:	360e0004 	ori	t6,s0,0x4
  4243c0:	01c08025 	move	s0,t6
  4243c4:	c62a0038 	lwc1	$f10,56(s1)
  4243c8:	c4640004 	lwc1	$f4,4(v1)
  4243cc:	460050a1 	cvt.d.s	$f2,$f10
  4243d0:	462e1180 	add.d	$f6,$f2,$f14
  4243d4:	46002021 	cvt.d.s	$f0,$f4
  4243d8:	4626003e 	c.le.d	$f0,$f6
  4243dc:	462e1201 	sub.d	$f8,$f2,$f14
  4243e0:	45000002 	bc1f	4243ec <draw_directory+0x19c>
  4243e4:	360f0001 	ori	t7,s0,0x1
  4243e8:	01e08025 	move	s0,t7
  4243ec:	4620403e 	c.le.d	$f8,$f0
  4243f0:	00000000 	nop
  4243f4:	45000002 	bc1f	424400 <draw_directory+0x1b0>
  4243f8:	36180008 	ori	t8,s0,0x8
  4243fc:	03008025 	move	s0,t8
  424400:	8f998250 	lw	t9,-32176(gp)
  424404:	8624005e 	lh	a0,94(s1)
  424408:	0320f809 	jalr	t9
  42440c:	00000000 	nop
  424410:	8fbc0080 	lw	gp,128(sp)
  424414:	00000000 	nop
  424418:	8f9984b8 	lw	t9,-31560(gp)
  42441c:	00000000 	nop
  424420:	0320f809 	jalr	t9
  424424:	00000000 	nop
  424428:	8fbc0080 	lw	gp,128(sp)
  42442c:	4480d000 	mtc1	zero,$f26
  424430:	8f9984a0 	lw	t9,-31584(gp)
  424434:	c62c0034 	lwc1	$f12,52(s1)
  424438:	c62e0038 	lwc1	$f14,56(s1)
  42443c:	4406d000 	mfc1	a2,$f26
  424440:	0320f809 	jalr	t9
  424444:	00000000 	nop
  424448:	8fbc0080 	lw	gp,128(sp)
  42444c:	3c013f80 	lui	at,0x3f80
  424450:	4481e000 	mtc1	at,$f28
  424454:	8f998494 	lw	t9,-31596(gp)
  424458:	c62c0058 	lwc1	$f12,88(s1)
  42445c:	4406e000 	mfc1	a2,$f28
  424460:	0320f809 	jalr	t9
  424464:	4600e386 	mov.s	$f14,$f28
  424468:	8e220074 	lw	v0,116(s1)
  42446c:	8fbc0080 	lw	gp,128(sp)
  424470:	000242c0 	sll	t0,v0,0xb
  424474:	05010032 	bgez	t0,424540 <draw_directory+0x2f0>
  424478:	00000000 	nop
  42447c:	8f9984b8 	lw	t9,-31560(gp)
  424480:	00000000 	nop
  424484:	0320f809 	jalr	t9
  424488:	00000000 	nop
  42448c:	8fbc0080 	lw	gp,128(sp)
  424490:	00000000 	nop
  424494:	8f938a24 	lw	s3,-30172(gp)
  424498:	8f998464 	lw	t9,-31644(gp)
  42449c:	8e640174 	lw	a0,372(s3)
  4244a0:	0320f809 	jalr	t9
  4244a4:	00000000 	nop
  4244a8:	8fbc0080 	lw	gp,128(sp)
  4244ac:	4406a000 	mfc1	a2,$f20
  4244b0:	8f9984a0 	lw	t9,-31584(gp)
  4244b4:	4600d306 	mov.s	$f12,$f26
  4244b8:	0320f809 	jalr	t9
  4244bc:	4600d386 	mov.s	$f14,$f26
  4244c0:	c622003c 	lwc1	$f2,60(s1)
  4244c4:	3c014000 	lui	at,0x4000
  4244c8:	44819800 	mtc1	at,$f19
  4244cc:	44809000 	mtc1	zero,$f18
  4244d0:	46001107 	neg.s	$f4,$f2
  4244d4:	460021a1 	cvt.d.s	$f6,$f4
  4244d8:	00000000 	nop
  4244dc:	46323203 	div.d	$f8,$f6,$f18
  4244e0:	46001121 	cvt.d.s	$f4,$f2
  4244e4:	c66a0060 	lwc1	$f10,96(s3)
  4244e8:	8fbc0080 	lw	gp,128(sp)
  4244ec:	46005021 	cvt.d.s	$f0,$f10
  4244f0:	8f9981e0 	lw	t9,-32288(gp)
  4244f4:	46322183 	div.d	$f6,$f4,$f18
  4244f8:	46204281 	sub.d	$f10,$f8,$f0
  4244fc:	46205320 	cvt.s.d	$f12,$f10
  424500:	46006386 	mov.s	$f14,$f12
  424504:	46203200 	add.d	$f8,$f6,$f0
  424508:	46204420 	cvt.s.d	$f16,$f8
  42450c:	44068000 	mfc1	a2,$f16
  424510:	44078000 	mfc1	a3,$f16
  424514:	0320f809 	jalr	t9
  424518:	00000000 	nop
  42451c:	8fbc0080 	lw	gp,128(sp)
  424520:	00000000 	nop
  424524:	8f9984d8 	lw	t9,-31528(gp)
  424528:	00000000 	nop
  42452c:	0320f809 	jalr	t9
  424530:	00000000 	nop
  424534:	8fbc0080 	lw	gp,128(sp)
  424538:	8e220074 	lw	v0,116(s1)
  42453c:	00000000 	nop
  424540:	8f938a24 	lw	s3,-30172(gp)
  424544:	00025340 	sll	t2,v0,0xd
  424548:	0541002a 	bgez	t2,4245f4 <draw_directory+0x3a4>
  42454c:	00026080 	sll	t4,v0,0x2
  424550:	05810008 	bgez	t4,424574 <draw_directory+0x324>
  424554:	00000000 	nop
  424558:	8f8d8974 	lw	t5,-30348(gp)
  42455c:	00000000 	nop
  424560:	8dad0000 	lw	t5,0(t5)
  424564:	00000000 	nop
  424568:	8da70010 	lw	a3,16(t5)
  42456c:	10000007 	b	42458c <draw_directory+0x33c>
  424570:	00000000 	nop
  424574:	8f8e8974 	lw	t6,-30348(gp)
  424578:	00000000 	nop
  42457c:	8dce0000 	lw	t6,0(t6)
  424580:	00000000 	nop
  424584:	8dc70000 	lw	a3,0(t6)
  424588:	00000000 	nop
  42458c:	8f998464 	lw	t9,-31644(gp)
  424590:	00e02025 	move	a0,a3
  424594:	0320f809 	jalr	t9
  424598:	00000000 	nop
  42459c:	c622003c 	lwc1	$f2,60(s1)
  4245a0:	3c014000 	lui	at,0x4000
  4245a4:	44818800 	mtc1	at,$f17
  4245a8:	44808000 	mtc1	zero,$f16
  4245ac:	46001287 	neg.s	$f10,$f2
  4245b0:	46005121 	cvt.d.s	$f4,$f10
  4245b4:	46001221 	cvt.d.s	$f8,$f2
  4245b8:	00000000 	nop
  4245bc:	46304283 	div.d	$f10,$f8,$f16
  4245c0:	8fbc0080 	lw	gp,128(sp)
  4245c4:	00000000 	nop
  4245c8:	8f998210 	lw	t9,-32240(gp)
  4245cc:	46302183 	div.d	$f6,$f4,$f16
  4245d0:	46205020 	cvt.s.d	$f0,$f10
  4245d4:	44060000 	mfc1	a2,$f0
  4245d8:	44070000 	mfc1	a3,$f0
  4245dc:	46203320 	cvt.s.d	$f12,$f6
  4245e0:	0320f809 	jalr	t9
  4245e4:	46006386 	mov.s	$f14,$f12
  4245e8:	8fbc0080 	lw	gp,128(sp)
  4245ec:	10000091 	b	424834 <draw_directory+0x5e4>
  4245f0:	00000000 	nop
  4245f4:	c66400f4 	lwc1	$f4,244(s3)
  4245f8:	c7a800c8 	lwc1	$f8,200(sp)
  4245fc:	460021a1 	cvt.d.s	$f6,$f4
  424600:	460042a1 	cvt.d.s	$f10,$f8
  424604:	462a303c 	c.lt.d	$f6,$f10
  424608:	0002c080 	sll	t8,v0,0x2
  42460c:	4500000a 	bc1f	424638 <draw_directory+0x3e8>
  424610:	00000000 	nop
  424614:	07000008 	bltz	t8,424638 <draw_directory+0x3e8>
  424618:	00000000 	nop
  42461c:	96390074 	lhu	t9,116(s1)
  424620:	00000000 	nop
  424624:	33280001 	andi	t0,t9,0x1
  424628:	15000003 	bnez	t0,424638 <draw_directory+0x3e8>
  42462c:	00000000 	nop
  424630:	8e320068 	lw	s2,104(s1)
  424634:	00000000 	nop
  424638:	8f9984b8 	lw	t9,-31560(gp)
  42463c:	00000000 	nop
  424640:	0320f809 	jalr	t9
  424644:	00000000 	nop
  424648:	93a900f7 	lbu	t1,247(sp)
  42464c:	8fbc0080 	lw	gp,128(sp)
  424650:	1120000f 	beqz	t1,424690 <draw_directory+0x440>
  424654:	00000000 	nop
  424658:	c6240024 	lwc1	$f4,36(s1)
  42465c:	c6260054 	lwc1	$f6,84(s1)
  424660:	46002221 	cvt.d.s	$f8,$f4
  424664:	460032a1 	cvt.d.s	$f10,$f6
  424668:	462a4100 	add.d	$f4,$f8,$f10
  42466c:	c62c003c 	lwc1	$f12,60(s1)
  424670:	462021a0 	cvt.s.d	$f6,$f4
  424674:	8f998494 	lw	t9,-31596(gp)
  424678:	44063000 	mfc1	a2,$f6
  42467c:	0320f809 	jalr	t9
  424680:	46006386 	mov.s	$f14,$f12
  424684:	8fbc0080 	lw	gp,128(sp)
  424688:	10000009 	b	4246b0 <draw_directory+0x460>
  42468c:	93aa00f7 	lbu	t2,247(sp)
  424690:	c62c003c 	lwc1	$f12,60(s1)
  424694:	8f998494 	lw	t9,-31596(gp)
  424698:	8e260024 	lw	a2,36(s1)
  42469c:	0320f809 	jalr	t9
  4246a0:	46006386 	mov.s	$f14,$f12
  4246a4:	8fbc0080 	lw	gp,128(sp)
  4246a8:	00000000 	nop
  4246ac:	93aa00f7 	lbu	t2,247(sp)
  4246b0:	24010007 	li	at,7
  4246b4:	1140000d 	beqz	t2,4246ec <draw_directory+0x49c>
  4246b8:	00000000 	nop
  4246bc:	8e2b0074 	lw	t3,116(s1)
  4246c0:	00002025 	move	a0,zero
  4246c4:	000b6880 	sll	t5,t3,0x2
  4246c8:	05a00054 	bltz	t5,42481c <draw_directory+0x5cc>
  4246cc:	00000000 	nop
  4246d0:	8f9986b4 	lw	t9,-31052(gp)
  4246d4:	00002825 	move	a1,zero
  4246d8:	0320f809 	jalr	t9
  4246dc:	2406003f 	li	a2,63
  4246e0:	8fbc0080 	lw	gp,128(sp)
  4246e4:	1000004d 	b	42481c <draw_directory+0x5cc>
  4246e8:	00000000 	nop
  4246ec:	1641001f 	bne	s2,at,42476c <draw_directory+0x51c>
  4246f0:	00000000 	nop
  4246f4:	8e2e0074 	lw	t6,116(s1)
  4246f8:	44804800 	mtc1	zero,$f9
  4246fc:	000ec080 	sll	t8,t6,0x2
  424700:	07010006 	bgez	t8,42471c <draw_directory+0x4cc>
  424704:	24070010 	li	a3,16
  424708:	8f848974 	lw	a0,-30348(gp)
  42470c:	00000000 	nop
  424710:	8c840000 	lw	a0,0(a0)
  424714:	10000005 	b	42472c <draw_directory+0x4dc>
  424718:	24840010 	addiu	a0,a0,16
  42471c:	8f848974 	lw	a0,-30348(gp)
  424720:	00000000 	nop
  424724:	8c840000 	lw	a0,0(a0)
  424728:	00000000 	nop
  42472c:	c62a0024 	lwc1	$f10,36(s1)
  424730:	44804000 	mtc1	zero,$f8
  424734:	46005121 	cvt.d.s	$f4,$f10
  424738:	4624403c 	c.lt.d	$f8,$f4
  42473c:	00000000 	nop
  424740:	45000003 	bc1f	424750 <draw_directory+0x500>
  424744:	00000000 	nop
  424748:	10000001 	b	424750 <draw_directory+0x500>
  42474c:	02003825 	move	a3,s0
  424750:	8f9986b4 	lw	t9,-31052(gp)
  424754:	00002825 	move	a1,zero
  424758:	0320f809 	jalr	t9
  42475c:	00e03025 	move	a2,a3
  424760:	8fbc0080 	lw	gp,128(sp)
  424764:	1000002d 	b	42481c <draw_directory+0x5cc>
  424768:	00000000 	nop
  42476c:	c62a0024 	lwc1	$f10,36(s1)
  424770:	44803800 	mtc1	zero,$f7
  424774:	44803000 	mtc1	zero,$f6
  424778:	46005221 	cvt.d.s	$f8,$f10
  42477c:	4628303c 	c.lt.d	$f6,$f8
  424780:	00002825 	move	a1,zero
  424784:	45000015 	bc1f	4247dc <draw_directory+0x58c>
  424788:	2401ffef 	li	at,-17
  42478c:	8e390074 	lw	t9,116(s1)
  424790:	00000000 	nop
  424794:	00194880 	sll	t1,t9,0x2
  424798:	05210006 	bgez	t1,4247b4 <draw_directory+0x564>
  42479c:	00000000 	nop
  4247a0:	8f878974 	lw	a3,-30348(gp)
  4247a4:	00000000 	nop
  4247a8:	8ce70000 	lw	a3,0(a3)
  4247ac:	10000005 	b	4247c4 <draw_directory+0x574>
  4247b0:	24e70010 	addiu	a3,a3,16
  4247b4:	8f878974 	lw	a3,-30348(gp)
  4247b8:	00000000 	nop
  4247bc:	8ce70000 	lw	a3,0(a3)
  4247c0:	00000000 	nop
  4247c4:	8f9986b4 	lw	t9,-31052(gp)
  4247c8:	00e02025 	move	a0,a3
  4247cc:	0320f809 	jalr	t9
  4247d0:	02013024 	and	a2,s0,at
  4247d4:	8fbc0080 	lw	gp,128(sp)
  4247d8:	00000000 	nop
  4247dc:	8f8b8978 	lw	t3,-30344(gp)
  4247e0:	00125080 	sll	t2,s2,0x2
  4247e4:	014b6021 	addu	t4,t2,t3
  4247e8:	8d8d0000 	lw	t5,0(t4)
  4247ec:	8f998464 	lw	t9,-31644(gp)
  4247f0:	8da40024 	lw	a0,36(t5)
  4247f4:	0320f809 	jalr	t9
  4247f8:	00000000 	nop
  4247fc:	8fbc0080 	lw	gp,128(sp)
  424800:	00002025 	move	a0,zero
  424804:	8f9986b4 	lw	t9,-31052(gp)
  424808:	00002825 	move	a1,zero
  42480c:	0320f809 	jalr	t9
  424810:	24060010 	li	a2,16
  424814:	8fbc0080 	lw	gp,128(sp)
  424818:	00000000 	nop
  42481c:	8f9984d8 	lw	t9,-31528(gp)
  424820:	00000000 	nop
  424824:	0320f809 	jalr	t9
  424828:	00000000 	nop
  42482c:	8fbc0080 	lw	gp,128(sp)
  424830:	00000000 	nop
  424834:	8f8e897c 	lw	t6,-30340(gp)
  424838:	c66600c4 	lwc1	$f6,196(s3)
  42483c:	8dce0000 	lw	t6,0(t6)
  424840:	46003221 	cvt.d.s	$f8,$f6
  424844:	c5c40008 	lwc1	$f4,8(t6)
  424848:	00000000 	nop
  42484c:	460022a1 	cvt.d.s	$f10,$f4
  424850:	c6240024 	lwc1	$f4,36(s1)
  424854:	00000000 	nop
  424858:	460021a1 	cvt.d.s	$f6,$f4
  42485c:	46264100 	add.d	$f4,$f8,$f6
  424860:	c7a800c8 	lwc1	$f8,200(sp)
  424864:	4624503c 	c.lt.d	$f10,$f4
  424868:	00000000 	nop
  42486c:	45000046 	bc1f	424988 <draw_directory+0x738>
  424870:	00000000 	nop
  424874:	c66a00c0 	lwc1	$f10,192(s3)
  424878:	460041a1 	cvt.d.s	$f6,$f8
  42487c:	46005121 	cvt.d.s	$f4,$f10
  424880:	4624303c 	c.lt.d	$f6,$f4
  424884:	00000000 	nop
  424888:	4500003f 	bc1f	424988 <draw_directory+0x738>
  42488c:	00000000 	nop
  424890:	8f9984b8 	lw	t9,-31560(gp)
  424894:	00000000 	nop
  424898:	0320f809 	jalr	t9
  42489c:	00000000 	nop
  4248a0:	8fbc0080 	lw	gp,128(sp)
  4248a4:	8e2f0004 	lw	t7,4(s1)
  4248a8:	8f81805c 	lw	at,-32676(gp)
  4248ac:	448f4000 	mtc1	t7,$f8
  4248b0:	c427bb28 	lwc1	$f7,-17624(at)
  4248b4:	468042a1 	cvt.d.w	$f10,$f8
  4248b8:	c426bb2c 	lwc1	$f6,-17620(at)
  4248bc:	c628003c 	lwc1	$f8,60(s1)
  4248c0:	46265102 	mul.d	$f4,$f10,$f6
  4248c4:	3c014000 	lui	at,0x4000
  4248c8:	46004287 	neg.s	$f10,$f8
  4248cc:	460051a1 	cvt.d.s	$f6,$f10
  4248d0:	44805000 	mtc1	zero,$f10
  4248d4:	46202320 	cvt.s.d	$f12,$f4
  4248d8:	44802000 	mtc1	zero,$f4
  4248dc:	44812800 	mtc1	at,$f5
  4248e0:	44815800 	mtc1	at,$f11
  4248e4:	46243203 	div.d	$f8,$f6,$f4
  4248e8:	8f9984a0 	lw	t9,-31584(gp)
  4248ec:	4406d000 	mfc1	a2,$f26
  4248f0:	462a4181 	sub.d	$f6,$f8,$f10
  4248f4:	0320f809 	jalr	t9
  4248f8:	462033a0 	cvt.s.d	$f14,$f6
  4248fc:	8fbc0080 	lw	gp,128(sp)
  424900:	4406e000 	mfc1	a2,$f28
  424904:	8f81805c 	lw	at,-32676(gp)
  424908:	8f998494 	lw	t9,-31596(gp)
  42490c:	c42cbb30 	lwc1	$f12,-17616(at)
  424910:	0320f809 	jalr	t9
  424914:	46006386 	mov.s	$f14,$f12
  424918:	8e380074 	lw	t8,116(s1)
  42491c:	8fbc0080 	lw	gp,128(sp)
  424920:	00184080 	sll	t0,t8,0x2
  424924:	05010004 	bgez	t0,424938 <draw_directory+0x6e8>
  424928:	00000000 	nop
  42492c:	8e670178 	lw	a3,376(s3)
  424930:	10000003 	b	424940 <draw_directory+0x6f0>
  424934:	00000000 	nop
  424938:	8e67017c 	lw	a3,380(s3)
  42493c:	00000000 	nop
  424940:	8f998464 	lw	t9,-31644(gp)
  424944:	00e02025 	move	a0,a3
  424948:	0320f809 	jalr	t9
  42494c:	00000000 	nop
  424950:	8fbc0080 	lw	gp,128(sp)
  424954:	8e240000 	lw	a0,0(s1)
  424958:	8f9985f8 	lw	t9,-31240(gp)
  42495c:	00000000 	nop
  424960:	0320f809 	jalr	t9
  424964:	00000000 	nop
  424968:	8fbc0080 	lw	gp,128(sp)
  42496c:	00000000 	nop
  424970:	8f9984d8 	lw	t9,-31528(gp)
  424974:	00000000 	nop
  424978:	0320f809 	jalr	t9
  42497c:	00000000 	nop
  424980:	8fbc0080 	lw	gp,128(sp)
  424984:	00000000 	nop
  424988:	8f9984b8 	lw	t9,-31560(gp)
  42498c:	00000000 	nop
  424990:	0320f809 	jalr	t9
  424994:	00000000 	nop
  424998:	8fbc0080 	lw	gp,128(sp)
  42499c:	8e260024 	lw	a2,36(s1)
  4249a0:	8f9984a0 	lw	t9,-31584(gp)
  4249a4:	4600d306 	mov.s	$f12,$f26
  4249a8:	0320f809 	jalr	t9
  4249ac:	4600d386 	mov.s	$f14,$f26
  4249b0:	93a900f7 	lbu	t1,247(sp)
  4249b4:	8fbc0080 	lw	gp,128(sp)
  4249b8:	15200008 	bnez	t1,4249dc <draw_directory+0x78c>
  4249bc:	02202025 	move	a0,s1
  4249c0:	8f9986c0 	lw	t9,-31040(gp)
  4249c4:	01202825 	move	a1,t1
  4249c8:	02403025 	move	a2,s2
  4249cc:	0320f809 	jalr	t9
  4249d0:	02003825 	move	a3,s0
  4249d4:	8fbc0080 	lw	gp,128(sp)
  4249d8:	00000000 	nop
  4249dc:	8f9984d8 	lw	t9,-31528(gp)
  4249e0:	00000000 	nop
  4249e4:	0320f809 	jalr	t9
  4249e8:	00000000 	nop
  4249ec:	8fbc0080 	lw	gp,128(sp)
  4249f0:	00000000 	nop
  4249f4:	8f9984d8 	lw	t9,-31528(gp)
  4249f8:	00000000 	nop
  4249fc:	0320f809 	jalr	t9
  424a00:	00000000 	nop
  424a04:	8fbc0080 	lw	gp,128(sp)
  424a08:	00000000 	nop
  424a0c:	8f998218 	lw	t9,-32232(gp)
  424a10:	00000000 	nop
  424a14:	0320f809 	jalr	t9
  424a18:	00000000 	nop
  424a1c:	8fbc0080 	lw	gp,128(sp)
  424a20:	00000000 	nop
  424a24:	862b0076 	lh	t3,118(s1)
  424a28:	3c013f80 	lui	at,0x3f80
  424a2c:	4481e000 	mtc1	at,$f28
  424a30:	8f938a24 	lw	s3,-30172(gp)
  424a34:	4480d000 	mtc1	zero,$f26
  424a38:	0561003a 	bgez	t3,424b24 <draw_directory+0x8d4>
  424a3c:	00000000 	nop
  424a40:	8f9984b8 	lw	t9,-31560(gp)
  424a44:	00000000 	nop
  424a48:	0320f809 	jalr	t9
  424a4c:	00000000 	nop
  424a50:	8fbc0080 	lw	gp,128(sp)
  424a54:	3c014010 	lui	at,0x4010
  424a58:	44810800 	mtc1	at,$f1
  424a5c:	8f818a38 	lw	at,-30152(gp)
  424a60:	44800000 	mtc1	zero,$f0
  424a64:	c4240000 	lwc1	$f4,0(at)
  424a68:	8f818a30 	lw	at,-30160(gp)
  424a6c:	46002221 	cvt.d.s	$f8,$f4
  424a70:	c42a0000 	lwc1	$f10,0(at)
  424a74:	8f818a2c 	lw	at,-30164(gp)
  424a78:	46204382 	mul.d	$f14,$f8,$f0
  424a7c:	c4240000 	lwc1	$f4,0(at)
  424a80:	460051a1 	cvt.d.s	$f6,$f10
  424a84:	46002221 	cvt.d.s	$f8,$f4
  424a88:	3c014000 	lui	at,0x4000
  424a8c:	46283281 	sub.d	$f10,$f6,$f8
  424a90:	93ac00f7 	lbu	t4,247(sp)
  424a94:	46205103 	div.d	$f4,$f10,$f0
  424a98:	44815800 	mtc1	at,$f11
  424a9c:	8e6d0188 	lw	t5,392(s3)
  424aa0:	8f998708 	lw	t9,-30968(gp)
  424aa4:	44806800 	mtc1	zero,$f13
  424aa8:	44806000 	mtc1	zero,$f12
  424aac:	e7a40014 	swc1	$f4,20(sp)
  424ab0:	e7a50010 	swc1	$f5,16(sp)
  424ab4:	c6260034 	lwc1	$f6,52(s1)
  424ab8:	00000000 	nop
  424abc:	46003221 	cvt.d.s	$f8,$f6
  424ac0:	e7a8001c 	swc1	$f8,28(sp)
  424ac4:	e7a90018 	swc1	$f9,24(sp)
  424ac8:	c62a0038 	lwc1	$f10,56(s1)
  424acc:	afa00028 	sw	zero,40(sp)
  424ad0:	46005121 	cvt.d.s	$f4,$f10
  424ad4:	e7a40024 	swc1	$f4,36(sp)
  424ad8:	e7a50020 	swc1	$f5,32(sp)
  424adc:	c626003c 	lwc1	$f6,60(s1)
  424ae0:	44805000 	mtc1	zero,$f10
  424ae4:	46003221 	cvt.d.s	$f8,$f6
  424ae8:	00000000 	nop
  424aec:	462a4103 	div.d	$f4,$f8,$f10
  424af0:	afac0038 	sw	t4,56(sp)
  424af4:	afad003c 	sw	t5,60(sp)
  424af8:	e7a40034 	swc1	$f4,52(sp)
  424afc:	0320f809 	jalr	t9
  424b00:	e7a50030 	swc1	$f5,48(sp)
  424b04:	8fbc0080 	lw	gp,128(sp)
  424b08:	00000000 	nop
  424b0c:	8f9984d8 	lw	t9,-31528(gp)
  424b10:	00000000 	nop
  424b14:	0320f809 	jalr	t9
  424b18:	00000000 	nop
  424b1c:	8fbc0080 	lw	gp,128(sp)
  424b20:	00000000 	nop
  424b24:	8e230014 	lw	v1,20(s1)
  424b28:	00001025 	move	v0,zero
  424b2c:	18600164 	blez	v1,4250c0 <draw_directory+0xe70>
  424b30:	8fbf0084 	lw	ra,132(sp)
  424b34:	8f81805c 	lw	at,-32676(gp)
  424b38:	00009025 	move	s2,zero
  424b3c:	c438bb34 	lwc1	$f24,-17612(at)
  424b40:	8f81805c 	lw	at,-32676(gp)
  424b44:	00000000 	nop
  424b48:	c437bb38 	lwc1	$f23,-17608(at)
  424b4c:	c436bb3c 	lwc1	$f22,-17604(at)
  424b50:	8f81805c 	lw	at,-32676(gp)
  424b54:	00000000 	nop
  424b58:	c435bb40 	lwc1	$f21,-17600(at)
  424b5c:	c434bb44 	lwc1	$f20,-17596(at)
  424b60:	00000000 	nop
  424b64:	8e2e0018 	lw	t6,24(s1)
  424b68:	00000000 	nop
  424b6c:	01d27821 	addu	t7,t6,s2
  424b70:	8df00000 	lw	s0,0(t7)
  424b74:	00000000 	nop
  424b78:	8e180074 	lw	t8,116(s0)
  424b7c:	00000000 	nop
  424b80:	0018c8c0 	sll	t9,t8,0x3
  424b84:	07200003 	bltz	t9,424b94 <draw_directory+0x944>
  424b88:	00000000 	nop
  424b8c:	10000147 	b	4250ac <draw_directory+0xe5c>
  424b90:	00031080 	sll	v0,v1,0x2
  424b94:	8f9986c4 	lw	t9,-31036(gp)
  424b98:	93a500f7 	lbu	a1,247(sp)
  424b9c:	0320f809 	jalr	t9
  424ba0:	02002025 	move	a0,s0
  424ba4:	8fbc0080 	lw	gp,128(sp)
  424ba8:	8604005e 	lh	a0,94(s0)
  424bac:	8f998250 	lw	t9,-32176(gp)
  424bb0:	00000000 	nop
  424bb4:	0320f809 	jalr	t9
  424bb8:	00000000 	nop
  424bbc:	8e020074 	lw	v0,116(s0)
  424bc0:	8fbc0080 	lw	gp,128(sp)
  424bc4:	00025080 	sll	t2,v0,0x2
  424bc8:	05410004 	bgez	t2,424bdc <draw_directory+0x98c>
  424bcc:	00026340 	sll	t4,v0,0xd
  424bd0:	8e670178 	lw	a3,376(s3)
  424bd4:	10000009 	b	424bfc <draw_directory+0x9ac>
  424bd8:	00000000 	nop
  424bdc:	05810004 	bgez	t4,424bf0 <draw_directory+0x9a0>
  424be0:	00000000 	nop
  424be4:	8e640168 	lw	a0,360(s3)
  424be8:	10000004 	b	424bfc <draw_directory+0x9ac>
  424bec:	00803825 	move	a3,a0
  424bf0:	8e64017c 	lw	a0,380(s3)
  424bf4:	00000000 	nop
  424bf8:	00803825 	move	a3,a0
  424bfc:	8f998464 	lw	t9,-31644(gp)
  424c00:	00e02025 	move	a0,a3
  424c04:	0320f809 	jalr	t9
  424c08:	00000000 	nop
  424c0c:	c6260034 	lwc1	$f6,52(s1)
  424c10:	c60a004c 	lwc1	$f10,76(s0)
  424c14:	46003221 	cvt.d.s	$f8,$f6
  424c18:	46005121 	cvt.d.s	$f4,$f10
  424c1c:	46244180 	add.d	$f6,$f8,$f4
  424c20:	3c014000 	lui	at,0x4000
  424c24:	462032a0 	cvt.s.d	$f10,$f6
  424c28:	8fbc0080 	lw	gp,128(sp)
  424c2c:	e7aa00dc 	swc1	$f10,220(sp)
  424c30:	c6060050 	lwc1	$f6,80(s0)
  424c34:	c6280038 	lwc1	$f8,56(s1)
  424c38:	460032a1 	cvt.d.s	$f10,$f6
  424c3c:	46004121 	cvt.d.s	$f4,$f8
  424c40:	462a2200 	add.d	$f8,$f4,$f10
  424c44:	462041a0 	cvt.s.d	$f6,$f8
  424c48:	44813800 	mtc1	at,$f7
  424c4c:	e7a600e0 	swc1	$f6,224(sp)
  424c50:	c6040034 	lwc1	$f4,52(s0)
  424c54:	44803000 	mtc1	zero,$f6
  424c58:	e7a400d0 	swc1	$f4,208(sp)
  424c5c:	c60a003c 	lwc1	$f10,60(s0)
  424c60:	00000000 	nop
  424c64:	46005221 	cvt.d.s	$f8,$f10
  424c68:	00000000 	nop
  424c6c:	46264103 	div.d	$f4,$f8,$f6
  424c70:	c60a0038 	lwc1	$f10,56(s0)
  424c74:	00000000 	nop
  424c78:	46005221 	cvt.d.s	$f8,$f10
  424c7c:	46244181 	sub.d	$f6,$f8,$f4
  424c80:	462032a0 	cvt.s.d	$f10,$f6
  424c84:	e7aa00d4 	swc1	$f10,212(sp)
  424c88:	8e0d0074 	lw	t5,116(s0)
  424c8c:	00000000 	nop
  424c90:	000d7880 	sll	t7,t5,0x2
  424c94:	05e10007 	bgez	t7,424cb4 <draw_directory+0xa64>
  424c98:	00000000 	nop
  424c9c:	8f9981f4 	lw	t9,-32268(gp)
  424ca0:	24040003 	li	a0,3
  424ca4:	0320f809 	jalr	t9
  424ca8:	00000000 	nop
  424cac:	8fbc0080 	lw	gp,128(sp)
  424cb0:	00000000 	nop
  424cb4:	8f998484 	lw	t9,-31612(gp)
  424cb8:	00000000 	nop
  424cbc:	0320f809 	jalr	t9
  424cc0:	00000000 	nop
  424cc4:	8fbc0080 	lw	gp,128(sp)
  424cc8:	27a400dc 	addiu	a0,sp,220
  424ccc:	8f998240 	lw	t9,-32192(gp)
  424cd0:	00000000 	nop
  424cd4:	0320f809 	jalr	t9
  424cd8:	00000000 	nop
  424cdc:	8fbc0080 	lw	gp,128(sp)
  424ce0:	27a400d0 	addiu	a0,sp,208
  424ce4:	8f998240 	lw	t9,-32192(gp)
  424ce8:	00000000 	nop
  424cec:	0320f809 	jalr	t9
  424cf0:	00000000 	nop
  424cf4:	8fbc0080 	lw	gp,128(sp)
  424cf8:	00000000 	nop
  424cfc:	8f99846c 	lw	t9,-31636(gp)
  424d00:	00000000 	nop
  424d04:	0320f809 	jalr	t9
  424d08:	00000000 	nop
  424d0c:	8e180074 	lw	t8,116(s0)
  424d10:	8fbc0080 	lw	gp,128(sp)
  424d14:	00184080 	sll	t0,t8,0x2
  424d18:	05010008 	bgez	t0,424d3c <draw_directory+0xaec>
  424d1c:	93a900f7 	lbu	t1,247(sp)
  424d20:	8f9981f4 	lw	t9,-32268(gp)
  424d24:	24040001 	li	a0,1
  424d28:	0320f809 	jalr	t9
  424d2c:	00000000 	nop
  424d30:	8fbc0080 	lw	gp,128(sp)
  424d34:	00000000 	nop
  424d38:	93a900f7 	lbu	t1,247(sp)
  424d3c:	00000000 	nop
  424d40:	152000d3 	bnez	t1,425090 <draw_directory+0xe40>
  424d44:	00000000 	nop
  424d48:	8e2a0074 	lw	t2,116(s1)
  424d4c:	00000000 	nop
  424d50:	000a6080 	sll	t4,t2,0x2
  424d54:	05800006 	bltz	t4,424d70 <draw_directory+0xb20>
  424d58:	00000000 	nop
  424d5c:	8e0d0074 	lw	t5,116(s0)
  424d60:	00000000 	nop
  424d64:	000d7880 	sll	t7,t5,0x2
  424d68:	05e100c9 	bgez	t7,425090 <draw_directory+0xe40>
  424d6c:	00000000 	nop
  424d70:	8f98897c 	lw	t8,-30340(gp)
  424d74:	c66600cc 	lwc1	$f6,204(s3)
  424d78:	8f180000 	lw	t8,0(t8)
  424d7c:	460032a1 	cvt.d.s	$f10,$f6
  424d80:	c7080008 	lwc1	$f8,8(t8)
  424d84:	00000000 	nop
  424d88:	46004121 	cvt.d.s	$f4,$f8
  424d8c:	c6280024 	lwc1	$f8,36(s1)
  424d90:	00000000 	nop
  424d94:	460041a1 	cvt.d.s	$f6,$f8
  424d98:	46265200 	add.d	$f8,$f10,$f6
  424d9c:	c7aa00c8 	lwc1	$f10,200(sp)
  424da0:	4628203c 	c.lt.d	$f4,$f8
  424da4:	00000000 	nop
  424da8:	450000b9 	bc1f	425090 <draw_directory+0xe40>
  424dac:	00000000 	nop
  424db0:	c66400c8 	lwc1	$f4,200(s3)
  424db4:	460051a1 	cvt.d.s	$f6,$f10
  424db8:	46002221 	cvt.d.s	$f8,$f4
  424dbc:	4628303c 	c.lt.d	$f6,$f8
  424dc0:	00000000 	nop
  424dc4:	450000b2 	bc1f	425090 <draw_directory+0xe40>
  424dc8:	00000000 	nop
  424dcc:	8f9984b8 	lw	t9,-31560(gp)
  424dd0:	00000000 	nop
  424dd4:	0320f809 	jalr	t9
  424dd8:	00000000 	nop
  424ddc:	c60a0034 	lwc1	$f10,52(s0)
  424de0:	c6260034 	lwc1	$f6,52(s1)
  424de4:	46005121 	cvt.d.s	$f4,$f10
  424de8:	46003221 	cvt.d.s	$f8,$f6
  424dec:	4628203c 	c.lt.d	$f4,$f8
  424df0:	8fbc0080 	lw	gp,128(sp)
  424df4:	45000059 	bc1f	424f5c <draw_directory+0xd0c>
  424df8:	00000000 	nop
  424dfc:	8f9984a0 	lw	t9,-31584(gp)
  424e00:	c7ac00dc 	lwc1	$f12,220(sp)
  424e04:	c7ae00e0 	lwc1	$f14,224(sp)
  424e08:	4406d000 	mfc1	a2,$f26
  424e0c:	0320f809 	jalr	t9
  424e10:	00000000 	nop
  424e14:	8fbc0080 	lw	gp,128(sp)
  424e18:	c62c0058 	lwc1	$f12,88(s1)
  424e1c:	8f998494 	lw	t9,-31596(gp)
  424e20:	4406e000 	mfc1	a2,$f28
  424e24:	0320f809 	jalr	t9
  424e28:	4600e386 	mov.s	$f14,$f28
  424e2c:	c7aa00d4 	lwc1	$f10,212(sp)
  424e30:	c7a400e0 	lwc1	$f4,224(sp)
  424e34:	460051a1 	cvt.d.s	$f6,$f10
  424e38:	46002221 	cvt.d.s	$f8,$f4
  424e3c:	46283281 	sub.d	$f10,$f6,$f8
  424e40:	c7a800dc 	lwc1	$f8,220(sp)
  424e44:	c7a400d0 	lwc1	$f4,208(sp)
  424e48:	46205320 	cvt.s.d	$f12,$f10
  424e4c:	8fbc0080 	lw	gp,128(sp)
  424e50:	460042a1 	cvt.d.s	$f10,$f8
  424e54:	460021a1 	cvt.d.s	$f6,$f4
  424e58:	462a3101 	sub.d	$f4,$f6,$f10
  424e5c:	c6280058 	lwc1	$f8,88(s1)
  424e60:	8f9981c8 	lw	t9,-32312(gp)
  424e64:	460041a1 	cvt.d.s	$f6,$f8
  424e68:	00000000 	nop
  424e6c:	46262283 	div.d	$f10,$f4,$f6
  424e70:	0320f809 	jalr	t9
  424e74:	462053a0 	cvt.s.d	$f14,$f10
  424e78:	46000221 	cvt.d.s	$f8,$f0
  424e7c:	00000000 	nop
  424e80:	46344103 	div.d	$f4,$f8,$f20
  424e84:	8fbc0080 	lw	gp,128(sp)
  424e88:	2405007a 	li	a1,122
  424e8c:	8f81805c 	lw	at,-32676(gp)
  424e90:	00000000 	nop
  424e94:	c42bbb48 	lwc1	$f11,-17592(at)
  424e98:	c42abb4c 	lwc1	$f10,-17588(at)
  424e9c:	46362182 	mul.d	$f6,$f4,$f22
  424ea0:	462a3200 	add.d	$f8,$f6,$f10
  424ea4:	4459f800 	cfc1	t9,c1_fcsr
  424ea8:	00000000 	nop
  424eac:	37210003 	ori	at,t9,0x3
  424eb0:	38210002 	xori	at,at,0x2
  424eb4:	44c1f800 	ctc1	at,c1_fcsr
  424eb8:	00000000 	nop
  424ebc:	46204124 	cvt.w.d	$f4,$f8
  424ec0:	44042000 	mfc1	a0,$f4
  424ec4:	44d9f800 	ctc1	t9,c1_fcsr
  424ec8:	8f998498 	lw	t9,-31592(gp)
  424ecc:	00044400 	sll	t0,a0,0x10
  424ed0:	0320f809 	jalr	t9
  424ed4:	00082403 	sra	a0,t0,0x10
  424ed8:	8fbc0080 	lw	gp,128(sp)
  424edc:	8e0a0004 	lw	t2,4(s0)
  424ee0:	8f81805c 	lw	at,-32676(gp)
  424ee4:	448a3000 	mtc1	t2,$f6
  424ee8:	c429bb50 	lwc1	$f9,-17584(at)
  424eec:	468032a1 	cvt.d.w	$f10,$f6
  424ef0:	c428bb54 	lwc1	$f8,-17580(at)
  424ef4:	3c01bff0 	lui	at,0xbff0
  424ef8:	46285102 	mul.d	$f4,$f10,$f8
  424efc:	44813800 	mtc1	at,$f7
  424f00:	44803000 	mtc1	zero,$f6
  424f04:	8f81805c 	lw	at,-32676(gp)
  424f08:	8f9984a0 	lw	t9,-31584(gp)
  424f0c:	46243281 	sub.d	$f10,$f6,$f4
  424f10:	4406d000 	mfc1	a2,$f26
  424f14:	c42ebb58 	lwc1	$f14,-17576(at)
  424f18:	0320f809 	jalr	t9
  424f1c:	46205320 	cvt.s.d	$f12,$f10
  424f20:	8fbc0080 	lw	gp,128(sp)
  424f24:	4406d000 	mfc1	a2,$f26
  424f28:	8f998494 	lw	t9,-31596(gp)
  424f2c:	4600c306 	mov.s	$f12,$f24
  424f30:	0320f809 	jalr	t9
  424f34:	4600c386 	mov.s	$f14,$f24
  424f38:	8fbc0080 	lw	gp,128(sp)
  424f3c:	8e040000 	lw	a0,0(s0)
  424f40:	8f9985f8 	lw	t9,-31240(gp)
  424f44:	00000000 	nop
  424f48:	0320f809 	jalr	t9
  424f4c:	00000000 	nop
  424f50:	8fbc0080 	lw	gp,128(sp)
  424f54:	10000048 	b	425078 <draw_directory+0xe28>
  424f58:	00000000 	nop
  424f5c:	8f9984a0 	lw	t9,-31584(gp)
  424f60:	c7ac00dc 	lwc1	$f12,220(sp)
  424f64:	c7ae00e0 	lwc1	$f14,224(sp)
  424f68:	4406d000 	mfc1	a2,$f26
  424f6c:	0320f809 	jalr	t9
  424f70:	00000000 	nop
  424f74:	8fbc0080 	lw	gp,128(sp)
  424f78:	c62c0058 	lwc1	$f12,88(s1)
  424f7c:	8f998494 	lw	t9,-31596(gp)
  424f80:	4406e000 	mfc1	a2,$f28
  424f84:	0320f809 	jalr	t9
  424f88:	4600e386 	mov.s	$f14,$f28
  424f8c:	c7a800d4 	lwc1	$f8,212(sp)
  424f90:	c7a400e0 	lwc1	$f4,224(sp)
  424f94:	460041a1 	cvt.d.s	$f6,$f8
  424f98:	460022a1 	cvt.d.s	$f10,$f4
  424f9c:	462a3201 	sub.d	$f8,$f6,$f10
  424fa0:	c7aa00dc 	lwc1	$f10,220(sp)
  424fa4:	c7a400d0 	lwc1	$f4,208(sp)
  424fa8:	46204320 	cvt.s.d	$f12,$f8
  424fac:	8fbc0080 	lw	gp,128(sp)
  424fb0:	46005221 	cvt.d.s	$f8,$f10
  424fb4:	460021a1 	cvt.d.s	$f6,$f4
  424fb8:	46283101 	sub.d	$f4,$f6,$f8
  424fbc:	c62a0058 	lwc1	$f10,88(s1)
  424fc0:	8f9981c8 	lw	t9,-32312(gp)
  424fc4:	460051a1 	cvt.d.s	$f6,$f10
  424fc8:	00000000 	nop
  424fcc:	46262203 	div.d	$f8,$f4,$f6
  424fd0:	0320f809 	jalr	t9
  424fd4:	462043a0 	cvt.s.d	$f14,$f8
  424fd8:	460002a1 	cvt.d.s	$f10,$f0
  424fdc:	00000000 	nop
  424fe0:	46345103 	div.d	$f4,$f10,$f20
  424fe4:	8fbc0080 	lw	gp,128(sp)
  424fe8:	2405007a 	li	a1,122
  424fec:	8f998498 	lw	t9,-31592(gp)
  424ff0:	46362182 	mul.d	$f6,$f4,$f22
  424ff4:	444bf800 	cfc1	t3,c1_fcsr
  424ff8:	00000000 	nop
  424ffc:	35610003 	ori	at,t3,0x3
  425000:	38210002 	xori	at,at,0x2
  425004:	44c1f800 	ctc1	at,c1_fcsr
  425008:	00000000 	nop
  42500c:	46203224 	cvt.w.d	$f8,$f6
  425010:	44044000 	mfc1	a0,$f8
  425014:	44cbf800 	ctc1	t3,c1_fcsr
  425018:	00046400 	sll	t4,a0,0x10
  42501c:	0320f809 	jalr	t9
  425020:	000c2403 	sra	a0,t4,0x10
  425024:	8fbc0080 	lw	gp,128(sp)
  425028:	4406d000 	mfc1	a2,$f26
  42502c:	8f81805c 	lw	at,-32676(gp)
  425030:	8f9984a0 	lw	t9,-31584(gp)
  425034:	c42ebb5c 	lwc1	$f14,-17572(at)
  425038:	0320f809 	jalr	t9
  42503c:	4600e306 	mov.s	$f12,$f28
  425040:	8fbc0080 	lw	gp,128(sp)
  425044:	4406d000 	mfc1	a2,$f26
  425048:	8f998494 	lw	t9,-31596(gp)
  42504c:	4600c306 	mov.s	$f12,$f24
  425050:	0320f809 	jalr	t9
  425054:	4600c386 	mov.s	$f14,$f24
  425058:	8fbc0080 	lw	gp,128(sp)
  42505c:	8e040000 	lw	a0,0(s0)
  425060:	8f9985f8 	lw	t9,-31240(gp)
  425064:	00000000 	nop
  425068:	0320f809 	jalr	t9
  42506c:	00000000 	nop
  425070:	8fbc0080 	lw	gp,128(sp)
  425074:	00000000 	nop
  425078:	8f9984d8 	lw	t9,-31528(gp)
  42507c:	00000000 	nop
  425080:	0320f809 	jalr	t9
  425084:	00000000 	nop
  425088:	8fbc0080 	lw	gp,128(sp)
  42508c:	00000000 	nop
  425090:	8f998218 	lw	t9,-32232(gp)
  425094:	00000000 	nop
  425098:	0320f809 	jalr	t9
  42509c:	00000000 	nop
  4250a0:	8e230014 	lw	v1,20(s1)
  4250a4:	8fbc0080 	lw	gp,128(sp)
  4250a8:	00031080 	sll	v0,v1,0x2
  4250ac:	26520004 	addiu	s2,s2,4
  4250b0:	0242082a 	slt	at,s2,v0
  4250b4:	1420feab 	bnez	at,424b64 <draw_directory+0x914>
  4250b8:	00000000 	nop
  4250bc:	8fbf0084 	lw	ra,132(sp)
  4250c0:	c7b50048 	lwc1	$f21,72(sp)
  4250c4:	c7b4004c 	lwc1	$f20,76(sp)
  4250c8:	c7b70050 	lwc1	$f23,80(sp)
  4250cc:	c7b60054 	lwc1	$f22,84(sp)
  4250d0:	c7b90058 	lwc1	$f25,88(sp)
  4250d4:	c7b8005c 	lwc1	$f24,92(sp)
  4250d8:	c7bb0060 	lwc1	$f27,96(sp)
  4250dc:	c7ba0064 	lwc1	$f26,100(sp)
  4250e0:	c7bd0068 	lwc1	$f29,104(sp)
  4250e4:	c7bc006c 	lwc1	$f28,108(sp)
  4250e8:	8fb00070 	lw	s0,112(sp)
  4250ec:	8fb10074 	lw	s1,116(sp)
  4250f0:	8fb20078 	lw	s2,120(sp)
  4250f4:	8fb3007c 	lw	s3,124(sp)
  4250f8:	03e00008 	jr	ra
  4250fc:	27bd00f0 	addiu	sp,sp,240
