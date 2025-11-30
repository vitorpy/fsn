# Disassembly of FUN_00421940
# Address: 0x00421940
# Size: 0x200
# GP = 0x1001db30
#
# GP offsets resolved to symbol names where known.
# See docs/DECOMPILATION_PROCEDURE.md for analysis workflow.
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421940 <highlightOverviewDir>:
  421940:	3c1c0fc0 	lui	gp,0xfc0
  421944:	279cc1f0 	addiu	gp,gp,-15888
  421948:	0399e021 	addu	gp,gp,t9
  42194c:	8f8e893c 	lw	t6,-30404(gp)  # overviewActive
  421950:	27bdffa0 	addiu	sp,sp,-96
  421954:	91ce0000 	lbu	t6,0(t6)
  421958:	afb00014 	sw	s0,20(sp)
  42195c:	00808025 	move	s0,a0
  421960:	afbf001c 	sw	ra,28(sp)
  421964:	11c000a4 	beqz	t6,421bf8 <highlightOverviewDir+0x2b8>
  421968:	afbc0018 	sw	gp,24(sp)
  42196c:	8f998664 	lw	t9,-31132(gp)  # FUN_0041fdb0
  421970:	00000000 	nop
  421974:	0320f809 	jalr	t9
  421978:	00000000 	nop
  42197c:	8fbc0018 	lw	gp,24(sp)
  421980:	00002025 	move	a0,zero
  421984:	8f998304 	lw	t9,-31996(gp)
  421988:	00000000 	nop
  42198c:	0320f809 	jalr	t9
  421990:	00000000 	nop
  421994:	8fbc0018 	lw	gp,24(sp)
  421998:	00000000 	nop
  42199c:	8f998308 	lw	t9,-31992(gp)
  4219a0:	00000000 	nop
  4219a4:	0320f809 	jalr	t9
  4219a8:	00000000 	nop
  4219ac:	8fbc0018 	lw	gp,24(sp)
  4219b0:	00000000 	nop
  4219b4:	8f8489fc 	lw	a0,-30212(gp)  # overlayHighlightColor
  4219b8:	8f998304 	lw	t9,-31996(gp)
  4219bc:	94840002 	lhu	a0,2(a0)
  4219c0:	0320f809 	jalr	t9
  4219c4:	00000000 	nop
  4219c8:	c606003c 	lwc1	$f6,60(s0)
  4219cc:	3c014000 	lui	at,0x4000
  4219d0:	44815800 	mtc1	at,$f11
  4219d4:	44805000 	mtc1	zero,$f10
  4219d8:	46003221 	cvt.d.s	$f8,$f6
  4219dc:	00000000 	nop
  4219e0:	462a4003 	div.d	$f0,$f8,$f10
  4219e4:	c6040034 	lwc1	$f4,52(s0)
  4219e8:	c60a0038 	lwc1	$f10,56(s0)
  4219ec:	460020a1 	cvt.d.s	$f2,$f4
  4219f0:	c6040058 	lwc1	$f4,88(s0)
  4219f4:	460054a1 	cvt.d.s	$f18,$f10
  4219f8:	460021a1 	cvt.d.s	$f6,$f4
  4219fc:	8fbc0018 	lw	gp,24(sp)
  421a00:	00000000 	nop
  421a04:	8f9981e0 	lw	t9,-32288(gp)
  421a08:	46260402 	mul.d	$f16,$f0,$f6
  421a0c:	46209101 	sub.d	$f4,$f18,$f0
  421a10:	46301201 	sub.d	$f8,$f2,$f16
  421a14:	46301180 	add.d	$f6,$f2,$f16
  421a18:	46209280 	add.d	$f10,$f18,$f0
  421a1c:	46204320 	cvt.s.d	$f12,$f8
  421a20:	462023a0 	cvt.s.d	$f14,$f4
  421a24:	46205120 	cvt.s.d	$f4,$f10
  421a28:	46203220 	cvt.s.d	$f8,$f6
  421a2c:	44072000 	mfc1	a3,$f4
  421a30:	44064000 	mfc1	a2,$f8
  421a34:	0320f809 	jalr	t9
  421a38:	00000000 	nop
  421a3c:	8e030028 	lw	v1,40(s0)
  421a40:	8fbc0018 	lw	gp,24(sp)
  421a44:	10600039 	beqz	v1,421b2c <highlightOverviewDir+0x1ec>
  421a48:	00000000 	nop
  421a4c:	c606004c 	lwc1	$f6,76(s0)
  421a50:	c60a0058 	lwc1	$f10,88(s0)
  421a54:	46003221 	cvt.d.s	$f8,$f6
  421a58:	46005121 	cvt.d.s	$f4,$f10
  421a5c:	46244182 	mul.d	$f6,$f8,$f4
  421a60:	c46a0034 	lwc1	$f10,52(v1)
  421a64:	3c014000 	lui	at,0x4000
  421a68:	46005221 	cvt.d.s	$f8,$f10
  421a6c:	8f998484 	lw	t9,-31612(gp)
  421a70:	46264100 	add.d	$f4,$f8,$f6
  421a74:	462022a0 	cvt.s.d	$f10,$f4
  421a78:	e7aa0054 	swc1	$f10,84(sp)
  421a7c:	c6040050 	lwc1	$f4,80(s0)
  421a80:	c4680038 	lwc1	$f8,56(v1)
  421a84:	460022a1 	cvt.d.s	$f10,$f4
  421a88:	460041a1 	cvt.d.s	$f6,$f8
  421a8c:	462a3200 	add.d	$f8,$f6,$f10
  421a90:	44813800 	mtc1	at,$f7
  421a94:	46204120 	cvt.s.d	$f4,$f8
  421a98:	e7a40058 	swc1	$f4,88(sp)
  421a9c:	c6060034 	lwc1	$f6,52(s0)
  421aa0:	00000000 	nop
  421aa4:	e7a6004c 	swc1	$f6,76(sp)
  421aa8:	c60a003c 	lwc1	$f10,60(s0)
  421aac:	44803000 	mtc1	zero,$f6
  421ab0:	46005207 	neg.s	$f8,$f10
  421ab4:	46004121 	cvt.d.s	$f4,$f8
  421ab8:	00000000 	nop
  421abc:	46262283 	div.d	$f10,$f4,$f6
  421ac0:	c6080038 	lwc1	$f8,56(s0)
  421ac4:	00000000 	nop
  421ac8:	46004121 	cvt.d.s	$f4,$f8
  421acc:	462a2180 	add.d	$f6,$f4,$f10
  421ad0:	46203220 	cvt.s.d	$f8,$f6
  421ad4:	0320f809 	jalr	t9
  421ad8:	e7a80050 	swc1	$f8,80(sp)
  421adc:	8fbc0018 	lw	gp,24(sp)
  421ae0:	27a40054 	addiu	a0,sp,84
  421ae4:	8f9981f8 	lw	t9,-32264(gp)
  421ae8:	00000000 	nop
  421aec:	0320f809 	jalr	t9
  421af0:	00000000 	nop
  421af4:	8fbc0018 	lw	gp,24(sp)
  421af8:	27a4004c 	addiu	a0,sp,76
  421afc:	8f9981f8 	lw	t9,-32264(gp)
  421b00:	00000000 	nop
  421b04:	0320f809 	jalr	t9
  421b08:	00000000 	nop
  421b0c:	8fbc0018 	lw	gp,24(sp)
  421b10:	00000000 	nop
  421b14:	8f99846c 	lw	t9,-31636(gp)
  421b18:	00000000 	nop
  421b1c:	0320f809 	jalr	t9
  421b20:	00000000 	nop
  421b24:	8fbc0018 	lw	gp,24(sp)
  421b28:	00000000 	nop
  421b2c:	8f9984b8 	lw	t9,-31560(gp)
  421b30:	00000000 	nop
  421b34:	0320f809 	jalr	t9
  421b38:	00000000 	nop
  421b3c:	3c01bf80 	lui	at,0xbf80
