# Function: FUN_004268e0
# Address: 0x004268e0 - 0x00426d10
# Size: 0x430 (1072 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004268e0 <findzoom_landscape+0xc>:
  4268e0:	27bdffd0 	addiu	sp,sp,-48
  4268e4:	8fae0040 	lw	t6,64(sp)
  4268e8:	afbf001c 	sw	ra,28(sp)
  4268ec:	afbc0018 	sw	gp,24(sp)
  4268f0:	afa40030 	sw	a0,48(sp)
  4268f4:	afa50034 	sw	a1,52(sp)
  4268f8:	afa60038 	sw	a2,56(sp)
  4268fc:	afa7003c 	sw	a3,60(sp)
  426900:	a5c00000 	sh	zero,0(t6)
  426904:	8faf004c 	lw	t7,76(sp)
  426908:	27a60028 	addiu	a2,sp,40
  42690c:	a1e00000 	sb	zero,0(t7)
  426910:	8fb80048 	lw	t8,72(sp)
  426914:	27a50024 	addiu	a1,sp,36
  426918:	a3000000 	sb	zero,0(t8)
  42691c:	8f9986dc 	lw	t9,-31012(gp)
  426920:	27a4002c 	addiu	a0,sp,44
  426924:	0320f809 	jalr	t9
  426928:	00000000 	nop
  42692c:	8fb90024 	lw	t9,36(sp)
  426930:	8fbc0018 	lw	gp,24(sp)
  426934:	13200058 	beqz	t9,426a98 <findzoom_landscape+0x1c4>
  426938:	8faf002c 	lw	t7,44(sp)
  42693c:	8f99863c 	lw	t9,-31172(gp)
  426940:	8fa4002c 	lw	a0,44(sp)
  426944:	0320f809 	jalr	t9
  426948:	00000000 	nop
  42694c:	8fbc0018 	lw	gp,24(sp)
  426950:	8fa40024 	lw	a0,36(sp)
  426954:	8f998644 	lw	t9,-31164(gp)
  426958:	00000000 	nop
  42695c:	0320f809 	jalr	t9
  426960:	00000000 	nop
  426964:	8fa80024 	lw	t0,36(sp)
  426968:	8fa9002c 	lw	t1,44(sp)
  42696c:	c5040014 	lwc1	$f4,20(t0)
  426970:	c5280058 	lwc1	$f8,88(t1)
  426974:	8fbc0018 	lw	gp,24(sp)
  426978:	460021a1 	cvt.d.s	$f6,$f4
  42697c:	460042a1 	cvt.d.s	$f10,$f8
  426980:	462a3402 	mul.d	$f16,$f6,$f10
  426984:	8f85897c 	lw	a1,-30340(gp)
  426988:	c5320034 	lwc1	$f18,52(t1)
  42698c:	8f838a24 	lw	v1,-30172(gp)
  426990:	8caa0000 	lw	t2,0(a1)
  426994:	46009121 	cvt.d.s	$f4,$f18
  426998:	c4720094 	lwc1	$f18,148(v1)
  42699c:	c5460014 	lwc1	$f6,20(t2)
  4269a0:	46302200 	add.d	$f8,$f4,$f16
  4269a4:	8fab0030 	lw	t3,48(sp)
  4269a8:	46009121 	cvt.d.s	$f4,$f18
  4269ac:	460032a1 	cvt.d.s	$f10,$f6
  4269b0:	46245402 	mul.d	$f16,$f10,$f4
  4269b4:	46304181 	sub.d	$f6,$f8,$f16
  4269b8:	462034a0 	cvt.s.d	$f18,$f6
  4269bc:	e5720000 	swc1	$f18,0(t3)
  4269c0:	c5080018 	lwc1	$f8,24(t0)
  4269c4:	c52a0038 	lwc1	$f10,56(t1)
  4269c8:	8cac0000 	lw	t4,0(a1)
  4269cc:	46004421 	cvt.d.s	$f16,$f8
  4269d0:	46005121 	cvt.d.s	$f4,$f10
  4269d4:	c4680094 	lwc1	$f8,148(v1)
  4269d8:	c5920018 	lwc1	$f18,24(t4)
  4269dc:	46302180 	add.d	$f6,$f4,$f16
  4269e0:	8fad0034 	lw	t5,52(sp)
  4269e4:	46004121 	cvt.d.s	$f4,$f8
  4269e8:	460092a1 	cvt.d.s	$f10,$f18
  4269ec:	46245402 	mul.d	$f16,$f10,$f4
  4269f0:	46303481 	sub.d	$f18,$f6,$f16
  4269f4:	46209220 	cvt.s.d	$f8,$f18
  4269f8:	e5a80000 	swc1	$f8,0(t5)
  4269fc:	906e0005 	lbu	t6,5(v1)
  426a00:	8faa002c 	lw	t2,44(sp)
  426a04:	11c00010 	beqz	t6,426a48 <findzoom_landscape+0x174>
  426a08:	00000000 	nop
  426a0c:	8fb8004c 	lw	t8,76(sp)
  426a10:	240f0001 	li	t7,1
  426a14:	a30f0000 	sb	t7,0(t8)
  426a18:	c5260024 	lwc1	$f6,36(t1)
  426a1c:	c46a0090 	lwc1	$f10,144(v1)
  426a20:	c4680080 	lwc1	$f8,128(v1)
  426a24:	46003421 	cvt.d.s	$f16,$f6
  426a28:	46005121 	cvt.d.s	$f4,$f10
  426a2c:	46302480 	add.d	$f18,$f4,$f16
  426a30:	8fb90038 	lw	t9,56(sp)
  426a34:	460042a1 	cvt.d.s	$f10,$f8
  426a38:	462a9180 	add.d	$f6,$f18,$f10
  426a3c:	46203120 	cvt.s.d	$f4,$f6
  426a40:	1000000d 	b	426a78 <findzoom_landscape+0x1a4>
  426a44:	e7240000 	swc1	$f4,0(t9)
  426a48:	c4700090 	lwc1	$f16,144(v1)
  426a4c:	c5520024 	lwc1	$f18,36(t2)
  426a50:	8fab0024 	lw	t3,36(sp)
  426a54:	46008221 	cvt.d.s	$f8,$f16
  426a58:	c564001c 	lwc1	$f4,28(t3)
  426a5c:	460092a1 	cvt.d.s	$f10,$f18
  426a60:	462a4180 	add.d	$f6,$f8,$f10
  426a64:	8fa80038 	lw	t0,56(sp)
  426a68:	46002421 	cvt.d.s	$f16,$f4
  426a6c:	46303480 	add.d	$f18,$f6,$f16
  426a70:	46209220 	cvt.s.d	$f8,$f18
  426a74:	e5080000 	swc1	$f8,0(t0)
  426a78:	8fac0044 	lw	t4,68(sp)
  426a7c:	24020001 	li	v0,1
  426a80:	ad800000 	sw	zero,0(t4)
  426a84:	8fae003c 	lw	t6,60(sp)
  426a88:	8c6d0098 	lw	t5,152(v1)
  426a8c:	1000009c 	b	426d00 <findzoom_landscape+0x42c>
  426a90:	a5cd0000 	sh	t5,0(t6)
  426a94:	8faf002c 	lw	t7,44(sp)
  426a98:	00000000 	nop
  426a9c:	11e00045 	beqz	t7,426bb4 <findzoom_landscape+0x2e0>
  426aa0:	8faf0028 	lw	t7,40(sp)
  426aa4:	8f998640 	lw	t9,-31168(gp)
  426aa8:	00000000 	nop
  426aac:	0320f809 	jalr	t9
  426ab0:	00000000 	nop
  426ab4:	8fbc0018 	lw	gp,24(sp)
  426ab8:	8fa4002c 	lw	a0,44(sp)
  426abc:	8f99863c 	lw	t9,-31172(gp)
  426ac0:	00000000 	nop
  426ac4:	0320f809 	jalr	t9
  426ac8:	00000000 	nop
  426acc:	8fb8002c 	lw	t8,44(sp)
  426ad0:	3c014000 	lui	at,0x4000
  426ad4:	c70a003c 	lwc1	$f10,60(t8)
  426ad8:	44810800 	mtc1	at,$f1
  426adc:	44800000 	mtc1	zero,$f0
  426ae0:	46005121 	cvt.d.s	$f4,$f10
  426ae4:	00000000 	nop
  426ae8:	46202183 	div.d	$f6,$f4,$f0
  426aec:	8fbc0018 	lw	gp,24(sp)
  426af0:	8fb90030 	lw	t9,48(sp)
  426af4:	8f838a24 	lw	v1,-30172(gp)
  426af8:	8f85897c 	lw	a1,-30340(gp)
  426afc:	c4700088 	lwc1	$f16,136(v1)
  426b00:	8ca90000 	lw	t1,0(a1)
  426b04:	460084a1 	cvt.d.s	$f18,$f16
  426b08:	c52a0014 	lwc1	$f10,20(t1)
  426b0c:	24020001 	li	v0,1
  426b10:	46005121 	cvt.d.s	$f4,$f10
  426b14:	46323200 	add.d	$f8,$f6,$f18
  426b18:	c7060034 	lwc1	$f6,52(t8)
  426b1c:	46282402 	mul.d	$f16,$f4,$f8
  426b20:	460034a1 	cvt.d.s	$f18,$f6
  426b24:	46309281 	sub.d	$f10,$f18,$f16
  426b28:	46205120 	cvt.s.d	$f4,$f10
  426b2c:	e7240000 	swc1	$f4,0(t9)
  426b30:	c708003c 	lwc1	$f8,60(t8)
  426b34:	c4700088 	lwc1	$f16,136(v1)
  426b38:	460041a1 	cvt.d.s	$f6,$f8
  426b3c:	00000000 	nop
  426b40:	46203483 	div.d	$f18,$f6,$f0
  426b44:	8caa0000 	lw	t2,0(a1)
  426b48:	460082a1 	cvt.d.s	$f10,$f16
  426b4c:	c5480018 	lwc1	$f8,24(t2)
  426b50:	8fab0034 	lw	t3,52(sp)
  426b54:	460041a1 	cvt.d.s	$f6,$f8
  426b58:	462a9100 	add.d	$f4,$f18,$f10
  426b5c:	c7120038 	lwc1	$f18,56(t8)
  426b60:	46243402 	mul.d	$f16,$f6,$f4
  426b64:	460092a1 	cvt.d.s	$f10,$f18
  426b68:	46305201 	sub.d	$f8,$f10,$f16
  426b6c:	462041a0 	cvt.s.d	$f6,$f8
  426b70:	e5660000 	swc1	$f6,0(t3)
  426b74:	c70a0024 	lwc1	$f10,36(t8)
  426b78:	c4640084 	lwc1	$f4,132(v1)
  426b7c:	46005421 	cvt.d.s	$f16,$f10
  426b80:	460024a1 	cvt.d.s	$f18,$f4
  426b84:	46309200 	add.d	$f8,$f18,$f16
  426b88:	8fa80038 	lw	t0,56(sp)
  426b8c:	462041a0 	cvt.s.d	$f6,$f8
  426b90:	e5060000 	swc1	$f6,0(t0)
  426b94:	8fad003c 	lw	t5,60(sp)
  426b98:	8c6c008c 	lw	t4,140(v1)
  426b9c:	00000000 	nop
  426ba0:	a5ac0000 	sh	t4,0(t5)
  426ba4:	8fae0044 	lw	t6,68(sp)
  426ba8:	10000055 	b	426d00 <findzoom_landscape+0x42c>
  426bac:	adc00000 	sw	zero,0(t6)
  426bb0:	8faf0028 	lw	t7,40(sp)
  426bb4:	00000000 	nop
  426bb8:	11e0004b 	beqz	t7,426ce8 <findzoom_landscape+0x414>
  426bbc:	00000000 	nop
  426bc0:	8f85897c 	lw	a1,-30340(gp)
  426bc4:	afaf002c 	sw	t7,44(sp)
  426bc8:	8ca90000 	lw	t1,0(a1)
  426bcc:	00000000 	nop
  426bd0:	8d390044 	lw	t9,68(t1)
  426bd4:	00000000 	nop
  426bd8:	15f90006 	bne	t7,t9,426bf4 <findzoom_landscape+0x320>
  426bdc:	00000000 	nop
  426be0:	8de20028 	lw	v0,40(t7)
  426be4:	00000000 	nop
  426be8:	10400002 	beqz	v0,426bf4 <findzoom_landscape+0x320>
  426bec:	00000000 	nop
  426bf0:	afa2002c 	sw	v0,44(sp)
  426bf4:	8f99863c 	lw	t9,-31172(gp)
  426bf8:	8fa4002c 	lw	a0,44(sp)
  426bfc:	0320f809 	jalr	t9
  426c00:	00000000 	nop
  426c04:	8faa002c 	lw	t2,44(sp)
  426c08:	3c014000 	lui	at,0x4000
  426c0c:	c544003c 	lwc1	$f4,60(t2)
  426c10:	44810800 	mtc1	at,$f1
  426c14:	44800000 	mtc1	zero,$f0
  426c18:	460022a1 	cvt.d.s	$f10,$f4
  426c1c:	00000000 	nop
  426c20:	46205483 	div.d	$f18,$f10,$f0
  426c24:	8fbc0018 	lw	gp,24(sp)
  426c28:	8fb80030 	lw	t8,48(sp)
  426c2c:	8f838a24 	lw	v1,-30172(gp)
  426c30:	8f85897c 	lw	a1,-30340(gp)
  426c34:	c4700088 	lwc1	$f16,136(v1)
  426c38:	8cab0000 	lw	t3,0(a1)
  426c3c:	46008221 	cvt.d.s	$f8,$f16
  426c40:	c5640014 	lwc1	$f4,20(t3)
  426c44:	24020001 	li	v0,1
  426c48:	460022a1 	cvt.d.s	$f10,$f4
  426c4c:	46289180 	add.d	$f6,$f18,$f8
  426c50:	c5520034 	lwc1	$f18,52(t2)
  426c54:	46265402 	mul.d	$f16,$f10,$f6
  426c58:	46009221 	cvt.d.s	$f8,$f18
  426c5c:	46304101 	sub.d	$f4,$f8,$f16
  426c60:	462022a0 	cvt.s.d	$f10,$f4
  426c64:	e70a0000 	swc1	$f10,0(t8)
  426c68:	c546003c 	lwc1	$f6,60(t2)
  426c6c:	c4700088 	lwc1	$f16,136(v1)
  426c70:	460034a1 	cvt.d.s	$f18,$f6
  426c74:	00000000 	nop
  426c78:	46209203 	div.d	$f8,$f18,$f0
  426c7c:	8ca80000 	lw	t0,0(a1)
  426c80:	46008121 	cvt.d.s	$f4,$f16
  426c84:	c5060018 	lwc1	$f6,24(t0)
  426c88:	8fac0034 	lw	t4,52(sp)
  426c8c:	460034a1 	cvt.d.s	$f18,$f6
  426c90:	46244280 	add.d	$f10,$f8,$f4
  426c94:	c5480038 	lwc1	$f8,56(t2)
  426c98:	462a9402 	mul.d	$f16,$f18,$f10
  426c9c:	46004121 	cvt.d.s	$f4,$f8
  426ca0:	46302181 	sub.d	$f6,$f4,$f16
  426ca4:	462034a0 	cvt.s.d	$f18,$f6
  426ca8:	e5920000 	swc1	$f18,0(t4)
  426cac:	c5440024 	lwc1	$f4,36(t2)
  426cb0:	c46a0084 	lwc1	$f10,132(v1)
  426cb4:	46002421 	cvt.d.s	$f16,$f4
  426cb8:	46005221 	cvt.d.s	$f8,$f10
  426cbc:	46304180 	add.d	$f6,$f8,$f16
  426cc0:	8fad0038 	lw	t5,56(sp)
  426cc4:	462034a0 	cvt.s.d	$f18,$f6
  426cc8:	e5b20000 	swc1	$f18,0(t5)
  426ccc:	8fa9003c 	lw	t1,60(sp)
  426cd0:	8c6e008c 	lw	t6,140(v1)
  426cd4:	00000000 	nop
  426cd8:	a52e0000 	sh	t6,0(t1)
  426cdc:	8fb90044 	lw	t9,68(sp)
  426ce0:	10000007 	b	426d00 <findzoom_landscape+0x42c>
  426ce4:	af200000 	sw	zero,0(t9)
  426ce8:	8f998638 	lw	t9,-31176(gp)
  426cec:	00000000 	nop
  426cf0:	0320f809 	jalr	t9
  426cf4:	00000000 	nop
  426cf8:	8fbc0018 	lw	gp,24(sp)
  426cfc:	00001025 	move	v0,zero
  426d00:	8fbf001c 	lw	ra,28(sp)
  426d04:	27bd0030 	addiu	sp,sp,48
  426d08:	03e00008 	jr	ra
  426d0c:	00000000 	nop
