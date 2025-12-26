# Function: FUN_0041f2b4
# Address: 0x0041f2b4 - 0x0041fa18
# Size: 0x764 (1892 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041f2b4 <doIt+0x1a8>:
  41f2b4:	3c1c0fc0 	lui	gp,0xfc0
  41f2b8:	279ce87c 	addiu	gp,gp,-6020
  41f2bc:	0399e021 	addu	gp,gp,t9
  41f2c0:	27bdeb18 	addiu	sp,sp,-5352
  41f2c4:	30af0100 	andi	t7,a1,0x100
  41f2c8:	afbf001c 	sw	ra,28(sp)
  41f2cc:	afbc0018 	sw	gp,24(sp)
  41f2d0:	afa414e8 	sw	a0,5352(sp)
  41f2d4:	afa514ec 	sw	a1,5356(sp)
  41f2d8:	afa614f0 	sw	a2,5360(sp)
  41f2dc:	afa014d8 	sw	zero,5336(sp)
  41f2e0:	11e00007 	beqz	t7,41f300 <doIt+0x1f4>
  41f2e4:	a3a0003e 	sb	zero,62(sp)
  41f2e8:	2401feff 	li	at,-257
  41f2ec:	24180001 	li	t8,1
  41f2f0:	00a1c824 	and	t9,a1,at
  41f2f4:	a3b8003d 	sb	t8,61(sp)
  41f2f8:	10000002 	b	41f304 <doIt+0x1f8>
  41f2fc:	afb914ec 	sw	t9,5356(sp)
  41f300:	a3a0003d 	sb	zero,61(sp)
  41f304:	8f85897c 	lw	a1,-30340(gp)
  41f308:	00000000 	nop
  41f30c:	8ca50000 	lw	a1,0(a1)
  41f310:	00000000 	nop
  41f314:	8ca70044 	lw	a3,68(a1)
  41f318:	00000000 	nop
  41f31c:	10e001bb 	beqz	a3,41fa0c <doIt+0x900>
  41f320:	8fbf001c 	lw	ra,28(sp)
  41f324:	8f838980 	lw	v1,-30336(gp)
  41f328:	00001025 	move	v0,zero
  41f32c:	8c630000 	lw	v1,0(v1)
  41f330:	00000000 	nop
  41f334:	90640c51 	lbu	a0,3153(v1)
  41f338:	00000000 	nop
  41f33c:	10800004 	beqz	a0,41f350 <doIt+0x244>
  41f340:	00000000 	nop
  41f344:	8c620044 	lw	v0,68(v1)
  41f348:	10000001 	b	41f350 <doIt+0x244>
  41f34c:	00000000 	nop
  41f350:	104001ae 	beqz	v0,41fa0c <doIt+0x900>
  41f354:	8fbf001c 	lw	ra,28(sp)
  41f358:	8ca60048 	lw	a2,72(a1)
  41f35c:	00000000 	nop
  41f360:	10c00011 	beqz	a2,41f3a8 <doIt+0x29c>
  41f364:	00000000 	nop
  41f368:	10800004 	beqz	a0,41f37c <doIt+0x270>
  41f36c:	00001025 	move	v0,zero
  41f370:	8c620048 	lw	v0,72(v1)
  41f374:	10000001 	b	41f37c <doIt+0x270>
  41f378:	00000000 	nop
  41f37c:	1440000a 	bnez	v0,41f3a8 <doIt+0x29c>
  41f380:	24090001 	li	t1,1
  41f384:	10800004 	beqz	a0,41f398 <doIt+0x28c>
  41f388:	afa714e4 	sw	a3,5348(sp)
  41f38c:	8c680044 	lw	t0,68(v1)
  41f390:	10000002 	b	41f39c <doIt+0x290>
  41f394:	afa814e0 	sw	t0,5344(sp)
  41f398:	afa014e0 	sw	zero,5344(sp)
  41f39c:	afa614dc 	sw	a2,5340(sp)
  41f3a0:	10000017 	b	41f400 <doIt+0x2f4>
  41f3a4:	a3a9003f 	sb	t1,63(sp)
  41f3a8:	10800004 	beqz	a0,41f3bc <doIt+0x2b0>
  41f3ac:	00001025 	move	v0,zero
  41f3b0:	8c620048 	lw	v0,72(v1)
  41f3b4:	10000001 	b	41f3bc <doIt+0x2b0>
  41f3b8:	00000000 	nop
  41f3bc:	10400193 	beqz	v0,41fa0c <doIt+0x900>
  41f3c0:	8fbf001c 	lw	ra,28(sp)
  41f3c4:	14c00191 	bnez	a2,41fa0c <doIt+0x900>
  41f3c8:	8fbf001c 	lw	ra,28(sp)
  41f3cc:	10800004 	beqz	a0,41f3e0 <doIt+0x2d4>
  41f3d0:	00000000 	nop
  41f3d4:	8c6a0044 	lw	t2,68(v1)
  41f3d8:	10000002 	b	41f3e4 <doIt+0x2d8>
  41f3dc:	afaa14e4 	sw	t2,5348(sp)
  41f3e0:	afa014e4 	sw	zero,5348(sp)
  41f3e4:	10800004 	beqz	a0,41f3f8 <doIt+0x2ec>
  41f3e8:	afa714e0 	sw	a3,5344(sp)
  41f3ec:	8c6b0048 	lw	t3,72(v1)
  41f3f0:	10000002 	b	41f3fc <doIt+0x2f0>
  41f3f4:	afab14dc 	sw	t3,5340(sp)
  41f3f8:	afa014dc 	sw	zero,5340(sp)
  41f3fc:	a3a0003f 	sb	zero,63(sp)
  41f400:	8fac14e4 	lw	t4,5348(sp)
  41f404:	8fad14e0 	lw	t5,5344(sp)
  41f408:	00000000 	nop
  41f40c:	158d0009 	bne	t4,t5,41f434 <doIt+0x328>
  41f410:	00000000 	nop
  41f414:	8f84805c 	lw	a0,-32676(gp)
  41f418:	8f998570 	lw	t9,-31376(gp)
  41f41c:	2484b4c0 	addiu	a0,a0,-19264
  41f420:	0320f809 	jalr	t9
  41f424:	00000000 	nop
  41f428:	8fbc0018 	lw	gp,24(sp)
  41f42c:	10000177 	b	41fa0c <doIt+0x900>
  41f430:	8fbf001c 	lw	ra,28(sp)
  41f434:	8f99857c 	lw	t9,-31364(gp)
  41f438:	8fa514e4 	lw	a1,5348(sp)
  41f43c:	0320f809 	jalr	t9
  41f440:	27a410d8 	addiu	a0,sp,4312
  41f444:	8fbc0018 	lw	gp,24(sp)
  41f448:	8fa514e0 	lw	a1,5344(sp)
  41f44c:	8f99857c 	lw	t9,-31364(gp)
  41f450:	00002025 	move	a0,zero
  41f454:	0320f809 	jalr	t9
  41f458:	00000000 	nop
  41f45c:	8fbc0018 	lw	gp,24(sp)
  41f460:	8faf14dc 	lw	t7,5340(sp)
  41f464:	8f99831c 	lw	t9,-31972(gp)
  41f468:	afa210d4 	sw	v0,4308(sp)
  41f46c:	8de50000 	lw	a1,0(t7)
  41f470:	0320f809 	jalr	t9
  41f474:	27a410d8 	addiu	a0,sp,4312
  41f478:	8fbc0018 	lw	gp,24(sp)
  41f47c:	8fb814dc 	lw	t8,5340(sp)
  41f480:	8f99831c 	lw	t9,-31972(gp)
  41f484:	8fa410d4 	lw	a0,4308(sp)
  41f488:	8f050000 	lw	a1,0(t8)
  41f48c:	0320f809 	jalr	t9
  41f490:	00000000 	nop
  41f494:	93ae003d 	lbu	t6,61(sp)
  41f498:	8fbc0018 	lw	gp,24(sp)
  41f49c:	15c00011 	bnez	t6,41f4e4 <doIt+0x3d8>
  41f4a0:	8fa214dc 	lw	v0,5340(sp)
  41f4a4:	8f9981d8 	lw	t9,-32296(gp)
  41f4a8:	8fa410d4 	lw	a0,4308(sp)
  41f4ac:	0320f809 	jalr	t9
  41f4b0:	00002825 	move	a1,zero
  41f4b4:	8fbc0018 	lw	gp,24(sp)
  41f4b8:	0440000a 	bltz	v0,41f4e4 <doIt+0x3d8>
  41f4bc:	8fa214dc 	lw	v0,5340(sp)
  41f4c0:	8f99801c 	lw	t9,-32740(gp)
  41f4c4:	8fa414ec 	lw	a0,5356(sp)
  41f4c8:	2739f1d8 	addiu	t9,t9,-3624
  41f4cc:	0320f809 	jalr	t9
  41f4d0:	00000000 	nop
  41f4d4:	8fbc0018 	lw	gp,24(sp)
  41f4d8:	1000014c 	b	41fa0c <doIt+0x900>
  41f4dc:	8fbf001c 	lw	ra,28(sp)
  41f4e0:	8fa214dc 	lw	v0,5340(sp)
  41f4e4:	00000000 	nop
  41f4e8:	90480029 	lbu	t0,41(v0)
  41f4ec:	00000000 	nop
  41f4f0:	35090020 	ori	t1,t0,0x20
  41f4f4:	a0490029 	sb	t1,41(v0)
  41f4f8:	8f99873c 	lw	t9,-30916(gp)
  41f4fc:	00000000 	nop
  41f500:	0320f809 	jalr	t9
  41f504:	00000000 	nop
  41f508:	8faa14ec 	lw	t2,5356(sp)
  41f50c:	8fbc0018 	lw	gp,24(sp)
  41f510:	24010001 	li	at,1
  41f514:	15410019 	bne	t2,at,41f57c <doIt+0x470>
  41f518:	8fb914ec 	lw	t9,5356(sp)
  41f51c:	8f99826c 	lw	t9,-32148(gp)
  41f520:	8fa510d4 	lw	a1,4308(sp)
  41f524:	0320f809 	jalr	t9
  41f528:	27a410d8 	addiu	a0,sp,4312
  41f52c:	8fbc0018 	lw	gp,24(sp)
  41f530:	0441000c 	bgez	v0,41f564 <doIt+0x458>
  41f534:	8fad14dc 	lw	t5,5340(sp)
  41f538:	8fab14dc 	lw	t3,5340(sp)
  41f53c:	8f84805c 	lw	a0,-32676(gp)
  41f540:	8f998574 	lw	t9,-31372(gp)
  41f544:	8d650000 	lw	a1,0(t3)
  41f548:	0320f809 	jalr	t9
  41f54c:	2484b4e4 	addiu	a0,a0,-19228
  41f550:	8fbc0018 	lw	gp,24(sp)
  41f554:	240c0001 	li	t4,1
  41f558:	10000007 	b	41f578 <doIt+0x46c>
  41f55c:	a3ac003e 	sb	t4,62(sp)
  41f560:	8fad14dc 	lw	t5,5340(sp)
  41f564:	00000000 	nop
  41f568:	91b80029 	lbu	t8,41(t5)
  41f56c:	00000000 	nop
  41f570:	370e0010 	ori	t6,t8,0x10
  41f574:	a1ae0029 	sb	t6,41(t5)
  41f578:	8fb914ec 	lw	t9,5356(sp)
  41f57c:	24010003 	li	at,3
  41f580:	17210012 	bne	t9,at,41f5cc <doIt+0x4c0>
  41f584:	8faa14ec 	lw	t2,5356(sp)
  41f588:	8f9981d4 	lw	t9,-32300(gp)
  41f58c:	8fa510d4 	lw	a1,4308(sp)
  41f590:	0320f809 	jalr	t9
  41f594:	27a410d8 	addiu	a0,sp,4312
  41f598:	8fbc0018 	lw	gp,24(sp)
  41f59c:	0441000a 	bgez	v0,41f5c8 <doIt+0x4bc>
  41f5a0:	24090001 	li	t1,1
  41f5a4:	8fa814dc 	lw	t0,5340(sp)
  41f5a8:	8f84805c 	lw	a0,-32676(gp)
  41f5ac:	8f998574 	lw	t9,-31372(gp)
  41f5b0:	8d050000 	lw	a1,0(t0)
  41f5b4:	a3a9003e 	sb	t1,62(sp)
  41f5b8:	0320f809 	jalr	t9
  41f5bc:	2484b4f0 	addiu	a0,a0,-19216
  41f5c0:	8fbc0018 	lw	gp,24(sp)
  41f5c4:	00000000 	nop
  41f5c8:	8faa14ec 	lw	t2,5356(sp)
  41f5cc:	24010002 	li	at,2
  41f5d0:	1541003c 	bne	t2,at,41f6c4 <doIt+0x5b8>
  41f5d4:	93ad003e 	lbu	t5,62(sp)
  41f5d8:	8f9981d0 	lw	t9,-32304(gp)
  41f5dc:	27a410d8 	addiu	a0,sp,4312
  41f5e0:	0320f809 	jalr	t9
  41f5e4:	27a50040 	addiu	a1,sp,64
  41f5e8:	8fbc0018 	lw	gp,24(sp)
  41f5ec:	0441000a 	bgez	v0,41f618 <doIt+0x50c>
  41f5f0:	27a510d8 	addiu	a1,sp,4312
  41f5f4:	8f84805c 	lw	a0,-32676(gp)
  41f5f8:	8f998574 	lw	t9,-31372(gp)
  41f5fc:	240b0001 	li	t3,1
  41f600:	a3ab003e 	sb	t3,62(sp)
  41f604:	0320f809 	jalr	t9
  41f608:	2484b4fc 	addiu	a0,a0,-19204
  41f60c:	8fbc0018 	lw	gp,24(sp)
  41f610:	1000002c 	b	41f6c4 <doIt+0x5b8>
  41f614:	93ad003e 	lbu	t5,62(sp)
  41f618:	8f9981cc 	lw	t9,-32308(gp)
  41f61c:	27a410d8 	addiu	a0,sp,4312
  41f620:	0320f809 	jalr	t9
  41f624:	00002825 	move	a1,zero
  41f628:	8fbc0018 	lw	gp,24(sp)
  41f62c:	0441000c 	bgez	v0,41f660 <doIt+0x554>
  41f630:	afa210d0 	sw	v0,4304(sp)
  41f634:	8fac14dc 	lw	t4,5340(sp)
  41f638:	8f84805c 	lw	a0,-32676(gp)
  41f63c:	8f998574 	lw	t9,-31372(gp)
  41f640:	240f0001 	li	t7,1
  41f644:	8d850000 	lw	a1,0(t4)
  41f648:	a3af003e 	sb	t7,62(sp)
  41f64c:	0320f809 	jalr	t9
  41f650:	2484b508 	addiu	a0,a0,-19192
  41f654:	8fbc0018 	lw	gp,24(sp)
  41f658:	1000001a 	b	41f6c4 <doIt+0x5b8>
  41f65c:	93ad003e 	lbu	t5,62(sp)
  41f660:	8f9981cc 	lw	t9,-32308(gp)
  41f664:	8fa410d4 	lw	a0,4308(sp)
  41f668:	8fa60054 	lw	a2,84(sp)
  41f66c:	0320f809 	jalr	t9
  41f670:	24050301 	li	a1,769
  41f674:	8fbc0018 	lw	gp,24(sp)
  41f678:	04410011 	bgez	v0,41f6c0 <doIt+0x5b4>
  41f67c:	afa210cc 	sw	v0,4300(sp)
  41f680:	8fb814dc 	lw	t8,5340(sp)
  41f684:	8f84805c 	lw	a0,-32676(gp)
  41f688:	8f998574 	lw	t9,-31372(gp)
  41f68c:	240e0001 	li	t6,1
  41f690:	8f050000 	lw	a1,0(t8)
  41f694:	a3ae003e 	sb	t6,62(sp)
  41f698:	0320f809 	jalr	t9
  41f69c:	2484b514 	addiu	a0,a0,-19180
  41f6a0:	8fbc0018 	lw	gp,24(sp)
  41f6a4:	8fa410d0 	lw	a0,4304(sp)
  41f6a8:	8f99825c 	lw	t9,-32164(gp)
  41f6ac:	00000000 	nop
  41f6b0:	0320f809 	jalr	t9
  41f6b4:	00000000 	nop
  41f6b8:	8fbc0018 	lw	gp,24(sp)
  41f6bc:	00000000 	nop
  41f6c0:	93ad003e 	lbu	t5,62(sp)
  41f6c4:	8fb914dc 	lw	t9,5340(sp)
  41f6c8:	15a00081 	bnez	t5,41f8d0 <doIt+0x7c4>
  41f6cc:	00000000 	nop
  41f6d0:	8f250000 	lw	a1,0(t9)
  41f6d4:	8f9985d4 	lw	t9,-31276(gp)
  41f6d8:	8fa414e0 	lw	a0,5344(sp)
  41f6dc:	0320f809 	jalr	t9
  41f6e0:	00000000 	nop
  41f6e4:	8fbc0018 	lw	gp,24(sp)
  41f6e8:	00000000 	nop
  41f6ec:	8f998588 	lw	t9,-31352(gp)
  41f6f0:	00000000 	nop
  41f6f4:	0320f809 	jalr	t9
  41f6f8:	00000000 	nop
  41f6fc:	8fbc0018 	lw	gp,24(sp)
  41f700:	8fa814dc 	lw	t0,5340(sp)
  41f704:	8f9985a4 	lw	t9,-31324(gp)
  41f708:	8fa414e0 	lw	a0,5344(sp)
  41f70c:	8d050000 	lw	a1,0(t0)
  41f710:	0320f809 	jalr	t9
  41f714:	00000000 	nop
  41f718:	8fbc0018 	lw	gp,24(sp)
  41f71c:	10400019 	beqz	v0,41f784 <doIt+0x678>
  41f720:	afa214d8 	sw	v0,5336(sp)
  41f724:	93a9003f 	lbu	t1,63(sp)
  41f728:	00000000 	nop
  41f72c:	11200007 	beqz	t1,41f74c <doIt+0x640>
  41f730:	00000000 	nop
  41f734:	8f99876c 	lw	t9,-30868(gp)
  41f738:	24040001 	li	a0,1
  41f73c:	0320f809 	jalr	t9
  41f740:	00000000 	nop
  41f744:	8fbc0018 	lw	gp,24(sp)
  41f748:	00000000 	nop
  41f74c:	8f998644 	lw	t9,-31164(gp)
  41f750:	8fa414d8 	lw	a0,5336(sp)
  41f754:	0320f809 	jalr	t9
  41f758:	00000000 	nop
  41f75c:	93aa003f 	lbu	t2,63(sp)
  41f760:	8fbc0018 	lw	gp,24(sp)
  41f764:	11400008 	beqz	t2,41f788 <doIt+0x67c>
  41f768:	8fab14d8 	lw	t3,5336(sp)
  41f76c:	8f99876c 	lw	t9,-30868(gp)
  41f770:	24040001 	li	a0,1
  41f774:	0320f809 	jalr	t9
  41f778:	00000000 	nop
  41f77c:	8fbc0018 	lw	gp,24(sp)
  41f780:	00000000 	nop
  41f784:	8fab14d8 	lw	t3,5336(sp)
  41f788:	24010002 	li	at,2
  41f78c:	916f0029 	lbu	t7,41(t3)
  41f790:	00000000 	nop
  41f794:	35f80020 	ori	t8,t7,0x20
  41f798:	a1780029 	sb	t8,41(t3)
  41f79c:	8fae14ec 	lw	t6,5356(sp)
  41f7a0:	8fa410d0 	lw	a0,4304(sp)
  41f7a4:	15c1004a 	bne	t6,at,41f8d0 <doIt+0x7c4>
  41f7a8:	00000000 	nop
  41f7ac:	8f9981ec 	lw	t9,-32276(gp)
  41f7b0:	27a500cc 	addiu	a1,sp,204
  41f7b4:	0320f809 	jalr	t9
  41f7b8:	24061000 	li	a2,4096
  41f7bc:	8fbc0018 	lw	gp,24(sp)
  41f7c0:	18400026 	blez	v0,41f85c <doIt+0x750>
  41f7c4:	00403025 	move	a2,v0
  41f7c8:	8f998200 	lw	t9,-32256(gp)
  41f7cc:	8fa410cc 	lw	a0,4300(sp)
  41f7d0:	27a500cc 	addiu	a1,sp,204
  41f7d4:	0320f809 	jalr	t9
  41f7d8:	afa600c8 	sw	a2,200(sp)
  41f7dc:	8fa600c8 	lw	a2,200(sp)
  41f7e0:	8fbc0018 	lw	gp,24(sp)
  41f7e4:	10460010 	beq	v0,a2,41f828 <doIt+0x71c>
  41f7e8:	00000000 	nop
  41f7ec:	8fad14dc 	lw	t5,5340(sp)
  41f7f0:	8f84805c 	lw	a0,-32676(gp)
  41f7f4:	8f998574 	lw	t9,-31372(gp)
  41f7f8:	8da50000 	lw	a1,0(t5)
  41f7fc:	0320f809 	jalr	t9
  41f800:	2484b524 	addiu	a0,a0,-19164
  41f804:	8fbc0018 	lw	gp,24(sp)
  41f808:	8fa410d4 	lw	a0,4308(sp)
  41f80c:	8f998238 	lw	t9,-32200(gp)
  41f810:	00000000 	nop
  41f814:	0320f809 	jalr	t9
  41f818:	00000000 	nop
  41f81c:	8fbc0018 	lw	gp,24(sp)
  41f820:	1000000e 	b	41f85c <doIt+0x750>
  41f824:	00003025 	move	a2,zero
  41f828:	8f998578 	lw	t9,-31368(gp)
  41f82c:	00000000 	nop
  41f830:	0320f809 	jalr	t9
  41f834:	00000000 	nop
  41f838:	8fbc0018 	lw	gp,24(sp)
  41f83c:	8fa410d0 	lw	a0,4304(sp)
  41f840:	8f9981ec 	lw	t9,-32276(gp)
  41f844:	27a500cc 	addiu	a1,sp,204
  41f848:	0320f809 	jalr	t9
  41f84c:	24061000 	li	a2,4096
  41f850:	8fbc0018 	lw	gp,24(sp)
  41f854:	1c40ffdc 	bgtz	v0,41f7c8 <doIt+0x6bc>
  41f858:	00403025 	move	a2,v0
  41f85c:	04c10010 	bgez	a2,41f8a0 <doIt+0x794>
  41f860:	00000000 	nop
  41f864:	8fb914dc 	lw	t9,5340(sp)
  41f868:	8f84805c 	lw	a0,-32676(gp)
  41f86c:	8f250000 	lw	a1,0(t9)
  41f870:	8f998574 	lw	t9,-31372(gp)
  41f874:	2484b530 	addiu	a0,a0,-19152
  41f878:	0320f809 	jalr	t9
  41f87c:	00000000 	nop
  41f880:	8fbc0018 	lw	gp,24(sp)
  41f884:	8fa410d4 	lw	a0,4308(sp)
  41f888:	8f998238 	lw	t9,-32200(gp)
  41f88c:	00000000 	nop
  41f890:	0320f809 	jalr	t9
  41f894:	00000000 	nop
  41f898:	8fbc0018 	lw	gp,24(sp)
  41f89c:	00000000 	nop
  41f8a0:	8f99825c 	lw	t9,-32164(gp)
  41f8a4:	8fa410d0 	lw	a0,4304(sp)
  41f8a8:	0320f809 	jalr	t9
  41f8ac:	00000000 	nop
  41f8b0:	8fbc0018 	lw	gp,24(sp)
  41f8b4:	8fa410cc 	lw	a0,4300(sp)
  41f8b8:	8f99825c 	lw	t9,-32164(gp)
  41f8bc:	00000000 	nop
  41f8c0:	0320f809 	jalr	t9
  41f8c4:	00000000 	nop
  41f8c8:	8fbc0018 	lw	gp,24(sp)
  41f8cc:	00000000 	nop
  41f8d0:	8f998740 	lw	t9,-30912(gp)
  41f8d4:	00000000 	nop
  41f8d8:	0320f809 	jalr	t9
  41f8dc:	00000000 	nop
  41f8e0:	8fa814d8 	lw	t0,5336(sp)
  41f8e4:	8fbc0018 	lw	gp,24(sp)
  41f8e8:	11000006 	beqz	t0,41f904 <doIt+0x7f8>
  41f8ec:	8fac14dc 	lw	t4,5340(sp)
  41f8f0:	91090029 	lbu	t1,41(t0)
  41f8f4:	00000000 	nop
  41f8f8:	312affdf 	andi	t2,t1,0xffdf
  41f8fc:	a10a0029 	sb	t2,41(t0)
  41f900:	8fac14dc 	lw	t4,5340(sp)
  41f904:	00000000 	nop
  41f908:	918f0029 	lbu	t7,41(t4)
  41f90c:	00000000 	nop
  41f910:	31f8ffdf 	andi	t8,t7,0xffdf
  41f914:	a1980029 	sb	t8,41(t4)
  41f918:	8fab14d8 	lw	t3,5336(sp)
  41f91c:	93ae003f 	lbu	t6,63(sp)
  41f920:	11600018 	beqz	t3,41f984 <doIt+0x878>
  41f924:	8fb914ec 	lw	t9,5356(sp)
  41f928:	11c00007 	beqz	t6,41f948 <doIt+0x83c>
  41f92c:	00000000 	nop
  41f930:	8f99876c 	lw	t9,-30868(gp)
  41f934:	24040001 	li	a0,1
  41f938:	0320f809 	jalr	t9
  41f93c:	00000000 	nop
  41f940:	8fbc0018 	lw	gp,24(sp)
  41f944:	00000000 	nop
  41f948:	8f998640 	lw	t9,-31168(gp)
  41f94c:	00000000 	nop
  41f950:	0320f809 	jalr	t9
  41f954:	00000000 	nop
  41f958:	93ad003f 	lbu	t5,63(sp)
  41f95c:	8fbc0018 	lw	gp,24(sp)
  41f960:	11a00008 	beqz	t5,41f984 <doIt+0x878>
  41f964:	8fb914ec 	lw	t9,5356(sp)
  41f968:	8f99876c 	lw	t9,-30868(gp)
  41f96c:	24040001 	li	a0,1
  41f970:	0320f809 	jalr	t9
  41f974:	00000000 	nop
  41f978:	8fbc0018 	lw	gp,24(sp)
  41f97c:	00000000 	nop
  41f980:	8fb914ec 	lw	t9,5356(sp)
  41f984:	24010001 	li	at,1
  41f988:	17210013 	bne	t9,at,41f9d8 <doIt+0x8cc>
  41f98c:	00000000 	nop
  41f990:	8fa914dc 	lw	t1,5340(sp)
  41f994:	8f9985d8 	lw	t9,-31272(gp)
  41f998:	8fa414e4 	lw	a0,5348(sp)
  41f99c:	8d250000 	lw	a1,0(t1)
  41f9a0:	0320f809 	jalr	t9
  41f9a4:	00000000 	nop
  41f9a8:	8faa14dc 	lw	t2,5340(sp)
  41f9ac:	8fbc0018 	lw	gp,24(sp)
  41f9b0:	91480029 	lbu	t0,41(t2)
  41f9b4:	00000000 	nop
  41f9b8:	310fffef 	andi	t7,t0,0xffef
  41f9bc:	a14f0029 	sb	t7,41(t2)
  41f9c0:	8f998588 	lw	t9,-31352(gp)
  41f9c4:	00000000 	nop
  41f9c8:	0320f809 	jalr	t9
  41f9cc:	00000000 	nop
  41f9d0:	8fbc0018 	lw	gp,24(sp)
  41f9d4:	00000000 	nop
  41f9d8:	8f998534 	lw	t9,-31436(gp)
  41f9dc:	00000000 	nop
  41f9e0:	0320f809 	jalr	t9
  41f9e4:	00000000 	nop
  41f9e8:	8fbc0018 	lw	gp,24(sp)
  41f9ec:	00000000 	nop
  41f9f0:	8f998780 	lw	t9,-30848(gp)
  41f9f4:	00000000 	nop
  41f9f8:	0320f809 	jalr	t9
  41f9fc:	00000000 	nop
  41fa00:	8fbc0018 	lw	gp,24(sp)
  41fa04:	00000000 	nop
  41fa08:	8fbf001c 	lw	ra,28(sp)
  41fa0c:	27bd14e8 	addiu	sp,sp,5352
  41fa10:	03e00008 	jr	ra
  41fa14:	00000000 	nop
