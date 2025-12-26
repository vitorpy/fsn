# Function: FUN_0042b3f4
# Address: 0x0042b3f4 - 0x0042b5ac
# Size: 0x1b8 (440 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b3f4 <createHelpMenu+0x33c>:
  42b3f4:	3c1c0fbf 	lui	gp,0xfbf
  42b3f8:	279c273c 	addiu	gp,gp,10044
  42b3fc:	0399e021 	addu	gp,gp,t9
  42b400:	27bdffa8 	addiu	sp,sp,-88
  42b404:	afb00014 	sw	s0,20(sp)
  42b408:	8f908068 	lw	s0,-32664(gp)
  42b40c:	afa60060 	sw	a2,96(sp)
  42b410:	261079c0 	addiu	s0,s0,31168
  42b414:	8e060000 	lw	a2,0(s0)
  42b418:	afbf001c 	sw	ra,28(sp)
  42b41c:	afbc0018 	sw	gp,24(sp)
  42b420:	afa40058 	sw	a0,88(sp)
  42b424:	10c00007 	beqz	a2,42b444 <createHelpMenu+0x38c>
  42b428:	afa5005c 	sw	a1,92(sp)
  42b42c:	8f998490 	lw	t9,-31600(gp)
  42b430:	00c02025 	move	a0,a2
  42b434:	0320f809 	jalr	t9
  42b438:	00000000 	nop
  42b43c:	8fbc0018 	lw	gp,24(sp)
  42b440:	00000000 	nop
  42b444:	8fae005c 	lw	t6,92(sp)
  42b448:	8f998198 	lw	t9,-32360(gp)
  42b44c:	8f8580a0 	lw	a1,-32608(gp)
  42b450:	8dc40000 	lw	a0,0(t6)
  42b454:	0320f809 	jalr	t9
  42b458:	00000000 	nop
  42b45c:	8fbc0018 	lw	gp,24(sp)
  42b460:	8fb8005c 	lw	t8,92(sp)
  42b464:	8f8f80a0 	lw	t7,-32608(gp)
  42b468:	afa20054 	sw	v0,84(sp)
  42b46c:	25ef1f78 	addiu	t7,t7,8056
  42b470:	afaf002c 	sw	t7,44(sp)
  42b474:	afa20030 	sw	v0,48(sp)
  42b478:	93190008 	lbu	t9,8(t8)
  42b47c:	8fa40058 	lw	a0,88(sp)
  42b480:	13200003 	beqz	t9,42b490 <createHelpMenu+0x3d8>
  42b484:	27a6002c 	addiu	a2,sp,44
  42b488:	10000005 	b	42b4a0 <createHelpMenu+0x3e8>
  42b48c:	00000000 	nop
  42b490:	8f848a10 	lw	a0,-30192(gp)
  42b494:	00000000 	nop
  42b498:	8c840000 	lw	a0,0(a0)
  42b49c:	00000000 	nop
  42b4a0:	8f85805c 	lw	a1,-32676(gp)
  42b4a4:	8f998164 	lw	t9,-32412(gp)
  42b4a8:	24070001 	li	a3,1
  42b4ac:	0320f809 	jalr	t9
  42b4b0:	24a51cd0 	addiu	a1,a1,7376
  42b4b4:	8fa8005c 	lw	t0,92(sp)
  42b4b8:	ae020000 	sw	v0,0(s0)
  42b4bc:	8d070004 	lw	a3,4(t0)
  42b4c0:	8fbc0018 	lw	gp,24(sp)
  42b4c4:	10e0000a 	beqz	a3,42b4f0 <createHelpMenu+0x438>
  42b4c8:	00402025 	move	a0,v0
  42b4cc:	8f8580a0 	lw	a1,-32608(gp)
  42b4d0:	8f868020 	lw	a2,-32736(gp)
  42b4d4:	8f9983ac 	lw	t9,-31828(gp)
  42b4d8:	24a51b37 	addiu	a1,a1,6967
  42b4dc:	0320f809 	jalr	t9
  42b4e0:	24c6b3f4 	addiu	a2,a2,-19468
  42b4e4:	8fbc0018 	lw	gp,24(sp)
  42b4e8:	1000000d 	b	42b520 <createHelpMenu+0x468>
  42b4ec:	00000000 	nop
  42b4f0:	8f998150 	lw	t9,-32432(gp)
  42b4f4:	8e040000 	lw	a0,0(s0)
  42b4f8:	0320f809 	jalr	t9
  42b4fc:	24050007 	li	a1,7
  42b500:	8fbc0018 	lw	gp,24(sp)
  42b504:	00402025 	move	a0,v0
  42b508:	8f998490 	lw	t9,-31600(gp)
  42b50c:	00000000 	nop
  42b510:	0320f809 	jalr	t9
  42b514:	00000000 	nop
  42b518:	8fbc0018 	lw	gp,24(sp)
  42b51c:	00000000 	nop
  42b520:	8f998150 	lw	t9,-32432(gp)
  42b524:	8e040000 	lw	a0,0(s0)
  42b528:	0320f809 	jalr	t9
  42b52c:	24050002 	li	a1,2
  42b530:	8fbc0018 	lw	gp,24(sp)
  42b534:	00402025 	move	a0,v0
  42b538:	8f998490 	lw	t9,-31600(gp)
  42b53c:	00000000 	nop
  42b540:	0320f809 	jalr	t9
  42b544:	00000000 	nop
  42b548:	8fbc0018 	lw	gp,24(sp)
  42b54c:	8e040000 	lw	a0,0(s0)
  42b550:	8f8580a0 	lw	a1,-32608(gp)
  42b554:	8f868020 	lw	a2,-32736(gp)
  42b558:	8f9983ac 	lw	t9,-31828(gp)
  42b55c:	24a5214e 	addiu	a1,a1,8526
  42b560:	0320f809 	jalr	t9
  42b564:	24c6b390 	addiu	a2,a2,-19568
  42b568:	8fbc0018 	lw	gp,24(sp)
  42b56c:	8e040000 	lw	a0,0(s0)
  42b570:	8f998388 	lw	t9,-31864(gp)
  42b574:	00000000 	nop
  42b578:	0320f809 	jalr	t9
  42b57c:	00000000 	nop
  42b580:	8fbc0018 	lw	gp,24(sp)
  42b584:	8fa40054 	lw	a0,84(sp)
  42b588:	8f998178 	lw	t9,-32392(gp)
  42b58c:	00000000 	nop
  42b590:	0320f809 	jalr	t9
  42b594:	00000000 	nop
  42b598:	8fbf001c 	lw	ra,28(sp)
  42b59c:	8fbc0018 	lw	gp,24(sp)
  42b5a0:	8fb00014 	lw	s0,20(sp)
  42b5a4:	03e00008 	jr	ra
  42b5a8:	27bd0058 	addiu	sp,sp,88
