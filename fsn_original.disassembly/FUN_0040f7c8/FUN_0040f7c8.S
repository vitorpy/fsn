# Function: FUN_0040f7c8
# Address: 0x0040f7c8 - 0x0040f960
# Size: 0x198 (408 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f7c8 <activeWorkProc+0x5e4>:
  40f7c8:	3c1c0fc1 	lui	gp,0xfc1
  40f7cc:	279ce368 	addiu	gp,gp,-7320
  40f7d0:	0399e021 	addu	gp,gp,t9
  40f7d4:	27bdffc8 	addiu	sp,sp,-56
  40f7d8:	8f998778 	lw	t9,-30856(gp)
  40f7dc:	afbf001c 	sw	ra,28(sp)
  40f7e0:	afa5003c 	sw	a1,60(sp)
  40f7e4:	afbc0018 	sw	gp,24(sp)
  40f7e8:	afa60040 	sw	a2,64(sp)
  40f7ec:	afa70044 	sw	a3,68(sp)
  40f7f0:	0320f809 	jalr	t9
  40f7f4:	00002825 	move	a1,zero
  40f7f8:	8fbc0018 	lw	gp,24(sp)
  40f7fc:	8fa4003c 	lw	a0,60(sp)
  40f800:	8f998018 	lw	t9,-32744(gp)
  40f804:	27a50034 	addiu	a1,sp,52
  40f808:	2739f080 	addiu	t9,t9,-3968
  40f80c:	0320f809 	jalr	t9
  40f810:	27a60030 	addiu	a2,sp,48
  40f814:	8fbc0018 	lw	gp,24(sp)
  40f818:	c7a40034 	lwc1	$f4,52(sp)
  40f81c:	8f818068 	lw	at,-32664(gp)
  40f820:	460021a1 	cvt.d.s	$f6,$f4
  40f824:	c4280158 	lwc1	$f8,344(at)
  40f828:	8f818068 	lw	at,-32664(gp)
  40f82c:	460042a1 	cvt.d.s	$f10,$f8
  40f830:	462a3401 	sub.d	$f16,$f6,$f10
  40f834:	c7a40030 	lwc1	$f4,48(sp)
  40f838:	c426015c 	lwc1	$f6,348(at)
  40f83c:	462084a0 	cvt.s.d	$f18,$f16
  40f840:	8f82897c 	lw	v0,-30340(gp)
  40f844:	46002221 	cvt.d.s	$f8,$f4
  40f848:	460032a1 	cvt.d.s	$f10,$f6
  40f84c:	462a4401 	sub.d	$f16,$f8,$f10
  40f850:	8f818a24 	lw	at,-30172(gp)
  40f854:	46208120 	cvt.s.d	$f4,$f16
  40f858:	8c420000 	lw	v0,0(v0)
  40f85c:	e7b20034 	swc1	$f18,52(sp)
  40f860:	e7a40030 	swc1	$f4,48(sp)
  40f864:	c4260010 	lwc1	$f6,16(at)
  40f868:	c44a0008 	lwc1	$f10,8(v0)
  40f86c:	46002221 	cvt.d.s	$f8,$f4
  40f870:	46003021 	cvt.d.s	$f0,$f6
  40f874:	46005421 	cvt.d.s	$f16,$f10
  40f878:	46304182 	mul.d	$f6,$f8,$f16
  40f87c:	8f81806c 	lw	at,-32660(gp)
  40f880:	46203102 	mul.d	$f4,$f6,$f0
  40f884:	462022a0 	cvt.s.d	$f10,$f4
  40f888:	e42a65c4 	swc1	$f10,26052(at)
  40f88c:	c4460024 	lwc1	$f6,36(v0)
  40f890:	46005207 	neg.s	$f8,$f10
  40f894:	46004421 	cvt.d.s	$f16,$f8
  40f898:	46003121 	cvt.d.s	$f4,$f6
  40f89c:	46248282 	mul.d	$f10,$f16,$f4
  40f8a0:	8f81806c 	lw	at,-32660(gp)
  40f8a4:	46205220 	cvt.s.d	$f8,$f10
  40f8a8:	e42865cc 	swc1	$f8,26060(at)
  40f8ac:	904e0038 	lbu	t6,56(v0)
  40f8b0:	3c01c059 	lui	at,0xc059
  40f8b4:	11c00013 	beqz	t6,40f904 <activeWorkProc+0x720>
  40f8b8:	00000000 	nop
  40f8bc:	44818800 	mtc1	at,$f17
  40f8c0:	44808000 	mtc1	zero,$f16
  40f8c4:	460091a1 	cvt.d.s	$f6,$f18
  40f8c8:	46303102 	mul.d	$f4,$f6,$f16
  40f8cc:	44804000 	mtc1	zero,$f8
  40f8d0:	444ff800 	cfc1	t7,c1_fcsr
  40f8d4:	00000000 	nop
  40f8d8:	35e10003 	ori	at,t7,0x3
  40f8dc:	38210002 	xori	at,at,0x2
  40f8e0:	44c1f800 	ctc1	at,c1_fcsr
  40f8e4:	8f81806c 	lw	at,-32660(gp)
  40f8e8:	462022a4 	cvt.w.d	$f10,$f4
  40f8ec:	44185000 	mfc1	t8,$f10
  40f8f0:	44cff800 	ctc1	t7,c1_fcsr
  40f8f4:	a43865c8 	sh	t8,26056(at)
  40f8f8:	8f81806c 	lw	at,-32660(gp)
  40f8fc:	1000000d 	b	40f934 <activeWorkProc+0x750>
  40f900:	e42865c0 	swc1	$f8,26048(at)
  40f904:	c7b20034 	lwc1	$f18,52(sp)
  40f908:	c4500008 	lwc1	$f16,8(v0)
  40f90c:	460091a1 	cvt.d.s	$f6,$f18
  40f910:	46008121 	cvt.d.s	$f4,$f16
  40f914:	46243282 	mul.d	$f10,$f6,$f4
  40f918:	8f81806c 	lw	at,-32660(gp)
  40f91c:	46205202 	mul.d	$f8,$f10,$f0
  40f920:	462044a0 	cvt.s.d	$f18,$f8
  40f924:	e43265c0 	swc1	$f18,26048(at)
  40f928:	8f81806c 	lw	at,-32660(gp)
  40f92c:	00000000 	nop
  40f930:	a42065c8 	sh	zero,26056(at)
  40f934:	8f998018 	lw	t9,-32744(gp)
  40f938:	8f848018 	lw	a0,-32744(gp)
  40f93c:	8f85806c 	lw	a1,-32660(gp)
  40f940:	2739f150 	addiu	t9,t9,-3760
  40f944:	2484f20c 	addiu	a0,a0,-3572
  40f948:	0320f809 	jalr	t9
  40f94c:	24a565c0 	addiu	a1,a1,26048
  40f950:	8fbf001c 	lw	ra,28(sp)
  40f954:	8fbc0018 	lw	gp,24(sp)
  40f958:	03e00008 	jr	ra
  40f95c:	27bd0038 	addiu	sp,sp,56
