# Function: FUN_004382f4
# Address: 0x004382f4 - 0x00438688
# Size: 0x394 (916 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004382f4 <GlobMatch__FPcT1+0xc>:
  4382f4:	27bdff40 	addiu	sp,sp,-192
  4382f8:	afb00018 	sw	s0,24(sp)
  4382fc:	afbf002c 	sw	ra,44(sp)
  438300:	afbc0028 	sw	gp,40(sp)
  438304:	afb30024 	sw	s3,36(sp)
  438308:	afb20020 	sw	s2,32(sp)
  43830c:	afb1001c 	sw	s1,28(sp)
  438310:	00805025 	move	t2,a0
  438314:	00a08025 	move	s0,a1
  438318:	90a50000 	lbu	a1,0(a1)
  43831c:	8fa40048 	lw	a0,72(sp)
  438320:	27b10054 	addiu	s1,sp,84
  438324:	2412007b 	li	s2,123
  438328:	2413002a 	li	s3,42
  43832c:	241f005b 	li	ra,91
  438330:	240d007d 	li	t5,125
  438334:	240c002d 	li	t4,45
  438338:	240b007b 	li	t3,123
  43833c:	2409005d 	li	t1,93
  438340:	2408005c 	li	t0,92
  438344:	2406005b 	li	a2,91
  438348:	10ab000e 	beq	a1,t3,438384 <GlobMatch__FPcT1+0x9c>
  43834c:	00a01025 	move	v0,a1
  438350:	10a6004e 	beq	a1,a2,43848c <GlobMatch__FPcT1+0x1a4>
  438354:	26070001 	addiu	a3,s0,1
  438358:	10b3008c 	beq	a1,s3,43858c <GlobMatch__FPcT1+0x2a4>
  43835c:	2401003f 	li	at,63
  438360:	104100a2 	beq	v0,at,4385ec <GlobMatch__FPcT1+0x304>
  438364:	00000000 	nop
  438368:	104000a9 	beqz	v0,438610 <GlobMatch__FPcT1+0x328>
  43836c:	00000000 	nop
  438370:	104800af 	beq	v0,t0,438630 <GlobMatch__FPcT1+0x348>
  438374:	00000000 	nop
  438378:	91430000 	lbu	v1,0(t2)
  43837c:	100000b5 	b	438654 <GlobMatch__FPcT1+0x36c>
  438380:	00000000 	nop
  438384:	27a30055 	addiu	v1,sp,85
  438388:	a3b20054 	sb	s2,84(sp)
  43838c:	26040001 	addiu	a0,s0,1
  438390:	90820000 	lbu	v0,0(a0)
  438394:	00000000 	nop
  438398:	1040000d 	beqz	v0,4383d0 <GlobMatch__FPcT1+0xe8>
  43839c:	00000000 	nop
  4383a0:	104b000d 	beq	v0,t3,4383d8 <GlobMatch__FPcT1+0xf0>
  4383a4:	00000000 	nop
  4383a8:	104d0013 	beq	v0,t5,4383f8 <GlobMatch__FPcT1+0x110>
  4383ac:	00000000 	nop
  4383b0:	1046001e 	beq	v0,a2,43842c <GlobMatch__FPcT1+0x144>
  4383b4:	00000000 	nop
  4383b8:	10490024 	beq	v0,t1,43844c <GlobMatch__FPcT1+0x164>
  4383bc:	00000000 	nop
  4383c0:	1048002a 	beq	v0,t0,43846c <GlobMatch__FPcT1+0x184>
  4383c4:	00000000 	nop
  4383c8:	1000fff1 	b	438390 <GlobMatch__FPcT1+0xa8>
  4383cc:	24840001 	addiu	a0,a0,1
  4383d0:	100000a6 	b	43866c <GlobMatch__FPcT1+0x384>
  4383d4:	00001025 	move	v0,zero
  4383d8:	906effff 	lbu	t6,-1(v1)
  4383dc:	00601025 	move	v0,v1
  4383e0:	10ce0003 	beq	a2,t6,4383f0 <GlobMatch__FPcT1+0x108>
  4383e4:	00000000 	nop
  4383e8:	24630001 	addiu	v1,v1,1
  4383ec:	a0520000 	sb	s2,0(v0)
  4383f0:	1000ffe7 	b	438390 <GlobMatch__FPcT1+0xa8>
  4383f4:	24840001 	addiu	a0,a0,1
  4383f8:	906fffff 	lbu	t7,-1(v1)
  4383fc:	2463ffff 	addiu	v1,v1,-1
  438400:	14cf0003 	bne	a2,t7,438410 <GlobMatch__FPcT1+0x128>
  438404:	00000000 	nop
  438408:	1000ffe1 	b	438390 <GlobMatch__FPcT1+0xa8>
  43840c:	24840002 	addiu	a0,a0,2
  438410:	14710004 	bne	v1,s1,438424 <GlobMatch__FPcT1+0x13c>
  438414:	00000000 	nop
  438418:	92050000 	lbu	a1,0(s0)
  43841c:	1000ffca 	b	438348 <GlobMatch__FPcT1+0x60>
  438420:	00000000 	nop
  438424:	1000ffda 	b	438390 <GlobMatch__FPcT1+0xa8>
  438428:	24840001 	addiu	a0,a0,1
  43842c:	9078ffff 	lbu	t8,-1(v1)
  438430:	00601025 	move	v0,v1
  438434:	10d80003 	beq	a2,t8,438444 <GlobMatch__FPcT1+0x15c>
  438438:	00000000 	nop
  43843c:	24630001 	addiu	v1,v1,1
  438440:	a05f0000 	sb	ra,0(v0)
  438444:	1000ffd2 	b	438390 <GlobMatch__FPcT1+0xa8>
  438448:	24840001 	addiu	a0,a0,1
  43844c:	9079ffff 	lbu	t9,-1(v1)
  438450:	2463ffff 	addiu	v1,v1,-1
  438454:	10d90003 	beq	a2,t9,438464 <GlobMatch__FPcT1+0x17c>
  438458:	00000000 	nop
  43845c:	10000083 	b	43866c <GlobMatch__FPcT1+0x384>
  438460:	00001025 	move	v0,zero
  438464:	1000ffca 	b	438390 <GlobMatch__FPcT1+0xa8>
  438468:	24840001 	addiu	a0,a0,1
  43846c:	908e0001 	lbu	t6,1(a0)
  438470:	24840001 	addiu	a0,a0,1
  438474:	15c00003 	bnez	t6,438484 <GlobMatch__FPcT1+0x19c>
  438478:	00000000 	nop
  43847c:	1000007b 	b	43866c <GlobMatch__FPcT1+0x384>
  438480:	00001025 	move	v0,zero
  438484:	1000ffc2 	b	438390 <GlobMatch__FPcT1+0xa8>
  438488:	24840001 	addiu	a0,a0,1
  43848c:	00e02025 	move	a0,a3
  438490:	90820000 	lbu	v0,0(a0)
  438494:	00000000 	nop
  438498:	10400007 	beqz	v0,4384b8 <GlobMatch__FPcT1+0x1d0>
  43849c:	00000000 	nop
  4384a0:	10490007 	beq	v0,t1,4384c0 <GlobMatch__FPcT1+0x1d8>
  4384a4:	00000000 	nop
  4384a8:	10480007 	beq	v0,t0,4384c8 <GlobMatch__FPcT1+0x1e0>
  4384ac:	00000000 	nop
  4384b0:	1000fff7 	b	438490 <GlobMatch__FPcT1+0x1a8>
  4384b4:	24840001 	addiu	a0,a0,1
  4384b8:	1000006c 	b	43866c <GlobMatch__FPcT1+0x384>
  4384bc:	00001025 	move	v0,zero
  4384c0:	10000009 	b	4384e8 <GlobMatch__FPcT1+0x200>
  4384c4:	00e02825 	move	a1,a3
  4384c8:	908f0001 	lbu	t7,1(a0)
  4384cc:	24840001 	addiu	a0,a0,1
  4384d0:	15e00003 	bnez	t7,4384e0 <GlobMatch__FPcT1+0x1f8>
  4384d4:	00000000 	nop
  4384d8:	10000064 	b	43866c <GlobMatch__FPcT1+0x384>
  4384dc:	00001025 	move	v0,zero
  4384e0:	1000ffeb 	b	438490 <GlobMatch__FPcT1+0x1a8>
  4384e4:	24840001 	addiu	a0,a0,1
  4384e8:	00e4082b 	sltu	at,a3,a0
  4384ec:	10200020 	beqz	at,438570 <GlobMatch__FPcT1+0x288>
  4384f0:	00000000 	nop
  4384f4:	91430000 	lbu	v1,0(t2)
  4384f8:	00000000 	nop
  4384fc:	90a20000 	lbu	v0,0(a1)
  438500:	00000000 	nop
  438504:	15820012 	bne	t4,v0,438550 <GlobMatch__FPcT1+0x268>
  438508:	00000000 	nop
  43850c:	10a70010 	beq	a1,a3,438550 <GlobMatch__FPcT1+0x268>
  438510:	24b80001 	addiu	t8,a1,1
  438514:	1304000e 	beq	t8,a0,438550 <GlobMatch__FPcT1+0x268>
  438518:	00000000 	nop
  43851c:	90b9ffff 	lbu	t9,-1(a1)
  438520:	00000000 	nop
  438524:	0079082a 	slt	at,v1,t9
  438528:	1420000e 	bnez	at,438564 <GlobMatch__FPcT1+0x27c>
  43852c:	00000000 	nop
  438530:	90ae0001 	lbu	t6,1(a1)
  438534:	00000000 	nop
  438538:	01c3082a 	slt	at,t6,v1
  43853c:	14200009 	bnez	at,438564 <GlobMatch__FPcT1+0x27c>
  438540:	00000000 	nop
  438544:	24900001 	addiu	s0,a0,1
  438548:	10000009 	b	438570 <GlobMatch__FPcT1+0x288>
  43854c:	254a0001 	addiu	t2,t2,1
  438550:	14430004 	bne	v0,v1,438564 <GlobMatch__FPcT1+0x27c>
  438554:	00000000 	nop
  438558:	24900001 	addiu	s0,a0,1
  43855c:	10000004 	b	438570 <GlobMatch__FPcT1+0x288>
  438560:	254a0001 	addiu	t2,t2,1
  438564:	24a50001 	addiu	a1,a1,1
  438568:	14a4ffe4 	bne	a1,a0,4384fc <GlobMatch__FPcT1+0x214>
  43856c:	00000000 	nop
  438570:	14a40003 	bne	a1,a0,438580 <GlobMatch__FPcT1+0x298>
  438574:	00000000 	nop
  438578:	1000003c 	b	43866c <GlobMatch__FPcT1+0x384>
  43857c:	00001025 	move	v0,zero
  438580:	92050000 	lbu	a1,0(s0)
  438584:	1000ff70 	b	438348 <GlobMatch__FPcT1+0x60>
  438588:	00000000 	nop
  43858c:	16650005 	bne	s3,a1,4385a4 <GlobMatch__FPcT1+0x2bc>
  438590:	01402025 	move	a0,t2
  438594:	920f0001 	lbu	t7,1(s0)
  438598:	26100001 	addiu	s0,s0,1
  43859c:	126ffffd 	beq	s3,t7,438594 <GlobMatch__FPcT1+0x2ac>
  4385a0:	00000000 	nop
  4385a4:	8f9988b0 	lw	t9,-30544(gp)
  4385a8:	02002825 	move	a1,s0
  4385ac:	0320f809 	jalr	t9
  4385b0:	afa4003c 	sw	a0,60(sp)
  4385b4:	8fbc0028 	lw	gp,40(sp)
  4385b8:	8fa4003c 	lw	a0,60(sp)
  4385bc:	10400003 	beqz	v0,4385cc <GlobMatch__FPcT1+0x2e4>
  4385c0:	00000000 	nop
  4385c4:	10000029 	b	43866c <GlobMatch__FPcT1+0x384>
  4385c8:	24020001 	li	v0,1
  4385cc:	90980000 	lbu	t8,0(a0)
  4385d0:	00000000 	nop
  4385d4:	13000003 	beqz	t8,4385e4 <GlobMatch__FPcT1+0x2fc>
  4385d8:	00000000 	nop
  4385dc:	1000fff1 	b	4385a4 <GlobMatch__FPcT1+0x2bc>
  4385e0:	24840001 	addiu	a0,a0,1
  4385e4:	10000021 	b	43866c <GlobMatch__FPcT1+0x384>
  4385e8:	00001025 	move	v0,zero
  4385ec:	91590000 	lbu	t9,0(t2)
  4385f0:	254a0001 	addiu	t2,t2,1
  4385f4:	17200003 	bnez	t9,438604 <GlobMatch__FPcT1+0x31c>
  4385f8:	00000000 	nop
  4385fc:	1000001b 	b	43866c <GlobMatch__FPcT1+0x384>
  438600:	00001025 	move	v0,zero
  438604:	92050001 	lbu	a1,1(s0)
  438608:	1000ff4f 	b	438348 <GlobMatch__FPcT1+0x60>
  43860c:	26100001 	addiu	s0,s0,1
  438610:	914e0000 	lbu	t6,0(t2)
  438614:	00000000 	nop
  438618:	15c00003 	bnez	t6,438628 <GlobMatch__FPcT1+0x340>
  43861c:	00000000 	nop
  438620:	10000012 	b	43866c <GlobMatch__FPcT1+0x384>
  438624:	24020001 	li	v0,1
  438628:	10000010 	b	43866c <GlobMatch__FPcT1+0x384>
  43862c:	00001025 	move	v0,zero
  438630:	908f0000 	lbu	t7,0(a0)
  438634:	26100001 	addiu	s0,s0,1
  438638:	15e00003 	bnez	t7,438648 <GlobMatch__FPcT1+0x360>
  43863c:	00000000 	nop
  438640:	1000000a 	b	43866c <GlobMatch__FPcT1+0x384>
  438644:	00001025 	move	v0,zero
  438648:	92050000 	lbu	a1,0(s0)
  43864c:	91430000 	lbu	v1,0(t2)
  438650:	00000000 	nop
  438654:	14a30004 	bne	a1,v1,438668 <GlobMatch__FPcT1+0x380>
  438658:	254a0001 	addiu	t2,t2,1
  43865c:	92050001 	lbu	a1,1(s0)
  438660:	1000ff39 	b	438348 <GlobMatch__FPcT1+0x60>
  438664:	26100001 	addiu	s0,s0,1
  438668:	00001025 	move	v0,zero
  43866c:	8fbf002c 	lw	ra,44(sp)
  438670:	8fb00018 	lw	s0,24(sp)
  438674:	8fb1001c 	lw	s1,28(sp)
  438678:	8fb20020 	lw	s2,32(sp)
  43867c:	8fb30024 	lw	s3,36(sp)
  438680:	03e00008 	jr	ra
  438684:	27bd00c0 	addiu	sp,sp,192
