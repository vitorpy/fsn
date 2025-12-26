# Function: LoadFileTypingRules__14ByteCodeLoaderFPc
# Address: 0x00434318 - 0x004349ec
# Size: 0x6d4 (1748 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00434318 <LoadFileTypingRules__14ByteCodeLoaderFPc>:
  434318:	3c1c0fbf 	lui	gp,0xfbf
  43431c:	279c9818 	addiu	gp,gp,-26600
  434320:	0399e021 	addu	gp,gp,t9
  434324:	27bdfee0 	addiu	sp,sp,-288
  434328:	afb60030 	sw	s6,48(sp)
  43432c:	8f9981cc 	lw	t9,-32308(gp)
  434330:	0080b025 	move	s6,a0
  434334:	afbf003c 	sw	ra,60(sp)
  434338:	afb70034 	sw	s7,52(sp)
  43433c:	afb20020 	sw	s2,32(sp)
  434340:	00a02025 	move	a0,a1
  434344:	afbc0038 	sw	gp,56(sp)
  434348:	afb5002c 	sw	s5,44(sp)
  43434c:	afb40028 	sw	s4,40(sp)
  434350:	afb30024 	sw	s3,36(sp)
  434354:	afb1001c 	sw	s1,28(sp)
  434358:	afb00018 	sw	s0,24(sp)
  43435c:	00009025 	move	s2,zero
  434360:	0000b825 	move	s7,zero
  434364:	0320f809 	jalr	t9
  434368:	00002825 	move	a1,zero
  43436c:	8fbc0038 	lw	gp,56(sp)
  434370:	2401ffff 	li	at,-1
  434374:	14410003 	bne	v0,at,434384 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x6c>
  434378:	0040a025 	move	s4,v0
  43437c:	10000190 	b	4349c0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x6a8>
  434380:	24020001 	li	v0,1
  434384:	8f9984a8 	lw	t9,-31576(gp)
  434388:	02802025 	move	a0,s4
  43438c:	0320f809 	jalr	t9
  434390:	27a50068 	addiu	a1,sp,104
  434394:	8fb10098 	lw	s1,152(sp)
  434398:	8fbc0038 	lw	gp,56(sp)
  43439c:	2a21000d 	slti	at,s1,13
  4343a0:	10200003 	beqz	at,4343b0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x98>
  4343a4:	27b000f0 	addiu	s0,sp,240
  4343a8:	10000185 	b	4349c0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x6a8>
  4343ac:	24020001 	li	v0,1
  4343b0:	8f9981ec 	lw	t9,-32276(gp)
  4343b4:	02802025 	move	a0,s4
  4343b8:	02002825 	move	a1,s0
  4343bc:	0320f809 	jalr	t9
  4343c0:	2406000c 	li	a2,12
  4343c4:	8fbc0038 	lw	gp,56(sp)
  4343c8:	02002025 	move	a0,s0
  4343cc:	8f9984b0 	lw	t9,-31568(gp)
  4343d0:	8f8589e0 	lw	a1,-30240(gp)
  4343d4:	0320f809 	jalr	t9
  4343d8:	24060004 	li	a2,4
  4343dc:	8fbc0038 	lw	gp,56(sp)
  4343e0:	1440000e 	bnez	v0,43441c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x104>
  4343e4:	27a400f8 	addiu	a0,sp,248
  4343e8:	8f9984b0 	lw	t9,-31568(gp)
  4343ec:	8f8589e8 	lw	a1,-30232(gp)
  4343f0:	0320f809 	jalr	t9
  4343f4:	24060004 	li	a2,4
  4343f8:	8fbc0038 	lw	gp,56(sp)
  4343fc:	14400007 	bnez	v0,43441c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x104>
  434400:	00000000 	nop
  434404:	8f8f89e4 	lw	t7,-30236(gp)
  434408:	8fae00f4 	lw	t6,244(sp)
  43440c:	8def0000 	lw	t7,0(t7)
  434410:	00000000 	nop
  434414:	11cf0003 	beq	t6,t7,434424 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x10c>
  434418:	00000000 	nop
  43441c:	10000168 	b	4349c0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x6a8>
  434420:	24020001 	li	v0,1
  434424:	8f9984a4 	lw	t9,-31580(gp)
  434428:	2631fff4 	addiu	s1,s1,-12
  43442c:	0320f809 	jalr	t9
  434430:	02202025 	move	a0,s1
  434434:	8fbc0038 	lw	gp,56(sp)
  434438:	14400008 	bnez	v0,43445c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x144>
  43443c:	00408025 	move	s0,v0
  434440:	8f99825c 	lw	t9,-32164(gp)
  434444:	02802025 	move	a0,s4
  434448:	0320f809 	jalr	t9
  43444c:	00000000 	nop
  434450:	8fbc0038 	lw	gp,56(sp)
  434454:	1000015a 	b	4349c0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x6a8>
  434458:	24020001 	li	v0,1
  43445c:	8f9981ec 	lw	t9,-32276(gp)
  434460:	02009825 	move	s3,s0
  434464:	02802025 	move	a0,s4
  434468:	02002825 	move	a1,s0
  43446c:	0320f809 	jalr	t9
  434470:	02203025 	move	a2,s1
  434474:	8fbc0038 	lw	gp,56(sp)
  434478:	1222000e 	beq	s1,v0,4344b4 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x19c>
  43447c:	00000000 	nop
  434480:	8f9984cc 	lw	t9,-31540(gp)
  434484:	02002025 	move	a0,s0
  434488:	0320f809 	jalr	t9
  43448c:	00000000 	nop
  434490:	8fbc0038 	lw	gp,56(sp)
  434494:	02802025 	move	a0,s4
  434498:	8f99825c 	lw	t9,-32164(gp)
  43449c:	00000000 	nop
  4344a0:	0320f809 	jalr	t9
  4344a4:	00000000 	nop
  4344a8:	8fbc0038 	lw	gp,56(sp)
  4344ac:	10000144 	b	4349c0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x6a8>
  4344b0:	24020001 	li	v0,1
  4344b4:	8f9984a4 	lw	t9,-31580(gp)
  4344b8:	24040008 	li	a0,8
  4344bc:	0320f809 	jalr	t9
  4344c0:	00000000 	nop
  4344c4:	8ed80010 	lw	t8,16(s6)
  4344c8:	8fbc0038 	lw	gp,56(sp)
  4344cc:	02111821 	addu	v1,s0,s1
  4344d0:	ac500000 	sw	s0,0(v0)
  4344d4:	0203082b 	sltu	at,s0,v1
  4344d8:	ac580004 	sw	t8,4(v0)
  4344dc:	10200137 	beqz	at,4349bc <LoadFileTypingRules__14ByteCodeLoaderFPc+0x6a4>
  4344e0:	aec20010 	sw	v0,16(s6)
  4344e4:	8fb50054 	lw	s5,84(sp)
  4344e8:	8fb40060 	lw	s4,96(sp)
  4344ec:	afa3004c 	sw	v1,76(sp)
  4344f0:	24020001 	li	v0,1
  4344f4:	92790000 	lbu	t9,0(s3)
  4344f8:	00000000 	nop
  4344fc:	a3b90114 	sb	t9,276(sp)
  434500:	92680001 	lbu	t0,1(s3)
  434504:	00000000 	nop
  434508:	a3a80115 	sb	t0,277(sp)
  43450c:	92690002 	lbu	t1,2(s3)
  434510:	00000000 	nop
  434514:	a3a90116 	sb	t1,278(sp)
  434518:	926a0003 	lbu	t2,3(s3)
  43451c:	00000000 	nop
  434520:	a3aa0117 	sb	t2,279(sp)
  434524:	926b0004 	lbu	t3,4(s3)
  434528:	8faf0114 	lw	t7,276(sp)
  43452c:	a3ab0110 	sb	t3,272(sp)
  434530:	926c0005 	lbu	t4,5(s3)
  434534:	8fa90114 	lw	t1,276(sp)
  434538:	a3ac0111 	sb	t4,273(sp)
  43453c:	926d0006 	lbu	t5,6(s3)
  434540:	29e10004 	slti	at,t7,4
  434544:	a3ad0112 	sb	t5,274(sp)
  434548:	926e0007 	lbu	t6,7(s3)
  43454c:	14200008 	bnez	at,434570 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x258>
  434550:	a3ae0113 	sb	t6,275(sp)
  434554:	29e10021 	slti	at,t7,33
  434558:	10200005 	beqz	at,434570 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x258>
  43455c:	26780008 	addiu	t8,s3,8
  434560:	000fc880 	sll	t9,t7,0x2
  434564:	02594021 	addu	t0,s2,t9
  434568:	10000108 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43456c:	ad180040 	sw	t8,64(t0)
  434570:	1122002b 	beq	t1,v0,434620 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x308>
  434574:	24010002 	li	at,2
  434578:	1121003d 	beq	t1,at,434670 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x358>
  43457c:	266e0008 	addiu	t6,s3,8
  434580:	24010003 	li	at,3
  434584:	1121003e 	beq	t1,at,434680 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x368>
  434588:	24010021 	li	at,33
  43458c:	11210041 	beq	t1,at,434694 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x37c>
  434590:	26640008 	addiu	a0,s3,8
  434594:	24010022 	li	at,34
  434598:	1121005b 	beq	t1,at,434708 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x3f0>
  43459c:	26640008 	addiu	a0,s3,8
  4345a0:	24010023 	li	at,35
  4345a4:	11210066 	beq	t1,at,434740 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x428>
  4345a8:	24010024 	li	at,36
  4345ac:	11210067 	beq	t1,at,43474c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x434>
  4345b0:	266a0008 	addiu	t2,s3,8
  4345b4:	24010025 	li	at,37
  4345b8:	11210066 	beq	t1,at,434754 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x43c>
  4345bc:	266b0008 	addiu	t3,s3,8
  4345c0:	24010026 	li	at,38
  4345c4:	11210067 	beq	t1,at,434764 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x44c>
  4345c8:	266d0008 	addiu	t5,s3,8
  4345cc:	2401002b 	li	at,43
  4345d0:	11210068 	beq	t1,at,434774 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x45c>
  4345d4:	26640008 	addiu	a0,s3,8
  4345d8:	2401002c 	li	at,44
  4345dc:	1121006c 	beq	t1,at,434790 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x478>
  4345e0:	2401002d 	li	at,45
  4345e4:	1121009e 	beq	t1,at,434860 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x548>
  4345e8:	2401002e 	li	at,46
  4345ec:	112100c6 	beq	t1,at,434908 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x5f0>
  4345f0:	24010027 	li	at,39
  4345f4:	112100c6 	beq	t1,at,434910 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x5f8>
  4345f8:	24010028 	li	at,40
  4345fc:	112100d8 	beq	t1,at,434960 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x648>
  434600:	24010029 	li	at,41
  434604:	112100d9 	beq	t1,at,43496c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x654>
  434608:	26640008 	addiu	a0,s3,8
  43460c:	2401002a 	li	at,42
  434610:	112100dd 	beq	t1,at,434988 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x670>
  434614:	266a0008 	addiu	t2,s3,8
  434618:	100000dd 	b	434990 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x678>
  43461c:	8fab0110 	lw	t3,272(sp)
  434620:	8f998874 	lw	t9,-30604(gp)
  434624:	00002025 	move	a0,zero
  434628:	0320f809 	jalr	t9
  43462c:	00000000 	nop
  434630:	8eca0000 	lw	t2,0(s6)
  434634:	8fbc0038 	lw	gp,56(sp)
  434638:	15400004 	bnez	t2,43464c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x334>
  43463c:	00409025 	move	s2,v0
  434640:	aec20004 	sw	v0,4(s6)
  434644:	10000005 	b	43465c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x344>
  434648:	aec20000 	sw	v0,0(s6)
  43464c:	8ecb0004 	lw	t3,4(s6)
  434650:	00000000 	nop
  434654:	ad620068 	sw	v0,104(t3)
  434658:	aec20004 	sw	v0,4(s6)
  43465c:	8ecd0004 	lw	t5,4(s6)
  434660:	266c0008 	addiu	t4,s3,8
  434664:	24020001 	li	v0,1
  434668:	100000c8 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43466c:	adac0000 	sw	t4,0(t5)
  434670:	ae4e0008 	sw	t6,8(s2)
  434674:	8faf0110 	lw	t7,272(sp)
  434678:	100000c4 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43467c:	ae4f000c 	sw	t7,12(s2)
  434680:	26790008 	addiu	t9,s3,8
  434684:	ae59001c 	sw	t9,28(s2)
  434688:	8fb80110 	lw	t8,272(sp)
  43468c:	100000bf 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434690:	ae580020 	sw	t8,32(s2)
  434694:	8f99819c 	lw	t9,-32356(gp)
  434698:	26480044 	addiu	t0,s2,68
  43469c:	afa80040 	sw	t0,64(sp)
  4346a0:	26450038 	addiu	a1,s2,56
  4346a4:	24060004 	li	a2,4
  4346a8:	2650003c 	addiu	s0,s2,60
  4346ac:	0320f809 	jalr	t9
  4346b0:	26510040 	addiu	s1,s2,64
  4346b4:	8fbc0038 	lw	gp,56(sp)
  4346b8:	2664000c 	addiu	a0,s3,12
  4346bc:	8f99819c 	lw	t9,-32356(gp)
  4346c0:	02002825 	move	a1,s0
  4346c4:	0320f809 	jalr	t9
  4346c8:	24060004 	li	a2,4
  4346cc:	8fbc0038 	lw	gp,56(sp)
  4346d0:	26640010 	addiu	a0,s3,16
  4346d4:	8f99819c 	lw	t9,-32356(gp)
  4346d8:	02202825 	move	a1,s1
  4346dc:	0320f809 	jalr	t9
  4346e0:	24060004 	li	a2,4
  4346e4:	8fbc0038 	lw	gp,56(sp)
  4346e8:	8fa50040 	lw	a1,64(sp)
  4346ec:	8f99819c 	lw	t9,-32356(gp)
  4346f0:	26640014 	addiu	a0,s3,20
  4346f4:	0320f809 	jalr	t9
  4346f8:	24060004 	li	a2,4
  4346fc:	8fbc0038 	lw	gp,56(sp)
  434700:	100000a2 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434704:	24020001 	li	v0,1
  434708:	8f99819c 	lw	t9,-32356(gp)
  43470c:	26450048 	addiu	a1,s2,72
  434710:	24060004 	li	a2,4
  434714:	0320f809 	jalr	t9
  434718:	2650004c 	addiu	s0,s2,76
  43471c:	8fbc0038 	lw	gp,56(sp)
  434720:	2664000c 	addiu	a0,s3,12
  434724:	8f99819c 	lw	t9,-32356(gp)
  434728:	02002825 	move	a1,s0
  43472c:	0320f809 	jalr	t9
  434730:	24060004 	li	a2,4
  434734:	8fbc0038 	lw	gp,56(sp)
  434738:	10000094 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43473c:	24020001 	li	v0,1
  434740:	26690008 	addiu	t1,s3,8
  434744:	10000091 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434748:	ae490004 	sw	t1,4(s2)
  43474c:	1000008f 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434750:	ae4a0018 	sw	t2,24(s2)
  434754:	ae4b0010 	sw	t3,16(s2)
  434758:	8fac0110 	lw	t4,272(sp)
  43475c:	1000008b 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434760:	ae4c0014 	sw	t4,20(s2)
  434764:	ae4d0024 	sw	t5,36(s2)
  434768:	8fae0110 	lw	t6,272(sp)
  43476c:	10000087 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434770:	ae4e0028 	sw	t6,40(s2)
  434774:	8f99819c 	lw	t9,-32356(gp)
  434778:	26450064 	addiu	a1,s2,100
  43477c:	0320f809 	jalr	t9
  434780:	24060004 	li	a2,4
  434784:	8fbc0038 	lw	gp,56(sp)
  434788:	10000080 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43478c:	24020001 	li	v0,1
  434790:	8faf0110 	lw	t7,272(sp)
  434794:	26700008 	addiu	s0,s3,8
  434798:	026f8821 	addu	s1,s3,t7
  43479c:	26310008 	addiu	s1,s1,8
  4347a0:	0211082b 	sltu	at,s0,s1
  4347a4:	1020002c 	beqz	at,434858 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x540>
  4347a8:	00000000 	nop
  4347ac:	8e59002c 	lw	t9,44(s2)
  4347b0:	00000000 	nop
  4347b4:	17200009 	bnez	t9,4347dc <LoadFileTypingRules__14ByteCodeLoaderFPc+0x4c4>
  4347b8:	00000000 	nop
  4347bc:	8f9984a4 	lw	t9,-31580(gp)
  4347c0:	2404000c 	li	a0,12
  4347c4:	0320f809 	jalr	t9
  4347c8:	00000000 	nop
  4347cc:	8fbc0038 	lw	gp,56(sp)
  4347d0:	ae42002c 	sw	v0,44(s2)
  4347d4:	10000008 	b	4347f8 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x4e0>
  4347d8:	0040a025 	move	s4,v0
  4347dc:	8f9984a4 	lw	t9,-31580(gp)
  4347e0:	2404000c 	li	a0,12
  4347e4:	0320f809 	jalr	t9
  4347e8:	00000000 	nop
  4347ec:	8fbc0038 	lw	gp,56(sp)
  4347f0:	ae820008 	sw	v0,8(s4)
  4347f4:	0040a025 	move	s4,v0
  4347f8:	ac400008 	sw	zero,8(v0)
  4347fc:	ac500000 	sw	s0,0(v0)
  434800:	92180000 	lbu	t8,0(s0)
  434804:	00000000 	nop
  434808:	13000005 	beqz	t8,434820 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x508>
  43480c:	00000000 	nop
  434810:	92080001 	lbu	t0,1(s0)
  434814:	26100001 	addiu	s0,s0,1
  434818:	1500fffd 	bnez	t0,434810 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x4f8>
  43481c:	00000000 	nop
  434820:	26100001 	addiu	s0,s0,1
  434824:	ac500004 	sw	s0,4(v0)
  434828:	92090000 	lbu	t1,0(s0)
  43482c:	00000000 	nop
  434830:	11200005 	beqz	t1,434848 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x530>
  434834:	00000000 	nop
  434838:	920a0001 	lbu	t2,1(s0)
  43483c:	26100001 	addiu	s0,s0,1
  434840:	1540fffd 	bnez	t2,434838 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x520>
  434844:	00000000 	nop
  434848:	26100001 	addiu	s0,s0,1
  43484c:	0211082b 	sltu	at,s0,s1
  434850:	1420ffd6 	bnez	at,4347ac <LoadFileTypingRules__14ByteCodeLoaderFPc+0x494>
  434854:	00000000 	nop
  434858:	1000004c 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43485c:	24020001 	li	v0,1
  434860:	8fab0110 	lw	t3,272(sp)
  434864:	26700008 	addiu	s0,s3,8
  434868:	026b8821 	addu	s1,s3,t3
  43486c:	26310008 	addiu	s1,s1,8
  434870:	0211082b 	sltu	at,s0,s1
  434874:	10200022 	beqz	at,434900 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x5e8>
  434878:	00000000 	nop
  43487c:	8e4c0030 	lw	t4,48(s2)
  434880:	00000000 	nop
  434884:	15800009 	bnez	t4,4348ac <LoadFileTypingRules__14ByteCodeLoaderFPc+0x594>
  434888:	00000000 	nop
  43488c:	8f9984a4 	lw	t9,-31580(gp)
  434890:	24040008 	li	a0,8
  434894:	0320f809 	jalr	t9
  434898:	00000000 	nop
  43489c:	8fbc0038 	lw	gp,56(sp)
  4348a0:	ae420030 	sw	v0,48(s2)
  4348a4:	10000008 	b	4348c8 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x5b0>
  4348a8:	0040a825 	move	s5,v0
  4348ac:	8f9984a4 	lw	t9,-31580(gp)
  4348b0:	24040008 	li	a0,8
  4348b4:	0320f809 	jalr	t9
  4348b8:	00000000 	nop
  4348bc:	8fbc0038 	lw	gp,56(sp)
  4348c0:	aea20004 	sw	v0,4(s5)
  4348c4:	0040a825 	move	s5,v0
  4348c8:	ac400004 	sw	zero,4(v0)
  4348cc:	ac500000 	sw	s0,0(v0)
  4348d0:	920d0000 	lbu	t5,0(s0)
  4348d4:	00000000 	nop
  4348d8:	11a00005 	beqz	t5,4348f0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x5d8>
  4348dc:	00000000 	nop
  4348e0:	920e0001 	lbu	t6,1(s0)
  4348e4:	26100001 	addiu	s0,s0,1
  4348e8:	15c0fffd 	bnez	t6,4348e0 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x5c8>
  4348ec:	00000000 	nop
  4348f0:	26100001 	addiu	s0,s0,1
  4348f4:	0211082b 	sltu	at,s0,s1
  4348f8:	1420ffe0 	bnez	at,43487c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x564>
  4348fc:	00000000 	nop
  434900:	10000022 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434904:	24020001 	li	v0,1
  434908:	10000020 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43490c:	ae420034 	sw	v0,52(s2)
  434910:	8f998878 	lw	t9,-30600(gp)
  434914:	00002025 	move	a0,zero
  434918:	0320f809 	jalr	t9
  43491c:	00000000 	nop
  434920:	8ecf0008 	lw	t7,8(s6)
  434924:	8fbc0038 	lw	gp,56(sp)
  434928:	15e00004 	bnez	t7,43493c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x624>
  43492c:	0040b825 	move	s7,v0
  434930:	aec2000c 	sw	v0,12(s6)
  434934:	10000005 	b	43494c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x634>
  434938:	aec20008 	sw	v0,8(s6)
  43493c:	8ed9000c 	lw	t9,12(s6)
  434940:	00000000 	nop
  434944:	af220010 	sw	v0,16(t9)
  434948:	aec2000c 	sw	v0,12(s6)
  43494c:	8ec8000c 	lw	t0,12(s6)
  434950:	26780008 	addiu	t8,s3,8
  434954:	24020001 	li	v0,1
  434958:	1000000c 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  43495c:	ad180000 	sw	t8,0(t0)
  434960:	26690008 	addiu	t1,s3,8
  434964:	10000009 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434968:	aee90004 	sw	t1,4(s7)
  43496c:	8f99819c 	lw	t9,-32356(gp)
  434970:	26e50008 	addiu	a1,s7,8
  434974:	0320f809 	jalr	t9
  434978:	24060004 	li	a2,4
  43497c:	8fbc0038 	lw	gp,56(sp)
  434980:	10000002 	b	43498c <LoadFileTypingRules__14ByteCodeLoaderFPc+0x674>
  434984:	24020001 	li	v0,1
  434988:	aeea000c 	sw	t2,12(s7)
  43498c:	8fab0110 	lw	t3,272(sp)
  434990:	2401fffc 	li	at,-4
  434994:	256c0003 	addiu	t4,t3,3
  434998:	01816824 	and	t5,t4,at
  43499c:	8fae004c 	lw	t6,76(sp)
  4349a0:	026d9821 	addu	s3,s3,t5
  4349a4:	26730008 	addiu	s3,s3,8
  4349a8:	026e082b 	sltu	at,s3,t6
  4349ac:	1420fed1 	bnez	at,4344f4 <LoadFileTypingRules__14ByteCodeLoaderFPc+0x1dc>
  4349b0:	00000000 	nop
  4349b4:	afb50054 	sw	s5,84(sp)
  4349b8:	afb40060 	sw	s4,96(sp)
  4349bc:	00001025 	move	v0,zero
  4349c0:	8fbf003c 	lw	ra,60(sp)
  4349c4:	8fb00018 	lw	s0,24(sp)
  4349c8:	8fb1001c 	lw	s1,28(sp)
  4349cc:	8fb20020 	lw	s2,32(sp)
  4349d0:	8fb30024 	lw	s3,36(sp)
  4349d4:	8fb40028 	lw	s4,40(sp)
  4349d8:	8fb5002c 	lw	s5,44(sp)
  4349dc:	8fb60030 	lw	s6,48(sp)
  4349e0:	8fb70034 	lw	s7,52(sp)
  4349e4:	03e00008 	jr	ra
  4349e8:	27bd0120 	addiu	sp,sp,288
