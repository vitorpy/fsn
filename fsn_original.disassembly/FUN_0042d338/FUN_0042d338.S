# Function: FUN_0042d338
# Address: 0x0042d338 - 0x0042d618
# Size: 0x2e0 (736 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042d338 <hidePreferencePanel+0x6e4>:
  42d338:	3c1c0fbf 	lui	gp,0xfbf
  42d33c:	279c07f8 	addiu	gp,gp,2040
  42d340:	0399e021 	addu	gp,gp,t9
  42d344:	27bdff98 	addiu	sp,sp,-104
  42d348:	afb00014 	sw	s0,20(sp)
  42d34c:	8f90806c 	lw	s0,-32660(gp)
  42d350:	afa5006c 	sw	a1,108(sp)
  42d354:	26106e4c 	addiu	s0,s0,28236
  42d358:	8e050000 	lw	a1,0(s0)
  42d35c:	afbf001c 	sw	ra,28(sp)
  42d360:	afbc0018 	sw	gp,24(sp)
  42d364:	afa40068 	sw	a0,104(sp)
  42d368:	10a0002c 	beqz	a1,42d41c <hidePreferencePanel+0x7c8>
  42d36c:	afa60070 	sw	a2,112(sp)
  42d370:	8f998388 	lw	t9,-31864(gp)
  42d374:	00a02025 	move	a0,a1
  42d378:	0320f809 	jalr	t9
  42d37c:	00000000 	nop
  42d380:	8fbc0018 	lw	gp,24(sp)
  42d384:	8e040000 	lw	a0,0(s0)
  42d388:	8f9983fc 	lw	t9,-31748(gp)
  42d38c:	00000000 	nop
  42d390:	0320f809 	jalr	t9
  42d394:	00000000 	nop
  42d398:	8fbc0018 	lw	gp,24(sp)
  42d39c:	8e040000 	lw	a0,0(s0)
  42d3a0:	8f998368 	lw	t9,-31896(gp)
  42d3a4:	afa20028 	sw	v0,40(sp)
  42d3a8:	0320f809 	jalr	t9
  42d3ac:	00000000 	nop
  42d3b0:	8fbc0018 	lw	gp,24(sp)
  42d3b4:	8fa40028 	lw	a0,40(sp)
  42d3b8:	8f998144 	lw	t9,-32444(gp)
  42d3bc:	00402825 	move	a1,v0
  42d3c0:	0320f809 	jalr	t9
  42d3c4:	00000000 	nop
  42d3c8:	8fbc0018 	lw	gp,24(sp)
  42d3cc:	8e040000 	lw	a0,0(s0)
  42d3d0:	8f9983fc 	lw	t9,-31748(gp)
  42d3d4:	00000000 	nop
  42d3d8:	0320f809 	jalr	t9
  42d3dc:	00000000 	nop
  42d3e0:	8fbc0018 	lw	gp,24(sp)
  42d3e4:	8e040000 	lw	a0,0(s0)
  42d3e8:	8f998368 	lw	t9,-31896(gp)
  42d3ec:	afa20028 	sw	v0,40(sp)
  42d3f0:	0320f809 	jalr	t9
  42d3f4:	00000000 	nop
  42d3f8:	8fbc0018 	lw	gp,24(sp)
  42d3fc:	8fa40028 	lw	a0,40(sp)
  42d400:	8f99817c 	lw	t9,-32388(gp)
  42d404:	00402825 	move	a1,v0
  42d408:	0320f809 	jalr	t9
  42d40c:	00000000 	nop
  42d410:	8fbc0018 	lw	gp,24(sp)
  42d414:	1000007d 	b	42d60c <hidePreferencePanel+0x9b8>
  42d418:	8fbf001c 	lw	ra,28(sp)
  42d41c:	8f84806c 	lw	a0,-32660(gp)
  42d420:	8f998204 	lw	t9,-32252(gp)
  42d424:	8c846e48 	lw	a0,28232(a0)
  42d428:	0320f809 	jalr	t9
  42d42c:	afa0003c 	sw	zero,60(sp)
  42d430:	8fbc0018 	lw	gp,24(sp)
  42d434:	8fa7003c 	lw	a3,60(sp)
  42d438:	10400021 	beqz	v0,42d4c0 <hidePreferencePanel+0x86c>
  42d43c:	afa20038 	sw	v0,56(sp)
  42d440:	8f9982c0 	lw	t9,-32064(gp)
  42d444:	00402025 	move	a0,v0
  42d448:	2405002f 	li	a1,47
  42d44c:	0320f809 	jalr	t9
  42d450:	afa7003c 	sw	a3,60(sp)
  42d454:	8fbc0018 	lw	gp,24(sp)
  42d458:	8fa7003c 	lw	a3,60(sp)
  42d45c:	10400011 	beqz	v0,42d4a4 <hidePreferencePanel+0x850>
  42d460:	00000000 	nop
  42d464:	a0400000 	sb	zero,0(v0)
  42d468:	8f998170 	lw	t9,-32400(gp)
  42d46c:	8fa40038 	lw	a0,56(sp)
  42d470:	0320f809 	jalr	t9
  42d474:	afa20030 	sw	v0,48(sp)
  42d478:	8fbc0018 	lw	gp,24(sp)
  42d47c:	8fa30030 	lw	v1,48(sp)
  42d480:	8f8e80a0 	lw	t6,-32608(gp)
  42d484:	afa20034 	sw	v0,52(sp)
  42d488:	25ce17ef 	addiu	t6,t6,6127
  42d48c:	afae0040 	sw	t6,64(sp)
  42d490:	afa20044 	sw	v0,68(sp)
  42d494:	240f002f 	li	t7,47
  42d498:	24070001 	li	a3,1
  42d49c:	10000008 	b	42d4c0 <hidePreferencePanel+0x86c>
  42d4a0:	a06f0000 	sb	t7,0(v1)
  42d4a4:	8f998174 	lw	t9,-32396(gp)
  42d4a8:	8fa40038 	lw	a0,56(sp)
  42d4ac:	0320f809 	jalr	t9
  42d4b0:	afa7003c 	sw	a3,60(sp)
  42d4b4:	8fbc0018 	lw	gp,24(sp)
  42d4b8:	8fa7003c 	lw	a3,60(sp)
  42d4bc:	afa00038 	sw	zero,56(sp)
  42d4c0:	8f9980a0 	lw	t9,-32608(gp)
  42d4c4:	27a60040 	addiu	a2,sp,64
  42d4c8:	0007c0c0 	sll	t8,a3,0x3
  42d4cc:	00d81021 	addu	v0,a2,t8
  42d4d0:	27391357 	addiu	t9,t9,4951
  42d4d4:	ac590000 	sw	t9,0(v0)
  42d4d8:	24080001 	li	t0,1
  42d4dc:	8f998168 	lw	t9,-32408(gp)
  42d4e0:	8f85805c 	lw	a1,-32676(gp)
  42d4e4:	ac480004 	sw	t0,4(v0)
  42d4e8:	8fa40068 	lw	a0,104(sp)
  42d4ec:	24e70001 	addiu	a3,a3,1
  42d4f0:	0320f809 	jalr	t9
  42d4f4:	24a53ae4 	addiu	a1,a1,15076
  42d4f8:	8fa90038 	lw	t1,56(sp)
  42d4fc:	8fbc0018 	lw	gp,24(sp)
  42d500:	1120001e 	beqz	t1,42d57c <hidePreferencePanel+0x928>
  42d504:	ae020000 	sw	v0,0(s0)
  42d508:	8f998178 	lw	t9,-32392(gp)
  42d50c:	8fa40034 	lw	a0,52(sp)
  42d510:	0320f809 	jalr	t9
  42d514:	00000000 	nop
  42d518:	8fbc0018 	lw	gp,24(sp)
  42d51c:	8fa40038 	lw	a0,56(sp)
  42d520:	8f998170 	lw	t9,-32400(gp)
  42d524:	00000000 	nop
  42d528:	0320f809 	jalr	t9
  42d52c:	00000000 	nop
  42d530:	8fbc0018 	lw	gp,24(sp)
  42d534:	8e040000 	lw	a0,0(s0)
  42d538:	8f8a80a0 	lw	t2,-32608(gp)
  42d53c:	8f998340 	lw	t9,-31936(gp)
  42d540:	254a17e7 	addiu	t2,t2,6119
  42d544:	afa20034 	sw	v0,52(sp)
  42d548:	afaa0040 	sw	t2,64(sp)
  42d54c:	afa20044 	sw	v0,68(sp)
  42d550:	24060001 	li	a2,1
  42d554:	0320f809 	jalr	t9
  42d558:	27a50040 	addiu	a1,sp,64
  42d55c:	8fbc0018 	lw	gp,24(sp)
  42d560:	8fa40034 	lw	a0,52(sp)
  42d564:	8f998178 	lw	t9,-32392(gp)
  42d568:	00000000 	nop
  42d56c:	0320f809 	jalr	t9
  42d570:	00000000 	nop
  42d574:	8fbc0018 	lw	gp,24(sp)
  42d578:	00000000 	nop
  42d57c:	8f8580a0 	lw	a1,-32608(gp)
  42d580:	8f868020 	lw	a2,-32736(gp)
  42d584:	8f9983ac 	lw	t9,-31828(gp)
  42d588:	8e040000 	lw	a0,0(s0)
  42d58c:	24a5214e 	addiu	a1,a1,8526
  42d590:	0320f809 	jalr	t9
  42d594:	24c6d28c 	addiu	a2,a2,-11636
  42d598:	8fbc0018 	lw	gp,24(sp)
  42d59c:	8e040000 	lw	a0,0(s0)
  42d5a0:	8f8580a4 	lw	a1,-32604(gp)
  42d5a4:	8f868020 	lw	a2,-32736(gp)
  42d5a8:	8f9983ac 	lw	t9,-31828(gp)
  42d5ac:	24a500a9 	addiu	a1,a1,169
  42d5b0:	0320f809 	jalr	t9
  42d5b4:	24c6d314 	addiu	a2,a2,-11500
  42d5b8:	8fbc0018 	lw	gp,24(sp)
  42d5bc:	8e040000 	lw	a0,0(s0)
  42d5c0:	8f998158 	lw	t9,-32424(gp)
  42d5c4:	24050007 	li	a1,7
  42d5c8:	0320f809 	jalr	t9
  42d5cc:	00000000 	nop
  42d5d0:	8fbc0018 	lw	gp,24(sp)
  42d5d4:	00402025 	move	a0,v0
  42d5d8:	8f998490 	lw	t9,-31600(gp)
  42d5dc:	00000000 	nop
  42d5e0:	0320f809 	jalr	t9
  42d5e4:	00000000 	nop
  42d5e8:	8fbc0018 	lw	gp,24(sp)
  42d5ec:	8e040000 	lw	a0,0(s0)
  42d5f0:	8f998388 	lw	t9,-31864(gp)
  42d5f4:	00000000 	nop
  42d5f8:	0320f809 	jalr	t9
  42d5fc:	00000000 	nop
  42d600:	8fbc0018 	lw	gp,24(sp)
  42d604:	00000000 	nop
  42d608:	8fbf001c 	lw	ra,28(sp)
  42d60c:	8fb00014 	lw	s0,20(sp)
  42d610:	03e00008 	jr	ra
  42d614:	27bd0068 	addiu	sp,sp,104
