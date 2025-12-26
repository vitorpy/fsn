# Function: drawOverviewOverlayCursor
# Address: 0x00420870 - 0x00420acc
# Size: 0x25c (604 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420870 <drawOverviewOverlayCursor>:
  420870:	3c1c0fc0 	lui	gp,0xfc0
  420874:	279cd2c0 	addiu	gp,gp,-11584
  420878:	0399e021 	addu	gp,gp,t9
  42087c:	8f8e8984 	lw	t6,-30332(gp)
  420880:	27bdffe0 	addiu	sp,sp,-32
  420884:	8dce0000 	lw	t6,0(t6)
  420888:	8f998304 	lw	t9,-31996(gp)
  42088c:	afbf001c 	sw	ra,28(sp)
  420890:	afbc0018 	sw	gp,24(sp)
  420894:	95c40032 	lhu	a0,50(t6)
  420898:	0320f809 	jalr	t9
  42089c:	00000000 	nop
  4208a0:	8fbc0018 	lw	gp,24(sp)
  4208a4:	00000000 	nop
  4208a8:	8f9984b8 	lw	t9,-31560(gp)
  4208ac:	00000000 	nop
  4208b0:	0320f809 	jalr	t9
  4208b4:	00000000 	nop
  4208b8:	8fbc0018 	lw	gp,24(sp)
  4208bc:	00000000 	nop
  4208c0:	8f82897c 	lw	v0,-30340(gp)
  4208c4:	00000000 	nop
  4208c8:	8c420000 	lw	v0,0(v0)
  4208cc:	00000000 	nop
  4208d0:	8c43003c 	lw	v1,60(v0)
  4208d4:	00000000 	nop
  4208d8:	10600009 	beqz	v1,420900 <drawOverviewOverlayCursor+0x90>
  4208dc:	00000000 	nop
  4208e0:	8f9984a0 	lw	t9,-31584(gp)
  4208e4:	c46c0034 	lwc1	$f12,52(v1)
  4208e8:	c46e0038 	lwc1	$f14,56(v1)
  4208ec:	0320f809 	jalr	t9
  4208f0:	24060000 	li	a2,0
  4208f4:	8fbc0018 	lw	gp,24(sp)
  4208f8:	1000001b 	b	420968 <drawOverviewOverlayCursor+0xf8>
  4208fc:	3c013ff0 	lui	at,0x3ff0
  420900:	c4440020 	lwc1	$f4,32(v0)
  420904:	c4500014 	lwc1	$f16,20(v0)
  420908:	46002021 	cvt.d.s	$f0,$f4
  42090c:	460084a1 	cvt.d.s	$f18,$f16
  420910:	46209102 	mul.d	$f4,$f18,$f0
  420914:	c4460008 	lwc1	$f6,8(v0)
  420918:	c4480000 	lwc1	$f8,0(v0)
  42091c:	460030a1 	cvt.d.s	$f2,$f6
  420920:	c4500004 	lwc1	$f16,4(v0)
  420924:	46222182 	mul.d	$f6,$f4,$f2
  420928:	c4440018 	lwc1	$f4,24(v0)
  42092c:	460042a1 	cvt.d.s	$f10,$f8
  420930:	8f9984a0 	lw	t9,-31584(gp)
  420934:	24060000 	li	a2,0
  420938:	46265201 	sub.d	$f8,$f10,$f6
  42093c:	460022a1 	cvt.d.s	$f10,$f4
  420940:	46205182 	mul.d	$f6,$f10,$f0
  420944:	46204320 	cvt.s.d	$f12,$f8
  420948:	460084a1 	cvt.d.s	$f18,$f16
  42094c:	46223202 	mul.d	$f8,$f6,$f2
  420950:	46289401 	sub.d	$f16,$f18,$f8
  420954:	0320f809 	jalr	t9
  420958:	462083a0 	cvt.s.d	$f14,$f16
  42095c:	8fbc0018 	lw	gp,24(sp)
  420960:	00000000 	nop
  420964:	3c013ff0 	lui	at,0x3ff0
  420968:	44810800 	mtc1	at,$f1
  42096c:	8f81806c 	lw	at,-32660(gp)
  420970:	44800000 	mtc1	zero,$f0
  420974:	c4246bf0 	lwc1	$f4,27632(at)
  420978:	8f81806c 	lw	at,-32660(gp)
  42097c:	460022a1 	cvt.d.s	$f10,$f4
  420980:	c4326bf4 	lwc1	$f18,27636(at)
  420984:	462a0183 	div.d	$f6,$f0,$f10
  420988:	46009221 	cvt.d.s	$f8,$f18
  42098c:	8f998494 	lw	t9,-31596(gp)
  420990:	3c063f80 	lui	a2,0x3f80
  420994:	46280403 	div.d	$f16,$f0,$f8
  420998:	46203320 	cvt.s.d	$f12,$f6
  42099c:	0320f809 	jalr	t9
  4209a0:	462083a0 	cvt.s.d	$f14,$f16
  4209a4:	8fbc0018 	lw	gp,24(sp)
  4209a8:	24040003 	li	a0,3
  4209ac:	8f9981f4 	lw	t9,-32268(gp)
  4209b0:	00000000 	nop
  4209b4:	0320f809 	jalr	t9
  4209b8:	00000000 	nop
  4209bc:	8fbc0018 	lw	gp,24(sp)
  4209c0:	00000000 	nop
  4209c4:	8f998484 	lw	t9,-31612(gp)
  4209c8:	00000000 	nop
  4209cc:	0320f809 	jalr	t9
  4209d0:	00000000 	nop
  4209d4:	8fbc0018 	lw	gp,24(sp)
  4209d8:	00000000 	nop
  4209dc:	8f848068 	lw	a0,-32664(gp)
  4209e0:	8f998398 	lw	t9,-31848(gp)
  4209e4:	24846ecc 	addiu	a0,a0,28364
  4209e8:	0320f809 	jalr	t9
  4209ec:	00000000 	nop
  4209f0:	8fbc0018 	lw	gp,24(sp)
  4209f4:	00000000 	nop
  4209f8:	8f848068 	lw	a0,-32664(gp)
  4209fc:	8f998398 	lw	t9,-31848(gp)
  420a00:	24846ed4 	addiu	a0,a0,28372
  420a04:	0320f809 	jalr	t9
  420a08:	00000000 	nop
  420a0c:	8fbc0018 	lw	gp,24(sp)
  420a10:	00000000 	nop
  420a14:	8f99846c 	lw	t9,-31636(gp)
  420a18:	00000000 	nop
  420a1c:	0320f809 	jalr	t9
  420a20:	00000000 	nop
  420a24:	8fbc0018 	lw	gp,24(sp)
  420a28:	00000000 	nop
  420a2c:	8f998484 	lw	t9,-31612(gp)
  420a30:	00000000 	nop
  420a34:	0320f809 	jalr	t9
  420a38:	00000000 	nop
  420a3c:	8fbc0018 	lw	gp,24(sp)
  420a40:	00000000 	nop
  420a44:	8f848068 	lw	a0,-32664(gp)
  420a48:	8f998398 	lw	t9,-31848(gp)
  420a4c:	24846edc 	addiu	a0,a0,28380
  420a50:	0320f809 	jalr	t9
  420a54:	00000000 	nop
  420a58:	8fbc0018 	lw	gp,24(sp)
  420a5c:	00000000 	nop
  420a60:	8f848068 	lw	a0,-32664(gp)
  420a64:	8f998398 	lw	t9,-31848(gp)
  420a68:	24846ee4 	addiu	a0,a0,28388
  420a6c:	0320f809 	jalr	t9
  420a70:	00000000 	nop
  420a74:	8fbc0018 	lw	gp,24(sp)
  420a78:	00000000 	nop
  420a7c:	8f99846c 	lw	t9,-31636(gp)
  420a80:	00000000 	nop
  420a84:	0320f809 	jalr	t9
  420a88:	00000000 	nop
  420a8c:	8fbc0018 	lw	gp,24(sp)
  420a90:	24040001 	li	a0,1
  420a94:	8f9981f4 	lw	t9,-32268(gp)
  420a98:	00000000 	nop
  420a9c:	0320f809 	jalr	t9
  420aa0:	00000000 	nop
  420aa4:	8fbc0018 	lw	gp,24(sp)
  420aa8:	00000000 	nop
  420aac:	8f9984d8 	lw	t9,-31528(gp)
  420ab0:	00000000 	nop
  420ab4:	0320f809 	jalr	t9
  420ab8:	00000000 	nop
  420abc:	8fbf001c 	lw	ra,28(sp)
  420ac0:	8fbc0018 	lw	gp,24(sp)
  420ac4:	03e00008 	jr	ra
  420ac8:	27bd0020 	addiu	sp,sp,32
