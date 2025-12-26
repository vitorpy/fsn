# Function: FUN_0040c1a0
# Address: 0x0040c1a0 - 0x0040ca4c
# Size: 0x8ac (2220 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040c1a0 <calc_v_angle+0xe0>:
  40c1a0:	3c1c0fc1 	lui	gp,0xfc1
  40c1a4:	279c1990 	addiu	gp,gp,6544
  40c1a8:	0399e021 	addu	gp,gp,t9
  40c1ac:	27bdffa0 	addiu	sp,sp,-96
  40c1b0:	8f998770 	lw	t9,-30864(gp)
  40c1b4:	afbf001c 	sw	ra,28(sp)
  40c1b8:	afbc0018 	sw	gp,24(sp)
  40c1bc:	afb00014 	sw	s0,20(sp)
  40c1c0:	afa40060 	sw	a0,96(sp)
  40c1c4:	afa50064 	sw	a1,100(sp)
  40c1c8:	0320f809 	jalr	t9
  40c1cc:	afa60068 	sw	a2,104(sp)
  40c1d0:	8fbc0018 	lw	gp,24(sp)
  40c1d4:	8fa40060 	lw	a0,96(sp)
  40c1d8:	8f998778 	lw	t9,-30856(gp)
  40c1dc:	24050001 	li	a1,1
  40c1e0:	0320f809 	jalr	t9
  40c1e4:	00000000 	nop
  40c1e8:	8fbc0018 	lw	gp,24(sp)
  40c1ec:	00000000 	nop
  40c1f0:	8f998734 	lw	t9,-30924(gp)
  40c1f4:	00000000 	nop
  40c1f8:	0320f809 	jalr	t9
  40c1fc:	00000000 	nop
  40c200:	8fbc0018 	lw	gp,24(sp)
  40c204:	8fa40060 	lw	a0,96(sp)
  40c208:	8f998368 	lw	t9,-31896(gp)
  40c20c:	00000000 	nop
  40c210:	0320f809 	jalr	t9
  40c214:	00000000 	nop
  40c218:	8fbc0018 	lw	gp,24(sp)
  40c21c:	8fa40068 	lw	a0,104(sp)
  40c220:	8f908984 	lw	s0,-30332(gp)
  40c224:	8f85897c 	lw	a1,-30340(gp)
  40c228:	8e0e0000 	lw	t6,0(s0)
  40c22c:	00000000 	nop
  40c230:	adc20000 	sw	v0,0(t6)
  40c234:	948f0010 	lhu	t7,16(a0)
  40c238:	8cb80000 	lw	t8,0(a1)
  40c23c:	00000000 	nop
  40c240:	af0f002c 	sw	t7,44(t8)
  40c244:	94990012 	lhu	t9,18(a0)
  40c248:	8ca80000 	lw	t0,0(a1)
  40c24c:	00000000 	nop
  40c250:	ad190030 	sw	t9,48(t0)
  40c254:	8ca30000 	lw	v1,0(a1)
  40c258:	00000000 	nop
  40c25c:	8c69002c 	lw	t1,44(v1)
  40c260:	8c6a0030 	lw	t2,48(v1)
  40c264:	44892000 	mtc1	t1,$f4
  40c268:	448a5000 	mtc1	t2,$f10
  40c26c:	468021a0 	cvt.s.w	$f6,$f4
  40c270:	46805420 	cvt.s.w	$f16,$f10
  40c274:	460084a1 	cvt.d.s	$f18,$f16
  40c278:	46003221 	cvt.d.s	$f8,$f6
  40c27c:	00000000 	nop
  40c280:	46324103 	div.d	$f4,$f8,$f18
  40c284:	462021a0 	cvt.s.d	$f6,$f4
  40c288:	e4660034 	swc1	$f6,52(v1)
  40c28c:	8f9986a0 	lw	t9,-31072(gp)
  40c290:	00000000 	nop
  40c294:	0320f809 	jalr	t9
  40c298:	00000000 	nop
  40c29c:	8fbc0018 	lw	gp,24(sp)
  40c2a0:	10400006 	beqz	v0,40c2bc <calc_v_angle+0x1fc>
  40c2a4:	27a50034 	addiu	a1,sp,52
  40c2a8:	8f8b805c 	lw	t3,-32676(gp)
  40c2ac:	00000000 	nop
  40c2b0:	256ba3b0 	addiu	t3,t3,-23632
  40c2b4:	10000005 	b	40c2cc <calc_v_angle+0x20c>
  40c2b8:	afab0034 	sw	t3,52(sp)
  40c2bc:	8f8c805c 	lw	t4,-32676(gp)
  40c2c0:	00000000 	nop
  40c2c4:	258ca3bc 	addiu	t4,t4,-23620
  40c2c8:	afac0034 	sw	t4,52(sp)
  40c2cc:	8e0d0000 	lw	t5,0(s0)
  40c2d0:	8f998364 	lw	t9,-31900(gp)
  40c2d4:	8fa40060 	lw	a0,96(sp)
  40c2d8:	25ae0004 	addiu	t6,t5,4
  40c2dc:	afae0038 	sw	t6,56(sp)
  40c2e0:	0320f809 	jalr	t9
  40c2e4:	24060001 	li	a2,1
  40c2e8:	8fbc0018 	lw	gp,24(sp)
  40c2ec:	24040001 	li	a0,1
  40c2f0:	8f998350 	lw	t9,-31920(gp)
  40c2f4:	00002825 	move	a1,zero
  40c2f8:	0320f809 	jalr	t9
  40c2fc:	00000000 	nop
  40c300:	8fbc0018 	lw	gp,24(sp)
  40c304:	24040001 	li	a0,1
  40c308:	8f998334 	lw	t9,-31948(gp)
  40c30c:	00000000 	nop
  40c310:	0320f809 	jalr	t9
  40c314:	00000000 	nop
  40c318:	8fbc0018 	lw	gp,24(sp)
  40c31c:	00000000 	nop
  40c320:	8f998524 	lw	t9,-31452(gp)
  40c324:	00000000 	nop
  40c328:	0320f809 	jalr	t9
  40c32c:	00000000 	nop
  40c330:	8fbc0018 	lw	gp,24(sp)
  40c334:	00002025 	move	a0,zero
  40c338:	8f998338 	lw	t9,-31944(gp)
  40c33c:	00000000 	nop
  40c340:	0320f809 	jalr	t9
  40c344:	00000000 	nop
  40c348:	8fbc0018 	lw	gp,24(sp)
  40c34c:	24040001 	li	a0,1
  40c350:	8f99833c 	lw	t9,-31940(gp)
  40c354:	00000000 	nop
  40c358:	0320f809 	jalr	t9
  40c35c:	00000000 	nop
  40c360:	8fbc0018 	lw	gp,24(sp)
  40c364:	00000000 	nop
  40c368:	8f8f8068 	lw	t7,-32664(gp)
  40c36c:	00000000 	nop
  40c370:	8def0144 	lw	t7,324(t7)
  40c374:	00000000 	nop
  40c378:	11e00037 	beqz	t7,40c458 <calc_v_angle+0x398>
  40c37c:	27b9002c 	addiu	t9,sp,44
  40c380:	8f9880a4 	lw	t8,-32604(gp)
  40c384:	afb90038 	sw	t9,56(sp)
  40c388:	8f9986a0 	lw	t9,-31072(gp)
  40c38c:	2718009a 	addiu	t8,t8,154
  40c390:	0320f809 	jalr	t9
  40c394:	afb80034 	sw	t8,52(sp)
  40c398:	8fbc0018 	lw	gp,24(sp)
  40c39c:	10400006 	beqz	v0,40c3b8 <calc_v_angle+0x2f8>
  40c3a0:	27aa0028 	addiu	t2,sp,40
  40c3a4:	8f88805c 	lw	t0,-32676(gp)
  40c3a8:	00000000 	nop
  40c3ac:	2508a3cc 	addiu	t0,t0,-23604
  40c3b0:	10000005 	b	40c3c8 <calc_v_angle+0x308>
  40c3b4:	afa8003c 	sw	t0,60(sp)
  40c3b8:	8f89805c 	lw	t1,-32676(gp)
  40c3bc:	00000000 	nop
  40c3c0:	2529a3dc 	addiu	t1,t1,-23588
  40c3c4:	afa9003c 	sw	t1,60(sp)
  40c3c8:	8f848068 	lw	a0,-32664(gp)
  40c3cc:	8f998364 	lw	t9,-31900(gp)
  40c3d0:	8c840144 	lw	a0,324(a0)
  40c3d4:	afaa0040 	sw	t2,64(sp)
  40c3d8:	24060002 	li	a2,2
  40c3dc:	0320f809 	jalr	t9
  40c3e0:	27a50034 	addiu	a1,sp,52
  40c3e4:	8fbc0018 	lw	gp,24(sp)
  40c3e8:	8fac002c 	lw	t4,44(sp)
  40c3ec:	8f8b80a4 	lw	t3,-32604(gp)
  40c3f0:	8f9986a0 	lw	t9,-31072(gp)
  40c3f4:	256b009a 	addiu	t3,t3,154
  40c3f8:	afab0034 	sw	t3,52(sp)
  40c3fc:	0320f809 	jalr	t9
  40c400:	afac0038 	sw	t4,56(sp)
  40c404:	8fbc0018 	lw	gp,24(sp)
  40c408:	10400006 	beqz	v0,40c424 <calc_v_angle+0x364>
  40c40c:	24060002 	li	a2,2
  40c410:	8f8d805c 	lw	t5,-32676(gp)
  40c414:	00000000 	nop
  40c418:	25ada3ec 	addiu	t5,t5,-23572
  40c41c:	10000005 	b	40c434 <calc_v_angle+0x374>
  40c420:	afad003c 	sw	t5,60(sp)
  40c424:	8f8e805c 	lw	t6,-32676(gp)
  40c428:	00000000 	nop
  40c42c:	25cea3fc 	addiu	t6,t6,-23556
  40c430:	afae003c 	sw	t6,60(sp)
  40c434:	8faf0028 	lw	t7,40(sp)
  40c438:	8f998340 	lw	t9,-31936(gp)
  40c43c:	8fa40060 	lw	a0,96(sp)
  40c440:	27a50034 	addiu	a1,sp,52
  40c444:	0320f809 	jalr	t9
  40c448:	afaf0040 	sw	t7,64(sp)
  40c44c:	8fbc0018 	lw	gp,24(sp)
  40c450:	10000056 	b	40c5ac <calc_v_angle+0x4ec>
  40c454:	00000000 	nop
  40c458:	8f998344 	lw	t9,-31932(gp)
  40c45c:	24040010 	li	a0,16
  40c460:	0320f809 	jalr	t9
  40c464:	00000000 	nop
  40c468:	8fbc0018 	lw	gp,24(sp)
  40c46c:	10400008 	beqz	v0,40c490 <calc_v_angle+0x3d0>
  40c470:	00000000 	nop
  40c474:	8f998344 	lw	t9,-31932(gp)
  40c478:	24040009 	li	a0,9
  40c47c:	0320f809 	jalr	t9
  40c480:	00000000 	nop
  40c484:	8fbc0018 	lw	gp,24(sp)
  40c488:	1440000f 	bnez	v0,40c4c8 <calc_v_angle+0x408>
  40c48c:	00000000 	nop
  40c490:	8f848098 	lw	a0,-32616(gp)
  40c494:	8f85805c 	lw	a1,-32676(gp)
  40c498:	8f9983f8 	lw	t9,-31752(gp)
  40c49c:	24840020 	addiu	a0,a0,32
  40c4a0:	0320f809 	jalr	t9
  40c4a4:	24a5a40c 	addiu	a1,a1,-23540
  40c4a8:	8fbc0018 	lw	gp,24(sp)
  40c4ac:	24040001 	li	a0,1
  40c4b0:	8f9983a0 	lw	t9,-31840(gp)
  40c4b4:	00000000 	nop
  40c4b8:	0320f809 	jalr	t9
  40c4bc:	00000000 	nop
  40c4c0:	8fbc0018 	lw	gp,24(sp)
  40c4c4:	00000000 	nop
  40c4c8:	8e180000 	lw	t8,0(s0)
  40c4cc:	8f998698 	lw	t9,-31080(gp)
  40c4d0:	8f040000 	lw	a0,0(t8)
  40c4d4:	0320f809 	jalr	t9
  40c4d8:	00000000 	nop
  40c4dc:	8fbc0018 	lw	gp,24(sp)
  40c4e0:	00000000 	nop
  40c4e4:	8f848a10 	lw	a0,-30192(gp)
  40c4e8:	8f998368 	lw	t9,-31896(gp)
  40c4ec:	8c840000 	lw	a0,0(a0)
  40c4f0:	0320f809 	jalr	t9
  40c4f4:	00000000 	nop
  40c4f8:	8fbc0018 	lw	gp,24(sp)
  40c4fc:	00402025 	move	a0,v0
  40c500:	8f998690 	lw	t9,-31088(gp)
  40c504:	00000000 	nop
  40c508:	0320f809 	jalr	t9
  40c50c:	00000000 	nop
  40c510:	8fbc0018 	lw	gp,24(sp)
  40c514:	8fa40060 	lw	a0,96(sp)
  40c518:	8f9986a4 	lw	t9,-31068(gp)
  40c51c:	00000000 	nop
  40c520:	0320f809 	jalr	t9
  40c524:	00000000 	nop
  40c528:	8e190000 	lw	t9,0(s0)
  40c52c:	8fbc0018 	lw	gp,24(sp)
  40c530:	8f240004 	lw	a0,4(t9)
  40c534:	8f998698 	lw	t9,-31080(gp)
  40c538:	00000000 	nop
  40c53c:	0320f809 	jalr	t9
  40c540:	00000000 	nop
  40c544:	8fbc0018 	lw	gp,24(sp)
  40c548:	8fa40060 	lw	a0,96(sp)
  40c54c:	8f85805c 	lw	a1,-32676(gp)
  40c550:	8f9986a8 	lw	t9,-31064(gp)
  40c554:	24a5a43c 	addiu	a1,a1,-23492
  40c558:	0320f809 	jalr	t9
  40c55c:	00000000 	nop
  40c560:	8fbc0018 	lw	gp,24(sp)
  40c564:	24040005 	li	a0,5
  40c568:	8f8189fc 	lw	at,-30212(gp)
  40c56c:	8f998344 	lw	t9,-31932(gp)
  40c570:	ac220000 	sw	v0,0(at)
  40c574:	0320f809 	jalr	t9
  40c578:	00000000 	nop
  40c57c:	8fbc0018 	lw	gp,24(sp)
  40c580:	3c080001 	lui	t0,0x1
  40c584:	8f89897c 	lw	t1,-30340(gp)
  40c588:	8f81806c 	lw	at,-32660(gp)
  40c58c:	8d290000 	lw	t1,0(t1)
  40c590:	350886a0 	ori	t0,t0,0x86a0
  40c594:	ac226638 	sw	v0,26168(at)
  40c598:	ad280c4c 	sw	t0,3148(t1)
  40c59c:	8faa0060 	lw	t2,96(sp)
  40c5a0:	8f818068 	lw	at,-32664(gp)
  40c5a4:	00000000 	nop
  40c5a8:	ac2a0144 	sw	t2,324(at)
  40c5ac:	8f9984c0 	lw	t9,-31552(gp)
  40c5b0:	24040230 	li	a0,560
  40c5b4:	0320f809 	jalr	t9
  40c5b8:	00000000 	nop
  40c5bc:	8fbc0018 	lw	gp,24(sp)
  40c5c0:	8e0b0000 	lw	t3,0(s0)
  40c5c4:	8f838a24 	lw	v1,-30172(gp)
  40c5c8:	ad620034 	sw	v0,52(t3)
  40c5cc:	8e0c0000 	lw	t4,0(s0)
  40c5d0:	c46a0018 	lwc1	$f10,24(v1)
  40c5d4:	8d8d0034 	lw	t5,52(t4)
  40c5d8:	24020070 	li	v0,112
  40c5dc:	e5aa0008 	swc1	$f10,8(t5)
  40c5e0:	8e0e0000 	lw	t6,0(s0)
  40c5e4:	c470001c 	lwc1	$f16,28(v1)
  40c5e8:	8dcf0034 	lw	t7,52(t6)
  40c5ec:	24040230 	li	a0,560
  40c5f0:	e5f0000c 	swc1	$f16,12(t7)
  40c5f4:	8e180000 	lw	t8,0(s0)
  40c5f8:	c4680020 	lwc1	$f8,32(v1)
  40c5fc:	8f190034 	lw	t9,52(t8)
  40c600:	00000000 	nop
  40c604:	e7280010 	swc1	$f8,16(t9)
  40c608:	8e080000 	lw	t0,0(s0)
  40c60c:	00000000 	nop
  40c610:	8d090034 	lw	t1,52(t0)
  40c614:	00000000 	nop
  40c618:	a5200000 	sh	zero,0(t1)
  40c61c:	8e0b0000 	lw	t3,0(s0)
  40c620:	8c6a0028 	lw	t2,40(v1)
  40c624:	8d6c0034 	lw	t4,52(t3)
  40c628:	00000000 	nop
  40c62c:	a58a0002 	sh	t2,2(t4)
  40c630:	8e0d0000 	lw	t5,0(s0)
  40c634:	00000000 	nop
  40c638:	8dae0034 	lw	t6,52(t5)
  40c63c:	00000000 	nop
  40c640:	adc00014 	sw	zero,20(t6)
  40c644:	8e0f0000 	lw	t7,0(s0)
  40c648:	00000000 	nop
  40c64c:	8df80034 	lw	t8,52(t7)
  40c650:	00000000 	nop
  40c654:	af000024 	sw	zero,36(t8)
  40c658:	8e190000 	lw	t9,0(s0)
  40c65c:	00000000 	nop
  40c660:	8f280034 	lw	t0,52(t9)
  40c664:	00000000 	nop
  40c668:	ad000004 	sw	zero,4(t0)
  40c66c:	8e090000 	lw	t1,0(s0)
  40c670:	c4720018 	lwc1	$f18,24(v1)
  40c674:	8d2b0034 	lw	t3,52(t1)
  40c678:	00000000 	nop
  40c67c:	e5720040 	swc1	$f18,64(t3)
  40c680:	8e0a0000 	lw	t2,0(s0)
  40c684:	c464001c 	lwc1	$f4,28(v1)
  40c688:	8d4c0034 	lw	t4,52(t2)
  40c68c:	00000000 	nop
  40c690:	e5840044 	swc1	$f4,68(t4)
  40c694:	8e0d0000 	lw	t5,0(s0)
  40c698:	c4660020 	lwc1	$f6,32(v1)
  40c69c:	8dae0034 	lw	t6,52(t5)
  40c6a0:	00000000 	nop
  40c6a4:	e5c60048 	swc1	$f6,72(t6)
  40c6a8:	8e0f0000 	lw	t7,0(s0)
  40c6ac:	00000000 	nop
  40c6b0:	8df80034 	lw	t8,52(t7)
  40c6b4:	00000000 	nop
  40c6b8:	a7000038 	sh	zero,56(t8)
  40c6bc:	8e080000 	lw	t0,0(s0)
  40c6c0:	8c790028 	lw	t9,40(v1)
  40c6c4:	8d090034 	lw	t1,52(t0)
  40c6c8:	00000000 	nop
  40c6cc:	a539003a 	sh	t9,58(t1)
  40c6d0:	8e0b0000 	lw	t3,0(s0)
  40c6d4:	00000000 	nop
  40c6d8:	8d6a0034 	lw	t2,52(t3)
  40c6dc:	00000000 	nop
  40c6e0:	ad40004c 	sw	zero,76(t2)
  40c6e4:	8e0c0000 	lw	t4,0(s0)
  40c6e8:	00000000 	nop
  40c6ec:	8d8d0034 	lw	t5,52(t4)
  40c6f0:	00000000 	nop
  40c6f4:	ada0005c 	sw	zero,92(t5)
  40c6f8:	8e0e0000 	lw	t6,0(s0)
  40c6fc:	00000000 	nop
  40c700:	8dcf0034 	lw	t7,52(t6)
  40c704:	00000000 	nop
  40c708:	ade0003c 	sw	zero,60(t7)
  40c70c:	8e180000 	lw	t8,0(s0)
  40c710:	c46a0018 	lwc1	$f10,24(v1)
  40c714:	8f080034 	lw	t0,52(t8)
  40c718:	00000000 	nop
  40c71c:	0102c821 	addu	t9,t0,v0
  40c720:	e72a0008 	swc1	$f10,8(t9)
  40c724:	8e090000 	lw	t1,0(s0)
  40c728:	c470001c 	lwc1	$f16,28(v1)
  40c72c:	8d2b0034 	lw	t3,52(t1)
  40c730:	00000000 	nop
  40c734:	01625021 	addu	t2,t3,v0
  40c738:	e550000c 	swc1	$f16,12(t2)
  40c73c:	8e0c0000 	lw	t4,0(s0)
  40c740:	c4680020 	lwc1	$f8,32(v1)
  40c744:	8d8d0034 	lw	t5,52(t4)
  40c748:	00000000 	nop
  40c74c:	01a27021 	addu	t6,t5,v0
  40c750:	e5c80010 	swc1	$f8,16(t6)
  40c754:	8e0f0000 	lw	t7,0(s0)
  40c758:	00000000 	nop
  40c75c:	8df80034 	lw	t8,52(t7)
  40c760:	00000000 	nop
  40c764:	03024021 	addu	t0,t8,v0
  40c768:	a5000000 	sh	zero,0(t0)
  40c76c:	8e090000 	lw	t1,0(s0)
  40c770:	8c790028 	lw	t9,40(v1)
  40c774:	8d2b0034 	lw	t3,52(t1)
  40c778:	00000000 	nop
  40c77c:	01625021 	addu	t2,t3,v0
  40c780:	a5590002 	sh	t9,2(t2)
  40c784:	8e0c0000 	lw	t4,0(s0)
  40c788:	00000000 	nop
  40c78c:	8d8d0034 	lw	t5,52(t4)
  40c790:	00000000 	nop
  40c794:	01a27021 	addu	t6,t5,v0
  40c798:	adc00014 	sw	zero,20(t6)
  40c79c:	8e0f0000 	lw	t7,0(s0)
  40c7a0:	00000000 	nop
  40c7a4:	8df80034 	lw	t8,52(t7)
  40c7a8:	00000000 	nop
  40c7ac:	03024021 	addu	t0,t8,v0
  40c7b0:	ad000024 	sw	zero,36(t0)
  40c7b4:	8e090000 	lw	t1,0(s0)
  40c7b8:	00000000 	nop
  40c7bc:	8d2b0034 	lw	t3,52(t1)
  40c7c0:	00000000 	nop
  40c7c4:	0162c821 	addu	t9,t3,v0
  40c7c8:	af200004 	sw	zero,4(t9)
  40c7cc:	8e0a0000 	lw	t2,0(s0)
  40c7d0:	c4720018 	lwc1	$f18,24(v1)
  40c7d4:	8d4c0034 	lw	t4,52(t2)
  40c7d8:	00000000 	nop
  40c7dc:	01826821 	addu	t5,t4,v0
  40c7e0:	e5b20040 	swc1	$f18,64(t5)
  40c7e4:	8e0e0000 	lw	t6,0(s0)
  40c7e8:	c464001c 	lwc1	$f4,28(v1)
  40c7ec:	8dcf0034 	lw	t7,52(t6)
  40c7f0:	00000000 	nop
  40c7f4:	01e2c021 	addu	t8,t7,v0
  40c7f8:	e7040044 	swc1	$f4,68(t8)
  40c7fc:	8e080000 	lw	t0,0(s0)
  40c800:	c4660020 	lwc1	$f6,32(v1)
  40c804:	8d090034 	lw	t1,52(t0)
  40c808:	00000000 	nop
  40c80c:	01225821 	addu	t3,t1,v0
  40c810:	e5660048 	swc1	$f6,72(t3)
  40c814:	8e190000 	lw	t9,0(s0)
  40c818:	00000000 	nop
  40c81c:	8f2a0034 	lw	t2,52(t9)
  40c820:	00000000 	nop
  40c824:	01426021 	addu	t4,t2,v0
  40c828:	a5800038 	sh	zero,56(t4)
  40c82c:	8e0e0000 	lw	t6,0(s0)
  40c830:	8c6d0028 	lw	t5,40(v1)
  40c834:	8dcf0034 	lw	t7,52(t6)
  40c838:	00000000 	nop
  40c83c:	01e2c021 	addu	t8,t7,v0
  40c840:	a70d003a 	sh	t5,58(t8)
  40c844:	8e080000 	lw	t0,0(s0)
  40c848:	00000000 	nop
  40c84c:	8d090034 	lw	t1,52(t0)
  40c850:	00000000 	nop
  40c854:	01225821 	addu	t3,t1,v0
  40c858:	ad60004c 	sw	zero,76(t3)
  40c85c:	8e190000 	lw	t9,0(s0)
  40c860:	00000000 	nop
  40c864:	8f2a0034 	lw	t2,52(t9)
  40c868:	00000000 	nop
  40c86c:	01426021 	addu	t4,t2,v0
  40c870:	ad80005c 	sw	zero,92(t4)
  40c874:	8e0e0000 	lw	t6,0(s0)
  40c878:	00000000 	nop
  40c87c:	8dcf0034 	lw	t7,52(t6)
  40c880:	00000000 	nop
  40c884:	01e26821 	addu	t5,t7,v0
  40c888:	ada0003c 	sw	zero,60(t5)
  40c88c:	8e180000 	lw	t8,0(s0)
  40c890:	c46a0018 	lwc1	$f10,24(v1)
  40c894:	8f080034 	lw	t0,52(t8)
  40c898:	00000000 	nop
  40c89c:	01024821 	addu	t1,t0,v0
  40c8a0:	e52a0078 	swc1	$f10,120(t1)
  40c8a4:	8e0b0000 	lw	t3,0(s0)
  40c8a8:	c470001c 	lwc1	$f16,28(v1)
  40c8ac:	8d790034 	lw	t9,52(t3)
  40c8b0:	00000000 	nop
  40c8b4:	03225021 	addu	t2,t9,v0
  40c8b8:	e550007c 	swc1	$f16,124(t2)
  40c8bc:	8e0c0000 	lw	t4,0(s0)
  40c8c0:	c4680020 	lwc1	$f8,32(v1)
  40c8c4:	8d8e0034 	lw	t6,52(t4)
  40c8c8:	00000000 	nop
  40c8cc:	01c27821 	addu	t7,t6,v0
  40c8d0:	e5e80080 	swc1	$f8,128(t7)
  40c8d4:	8e0d0000 	lw	t5,0(s0)
  40c8d8:	00000000 	nop
  40c8dc:	8db80034 	lw	t8,52(t5)
  40c8e0:	00000000 	nop
  40c8e4:	03024021 	addu	t0,t8,v0
  40c8e8:	a5000070 	sh	zero,112(t0)
  40c8ec:	8e0b0000 	lw	t3,0(s0)
  40c8f0:	8c690028 	lw	t1,40(v1)
  40c8f4:	8d790034 	lw	t9,52(t3)
  40c8f8:	00000000 	nop
  40c8fc:	03225021 	addu	t2,t9,v0
  40c900:	a5490072 	sh	t1,114(t2)
  40c904:	8e0c0000 	lw	t4,0(s0)
  40c908:	00000000 	nop
  40c90c:	8d8e0034 	lw	t6,52(t4)
  40c910:	00000000 	nop
  40c914:	01c27821 	addu	t7,t6,v0
  40c918:	ade00084 	sw	zero,132(t7)
  40c91c:	8e0d0000 	lw	t5,0(s0)
  40c920:	00000000 	nop
  40c924:	8db80034 	lw	t8,52(t5)
  40c928:	00000000 	nop
  40c92c:	03024021 	addu	t0,t8,v0
  40c930:	ad000094 	sw	zero,148(t0)
  40c934:	8e0b0000 	lw	t3,0(s0)
  40c938:	00000000 	nop
  40c93c:	8d790034 	lw	t9,52(t3)
  40c940:	00000000 	nop
  40c944:	03224821 	addu	t1,t9,v0
  40c948:	ad200074 	sw	zero,116(t1)
  40c94c:	8e0a0000 	lw	t2,0(s0)
  40c950:	c4720018 	lwc1	$f18,24(v1)
  40c954:	8d4c0034 	lw	t4,52(t2)
  40c958:	00000000 	nop
  40c95c:	01827021 	addu	t6,t4,v0
  40c960:	e5d200b0 	swc1	$f18,176(t6)
  40c964:	8e0f0000 	lw	t7,0(s0)
  40c968:	c464001c 	lwc1	$f4,28(v1)
  40c96c:	8ded0034 	lw	t5,52(t7)
  40c970:	00000000 	nop
  40c974:	01a2c021 	addu	t8,t5,v0
  40c978:	e70400b4 	swc1	$f4,180(t8)
  40c97c:	8e080000 	lw	t0,0(s0)
  40c980:	c4660020 	lwc1	$f6,32(v1)
  40c984:	8d0b0034 	lw	t3,52(t0)
  40c988:	00000000 	nop
  40c98c:	0162c821 	addu	t9,t3,v0
  40c990:	e72600b8 	swc1	$f6,184(t9)
  40c994:	8e090000 	lw	t1,0(s0)
  40c998:	00000000 	nop
  40c99c:	8d2a0034 	lw	t2,52(t1)
  40c9a0:	00000000 	nop
  40c9a4:	01426021 	addu	t4,t2,v0
  40c9a8:	a58000a8 	sh	zero,168(t4)
  40c9ac:	8e0f0000 	lw	t7,0(s0)
  40c9b0:	8c6e0028 	lw	t6,40(v1)
  40c9b4:	8ded0034 	lw	t5,52(t7)
  40c9b8:	00000000 	nop
  40c9bc:	01a2c021 	addu	t8,t5,v0
  40c9c0:	a70e00aa 	sh	t6,170(t8)
  40c9c4:	8e080000 	lw	t0,0(s0)
  40c9c8:	00000000 	nop
  40c9cc:	8d0b0034 	lw	t3,52(t0)
  40c9d0:	00000000 	nop
  40c9d4:	0162c821 	addu	t9,t3,v0
  40c9d8:	af2000bc 	sw	zero,188(t9)
  40c9dc:	8e090000 	lw	t1,0(s0)
  40c9e0:	00000000 	nop
  40c9e4:	8d2a0034 	lw	t2,52(t1)
  40c9e8:	00000000 	nop
  40c9ec:	01426021 	addu	t4,t2,v0
  40c9f0:	ad8000cc 	sw	zero,204(t4)
  40c9f4:	8e0f0000 	lw	t7,0(s0)
  40c9f8:	00000000 	nop
  40c9fc:	8ded0034 	lw	t5,52(t7)
  40ca00:	00000000 	nop
  40ca04:	01a27021 	addu	t6,t5,v0
  40ca08:	244200e0 	addiu	v0,v0,224
  40ca0c:	1444ff3f 	bne	v0,a0,40c70c <calc_v_angle+0x64c>
  40ca10:	adc000ac 	sw	zero,172(t6)
  40ca14:	8f88897c 	lw	t0,-30340(gp)
  40ca18:	24180001 	li	t8,1
  40ca1c:	8d080000 	lw	t0,0(t0)
  40ca20:	00000000 	nop
  40ca24:	a1180c52 	sb	t8,3154(t0)
  40ca28:	8f998774 	lw	t9,-30860(gp)
  40ca2c:	00000000 	nop
  40ca30:	0320f809 	jalr	t9
  40ca34:	00000000 	nop
  40ca38:	8fbf001c 	lw	ra,28(sp)
  40ca3c:	8fbc0018 	lw	gp,24(sp)
  40ca40:	8fb00014 	lw	s0,20(sp)
  40ca44:	03e00008 	jr	ra
  40ca48:	27bd0060 	addiu	sp,sp,96
