# Function: FUN_0041e260
# Address: 0x0041e260 - 0x0041e8a8
# Size: 0x648 (1608 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041e260 <editCB+0x13c>:
  41e260:	3c1c0fc0 	lui	gp,0xfc0
  41e264:	279cf8d0 	addiu	gp,gp,-1840
  41e268:	0399e021 	addu	gp,gp,t9
  41e26c:	27bdfb60 	addiu	sp,sp,-1184
  41e270:	afbf001c 	sw	ra,28(sp)
  41e274:	afbc0018 	sw	gp,24(sp)
  41e278:	afa404a0 	sw	a0,1184(sp)
  41e27c:	afa504a4 	sw	a1,1188(sp)
  41e280:	afa604a8 	sw	a2,1192(sp)
  41e284:	10800003 	beqz	a0,41e294 <editCB+0x170>
  41e288:	afa704ac 	sw	a3,1196(sp)
  41e28c:	14a00010 	bnez	a1,41e2d0 <editCB+0x1ac>
  41e290:	00000000 	nop
  41e294:	8f85805c 	lw	a1,-32676(gp)
  41e298:	8f9983e4 	lw	t9,-31772(gp)
  41e29c:	8fa604b0 	lw	a2,1200(sp)
  41e2a0:	27a4003c 	addiu	a0,sp,60
  41e2a4:	0320f809 	jalr	t9
  41e2a8:	24a5b358 	addiu	a1,a1,-19624
  41e2ac:	8fbc0018 	lw	gp,24(sp)
  41e2b0:	27a4003c 	addiu	a0,sp,60
  41e2b4:	8f998570 	lw	t9,-31376(gp)
  41e2b8:	00000000 	nop
  41e2bc:	0320f809 	jalr	t9
  41e2c0:	00000000 	nop
  41e2c4:	8fbc0018 	lw	gp,24(sp)
  41e2c8:	10000174 	b	41e89c <editCB+0x778>
  41e2cc:	8fbf001c 	lw	ra,28(sp)
  41e2d0:	8f99857c 	lw	t9,-31364(gp)
  41e2d4:	8fa504a0 	lw	a1,1184(sp)
  41e2d8:	0320f809 	jalr	t9
  41e2dc:	00002025 	move	a0,zero
  41e2e0:	8fbc0018 	lw	gp,24(sp)
  41e2e4:	8fb804a4 	lw	t8,1188(sp)
  41e2e8:	8f99831c 	lw	t9,-31972(gp)
  41e2ec:	afa20038 	sw	v0,56(sp)
  41e2f0:	8f050000 	lw	a1,0(t8)
  41e2f4:	0320f809 	jalr	t9
  41e2f8:	00402025 	move	a0,v0
  41e2fc:	8fa304a4 	lw	v1,1188(sp)
  41e300:	8fbc0018 	lw	gp,24(sp)
  41e304:	8c640020 	lw	a0,32(v1)
  41e308:	8fa604b0 	lw	a2,1200(sp)
  41e30c:	14800010 	bnez	a0,41e350 <editCB+0x22c>
  41e310:	00000000 	nop
  41e314:	8f85805c 	lw	a1,-32676(gp)
  41e318:	8f9983e4 	lw	t9,-31772(gp)
  41e31c:	8c670000 	lw	a3,0(v1)
  41e320:	27a4003c 	addiu	a0,sp,60
  41e324:	0320f809 	jalr	t9
  41e328:	24a5b380 	addiu	a1,a1,-19584
  41e32c:	8fbc0018 	lw	gp,24(sp)
  41e330:	27a4003c 	addiu	a0,sp,60
  41e334:	8f998570 	lw	t9,-31376(gp)
  41e338:	00000000 	nop
  41e33c:	0320f809 	jalr	t9
  41e340:	00000000 	nop
  41e344:	8fbc0018 	lw	gp,24(sp)
  41e348:	10000154 	b	41e89c <editCB+0x778>
  41e34c:	8fbf001c 	lw	ra,28(sp)
  41e350:	8f998824 	lw	t9,-30684(gp)
  41e354:	8fa504a8 	lw	a1,1192(sp)
  41e358:	0320f809 	jalr	t9
  41e35c:	00000000 	nop
  41e360:	8fbc0018 	lw	gp,24(sp)
  41e364:	14400012 	bnez	v0,41e3b0 <editCB+0x28c>
  41e368:	afa20034 	sw	v0,52(sp)
  41e36c:	8fb904a4 	lw	t9,1188(sp)
  41e370:	8f85805c 	lw	a1,-32676(gp)
  41e374:	8f270000 	lw	a3,0(t9)
  41e378:	8f9983e4 	lw	t9,-31772(gp)
  41e37c:	8fa604b0 	lw	a2,1200(sp)
  41e380:	27a4003c 	addiu	a0,sp,60
  41e384:	0320f809 	jalr	t9
  41e388:	24a5b398 	addiu	a1,a1,-19560
  41e38c:	8fbc0018 	lw	gp,24(sp)
  41e390:	27a4003c 	addiu	a0,sp,60
  41e394:	8f998570 	lw	t9,-31376(gp)
  41e398:	00000000 	nop
  41e39c:	0320f809 	jalr	t9
  41e3a0:	00000000 	nop
  41e3a4:	8fbc0018 	lw	gp,24(sp)
  41e3a8:	1000013c 	b	41e89c <editCB+0x778>
  41e3ac:	8fbf001c 	lw	ra,28(sp)
  41e3b0:	93a804af 	lbu	t0,1199(sp)
  41e3b4:	00000000 	nop
  41e3b8:	1100001e 	beqz	t0,41e434 <editCB+0x310>
  41e3bc:	00000000 	nop
  41e3c0:	8f898a24 	lw	t1,-30172(gp)
  41e3c4:	00000000 	nop
  41e3c8:	91290006 	lbu	t1,6(t1)
  41e3cc:	00000000 	nop
  41e3d0:	11200018 	beqz	t1,41e434 <editCB+0x310>
  41e3d4:	00000000 	nop
  41e3d8:	8f84805c 	lw	a0,-32676(gp)
  41e3dc:	8f9983e0 	lw	t9,-31776(gp)
  41e3e0:	2484b3bc 	addiu	a0,a0,-19524
  41e3e4:	0320f809 	jalr	t9
  41e3e8:	00000000 	nop
  41e3ec:	8fbc0018 	lw	gp,24(sp)
  41e3f0:	8fa40034 	lw	a0,52(sp)
  41e3f4:	8f85805c 	lw	a1,-32676(gp)
  41e3f8:	8f9980f0 	lw	t9,-32528(gp)
  41e3fc:	00403025 	move	a2,v0
  41e400:	0320f809 	jalr	t9
  41e404:	24a5b3b0 	addiu	a1,a1,-19536
  41e408:	8fbc0018 	lw	gp,24(sp)
  41e40c:	14400009 	bnez	v0,41e434 <editCB+0x310>
  41e410:	00000000 	nop
  41e414:	8f998764 	lw	t9,-30876(gp)
  41e418:	8fa404a0 	lw	a0,1184(sp)
  41e41c:	8fa504a4 	lw	a1,1188(sp)
  41e420:	0320f809 	jalr	t9
  41e424:	00000000 	nop
  41e428:	8fbc0018 	lw	gp,24(sp)
  41e42c:	1000011b 	b	41e89c <editCB+0x778>
  41e430:	8fbf001c 	lw	ra,28(sp)
  41e434:	8f99856c 	lw	t9,-31380(gp)
  41e438:	8fa404b4 	lw	a0,1204(sp)
  41e43c:	8fa50038 	lw	a1,56(sp)
  41e440:	0320f809 	jalr	t9
  41e444:	240607d0 	li	a2,2000
  41e448:	8fbc0018 	lw	gp,24(sp)
  41e44c:	00000000 	nop
  41e450:	8f8a8068 	lw	t2,-32664(gp)
  41e454:	00000000 	nop
  41e458:	914a6e58 	lbu	t2,28248(t2)
  41e45c:	00000000 	nop
  41e460:	1140009a 	beqz	t2,41e6cc <editCB+0x5a8>
  41e464:	00000000 	nop
  41e468:	8f84805c 	lw	a0,-32676(gp)
  41e46c:	8f9983e0 	lw	t9,-31776(gp)
  41e470:	2484b3d0 	addiu	a0,a0,-19504
  41e474:	0320f809 	jalr	t9
  41e478:	00000000 	nop
  41e47c:	8fbc0018 	lw	gp,24(sp)
  41e480:	24440001 	addiu	a0,v0,1
  41e484:	8f9984c0 	lw	t9,-31552(gp)
  41e488:	00000000 	nop
  41e48c:	0320f809 	jalr	t9
  41e490:	00000000 	nop
  41e494:	8fbc0018 	lw	gp,24(sp)
  41e498:	00402025 	move	a0,v0
  41e49c:	8f8b805c 	lw	t3,-32676(gp)
  41e4a0:	00000000 	nop
  41e4a4:	256bb3d8 	addiu	t3,t3,-19496
  41e4a8:	89610000 	lwl	at,0(t3)
  41e4ac:	99610003 	lwr	at,3(t3)
  41e4b0:	00000000 	nop
  41e4b4:	a8410000 	swl	at,0(v0)
  41e4b8:	b8410003 	swr	at,3(v0)
  41e4bc:	91610004 	lbu	at,4(t3)
  41e4c0:	00000000 	nop
  41e4c4:	a0410004 	sb	at,4(v0)
  41e4c8:	916d0005 	lbu	t5,5(t3)
  41e4cc:	00000000 	nop
  41e4d0:	a04d0005 	sb	t5,5(v0)
  41e4d4:	8f9983e8 	lw	t9,-31768(gp)
  41e4d8:	00000000 	nop
  41e4dc:	0320f809 	jalr	t9
  41e4e0:	00000000 	nop
  41e4e4:	8fbc0018 	lw	gp,24(sp)
  41e4e8:	00000000 	nop
  41e4ec:	8f84805c 	lw	a0,-32676(gp)
  41e4f0:	8f9983e0 	lw	t9,-31776(gp)
  41e4f4:	2484b3ec 	addiu	a0,a0,-19476
  41e4f8:	0320f809 	jalr	t9
  41e4fc:	00000000 	nop
  41e500:	8fbc0018 	lw	gp,24(sp)
  41e504:	24440001 	addiu	a0,v0,1
  41e508:	8f9984c0 	lw	t9,-31552(gp)
  41e50c:	00000000 	nop
  41e510:	0320f809 	jalr	t9
  41e514:	00000000 	nop
  41e518:	8fbc0018 	lw	gp,24(sp)
  41e51c:	00402025 	move	a0,v0
  41e520:	8f8e805c 	lw	t6,-32676(gp)
  41e524:	00000000 	nop
  41e528:	25ceb3f8 	addiu	t6,t6,-19464
  41e52c:	89c10000 	lwl	at,0(t6)
  41e530:	99c10003 	lwr	at,3(t6)
  41e534:	00000000 	nop
  41e538:	a8410000 	swl	at,0(v0)
  41e53c:	b8410003 	swr	at,3(v0)
  41e540:	89d80004 	lwl	t8,4(t6)
  41e544:	99d80007 	lwr	t8,7(t6)
  41e548:	00000000 	nop
  41e54c:	a8580004 	swl	t8,4(v0)
  41e550:	b8580007 	swr	t8,7(v0)
  41e554:	91c10008 	lbu	at,8(t6)
  41e558:	00000000 	nop
  41e55c:	a0410008 	sb	at,8(v0)
  41e560:	91d80009 	lbu	t8,9(t6)
  41e564:	00000000 	nop
  41e568:	a0580009 	sb	t8,9(v0)
  41e56c:	8f9983e8 	lw	t9,-31768(gp)
  41e570:	00000000 	nop
  41e574:	0320f809 	jalr	t9
  41e578:	00000000 	nop
  41e57c:	8fbc0018 	lw	gp,24(sp)
  41e580:	00000000 	nop
  41e584:	8f84805c 	lw	a0,-32676(gp)
  41e588:	8f9983e0 	lw	t9,-31776(gp)
  41e58c:	2484b414 	addiu	a0,a0,-19436
  41e590:	0320f809 	jalr	t9
  41e594:	00000000 	nop
  41e598:	8fbc0018 	lw	gp,24(sp)
  41e59c:	24440001 	addiu	a0,v0,1
  41e5a0:	8f9984c0 	lw	t9,-31552(gp)
  41e5a4:	00000000 	nop
  41e5a8:	0320f809 	jalr	t9
  41e5ac:	00000000 	nop
  41e5b0:	8fbc0018 	lw	gp,24(sp)
  41e5b4:	00402025 	move	a0,v0
  41e5b8:	8f99805c 	lw	t9,-32676(gp)
  41e5bc:	00000000 	nop
  41e5c0:	2739b424 	addiu	t9,t9,-19420
  41e5c4:	8b210000 	lwl	at,0(t9)
  41e5c8:	9b210003 	lwr	at,3(t9)
  41e5cc:	00000000 	nop
  41e5d0:	a8410000 	swl	at,0(v0)
  41e5d4:	b8410003 	swr	at,3(v0)
  41e5d8:	8b290004 	lwl	t1,4(t9)
  41e5dc:	9b290007 	lwr	t1,7(t9)
  41e5e0:	00000000 	nop
  41e5e4:	a8490004 	swl	t1,4(v0)
  41e5e8:	b8490007 	swr	t1,7(v0)
  41e5ec:	8b210008 	lwl	at,8(t9)
  41e5f0:	9b21000b 	lwr	at,11(t9)
  41e5f4:	00000000 	nop
  41e5f8:	a8410008 	swl	at,8(v0)
  41e5fc:	b841000b 	swr	at,11(v0)
  41e600:	9321000c 	lbu	at,12(t9)
  41e604:	00000000 	nop
  41e608:	a041000c 	sb	at,12(v0)
  41e60c:	9329000d 	lbu	t1,13(t9)
  41e610:	00000000 	nop
  41e614:	a049000d 	sb	t1,13(v0)
  41e618:	8f9983e8 	lw	t9,-31768(gp)
  41e61c:	00000000 	nop
  41e620:	0320f809 	jalr	t9
  41e624:	00000000 	nop
  41e628:	8fbc0018 	lw	gp,24(sp)
  41e62c:	00000000 	nop
  41e630:	8f84805c 	lw	a0,-32676(gp)
  41e634:	8f9983e0 	lw	t9,-31776(gp)
  41e638:	2484b43c 	addiu	a0,a0,-19396
  41e63c:	0320f809 	jalr	t9
  41e640:	00000000 	nop
  41e644:	8fbc0018 	lw	gp,24(sp)
  41e648:	24440001 	addiu	a0,v0,1
  41e64c:	8f9984c0 	lw	t9,-31552(gp)
  41e650:	00000000 	nop
  41e654:	0320f809 	jalr	t9
  41e658:	00000000 	nop
  41e65c:	8fbc0018 	lw	gp,24(sp)
  41e660:	00402025 	move	a0,v0
  41e664:	8f8a805c 	lw	t2,-32676(gp)
  41e668:	00000000 	nop
  41e66c:	254ab444 	addiu	t2,t2,-19388
  41e670:	89410000 	lwl	at,0(t2)
  41e674:	99410003 	lwr	at,3(t2)
  41e678:	00000000 	nop
  41e67c:	a8410000 	swl	at,0(v0)
  41e680:	b8410003 	swr	at,3(v0)
  41e684:	91410004 	lbu	at,4(t2)
  41e688:	00000000 	nop
  41e68c:	a0410004 	sb	at,4(v0)
  41e690:	914b0005 	lbu	t3,5(t2)
  41e694:	00000000 	nop
  41e698:	a04b0005 	sb	t3,5(v0)
  41e69c:	91410006 	lbu	at,6(t2)
  41e6a0:	00000000 	nop
  41e6a4:	a0410006 	sb	at,6(v0)
  41e6a8:	8f9983e8 	lw	t9,-31768(gp)
  41e6ac:	00000000 	nop
  41e6b0:	0320f809 	jalr	t9
  41e6b4:	00000000 	nop
  41e6b8:	8fbc0018 	lw	gp,24(sp)
  41e6bc:	00000000 	nop
  41e6c0:	8f818068 	lw	at,-32664(gp)
  41e6c4:	00000000 	nop
  41e6c8:	a0206e58 	sb	zero,28248(at)
  41e6cc:	8f85805c 	lw	a1,-32676(gp)
  41e6d0:	8f9983e4 	lw	t9,-31772(gp)
  41e6d4:	8fa60038 	lw	a2,56(sp)
  41e6d8:	27a4003c 	addiu	a0,sp,60
  41e6dc:	0320f809 	jalr	t9
  41e6e0:	24a5b44c 	addiu	a1,a1,-19380
  41e6e4:	8fbc0018 	lw	gp,24(sp)
  41e6e8:	27a4003c 	addiu	a0,sp,60
  41e6ec:	8f9983e0 	lw	t9,-31776(gp)
  41e6f0:	00000000 	nop
  41e6f4:	0320f809 	jalr	t9
  41e6f8:	00000000 	nop
  41e6fc:	8fbc0018 	lw	gp,24(sp)
  41e700:	24440001 	addiu	a0,v0,1
  41e704:	8f9984c0 	lw	t9,-31552(gp)
  41e708:	00000000 	nop
  41e70c:	0320f809 	jalr	t9
  41e710:	00000000 	nop
  41e714:	8fbc0018 	lw	gp,24(sp)
  41e718:	00402025 	move	a0,v0
  41e71c:	8f998134 	lw	t9,-32460(gp)
  41e720:	27a5003c 	addiu	a1,sp,60
  41e724:	0320f809 	jalr	t9
  41e728:	00000000 	nop
  41e72c:	8fbc0018 	lw	gp,24(sp)
  41e730:	00402025 	move	a0,v0
  41e734:	8f9983e8 	lw	t9,-31768(gp)
  41e738:	afa20030 	sw	v0,48(sp)
  41e73c:	0320f809 	jalr	t9
  41e740:	00000000 	nop
  41e744:	8fbc0018 	lw	gp,24(sp)
  41e748:	00000000 	nop
  41e74c:	8f85806c 	lw	a1,-32660(gp)
  41e750:	00000000 	nop
  41e754:	8ca56bdc 	lw	a1,27612(a1)
  41e758:	00000000 	nop
  41e75c:	10a00009 	beqz	a1,41e784 <editCB+0x660>
  41e760:	8fad04a4 	lw	t5,1188(sp)
  41e764:	8f81806c 	lw	at,-32660(gp)
  41e768:	8f998174 	lw	t9,-32396(gp)
  41e76c:	00a02025 	move	a0,a1
  41e770:	0320f809 	jalr	t9
  41e774:	ac256bdc 	sw	a1,27612(at)
  41e778:	8fbc0018 	lw	gp,24(sp)
  41e77c:	00000000 	nop
  41e780:	8fad04a4 	lw	t5,1188(sp)
  41e784:	8fa50030 	lw	a1,48(sp)
  41e788:	8f81806c 	lw	at,-32660(gp)
  41e78c:	8f998820 	lw	t9,-30688(gp)
  41e790:	8da40020 	lw	a0,32(t5)
  41e794:	0320f809 	jalr	t9
  41e798:	ac256bdc 	sw	a1,27612(at)
  41e79c:	8fbc0018 	lw	gp,24(sp)
  41e7a0:	27a4003c 	addiu	a0,sp,60
  41e7a4:	8f85805c 	lw	a1,-32676(gp)
  41e7a8:	8f9983e4 	lw	t9,-31772(gp)
  41e7ac:	00403025 	move	a2,v0
  41e7b0:	0320f809 	jalr	t9
  41e7b4:	24a5b458 	addiu	a1,a1,-19368
  41e7b8:	8fbc0018 	lw	gp,24(sp)
  41e7bc:	27a4003c 	addiu	a0,sp,60
  41e7c0:	8f9983e0 	lw	t9,-31776(gp)
  41e7c4:	00000000 	nop
  41e7c8:	0320f809 	jalr	t9
  41e7cc:	00000000 	nop
  41e7d0:	8fbc0018 	lw	gp,24(sp)
  41e7d4:	24440001 	addiu	a0,v0,1
  41e7d8:	8f9984c0 	lw	t9,-31552(gp)
  41e7dc:	00000000 	nop
  41e7e0:	0320f809 	jalr	t9
  41e7e4:	00000000 	nop
  41e7e8:	8fbc0018 	lw	gp,24(sp)
  41e7ec:	00402025 	move	a0,v0
  41e7f0:	8f998134 	lw	t9,-32460(gp)
  41e7f4:	27a5003c 	addiu	a1,sp,60
  41e7f8:	0320f809 	jalr	t9
  41e7fc:	00000000 	nop
  41e800:	8fbc0018 	lw	gp,24(sp)
  41e804:	00402025 	move	a0,v0
  41e808:	8f9983e8 	lw	t9,-31768(gp)
  41e80c:	afa20030 	sw	v0,48(sp)
  41e810:	0320f809 	jalr	t9
  41e814:	00000000 	nop
  41e818:	8fbc0018 	lw	gp,24(sp)
  41e81c:	00000000 	nop
  41e820:	8f87806c 	lw	a3,-32660(gp)
  41e824:	00000000 	nop
  41e828:	8ce76be0 	lw	a3,27616(a3)
  41e82c:	00000000 	nop
  41e830:	10e00008 	beqz	a3,41e854 <editCB+0x730>
  41e834:	00000000 	nop
  41e838:	8f81806c 	lw	at,-32660(gp)
  41e83c:	8f998174 	lw	t9,-32396(gp)
  41e840:	00e02025 	move	a0,a3
  41e844:	0320f809 	jalr	t9
  41e848:	ac276be0 	sw	a3,27616(at)
  41e84c:	8fbc0018 	lw	gp,24(sp)
  41e850:	00000000 	nop
  41e854:	8fa70030 	lw	a3,48(sp)
  41e858:	8f85805c 	lw	a1,-32676(gp)
  41e85c:	8f81806c 	lw	at,-32660(gp)
  41e860:	8f9983e4 	lw	t9,-31772(gp)
  41e864:	8fa60034 	lw	a2,52(sp)
  41e868:	27a4003c 	addiu	a0,sp,60
  41e86c:	24a5b468 	addiu	a1,a1,-19352
  41e870:	0320f809 	jalr	t9
  41e874:	ac276be0 	sw	a3,27616(at)
  41e878:	8fbc0018 	lw	gp,24(sp)
  41e87c:	27a4003c 	addiu	a0,sp,60
  41e880:	8f9987f0 	lw	t9,-30736(gp)
  41e884:	00000000 	nop
  41e888:	0320f809 	jalr	t9
  41e88c:	00000000 	nop
  41e890:	8fbc0018 	lw	gp,24(sp)
  41e894:	00000000 	nop
  41e898:	8fbf001c 	lw	ra,28(sp)
  41e89c:	27bd04a0 	addiu	sp,sp,1184
  41e8a0:	03e00008 	jr	ra
  41e8a4:	00000000 	nop
