# Function: FUN_004314e0
# Address: 0x004314e0 - 0x00431630
# Size: 0x150 (336 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004314e0 <SG_getDefaultDepth+0xc>:
  4314e0:	27bdffe0 	addiu	sp,sp,-32
  4314e4:	afbf001c 	sw	ra,28(sp)
  4314e8:	14800003 	bnez	a0,4314f8 <SG_getDefaultDepth+0x24>
  4314ec:	afbc0018 	sw	gp,24(sp)
  4314f0:	1000004b 	b	431620 <SG_getDefaultDepth+0x14c>
  4314f4:	2402fffe 	li	v0,-2
  4314f8:	14a00003 	bnez	a1,431508 <SG_getDefaultDepth+0x34>
  4314fc:	00000000 	nop
  431500:	8c850084 	lw	a1,132(a0)
  431504:	00000000 	nop
  431508:	8f998020 	lw	t9,-32736(gp)
  43150c:	afa40020 	sw	a0,32(sp)
  431510:	273925fc 	addiu	t9,t9,9724
  431514:	afa50024 	sw	a1,36(sp)
  431518:	afa60028 	sw	a2,40(sp)
  43151c:	0320f809 	jalr	t9
  431520:	afa7002c 	sw	a3,44(sp)
  431524:	8fa60028 	lw	a2,40(sp)
  431528:	8fbc0018 	lw	gp,24(sp)
  43152c:	8fa40020 	lw	a0,32(sp)
  431530:	8fa50024 	lw	a1,36(sp)
  431534:	8fa7002c 	lw	a3,44(sp)
  431538:	10c00009 	beqz	a2,431560 <SG_getDefaultDepth+0x8c>
  43153c:	00000000 	nop
  431540:	8c430024 	lw	v1,36(v0)
  431544:	8cce0000 	lw	t6,0(a2)
  431548:	00037880 	sll	t7,v1,0x2
  43154c:	004fc021 	addu	t8,v0,t7
  431550:	8f19003c 	lw	t9,60(t8)
  431554:	00000000 	nop
  431558:	15d9000e 	bne	t6,t9,431594 <SG_getDefaultDepth+0xc0>
  43155c:	00000000 	nop
  431560:	10e00005 	beqz	a3,431578 <SG_getDefaultDepth+0xa4>
  431564:	00055880 	sll	t3,a1,0x2
  431568:	8c430024 	lw	v1,36(v0)
  43156c:	00000000 	nop
  431570:	14e30008 	bne	a3,v1,431594 <SG_getDefaultDepth+0xc0>
  431574:	00000000 	nop
  431578:	8c8a008c 	lw	t2,140(a0)
  43157c:	01655821 	addu	t3,t3,a1
  431580:	000b5900 	sll	t3,t3,0x4
  431584:	014b6021 	addu	t4,t2,t3
  431588:	8d820024 	lw	v0,36(t4)
  43158c:	10000025 	b	431624 <SG_getDefaultDepth+0x150>
  431590:	8fbf001c 	lw	ra,28(sp)
  431594:	14c00006 	bnez	a2,4315b0 <SG_getDefaultDepth+0xdc>
  431598:	00036880 	sll	t5,v1,0x2
  43159c:	004d7821 	addu	t7,v0,t5
  4315a0:	8df8003c 	lw	t8,60(t7)
  4315a4:	24090003 	li	t1,3
  4315a8:	11380007 	beq	t1,t8,4315c8 <SG_getDefaultDepth+0xf4>
  4315ac:	00000000 	nop
  4315b0:	10c00015 	beqz	a2,431608 <SG_getDefaultDepth+0x134>
  4315b4:	24090003 	li	t1,3
  4315b8:	8cce0000 	lw	t6,0(a2)
  4315bc:	00000000 	nop
  4315c0:	152e0011 	bne	t1,t6,431608 <SG_getDefaultDepth+0x134>
  4315c4:	00000000 	nop
  4315c8:	14e00003 	bnez	a3,4315d8 <SG_getDefaultDepth+0x104>
  4315cc:	24080002 	li	t0,2
  4315d0:	11030004 	beq	t0,v1,4315e4 <SG_getDefaultDepth+0x110>
  4315d4:	0003c880 	sll	t9,v1,0x2
  4315d8:	24080002 	li	t0,2
  4315dc:	14e8000a 	bne	a3,t0,431608 <SG_getDefaultDepth+0x134>
  4315e0:	0003c880 	sll	t9,v1,0x2
  4315e4:	00595021 	addu	t2,v0,t9
  4315e8:	8d4b003c 	lw	t3,60(t2)
  4315ec:	00000000 	nop
  4315f0:	152b0005 	bne	t1,t3,431608 <SG_getDefaultDepth+0x134>
  4315f4:	00000000 	nop
  4315f8:	15030003 	bne	t0,v1,431608 <SG_getDefaultDepth+0x134>
  4315fc:	00000000 	nop
  431600:	10000007 	b	431620 <SG_getDefaultDepth+0x14c>
  431604:	24020008 	li	v0,8
  431608:	8f998800 	lw	t9,-30720(gp)
  43160c:	00000000 	nop
  431610:	0320f809 	jalr	t9
  431614:	00000000 	nop
  431618:	8fbc0018 	lw	gp,24(sp)
  43161c:	00000000 	nop
  431620:	8fbf001c 	lw	ra,28(sp)
  431624:	27bd0020 	addiu	sp,sp,32
  431628:	03e00008 	jr	ra
  43162c:	00000000 	nop
