# Function: newcontext
# Address: 0x0042a4c8 - 0x0042a77c
# Size: 0x2b4 (692 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a4c8 <newcontext>:
  42a4c8:	3c1c0fbf 	lui	gp,0xfbf
  42a4cc:	279c3668 	addiu	gp,gp,13928
  42a4d0:	0399e021 	addu	gp,gp,t9
  42a4d4:	8f88898c 	lw	t0,-30324(gp)
  42a4d8:	27bdffd8 	addiu	sp,sp,-40
  42a4dc:	8d0e0000 	lw	t6,0(t0)
  42a4e0:	afbf001c 	sw	ra,28(sp)
  42a4e4:	afbc0018 	sw	gp,24(sp)
  42a4e8:	afa5002c 	sw	a1,44(sp)
  42a4ec:	108e009f 	beq	a0,t6,42a76c <newcontext+0x2a4>
  42a4f0:	00803025 	move	a2,a0
  42a4f4:	8f89897c 	lw	t1,-30340(gp)
  42a4f8:	00066080 	sll	t4,a2,0x2
  42a4fc:	8d240000 	lw	a0,0(t1)
  42a500:	01866023 	subu	t4,t4,a2
  42a504:	8c820044 	lw	v0,68(a0)
  42a508:	000c6100 	sll	t4,t4,0x4
  42a50c:	10400007 	beqz	v0,42a52c <newcontext+0x64>
  42a510:	01866021 	addu	t4,t4,a2
  42a514:	904f0074 	lbu	t7,116(v0)
  42a518:	00000000 	nop
  42a51c:	31f8ffdf 	andi	t8,t7,0xffdf
  42a520:	a0580074 	sb	t8,116(v0)
  42a524:	8d240000 	lw	a0,0(t1)
  42a528:	00000000 	nop
  42a52c:	8c820048 	lw	v0,72(a0)
  42a530:	000c6080 	sll	t4,t4,0x2
  42a534:	10400005 	beqz	v0,42a54c <newcontext+0x84>
  42a538:	01866021 	addu	t4,t4,a2
  42a53c:	90590028 	lbu	t9,40(v0)
  42a540:	00000000 	nop
  42a544:	332bffef 	andi	t3,t9,0xffef
  42a548:	a04b0028 	sb	t3,40(v0)
  42a54c:	24180001 	li	t8,1
  42a550:	03061823 	subu	v1,t8,a2
  42a554:	0003c880 	sll	t9,v1,0x2
  42a558:	0323c823 	subu	t9,t9,v1
  42a55c:	000c6080 	sll	t4,t4,0x2
  42a560:	0019c900 	sll	t9,t9,0x4
  42a564:	8f858a58 	lw	a1,-30120(gp)
  42a568:	01866021 	addu	t4,t4,a2
  42a56c:	000670c0 	sll	t6,a2,0x3
  42a570:	0323c821 	addu	t9,t9,v1
  42a574:	8f878a5c 	lw	a3,-30116(gp)
  42a578:	000c6080 	sll	t4,t4,0x2
  42a57c:	01c67023 	subu	t6,t6,a2
  42a580:	0019c880 	sll	t9,t9,0x2
  42a584:	8f818984 	lw	at,-30332(gp)
  42a588:	000e70c0 	sll	t6,t6,0x3
  42a58c:	0323c821 	addu	t9,t9,v1
  42a590:	00ac6821 	addu	t5,a1,t4
  42a594:	ad2d0000 	sw	t5,0(t1)
  42a598:	0019c880 	sll	t9,t9,0x2
  42a59c:	00ee7821 	addu	t7,a3,t6
  42a5a0:	0323c821 	addu	t9,t9,v1
  42a5a4:	ac2f0000 	sw	t7,0(at)
  42a5a8:	8f818980 	lw	at,-30336(gp)
  42a5ac:	0019c880 	sll	t9,t9,0x2
  42a5b0:	000360c0 	sll	t4,v1,0x3
  42a5b4:	00b95821 	addu	t3,a1,t9
  42a5b8:	01836023 	subu	t4,t4,v1
  42a5bc:	ac2b0000 	sw	t3,0(at)
  42a5c0:	8f8a8988 	lw	t2,-30328(gp)
  42a5c4:	000c60c0 	sll	t4,t4,0x3
  42a5c8:	8f818990 	lw	at,-30320(gp)
  42a5cc:	240f0001 	li	t7,1
  42a5d0:	00ec6821 	addu	t5,a3,t4
  42a5d4:	ad060000 	sw	a2,0(t0)
  42a5d8:	00cfc004 	sllv	t8,t7,a2
  42a5dc:	ad4d0000 	sw	t5,0(t2)
  42a5e0:	ac380000 	sw	t8,0(at)
  42a5e4:	8d240000 	lw	a0,0(t1)
  42a5e8:	00000000 	nop
  42a5ec:	8c820044 	lw	v0,68(a0)
  42a5f0:	00000000 	nop
  42a5f4:	10400007 	beqz	v0,42a614 <newcontext+0x14c>
  42a5f8:	00000000 	nop
  42a5fc:	90590074 	lbu	t9,116(v0)
  42a600:	00000000 	nop
  42a604:	372c0020 	ori	t4,t9,0x20
  42a608:	a04c0074 	sb	t4,116(v0)
  42a60c:	8d240000 	lw	a0,0(t1)
  42a610:	00000000 	nop
  42a614:	8c820048 	lw	v0,72(a0)
  42a618:	00000000 	nop
  42a61c:	10400006 	beqz	v0,42a638 <newcontext+0x170>
  42a620:	93b8002f 	lbu	t8,47(sp)
  42a624:	904f0028 	lbu	t7,40(v0)
  42a628:	00000000 	nop
  42a62c:	35ee0010 	ori	t6,t7,0x10
  42a630:	a04e0028 	sb	t6,40(v0)
  42a634:	93b8002f 	lbu	t8,47(sp)
  42a638:	00000000 	nop
  42a63c:	1700004c 	bnez	t8,42a770 <newcontext+0x2a8>
  42a640:	8fbf001c 	lw	ra,28(sp)
  42a644:	8d590000 	lw	t9,0(t2)
  42a648:	00000000 	nop
  42a64c:	8f240028 	lw	a0,40(t9)
  42a650:	8f9983fc 	lw	t9,-31748(gp)
  42a654:	00000000 	nop
  42a658:	0320f809 	jalr	t9
  42a65c:	00000000 	nop
  42a660:	8fbc0018 	lw	gp,24(sp)
  42a664:	afa20020 	sw	v0,32(sp)
  42a668:	8f8b8988 	lw	t3,-30328(gp)
  42a66c:	8f998368 	lw	t9,-31896(gp)
  42a670:	8d6b0000 	lw	t3,0(t3)
  42a674:	00000000 	nop
  42a678:	8d640028 	lw	a0,40(t3)
  42a67c:	0320f809 	jalr	t9
  42a680:	00000000 	nop
  42a684:	8fbc0018 	lw	gp,24(sp)
  42a688:	8fa40020 	lw	a0,32(sp)
  42a68c:	8f998144 	lw	t9,-32444(gp)
  42a690:	00402825 	move	a1,v0
  42a694:	0320f809 	jalr	t9
  42a698:	00000000 	nop
  42a69c:	8fbc0018 	lw	gp,24(sp)
  42a6a0:	00000000 	nop
  42a6a4:	8f8c8984 	lw	t4,-30332(gp)
  42a6a8:	8f9983fc 	lw	t9,-31748(gp)
  42a6ac:	8d8c0000 	lw	t4,0(t4)
  42a6b0:	00000000 	nop
  42a6b4:	8d840028 	lw	a0,40(t4)
  42a6b8:	0320f809 	jalr	t9
  42a6bc:	00000000 	nop
  42a6c0:	8fbc0018 	lw	gp,24(sp)
  42a6c4:	afa20020 	sw	v0,32(sp)
  42a6c8:	8f8d8984 	lw	t5,-30332(gp)
  42a6cc:	8f998368 	lw	t9,-31896(gp)
  42a6d0:	8dad0000 	lw	t5,0(t5)
  42a6d4:	00000000 	nop
  42a6d8:	8da40028 	lw	a0,40(t5)
  42a6dc:	0320f809 	jalr	t9
  42a6e0:	00000000 	nop
  42a6e4:	8fbc0018 	lw	gp,24(sp)
  42a6e8:	8fa40020 	lw	a0,32(sp)
  42a6ec:	8f9981b0 	lw	t9,-32336(gp)
  42a6f0:	00402825 	move	a1,v0
  42a6f4:	0320f809 	jalr	t9
  42a6f8:	00000000 	nop
  42a6fc:	8fbc0018 	lw	gp,24(sp)
  42a700:	00000000 	nop
  42a704:	8f998630 	lw	t9,-31184(gp)
  42a708:	00000000 	nop
  42a70c:	0320f809 	jalr	t9
  42a710:	00000000 	nop
  42a714:	8fbc0018 	lw	gp,24(sp)
  42a718:	00000000 	nop
  42a71c:	8f998674 	lw	t9,-31116(gp)
  42a720:	00000000 	nop
  42a724:	0320f809 	jalr	t9
  42a728:	00000000 	nop
  42a72c:	8fbc0018 	lw	gp,24(sp)
  42a730:	240e0001 	li	t6,1
  42a734:	8f8f897c 	lw	t7,-30340(gp)
  42a738:	8f988980 	lw	t8,-30336(gp)
  42a73c:	8def0000 	lw	t7,0(t7)
  42a740:	00000000 	nop
  42a744:	a1e00c53 	sb	zero,3155(t7)
  42a748:	8f180000 	lw	t8,0(t8)
  42a74c:	00000000 	nop
  42a750:	a30e0c53 	sb	t6,3155(t8)
  42a754:	8f998544 	lw	t9,-31420(gp)
  42a758:	00000000 	nop
  42a75c:	0320f809 	jalr	t9
  42a760:	00000000 	nop
  42a764:	8fbc0018 	lw	gp,24(sp)
  42a768:	00000000 	nop
  42a76c:	8fbf001c 	lw	ra,28(sp)
  42a770:	27bd0028 	addiu	sp,sp,40
  42a774:	03e00008 	jr	ra
  42a778:	00000000 	nop
