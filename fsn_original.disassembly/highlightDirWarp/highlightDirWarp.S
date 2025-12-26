# Function: highlightDirWarp
# Address: 0x0041a9f8 - 0x0041ac80
# Size: 0x288 (648 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041a9f8 <highlightDirWarp>:
  41a9f8:	3c1c0fc0 	lui	gp,0xfc0
  41a9fc:	279c3138 	addiu	gp,gp,12600
  41aa00:	0399e021 	addu	gp,gp,t9
  41aa04:	8f8e897c 	lw	t6,-30340(gp)
  41aa08:	27bdffe0 	addiu	sp,sp,-32
  41aa0c:	8dce0000 	lw	t6,0(t6)
  41aa10:	afbf001c 	sw	ra,28(sp)
  41aa14:	afbc0018 	sw	gp,24(sp)
  41aa18:	afb00014 	sw	s0,20(sp)
  41aa1c:	8dcf003c 	lw	t7,60(t6)
  41aa20:	00808025 	move	s0,a0
  41aa24:	108f0093 	beq	a0,t7,41ac74 <highlightDirWarp+0x27c>
  41aa28:	8fbf001c 	lw	ra,28(sp)
  41aa2c:	8f9984b8 	lw	t9,-31560(gp)
  41aa30:	00000000 	nop
  41aa34:	0320f809 	jalr	t9
  41aa38:	00000000 	nop
  41aa3c:	8fbc0018 	lw	gp,24(sp)
  41aa40:	00000000 	nop
  41aa44:	8f98897c 	lw	t8,-30340(gp)
  41aa48:	00000000 	nop
  41aa4c:	8f180000 	lw	t8,0(t8)
  41aa50:	00000000 	nop
  41aa54:	8f05003c 	lw	a1,60(t8)
  41aa58:	00000000 	nop
  41aa5c:	8cb90028 	lw	t9,40(a1)
  41aa60:	00000000 	nop
  41aa64:	1619000e 	bne	s0,t9,41aaa0 <highlightDirWarp+0xa8>
  41aa68:	00000000 	nop
  41aa6c:	8f838a24 	lw	v1,-30172(gp)
  41aa70:	c4a4003c 	lwc1	$f4,60(a1)
  41aa74:	c46800dc 	lwc1	$f8,220(v1)
  41aa78:	8f998610 	lw	t9,-31216(gp)
  41aa7c:	44806800 	mtc1	zero,$f13
  41aa80:	44806000 	mtc1	zero,$f12
  41aa84:	460021a1 	cvt.d.s	$f6,$f4
  41aa88:	460042a1 	cvt.d.s	$f10,$f8
  41aa8c:	0320f809 	jalr	t9
  41aa90:	462a3380 	add.d	$f14,$f6,$f10
  41aa94:	8fbc0018 	lw	gp,24(sp)
  41aa98:	1000006f 	b	41ac58 <highlightDirWarp+0x260>
  41aa9c:	00000000 	nop
  41aaa0:	8ca8002c 	lw	t0,44(a1)
  41aaa4:	00000000 	nop
  41aaa8:	1608000f 	bne	s0,t0,41aae8 <highlightDirWarp+0xf0>
  41aaac:	00000000 	nop
  41aab0:	8f838a24 	lw	v1,-30172(gp)
  41aab4:	c4a4003c 	lwc1	$f4,60(a1)
  41aab8:	c47000e0 	lwc1	$f16,224(v1)
  41aabc:	c46600dc 	lwc1	$f6,220(v1)
  41aac0:	8f998610 	lw	t9,-31216(gp)
  41aac4:	46002221 	cvt.d.s	$f8,$f4
  41aac8:	46008487 	neg.s	$f18,$f16
  41aacc:	460032a1 	cvt.d.s	$f10,$f6
  41aad0:	462a4380 	add.d	$f14,$f8,$f10
  41aad4:	0320f809 	jalr	t9
  41aad8:	46009321 	cvt.d.s	$f12,$f18
  41aadc:	8fbc0018 	lw	gp,24(sp)
  41aae0:	1000005d 	b	41ac58 <highlightDirWarp+0x260>
  41aae4:	00000000 	nop
  41aae8:	8ca90030 	lw	t1,48(a1)
  41aaec:	00000000 	nop
  41aaf0:	1609000e 	bne	s0,t1,41ab2c <highlightDirWarp+0x134>
  41aaf4:	00000000 	nop
  41aaf8:	8f838a24 	lw	v1,-30172(gp)
  41aafc:	c4b2003c 	lwc1	$f18,60(a1)
  41ab00:	c46600dc 	lwc1	$f6,220(v1)
  41ab04:	8f998610 	lw	t9,-31216(gp)
  41ab08:	c47000e0 	lwc1	$f16,224(v1)
  41ab0c:	46009121 	cvt.d.s	$f4,$f18
  41ab10:	46003221 	cvt.d.s	$f8,$f6
  41ab14:	46282380 	add.d	$f14,$f4,$f8
  41ab18:	0320f809 	jalr	t9
  41ab1c:	46008321 	cvt.d.s	$f12,$f16
  41ab20:	8fbc0018 	lw	gp,24(sp)
  41ab24:	1000004c 	b	41ac58 <highlightDirWarp+0x260>
  41ab28:	00000000 	nop
  41ab2c:	8ca40014 	lw	a0,20(a1)
  41ab30:	00001025 	move	v0,zero
  41ab34:	18800048 	blez	a0,41ac58 <highlightDirWarp+0x260>
  41ab38:	248bffff 	addiu	t3,a0,-1
  41ab3c:	8ca30018 	lw	v1,24(a1)
  41ab40:	00000000 	nop
  41ab44:	8c6a0000 	lw	t2,0(v1)
  41ab48:	00000000 	nop
  41ab4c:	160a003e 	bne	s0,t2,41ac48 <highlightDirWarp+0x250>
  41ab50:	00000000 	nop
  41ab54:	8f838a24 	lw	v1,-30172(gp)
  41ab58:	3c013fe0 	lui	at,0x3fe0
  41ab5c:	c46000d0 	lwc1	$f0,208(v1)
  41ab60:	44819800 	mtc1	at,$f19
  41ab64:	44809000 	mtc1	zero,$f18
  41ab68:	46000287 	neg.s	$f10,$f0
  41ab6c:	46005421 	cvt.d.s	$f16,$f10
  41ab70:	46328182 	mul.d	$f6,$f16,$f18
  41ab74:	448b2000 	mtc1	t3,$f4
  41ab78:	44829000 	mtc1	v0,$f18
  41ab7c:	46000421 	cvt.d.s	$f16,$f0
  41ab80:	44807000 	mtc1	zero,$f14
  41ab84:	46802221 	cvt.d.w	$f8,$f4
  41ab88:	8f9984a0 	lw	t9,-31584(gp)
  41ab8c:	44067000 	mfc1	a2,$f14
  41ab90:	46283282 	mul.d	$f10,$f6,$f8
  41ab94:	46809121 	cvt.d.w	$f4,$f18
  41ab98:	46248182 	mul.d	$f6,$f16,$f4
  41ab9c:	46265200 	add.d	$f8,$f10,$f6
  41aba0:	0320f809 	jalr	t9
  41aba4:	46204320 	cvt.s.d	$f12,$f8
  41aba8:	8fbc0018 	lw	gp,24(sp)
  41abac:	2404fc7c 	li	a0,-900
  41abb0:	8f998498 	lw	t9,-31592(gp)
  41abb4:	2405007a 	li	a1,122
  41abb8:	0320f809 	jalr	t9
  41abbc:	00000000 	nop
  41abc0:	8fbc0018 	lw	gp,24(sp)
  41abc4:	24060000 	li	a2,0
  41abc8:	8f81805c 	lw	at,-32676(gp)
  41abcc:	8f9984a0 	lw	t9,-31584(gp)
  41abd0:	c42caf5c 	lwc1	$f12,-20644(at)
  41abd4:	8f81805c 	lw	at,-32676(gp)
  41abd8:	00000000 	nop
  41abdc:	c42eaf60 	lwc1	$f14,-20640(at)
  41abe0:	0320f809 	jalr	t9
  41abe4:	00000000 	nop
  41abe8:	8fbc0018 	lw	gp,24(sp)
  41abec:	8e0c0004 	lw	t4,4(s0)
  41abf0:	8f81805c 	lw	at,-32676(gp)
  41abf4:	448c9000 	mtc1	t4,$f18
  41abf8:	c42caf64 	lwc1	$f12,-20636(at)
  41abfc:	8f81805c 	lw	at,-32676(gp)
  41ac00:	46809421 	cvt.d.w	$f16,$f18
  41ac04:	c425af68 	lwc1	$f5,-20632(at)
  41ac08:	c424af6c 	lwc1	$f4,-20628(at)
  41ac0c:	8f81805c 	lw	at,-32676(gp)
  41ac10:	46248282 	mul.d	$f10,$f16,$f4
  41ac14:	c427af70 	lwc1	$f7,-20624(at)
  41ac18:	c426af74 	lwc1	$f6,-20620(at)
  41ac1c:	8f998210 	lw	t9,-32240(gp)
  41ac20:	3c073e7a 	lui	a3,0x3e7a
  41ac24:	46265200 	add.d	$f8,$f10,$f6
  41ac28:	34e7e148 	ori	a3,a3,0xe148
  41ac2c:	462044a0 	cvt.s.d	$f18,$f8
  41ac30:	44069000 	mfc1	a2,$f18
  41ac34:	0320f809 	jalr	t9
  41ac38:	46006386 	mov.s	$f14,$f12
  41ac3c:	8fbc0018 	lw	gp,24(sp)
  41ac40:	10000005 	b	41ac58 <highlightDirWarp+0x260>
  41ac44:	00000000 	nop
  41ac48:	24420001 	addiu	v0,v0,1
  41ac4c:	0044082a 	slt	at,v0,a0
  41ac50:	1420ffbc 	bnez	at,41ab44 <highlightDirWarp+0x14c>
  41ac54:	24630004 	addiu	v1,v1,4
  41ac58:	8f9984d8 	lw	t9,-31528(gp)
  41ac5c:	00000000 	nop
  41ac60:	0320f809 	jalr	t9
  41ac64:	00000000 	nop
  41ac68:	8fbc0018 	lw	gp,24(sp)
  41ac6c:	00000000 	nop
  41ac70:	8fbf001c 	lw	ra,28(sp)
  41ac74:	8fb00014 	lw	s0,20(sp)
  41ac78:	03e00008 	jr	ra
  41ac7c:	27bd0020 	addiu	sp,sp,32
