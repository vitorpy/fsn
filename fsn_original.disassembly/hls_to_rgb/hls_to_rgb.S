# Function: hls_to_rgb
# Address: 0x0043886c - 0x00438a38
# Size: 0x1cc (460 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043886c <hls_to_rgb>:
  43886c:	3c1c0fbe 	lui	gp,0xfbe
  438870:	279c52c4 	addiu	gp,gp,21188
  438874:	0399e021 	addu	gp,gp,t9
  438878:	46207420 	cvt.s.d	$f16,$f14
  43887c:	3c013fe0 	lui	at,0x3fe0
  438880:	44812800 	mtc1	at,$f5
  438884:	44802000 	mtc1	zero,$f4
  438888:	27bdffa0 	addiu	sp,sp,-96
  43888c:	460080a1 	cvt.d.s	$f2,$f16
  438890:	4624103e 	c.le.d	$f2,$f4
  438894:	afbf0024 	sw	ra,36(sp)
  438898:	afbc0020 	sw	gp,32(sp)
  43889c:	e7ad0060 	swc1	$f13,96(sp)
  4388a0:	4500000c 	bc1f	4388d4 <hls_to_rgb+0x68>
  4388a4:	e7ac0064 	swc1	$f12,100(sp)
  4388a8:	c7a70070 	lwc1	$f7,112(sp)
  4388ac:	c7a60074 	lwc1	$f6,116(sp)
  4388b0:	3c013ff0 	lui	at,0x3ff0
  4388b4:	46203020 	cvt.s.d	$f0,$f6
  4388b8:	44814800 	mtc1	at,$f9
  4388bc:	44804000 	mtc1	zero,$f8
  4388c0:	460002a1 	cvt.d.s	$f10,$f0
  4388c4:	462a4100 	add.d	$f4,$f8,$f10
  4388c8:	46241182 	mul.d	$f6,$f2,$f4
  4388cc:	10000008 	b	4388f0 <hls_to_rgb+0x84>
  4388d0:	462034a0 	cvt.s.d	$f18,$f6
  4388d4:	c7a90070 	lwc1	$f9,112(sp)
  4388d8:	c7a80074 	lwc1	$f8,116(sp)
  4388dc:	00000000 	nop
  4388e0:	46204020 	cvt.s.d	$f0,$f8
  4388e4:	46008102 	mul.s	$f4,$f16,$f0
  4388e8:	46008280 	add.s	$f10,$f16,$f0
  4388ec:	46045481 	sub.s	$f18,$f10,$f4
  4388f0:	44803000 	mtc1	zero,$f6
  4388f4:	8fae0080 	lw	t6,128(sp)
  4388f8:	46060032 	c.eq.s	$f0,$f6
  4388fc:	3c014000 	lui	at,0x4000
  438900:	45000008 	bc1f	438924 <hls_to_rgb+0xb8>
  438904:	00000000 	nop
  438908:	e5d00000 	swc1	$f16,0(t6)
  43890c:	8faf007c 	lw	t7,124(sp)
  438910:	00000000 	nop
  438914:	e5f00000 	swc1	$f16,0(t7)
  438918:	8fb80078 	lw	t8,120(sp)
  43891c:	10000042 	b	438a28 <hls_to_rgb+0x1bc>
  438920:	e7100000 	swc1	$f16,0(t8)
  438924:	44814000 	mtc1	at,$f8
  438928:	8f81805c 	lw	at,-32676(gp)
  43892c:	46104282 	mul.s	$f10,$f8,$f16
  438930:	c7a70060 	lwc1	$f7,96(sp)
  438934:	c7a60064 	lwc1	$f6,100(sp)
  438938:	8f998024 	lw	t9,-32732(gp)
  43893c:	46125101 	sub.s	$f4,$f10,$f18
  438940:	c4255a60 	lwc1	$f5,23136(at)
  438944:	46203220 	cvt.s.d	$f8,$f6
  438948:	27398754 	addiu	t9,t9,-30892
  43894c:	46002321 	cvt.d.s	$f12,$f4
  438950:	c4245a64 	lwc1	$f4,23140(at)
  438954:	460042a1 	cvt.d.s	$f10,$f8
  438958:	46245182 	mul.d	$f6,$f10,$f4
  43895c:	3c01405e 	lui	at,0x405e
  438960:	44815800 	mtc1	at,$f11
  438964:	44805000 	mtc1	zero,$f10
  438968:	e7ac0034 	swc1	$f12,52(sp)
  43896c:	46203220 	cvt.s.d	$f8,$f6
  438970:	e7ad0030 	swc1	$f13,48(sp)
  438974:	460040a1 	cvt.d.s	$f2,$f8
  438978:	462a1100 	add.d	$f4,$f2,$f10
  43897c:	e7a2002c 	swc1	$f2,44(sp)
  438980:	460093a1 	cvt.d.s	$f14,$f18
  438984:	e7ae003c 	swc1	$f14,60(sp)
  438988:	e7af0038 	swc1	$f15,56(sp)
  43898c:	e7a40014 	swc1	$f4,20(sp)
  438990:	e7a50010 	swc1	$f5,16(sp)
  438994:	0320f809 	jalr	t9
  438998:	e7a30028 	swc1	$f3,40(sp)
  43899c:	8fbc0020 	lw	gp,32(sp)
  4389a0:	8fb90078 	lw	t9,120(sp)
  4389a4:	c7a30028 	lwc1	$f3,40(sp)
  4389a8:	c7a2002c 	lwc1	$f2,44(sp)
  4389ac:	c7ad0030 	lwc1	$f13,48(sp)
  4389b0:	c7ac0034 	lwc1	$f12,52(sp)
  4389b4:	c7af0038 	lwc1	$f15,56(sp)
  4389b8:	c7ae003c 	lwc1	$f14,60(sp)
  4389bc:	e7200000 	swc1	$f0,0(t9)
  4389c0:	8f998024 	lw	t9,-32732(gp)
  4389c4:	e7a30010 	swc1	$f3,16(sp)
  4389c8:	27398754 	addiu	t9,t9,-30892
  4389cc:	0320f809 	jalr	t9
  4389d0:	e7a20014 	swc1	$f2,20(sp)
  4389d4:	8fbc0020 	lw	gp,32(sp)
  4389d8:	3c01405e 	lui	at,0x405e
  4389dc:	c7a30028 	lwc1	$f3,40(sp)
  4389e0:	c7a2002c 	lwc1	$f2,44(sp)
  4389e4:	44813800 	mtc1	at,$f7
  4389e8:	44803000 	mtc1	zero,$f6
  4389ec:	8fa8007c 	lw	t0,124(sp)
  4389f0:	8f998024 	lw	t9,-32732(gp)
  4389f4:	46261201 	sub.d	$f8,$f2,$f6
  4389f8:	c7ad0030 	lwc1	$f13,48(sp)
  4389fc:	c7ac0034 	lwc1	$f12,52(sp)
  438a00:	c7af0038 	lwc1	$f15,56(sp)
  438a04:	c7ae003c 	lwc1	$f14,60(sp)
  438a08:	e5000000 	swc1	$f0,0(t0)
  438a0c:	27398754 	addiu	t9,t9,-30892
  438a10:	e7a80014 	swc1	$f8,20(sp)
  438a14:	0320f809 	jalr	t9
  438a18:	e7a90010 	swc1	$f9,16(sp)
  438a1c:	8fa90080 	lw	t1,128(sp)
  438a20:	8fbc0020 	lw	gp,32(sp)
  438a24:	e5200000 	swc1	$f0,0(t1)
  438a28:	8fbf0024 	lw	ra,36(sp)
  438a2c:	27bd0060 	addiu	sp,sp,96
  438a30:	03e00008 	jr	ra
  438a34:	00000000 	nop
