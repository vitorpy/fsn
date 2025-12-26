# Function: zoomPosition
# Address: 0x0042e664 - 0x0042e87c
# Size: 0x218 (536 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042e664 <zoomPosition>:
  42e664:	3c1c0fbf 	lui	gp,0xfbf
  42e668:	279cf4cc 	addiu	gp,gp,-2868
  42e66c:	0399e021 	addu	gp,gp,t9
  42e670:	27bdff98 	addiu	sp,sp,-104
  42e674:	27b90050 	addiu	t9,sp,80
  42e678:	afb9001c 	sw	t9,28(sp)
  42e67c:	8f9987bc 	lw	t9,-30788(gp)
  42e680:	afbf003c 	sw	ra,60(sp)
  42e684:	27ae005c 	addiu	t6,sp,92
  42e688:	27af0058 	addiu	t7,sp,88
  42e68c:	27b80054 	addiu	t8,sp,84
  42e690:	27a8004c 	addiu	t0,sp,76
  42e694:	27a9004b 	addiu	t1,sp,75
  42e698:	afbc0038 	sw	gp,56(sp)
  42e69c:	afa90024 	sw	t1,36(sp)
  42e6a0:	afa80020 	sw	t0,32(sp)
  42e6a4:	afb80018 	sw	t8,24(sp)
  42e6a8:	afaf0014 	sw	t7,20(sp)
  42e6ac:	afae0010 	sw	t6,16(sp)
  42e6b0:	27a50066 	addiu	a1,sp,102
  42e6b4:	27a60064 	addiu	a2,sp,100
  42e6b8:	0320f809 	jalr	t9
  42e6bc:	27a70060 	addiu	a3,sp,96
  42e6c0:	8fbc0038 	lw	gp,56(sp)
  42e6c4:	10400069 	beqz	v0,42e86c <zoomPosition+0x208>
  42e6c8:	00001025 	move	v0,zero
  42e6cc:	8f83897c 	lw	v1,-30340(gp)
  42e6d0:	8faa0050 	lw	t2,80(sp)
  42e6d4:	8c630000 	lw	v1,0(v1)
  42e6d8:	00000000 	nop
  42e6dc:	8c6b0044 	lw	t3,68(v1)
  42e6e0:	00000000 	nop
  42e6e4:	114b0019 	beq	t2,t3,42e74c <zoomPosition+0xe8>
  42e6e8:	8fac004c 	lw	t4,76(sp)
  42e6ec:	1140000c 	beqz	t2,42e720 <zoomPosition+0xbc>
  42e6f0:	01402025 	move	a0,t2
  42e6f4:	8f99863c 	lw	t9,-31172(gp)
  42e6f8:	00000000 	nop
  42e6fc:	0320f809 	jalr	t9
  42e700:	00000000 	nop
  42e704:	8fbc0038 	lw	gp,56(sp)
  42e708:	00000000 	nop
  42e70c:	8f83897c 	lw	v1,-30340(gp)
  42e710:	00000000 	nop
  42e714:	8c630000 	lw	v1,0(v1)
  42e718:	1000000c 	b	42e74c <zoomPosition+0xe8>
  42e71c:	8fac004c 	lw	t4,76(sp)
  42e720:	8f998638 	lw	t9,-31176(gp)
  42e724:	00000000 	nop
  42e728:	0320f809 	jalr	t9
  42e72c:	00000000 	nop
  42e730:	8fbc0038 	lw	gp,56(sp)
  42e734:	00000000 	nop
  42e738:	8f83897c 	lw	v1,-30340(gp)
  42e73c:	00000000 	nop
  42e740:	8c630000 	lw	v1,0(v1)
  42e744:	00000000 	nop
  42e748:	8fac004c 	lw	t4,76(sp)
  42e74c:	8c6d0048 	lw	t5,72(v1)
  42e750:	00000000 	nop
  42e754:	118d0011 	beq	t4,t5,42e79c <zoomPosition+0x138>
  42e758:	93ae004b 	lbu	t6,75(sp)
  42e75c:	11800008 	beqz	t4,42e780 <zoomPosition+0x11c>
  42e760:	01802025 	move	a0,t4
  42e764:	8f998644 	lw	t9,-31164(gp)
  42e768:	00000000 	nop
  42e76c:	0320f809 	jalr	t9
  42e770:	00000000 	nop
  42e774:	8fbc0038 	lw	gp,56(sp)
  42e778:	10000008 	b	42e79c <zoomPosition+0x138>
  42e77c:	93ae004b 	lbu	t6,75(sp)
  42e780:	8f998640 	lw	t9,-31168(gp)
  42e784:	00000000 	nop
  42e788:	0320f809 	jalr	t9
  42e78c:	00000000 	nop
  42e790:	8fbc0038 	lw	gp,56(sp)
  42e794:	00000000 	nop
  42e798:	93ae004b 	lbu	t6,75(sp)
  42e79c:	c7a40060 	lwc1	$f4,96(sp)
  42e7a0:	11c00016 	beqz	t6,42e7fc <zoomPosition+0x198>
  42e7a4:	00000000 	nop
  42e7a8:	8fb90054 	lw	t9,84(sp)
  42e7ac:	c7a80058 	lwc1	$f8,88(sp)
  42e7b0:	afb90020 	sw	t9,32(sp)
  42e7b4:	8f998558 	lw	t9,-31400(gp)
  42e7b8:	c7a6005c 	lwc1	$f6,92(sp)
  42e7bc:	87af0066 	lh	t7,102(sp)
  42e7c0:	87b80064 	lh	t8,100(sp)
  42e7c4:	8f888560 	lw	t0,-31392(gp)
  42e7c8:	460042a1 	cvt.d.s	$f10,$f8
  42e7cc:	e7aa0014 	swc1	$f10,20(sp)
  42e7d0:	e7ab0010 	swc1	$f11,16(sp)
  42e7d4:	46002321 	cvt.d.s	$f12,$f4
  42e7d8:	afa00028 	sw	zero,40(sp)
  42e7dc:	460033a1 	cvt.d.s	$f14,$f6
  42e7e0:	afaf0018 	sw	t7,24(sp)
  42e7e4:	afb8001c 	sw	t8,28(sp)
  42e7e8:	0320f809 	jalr	t9
  42e7ec:	afa80024 	sw	t0,36(sp)
  42e7f0:	8fbc0038 	lw	gp,56(sp)
  42e7f4:	1000001d 	b	42e86c <zoomPosition+0x208>
  42e7f8:	24020001 	li	v0,1
  42e7fc:	8f89897c 	lw	t1,-30340(gp)
  42e800:	00000000 	nop
  42e804:	8d290000 	lw	t1,0(t1)
  42e808:	00000000 	nop
  42e80c:	a1200c50 	sb	zero,3152(t1)
  42e810:	c7a40058 	lwc1	$f4,88(sp)
  42e814:	8f998558 	lw	t9,-31400(gp)
  42e818:	8fad0054 	lw	t5,84(sp)
  42e81c:	87aa0064 	lh	t2,100(sp)
  42e820:	87ab0066 	lh	t3,102(sp)
  42e824:	c7b2005c 	lwc1	$f18,92(sp)
  42e828:	c7b00060 	lwc1	$f16,96(sp)
  42e82c:	460021a1 	cvt.d.s	$f6,$f4
  42e830:	e7a60014 	swc1	$f6,20(sp)
  42e834:	e7a70010 	swc1	$f7,16(sp)
  42e838:	afa00028 	sw	zero,40(sp)
  42e83c:	afa00024 	sw	zero,36(sp)
  42e840:	afad0020 	sw	t5,32(sp)
  42e844:	afaa001c 	sw	t2,28(sp)
  42e848:	afab0018 	sw	t3,24(sp)
  42e84c:	460093a1 	cvt.d.s	$f14,$f18
  42e850:	0320f809 	jalr	t9
  42e854:	46008321 	cvt.d.s	$f12,$f16
  42e858:	8fbc0038 	lw	gp,56(sp)
  42e85c:	00000000 	nop
  42e860:	10000002 	b	42e86c <zoomPosition+0x208>
  42e864:	24020001 	li	v0,1
  42e868:	00001025 	move	v0,zero
  42e86c:	8fbf003c 	lw	ra,60(sp)
  42e870:	27bd0068 	addiu	sp,sp,104
  42e874:	03e00008 	jr	ra
  42e878:	00000000 	nop
