# Function: FUN_00431630
# Address: 0x00431630 - 0x00431788
# Size: 0x158 (344 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431630 <SG_getDefaultDepth+0x15c>:
  431630:	3c1c0fbf 	lui	gp,0xfbf
  431634:	279cc500 	addiu	gp,gp,-15104
  431638:	0399e021 	addu	gp,gp,t9
  43163c:	27bdffc8 	addiu	sp,sp,-56
  431640:	afb1001c 	sw	s1,28(sp)
  431644:	afb00018 	sw	s0,24(sp)
  431648:	00c08025 	move	s0,a2
  43164c:	00e08825 	move	s1,a3
  431650:	afbf0024 	sw	ra,36(sp)
  431654:	afbc0020 	sw	gp,32(sp)
  431658:	14800003 	bnez	a0,431668 <SG_getDefaultDepth+0x194>
  43165c:	00005025 	move	t2,zero
  431660:	10000044 	b	431774 <SG_getDefaultDepth+0x2a0>
  431664:	2402fffe 	li	v0,-2
  431668:	14a00003 	bnez	a1,431678 <SG_getDefaultDepth+0x1a4>
  43166c:	00000000 	nop
  431670:	8c850084 	lw	a1,132(a0)
  431674:	00000000 	nop
  431678:	8f998020 	lw	t9,-32736(gp)
  43167c:	afaa002c 	sw	t2,44(sp)
  431680:	273925fc 	addiu	t9,t9,9724
  431684:	0320f809 	jalr	t9
  431688:	00000000 	nop
  43168c:	8c4e0018 	lw	t6,24(v0)
  431690:	8fbc0020 	lw	gp,32(sp)
  431694:	8faa002c 	lw	t2,44(sp)
  431698:	00404025 	move	t0,v0
  43169c:	19c00034 	blez	t6,431770 <SG_getDefaultDepth+0x29c>
  4316a0:	00003825 	move	a3,zero
  4316a4:	8c490020 	lw	t1,32(v0)
  4316a8:	8fab0048 	lw	t3,72(sp)
  4316ac:	240d0003 	li	t5,3
  4316b0:	240c0028 	li	t4,40
  4316b4:	8d2f0000 	lw	t7,0(t1)
  4316b8:	00000000 	nop
  4316bc:	120f0004 	beq	s0,t7,4316d0 <SG_getDefaultDepth+0x1fc>
  4316c0:	00000000 	nop
  4316c4:	8d060018 	lw	a2,24(t0)
  4316c8:	10000026 	b	431764 <SG_getDefaultDepth+0x290>
  4316cc:	24e70001 	addiu	a3,a3,1
  4316d0:	00ec0019 	multu	a3,t4
  4316d4:	8c580014 	lw	t8,20(v0)
  4316d8:	0000c812 	mflo	t9
  4316dc:	03191821 	addu	v1,t8,t9
  4316e0:	8c6e000c 	lw	t6,12(v1)
  4316e4:	00000000 	nop
  4316e8:	122e0004 	beq	s1,t6,4316fc <SG_getDefaultDepth+0x228>
  4316ec:	00000000 	nop
  4316f0:	8d060018 	lw	a2,24(t0)
  4316f4:	1000001b 	b	431764 <SG_getDefaultDepth+0x290>
  4316f8:	24e70001 	addiu	a3,a3,1
  4316fc:	11600008 	beqz	t3,431720 <SG_getDefaultDepth+0x24c>
  431700:	00000000 	nop
  431704:	8d640000 	lw	a0,0(t3)
  431708:	8c6f0010 	lw	t7,16(v1)
  43170c:	00000000 	nop
  431710:	15e40003 	bne	t7,a0,431720 <SG_getDefaultDepth+0x24c>
  431714:	00000000 	nop
  431718:	10000016 	b	431774 <SG_getDefaultDepth+0x2a0>
  43171c:	00801025 	move	v0,a0
  431720:	8c580024 	lw	t8,36(v0)
  431724:	8d060018 	lw	a2,24(t0)
  431728:	0018c880 	sll	t9,t8,0x2
  43172c:	00597021 	addu	t6,v0,t9
  431730:	8dc5003c 	lw	a1,60(t6)
  431734:	00000000 	nop
  431738:	11450009 	beq	t2,a1,431760 <SG_getDefaultDepth+0x28c>
  43173c:	00000000 	nop
  431740:	8c640010 	lw	a0,16(v1)
  431744:	154d0005 	bne	t2,t5,43175c <SG_getDefaultDepth+0x288>
  431748:	00000000 	nop
  43174c:	14850004 	bne	a0,a1,431760 <SG_getDefaultDepth+0x28c>
  431750:	00000000 	nop
  431754:	10000002 	b	431760 <SG_getDefaultDepth+0x28c>
  431758:	00805025 	move	t2,a0
  43175c:	00805025 	move	t2,a0
  431760:	24e70001 	addiu	a3,a3,1
  431764:	00e6082a 	slt	at,a3,a2
  431768:	1420ffd2 	bnez	at,4316b4 <SG_getDefaultDepth+0x1e0>
  43176c:	25290004 	addiu	t1,t1,4
  431770:	01401025 	move	v0,t2
  431774:	8fbf0024 	lw	ra,36(sp)
  431778:	8fb00018 	lw	s0,24(sp)
  43177c:	8fb1001c 	lw	s1,28(sp)
  431780:	03e00008 	jr	ra
  431784:	27bd0038 	addiu	sp,sp,56
