# Function: FUN_0041a648
# Address: 0x0041a648 - 0x0041a8fc
# Size: 0x2b4 (692 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041a648 <findzoom_warp+0xc>:
  41a648:	27bdffd0 	addiu	sp,sp,-48
  41a64c:	8fae0040 	lw	t6,64(sp)
  41a650:	afbf001c 	sw	ra,28(sp)
  41a654:	afbc0018 	sw	gp,24(sp)
  41a658:	afa40030 	sw	a0,48(sp)
  41a65c:	afa50034 	sw	a1,52(sp)
  41a660:	afa60038 	sw	a2,56(sp)
  41a664:	afa7003c 	sw	a3,60(sp)
  41a668:	a5c00000 	sh	zero,0(t6)
  41a66c:	8faf0048 	lw	t7,72(sp)
  41a670:	27a60024 	addiu	a2,sp,36
  41a674:	a1e00000 	sb	zero,0(t7)
  41a678:	8fb8004c 	lw	t8,76(sp)
  41a67c:	27a50028 	addiu	a1,sp,40
  41a680:	a3000000 	sb	zero,0(t8)
  41a684:	8f998608 	lw	t9,-31224(gp)
  41a688:	27a4002c 	addiu	a0,sp,44
  41a68c:	0320f809 	jalr	t9
  41a690:	00000000 	nop
  41a694:	8fb9002c 	lw	t9,44(sp)
  41a698:	8fbc0018 	lw	gp,24(sp)
  41a69c:	8fa30048 	lw	v1,72(sp)
  41a6a0:	1320008e 	beqz	t9,41a8dc <findzoom_warp+0x2a0>
  41a6a4:	240c0001 	li	t4,1
  41a6a8:	8fa80028 	lw	t0,40(sp)
  41a6ac:	00000000 	nop
  41a6b0:	1100005f 	beqz	t0,41a830 <findzoom_warp+0x1f4>
  41a6b4:	00000000 	nop
  41a6b8:	8f85897c 	lw	a1,-30340(gp)
  41a6bc:	00000000 	nop
  41a6c0:	8ca90000 	lw	t1,0(a1)
  41a6c4:	00000000 	nop
  41a6c8:	8d2a003c 	lw	t2,60(t1)
  41a6cc:	00000000 	nop
  41a6d0:	132a000a 	beq	t9,t2,41a6fc <findzoom_warp+0xc0>
  41a6d4:	00000000 	nop
  41a6d8:	8f848098 	lw	a0,-32616(gp)
  41a6dc:	8f85805c 	lw	a1,-32676(gp)
  41a6e0:	8f9983f8 	lw	t9,-31752(gp)
  41a6e4:	24840020 	addiu	a0,a0,32
  41a6e8:	0320f809 	jalr	t9
  41a6ec:	24a5aeb8 	addiu	a1,a1,-20808
  41a6f0:	8fbc0018 	lw	gp,24(sp)
  41a6f4:	1000007d 	b	41a8ec <findzoom_warp+0x2b0>
  41a6f8:	00001025 	move	v0,zero
  41a6fc:	8f998644 	lw	t9,-31164(gp)
  41a700:	8fa40028 	lw	a0,40(sp)
  41a704:	0320f809 	jalr	t9
  41a708:	00000000 	nop
  41a70c:	8fbc0018 	lw	gp,24(sp)
  41a710:	8fac0028 	lw	t4,40(sp)
  41a714:	8f85897c 	lw	a1,-30340(gp)
  41a718:	8f838a24 	lw	v1,-30172(gp)
  41a71c:	8cab0000 	lw	t3,0(a1)
  41a720:	c46800a0 	lwc1	$f8,160(v1)
  41a724:	c5640014 	lwc1	$f4,20(t3)
  41a728:	460042a1 	cvt.d.s	$f10,$f8
  41a72c:	460021a1 	cvt.d.s	$f6,$f4
  41a730:	462a3402 	mul.d	$f16,$f6,$f10
  41a734:	c5920014 	lwc1	$f18,20(t4)
  41a738:	8fad0030 	lw	t5,48(sp)
  41a73c:	46009121 	cvt.d.s	$f4,$f18
  41a740:	3c014000 	lui	at,0x4000
  41a744:	46302201 	sub.d	$f8,$f4,$f16
  41a748:	44802000 	mtc1	zero,$f4
  41a74c:	462041a0 	cvt.s.d	$f6,$f8
  41a750:	44812800 	mtc1	at,$f5
  41a754:	e5a60000 	swc1	$f6,0(t5)
  41a758:	8fae002c 	lw	t6,44(sp)
  41a75c:	c5880018 	lwc1	$f8,24(t4)
  41a760:	c5ca003c 	lwc1	$f10,60(t6)
  41a764:	8caf0000 	lw	t7,0(a1)
  41a768:	460054a1 	cvt.d.s	$f18,$f10
  41a76c:	00000000 	nop
  41a770:	46249403 	div.d	$f16,$f18,$f4
  41a774:	460041a1 	cvt.d.s	$f6,$f8
  41a778:	c46800a0 	lwc1	$f8,160(v1)
  41a77c:	c5f20018 	lwc1	$f18,24(t7)
  41a780:	8fb80034 	lw	t8,52(sp)
  41a784:	46009121 	cvt.d.s	$f4,$f18
  41a788:	46303280 	add.d	$f10,$f6,$f16
  41a78c:	460041a1 	cvt.d.s	$f6,$f8
  41a790:	46262402 	mul.d	$f16,$f4,$f6
  41a794:	46305481 	sub.d	$f18,$f10,$f16
  41a798:	46209220 	cvt.s.d	$f8,$f18
  41a79c:	e7080000 	swc1	$f8,0(t8)
  41a7a0:	90680005 	lbu	t0,5(v1)
  41a7a4:	8fab0028 	lw	t3,40(sp)
  41a7a8:	1100000d 	beqz	t0,41a7e0 <findzoom_warp+0x1a4>
  41a7ac:	00000000 	nop
  41a7b0:	8fb9004c 	lw	t9,76(sp)
  41a7b4:	24090001 	li	t1,1
  41a7b8:	a3290000 	sb	t1,0(t9)
  41a7bc:	c46a0080 	lwc1	$f10,128(v1)
  41a7c0:	c4640090 	lwc1	$f4,144(v1)
  41a7c4:	46005421 	cvt.d.s	$f16,$f10
  41a7c8:	460021a1 	cvt.d.s	$f6,$f4
  41a7cc:	46303480 	add.d	$f18,$f6,$f16
  41a7d0:	8faa0038 	lw	t2,56(sp)
  41a7d4:	46209220 	cvt.s.d	$f8,$f18
  41a7d8:	10000009 	b	41a800 <findzoom_warp+0x1c4>
  41a7dc:	e5480000 	swc1	$f8,0(t2)
  41a7e0:	c464009c 	lwc1	$f4,156(v1)
  41a7e4:	c566001c 	lwc1	$f6,28(t3)
  41a7e8:	460022a1 	cvt.d.s	$f10,$f4
  41a7ec:	46003421 	cvt.d.s	$f16,$f6
  41a7f0:	46305480 	add.d	$f18,$f10,$f16
  41a7f4:	8fad0038 	lw	t5,56(sp)
  41a7f8:	46209220 	cvt.s.d	$f8,$f18
  41a7fc:	e5a80000 	swc1	$f8,0(t5)
  41a800:	8c6e00a4 	lw	t6,164(v1)
  41a804:	8fac003c 	lw	t4,60(sp)
  41a808:	24090001 	li	t1,1
  41a80c:	a58e0000 	sh	t6,0(t4)
  41a810:	8caf0000 	lw	t7,0(a1)
  41a814:	8fa80044 	lw	t0,68(sp)
  41a818:	8df8003c 	lw	t8,60(t7)
  41a81c:	24020001 	li	v0,1
  41a820:	ad180000 	sw	t8,0(t0)
  41a824:	8fb9004c 	lw	t9,76(sp)
  41a828:	10000030 	b	41a8ec <findzoom_warp+0x2b0>
  41a82c:	a3290000 	sb	t1,0(t9)
  41a830:	8f85897c 	lw	a1,-30340(gp)
  41a834:	8faa002c 	lw	t2,44(sp)
  41a838:	8cab0000 	lw	t3,0(a1)
  41a83c:	00000000 	nop
  41a840:	8d6d003c 	lw	t5,60(t3)
  41a844:	00000000 	nop
  41a848:	154d001e 	bne	t2,t5,41a8c4 <findzoom_warp+0x288>
  41a84c:	240a0001 	li	t2,1
  41a850:	8f998640 	lw	t9,-31168(gp)
  41a854:	00000000 	nop
  41a858:	0320f809 	jalr	t9
  41a85c:	00000000 	nop
  41a860:	8fbc0018 	lw	gp,24(sp)
  41a864:	8fae0030 	lw	t6,48(sp)
  41a868:	8f838a24 	lw	v1,-30172(gp)
  41a86c:	8f85897c 	lw	a1,-30340(gp)
  41a870:	c464002c 	lwc1	$f4,44(v1)
  41a874:	24020001 	li	v0,1
  41a878:	e5c40000 	swc1	$f4,0(t6)
  41a87c:	8fac0034 	lw	t4,52(sp)
  41a880:	c4660030 	lwc1	$f6,48(v1)
  41a884:	00000000 	nop
  41a888:	e5860000 	swc1	$f6,0(t4)
  41a88c:	8faf0038 	lw	t7,56(sp)
  41a890:	c46a0034 	lwc1	$f10,52(v1)
  41a894:	00000000 	nop
  41a898:	e5ea0000 	swc1	$f10,0(t7)
  41a89c:	8fa8003c 	lw	t0,60(sp)
  41a8a0:	8c780038 	lw	t8,56(v1)
  41a8a4:	00000000 	nop
  41a8a8:	a5180000 	sh	t8,0(t0)
  41a8ac:	8ca90000 	lw	t1,0(a1)
  41a8b0:	8fab0044 	lw	t3,68(sp)
  41a8b4:	8d39003c 	lw	t9,60(t1)
  41a8b8:	1000000c 	b	41a8ec <findzoom_warp+0x2b0>
  41a8bc:	ad790000 	sw	t9,0(t3)
  41a8c0:	240a0001 	li	t2,1
  41a8c4:	a06a0000 	sb	t2,0(v1)
  41a8c8:	8fae0044 	lw	t6,68(sp)
  41a8cc:	8fad002c 	lw	t5,44(sp)
  41a8d0:	24020001 	li	v0,1
  41a8d4:	10000005 	b	41a8ec <findzoom_warp+0x2b0>
  41a8d8:	adcd0000 	sw	t5,0(t6)
  41a8dc:	a06c0000 	sb	t4,0(v1)
  41a8e0:	8faf0044 	lw	t7,68(sp)
  41a8e4:	24020001 	li	v0,1
  41a8e8:	ade00000 	sw	zero,0(t7)
  41a8ec:	8fbf001c 	lw	ra,28(sp)
  41a8f0:	27bd0030 	addiu	sp,sp,48
  41a8f4:	03e00008 	jr	ra
  41a8f8:	00000000 	nop
