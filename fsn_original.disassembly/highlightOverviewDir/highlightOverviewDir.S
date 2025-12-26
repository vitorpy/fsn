# Function: highlightOverviewDir
# Address: 0x00421940 - 0x00421c08
# Size: 0x2c8 (712 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421940 <highlightOverviewDir>:
  421940:	3c1c0fc0 	lui	gp,0xfc0
  421944:	279cc1f0 	addiu	gp,gp,-15888
  421948:	0399e021 	addu	gp,gp,t9
  42194c:	8f8e893c 	lw	t6,-30404(gp)
  421950:	27bdffa0 	addiu	sp,sp,-96
  421954:	91ce0000 	lbu	t6,0(t6)
  421958:	afb00014 	sw	s0,20(sp)
  42195c:	00808025 	move	s0,a0
  421960:	afbf001c 	sw	ra,28(sp)
  421964:	11c000a4 	beqz	t6,421bf8 <highlightOverviewDir+0x2b8>
  421968:	afbc0018 	sw	gp,24(sp)
  42196c:	8f998664 	lw	t9,-31132(gp)
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
  4219b4:	8f8489fc 	lw	a0,-30212(gp)
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
  421b40:	44816000 	mtc1	at,$f12
  421b44:	8fbc0018 	lw	gp,24(sp)
  421b48:	3c013f80 	lui	at,0x3f80
  421b4c:	44817000 	mtc1	at,$f14
  421b50:	8f998488 	lw	t9,-31608(gp)
  421b54:	44066000 	mfc1	a2,$f12
  421b58:	44077000 	mfc1	a3,$f14
  421b5c:	0320f809 	jalr	t9
  421b60:	00000000 	nop
  421b64:	8fbc0018 	lw	gp,24(sp)
  421b68:	00000000 	nop
  421b6c:	8f81805c 	lw	at,-32676(gp)
  421b70:	8f9981f0 	lw	t9,-32272(gp)
  421b74:	c42cba60 	lwc1	$f12,-17824(at)
  421b78:	8f81805c 	lw	at,-32676(gp)
  421b7c:	00000000 	nop
  421b80:	c42eba64 	lwc1	$f14,-17820(at)
  421b84:	0320f809 	jalr	t9
  421b88:	00000000 	nop
  421b8c:	8fbc0018 	lw	gp,24(sp)
  421b90:	00002025 	move	a0,zero
  421b94:	8f99857c 	lw	t9,-31364(gp)
  421b98:	02002825 	move	a1,s0
  421b9c:	0320f809 	jalr	t9
  421ba0:	00000000 	nop
  421ba4:	8fbc0018 	lw	gp,24(sp)
  421ba8:	00402025 	move	a0,v0
  421bac:	8f998258 	lw	t9,-32168(gp)
  421bb0:	00000000 	nop
  421bb4:	0320f809 	jalr	t9
  421bb8:	00000000 	nop
  421bbc:	8fbc0018 	lw	gp,24(sp)
  421bc0:	00000000 	nop
  421bc4:	8f9984d8 	lw	t9,-31528(gp)
  421bc8:	00000000 	nop
  421bcc:	0320f809 	jalr	t9
  421bd0:	00000000 	nop
  421bd4:	8fbc0018 	lw	gp,24(sp)
  421bd8:	00000000 	nop
  421bdc:	8f99801c 	lw	t9,-32740(gp)
  421be0:	00000000 	nop
  421be4:	27390acc 	addiu	t9,t9,2764
  421be8:	0320f809 	jalr	t9
  421bec:	00000000 	nop
  421bf0:	8fbc0018 	lw	gp,24(sp)
  421bf4:	00000000 	nop
  421bf8:	8fbf001c 	lw	ra,28(sp)
  421bfc:	8fb00014 	lw	s0,20(sp)
  421c00:	03e00008 	jr	ra
  421c04:	27bd0060 	addiu	sp,sp,96
