# Function: FUN_0040f960
# Address: 0x0040f960 - 0x0040fae8
# Size: 0x188 (392 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f960 <activeWorkProc+0x77c>:
  40f960:	3c1c0fc1 	lui	gp,0xfc1
  40f964:	279ce1d0 	addiu	gp,gp,-7728
  40f968:	0399e021 	addu	gp,gp,t9
  40f96c:	27bdffc8 	addiu	sp,sp,-56
  40f970:	8f998018 	lw	t9,-32744(gp)
  40f974:	afa40038 	sw	a0,56(sp)
  40f978:	afbf001c 	sw	ra,28(sp)
  40f97c:	afa5003c 	sw	a1,60(sp)
  40f980:	afa60040 	sw	a2,64(sp)
  40f984:	00a02025 	move	a0,a1
  40f988:	2739f080 	addiu	t9,t9,-3968
  40f98c:	afbc0018 	sw	gp,24(sp)
  40f990:	afa70044 	sw	a3,68(sp)
  40f994:	27a50034 	addiu	a1,sp,52
  40f998:	0320f809 	jalr	t9
  40f99c:	27a60030 	addiu	a2,sp,48
  40f9a0:	8fbc0018 	lw	gp,24(sp)
  40f9a4:	c7a40034 	lwc1	$f4,52(sp)
  40f9a8:	8f818068 	lw	at,-32664(gp)
  40f9ac:	460021a1 	cvt.d.s	$f6,$f4
  40f9b0:	c4280158 	lwc1	$f8,344(at)
  40f9b4:	8f818068 	lw	at,-32664(gp)
  40f9b8:	460042a1 	cvt.d.s	$f10,$f8
  40f9bc:	462a3401 	sub.d	$f16,$f6,$f10
  40f9c0:	c7a40030 	lwc1	$f4,48(sp)
  40f9c4:	c426015c 	lwc1	$f6,348(at)
  40f9c8:	462084a0 	cvt.s.d	$f18,$f16
  40f9cc:	8f82897c 	lw	v0,-30340(gp)
  40f9d0:	46002221 	cvt.d.s	$f8,$f4
  40f9d4:	460032a1 	cvt.d.s	$f10,$f6
  40f9d8:	462a4401 	sub.d	$f16,$f8,$f10
  40f9dc:	8f818a24 	lw	at,-30172(gp)
  40f9e0:	46208120 	cvt.s.d	$f4,$f16
  40f9e4:	8c420000 	lw	v0,0(v0)
  40f9e8:	e7b20034 	swc1	$f18,52(sp)
  40f9ec:	e7a40030 	swc1	$f4,48(sp)
  40f9f0:	c4260010 	lwc1	$f6,16(at)
  40f9f4:	c44a0008 	lwc1	$f10,8(v0)
  40f9f8:	46002221 	cvt.d.s	$f8,$f4
  40f9fc:	46003021 	cvt.d.s	$f0,$f6
  40fa00:	46005421 	cvt.d.s	$f16,$f10
  40fa04:	46304182 	mul.d	$f6,$f8,$f16
  40fa08:	8f81806c 	lw	at,-32660(gp)
  40fa0c:	46203102 	mul.d	$f4,$f6,$f0
  40fa10:	462022a0 	cvt.s.d	$f10,$f4
  40fa14:	e42a65d4 	swc1	$f10,26068(at)
  40fa18:	c4500024 	lwc1	$f16,36(v0)
  40fa1c:	46005221 	cvt.d.s	$f8,$f10
  40fa20:	460081a1 	cvt.d.s	$f6,$f16
  40fa24:	46264102 	mul.d	$f4,$f8,$f6
  40fa28:	8f81806c 	lw	at,-32660(gp)
  40fa2c:	462022a0 	cvt.s.d	$f10,$f4
  40fa30:	e42a65dc 	swc1	$f10,26076(at)
  40fa34:	904e0038 	lbu	t6,56(v0)
  40fa38:	3c01c059 	lui	at,0xc059
  40fa3c:	11c00013 	beqz	t6,40fa8c <activeWorkProc+0x8a8>
  40fa40:	00000000 	nop
  40fa44:	44814800 	mtc1	at,$f9
  40fa48:	44804000 	mtc1	zero,$f8
  40fa4c:	46009421 	cvt.d.s	$f16,$f18
  40fa50:	46288182 	mul.d	$f6,$f16,$f8
  40fa54:	44805000 	mtc1	zero,$f10
  40fa58:	444ff800 	cfc1	t7,c1_fcsr
  40fa5c:	00000000 	nop
  40fa60:	35e10003 	ori	at,t7,0x3
  40fa64:	38210002 	xori	at,at,0x2
  40fa68:	44c1f800 	ctc1	at,c1_fcsr
  40fa6c:	8f81806c 	lw	at,-32660(gp)
  40fa70:	46203124 	cvt.w.d	$f4,$f6
  40fa74:	44182000 	mfc1	t8,$f4
  40fa78:	44cff800 	ctc1	t7,c1_fcsr
  40fa7c:	a43865d8 	sh	t8,26072(at)
  40fa80:	8f81806c 	lw	at,-32660(gp)
  40fa84:	1000000d 	b	40fabc <activeWorkProc+0x8d8>
  40fa88:	e42a65d0 	swc1	$f10,26064(at)
  40fa8c:	c7b20034 	lwc1	$f18,52(sp)
  40fa90:	c4480008 	lwc1	$f8,8(v0)
  40fa94:	46009421 	cvt.d.s	$f16,$f18
  40fa98:	460041a1 	cvt.d.s	$f6,$f8
  40fa9c:	46268102 	mul.d	$f4,$f16,$f6
  40faa0:	8f81806c 	lw	at,-32660(gp)
  40faa4:	46202282 	mul.d	$f10,$f4,$f0
  40faa8:	462054a0 	cvt.s.d	$f18,$f10
  40faac:	e43265d0 	swc1	$f18,26064(at)
  40fab0:	8f81806c 	lw	at,-32660(gp)
  40fab4:	00000000 	nop
  40fab8:	a42065d8 	sh	zero,26072(at)
  40fabc:	8f998018 	lw	t9,-32744(gp)
  40fac0:	8f848018 	lw	a0,-32744(gp)
  40fac4:	8f85806c 	lw	a1,-32660(gp)
  40fac8:	2739f150 	addiu	t9,t9,-3760
  40facc:	2484f20c 	addiu	a0,a0,-3572
  40fad0:	0320f809 	jalr	t9
  40fad4:	24a565d0 	addiu	a1,a1,26064
  40fad8:	8fbf001c 	lw	ra,28(sp)
  40fadc:	8fbc0018 	lw	gp,24(sp)
  40fae0:	03e00008 	jr	ra
  40fae4:	27bd0038 	addiu	sp,sp,56
