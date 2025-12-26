# Function: hsv_to_rgb
# Address: 0x00438a38 - 0x00438dd8
# Size: 0x3a0 (928 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438a38 <hsv_to_rgb>:
  438a38:	3c1c0fbe 	lui	gp,0xfbe
  438a3c:	279c50f8 	addiu	gp,gp,20728
  438a40:	0399e021 	addu	gp,gp,t9
  438a44:	8f81805c 	lw	at,-32676(gp)
  438a48:	46206120 	cvt.s.d	$f4,$f12
  438a4c:	c4295a68 	lwc1	$f9,23144(at)
  438a50:	c4285a6c 	lwc1	$f8,23148(at)
  438a54:	460021a1 	cvt.d.s	$f6,$f4
  438a58:	46283282 	mul.d	$f10,$f6,$f8
  438a5c:	46207420 	cvt.s.d	$f16,$f14
  438a60:	44809000 	mtc1	zero,$f18
  438a64:	27bdffb0 	addiu	sp,sp,-80
  438a68:	e7b50018 	swc1	$f21,24(sp)
  438a6c:	46109032 	c.eq.s	$f18,$f16
  438a70:	46205020 	cvt.s.d	$f0,$f10
  438a74:	e7b4001c 	swc1	$f20,28(sp)
  438a78:	46008086 	mov.s	$f2,$f16
  438a7c:	afbf0024 	sw	ra,36(sp)
  438a80:	afbc0020 	sw	gp,32(sp)
  438a84:	4500000c 	bc1f	438ab8 <hsv_to_rgb+0x80>
  438a88:	46000506 	mov.s	$f20,$f0
  438a8c:	c7a50060 	lwc1	$f5,96(sp)
  438a90:	c7a40064 	lwc1	$f4,100(sp)
  438a94:	8fae0068 	lw	t6,104(sp)
  438a98:	46202320 	cvt.s.d	$f12,$f4
  438a9c:	e5cc0000 	swc1	$f12,0(t6)
  438aa0:	8faf006c 	lw	t7,108(sp)
  438aa4:	00000000 	nop
  438aa8:	e5ec0000 	swc1	$f12,0(t7)
  438aac:	8fb80070 	lw	t8,112(sp)
  438ab0:	100000c4 	b	438dc4 <hsv_to_rgb+0x38c>
  438ab4:	e70c0000 	swc1	$f12,0(t8)
  438ab8:	3c0143b4 	lui	at,0x43b4
  438abc:	44813000 	mtc1	at,$f6
  438ac0:	3c014270 	lui	at,0x4270
  438ac4:	46060032 	c.eq.s	$f0,$f6
  438ac8:	44814000 	mtc1	at,$f8
  438acc:	45000003 	bc1f	438adc <hsv_to_rgb+0xa4>
  438ad0:	00000000 	nop
  438ad4:	46009506 	mov.s	$f20,$f18
  438ad8:	00000000 	nop
  438adc:	4608a503 	div.s	$f20,$f20,$f8
  438ae0:	8f99832c 	lw	t9,-31956(gp)
  438ae4:	e7a20048 	swc1	$f2,72(sp)
  438ae8:	e7b0002c 	swc1	$f16,44(sp)
  438aec:	0320f809 	jalr	t9
  438af0:	4600a306 	mov.s	$f12,$f20
  438af4:	4459f800 	cfc1	t9,c1_fcsr
  438af8:	8fbc0020 	lw	gp,32(sp)
  438afc:	37210003 	ori	at,t9,0x3
  438b00:	38210002 	xori	at,at,0x2
  438b04:	44c1f800 	ctc1	at,c1_fcsr
  438b08:	c7a20048 	lwc1	$f2,72(sp)
  438b0c:	460002a4 	cvt.w.s	$f10,$f0
  438b10:	c7b0002c 	lwc1	$f16,44(sp)
  438b14:	44025000 	mfc1	v0,$f10
  438b18:	44d9f800 	ctc1	t9,c1_fcsr
  438b1c:	2c410006 	sltiu	at,v0,6
  438b20:	102000a9 	beqz	at,438dc8 <hsv_to_rgb+0x390>
  438b24:	8fbf0024 	lw	ra,36(sp)
  438b28:	8f81805c 	lw	at,-32676(gp)
  438b2c:	00024080 	sll	t0,v0,0x2
  438b30:	00280821 	addu	at,at,t0
  438b34:	8c285a70 	lw	t0,23152(at)
  438b38:	00000000 	nop
  438b3c:	011c4021 	addu	t0,t0,gp
  438b40:	01000008 	jr	t0
  438b44:	00000000 	nop
  438b48:	44823000 	mtc1	v0,$f6
  438b4c:	c7a50060 	lwc1	$f5,96(sp)
  438b50:	46803220 	cvt.s.w	$f8,$f6
  438b54:	c7a40064 	lwc1	$f4,100(sp)
  438b58:	3c013ff0 	lui	at,0x3ff0
  438b5c:	4608a281 	sub.s	$f10,$f20,$f8
  438b60:	44817800 	mtc1	at,$f15
  438b64:	44807000 	mtc1	zero,$f14
  438b68:	46202320 	cvt.s.d	$f12,$f4
  438b6c:	8fa90068 	lw	t1,104(sp)
  438b70:	46005121 	cvt.d.s	$f4,$f10
  438b74:	46247181 	sub.d	$f6,$f14,$f4
  438b78:	e52c0000 	swc1	$f12,0(t1)
  438b7c:	460080a1 	cvt.d.s	$f2,$f16
  438b80:	46261202 	mul.d	$f8,$f2,$f6
  438b84:	46006021 	cvt.d.s	$f0,$f12
  438b88:	8faa006c 	lw	t2,108(sp)
  438b8c:	46287281 	sub.d	$f10,$f14,$f8
  438b90:	462a0102 	mul.d	$f4,$f0,$f10
  438b94:	46227201 	sub.d	$f8,$f14,$f2
  438b98:	46280282 	mul.d	$f10,$f0,$f8
  438b9c:	462021a0 	cvt.s.d	$f6,$f4
  438ba0:	e5460000 	swc1	$f6,0(t2)
  438ba4:	8fab0070 	lw	t3,112(sp)
  438ba8:	46205120 	cvt.s.d	$f4,$f10
  438bac:	10000085 	b	438dc4 <hsv_to_rgb+0x38c>
  438bb0:	e5640000 	swc1	$f4,0(t3)
  438bb4:	44824000 	mtc1	v0,$f8
  438bb8:	c7a70060 	lwc1	$f7,96(sp)
  438bbc:	468042a0 	cvt.s.w	$f10,$f8
  438bc0:	c7a60064 	lwc1	$f6,100(sp)
  438bc4:	3c013ff0 	lui	at,0x3ff0
  438bc8:	460aa101 	sub.s	$f4,$f20,$f10
  438bcc:	44817800 	mtc1	at,$f15
  438bd0:	46203320 	cvt.s.d	$f12,$f6
  438bd4:	44807000 	mtc1	zero,$f14
  438bd8:	46041182 	mul.s	$f6,$f2,$f4
  438bdc:	46006021 	cvt.d.s	$f0,$f12
  438be0:	8fac0068 	lw	t4,104(sp)
  438be4:	46003221 	cvt.d.s	$f8,$f6
  438be8:	46287281 	sub.d	$f10,$f14,$f8
  438bec:	462a0102 	mul.d	$f4,$f0,$f10
  438bf0:	46001221 	cvt.d.s	$f8,$f2
  438bf4:	46287281 	sub.d	$f10,$f14,$f8
  438bf8:	462021a0 	cvt.s.d	$f6,$f4
  438bfc:	462a0102 	mul.d	$f4,$f0,$f10
  438c00:	e5860000 	swc1	$f6,0(t4)
  438c04:	8fad006c 	lw	t5,108(sp)
  438c08:	00000000 	nop
  438c0c:	e5ac0000 	swc1	$f12,0(t5)
  438c10:	8fae0070 	lw	t6,112(sp)
  438c14:	462021a0 	cvt.s.d	$f6,$f4
  438c18:	1000006a 	b	438dc4 <hsv_to_rgb+0x38c>
  438c1c:	e5c60000 	swc1	$f6,0(t6)
  438c20:	c7a90060 	lwc1	$f9,96(sp)
  438c24:	c7a80064 	lwc1	$f8,100(sp)
  438c28:	3c013ff0 	lui	at,0x3ff0
  438c2c:	44817800 	mtc1	at,$f15
  438c30:	44807000 	mtc1	zero,$f14
  438c34:	46204320 	cvt.s.d	$f12,$f8
  438c38:	44824000 	mtc1	v0,$f8
  438c3c:	460080a1 	cvt.d.s	$f2,$f16
  438c40:	46227281 	sub.d	$f10,$f14,$f2
  438c44:	8faf0068 	lw	t7,104(sp)
  438c48:	46006021 	cvt.d.s	$f0,$f12
  438c4c:	462a0102 	mul.d	$f4,$f0,$f10
  438c50:	468042a0 	cvt.s.w	$f10,$f8
  438c54:	462021a0 	cvt.s.d	$f6,$f4
  438c58:	460aa101 	sub.s	$f4,$f20,$f10
  438c5c:	e5e60000 	swc1	$f6,0(t7)
  438c60:	460021a1 	cvt.d.s	$f6,$f4
  438c64:	46267201 	sub.d	$f8,$f14,$f6
  438c68:	8fb8006c 	lw	t8,108(sp)
  438c6c:	46281282 	mul.d	$f10,$f2,$f8
  438c70:	e70c0000 	swc1	$f12,0(t8)
  438c74:	8fb90070 	lw	t9,112(sp)
  438c78:	462a7101 	sub.d	$f4,$f14,$f10
  438c7c:	46240182 	mul.d	$f6,$f0,$f4
  438c80:	46203220 	cvt.s.d	$f8,$f6
  438c84:	1000004f 	b	438dc4 <hsv_to_rgb+0x38c>
  438c88:	e7280000 	swc1	$f8,0(t9)
  438c8c:	c7ab0060 	lwc1	$f11,96(sp)
  438c90:	c7aa0064 	lwc1	$f10,100(sp)
  438c94:	3c013ff0 	lui	at,0x3ff0
  438c98:	44817800 	mtc1	at,$f15
  438c9c:	44807000 	mtc1	zero,$f14
  438ca0:	46205320 	cvt.s.d	$f12,$f10
  438ca4:	8fa80068 	lw	t0,104(sp)
  438ca8:	46008121 	cvt.d.s	$f4,$f16
  438cac:	46247181 	sub.d	$f6,$f14,$f4
  438cb0:	44822000 	mtc1	v0,$f4
  438cb4:	46006021 	cvt.d.s	$f0,$f12
  438cb8:	46260202 	mul.d	$f8,$f0,$f6
  438cbc:	468021a0 	cvt.s.w	$f6,$f4
  438cc0:	462042a0 	cvt.s.d	$f10,$f8
  438cc4:	4606a201 	sub.s	$f8,$f20,$f6
  438cc8:	e50a0000 	swc1	$f10,0(t0)
  438ccc:	46088282 	mul.s	$f10,$f16,$f8
  438cd0:	8fa9006c 	lw	t1,108(sp)
  438cd4:	46005121 	cvt.d.s	$f4,$f10
  438cd8:	46247181 	sub.d	$f6,$f14,$f4
  438cdc:	46260202 	mul.d	$f8,$f0,$f6
  438ce0:	462042a0 	cvt.s.d	$f10,$f8
  438ce4:	e52a0000 	swc1	$f10,0(t1)
  438ce8:	8faa0070 	lw	t2,112(sp)
  438cec:	10000035 	b	438dc4 <hsv_to_rgb+0x38c>
  438cf0:	e54c0000 	swc1	$f12,0(t2)
  438cf4:	44823000 	mtc1	v0,$f6
  438cf8:	c7a50060 	lwc1	$f5,96(sp)
  438cfc:	46803220 	cvt.s.w	$f8,$f6
  438d00:	c7a40064 	lwc1	$f4,100(sp)
  438d04:	3c013ff0 	lui	at,0x3ff0
  438d08:	4608a281 	sub.s	$f10,$f20,$f8
  438d0c:	44817800 	mtc1	at,$f15
  438d10:	44807000 	mtc1	zero,$f14
  438d14:	46202320 	cvt.s.d	$f12,$f4
  438d18:	8fab0068 	lw	t3,104(sp)
  438d1c:	46005121 	cvt.d.s	$f4,$f10
  438d20:	46247181 	sub.d	$f6,$f14,$f4
  438d24:	460080a1 	cvt.d.s	$f2,$f16
  438d28:	46261202 	mul.d	$f8,$f2,$f6
  438d2c:	46006021 	cvt.d.s	$f0,$f12
  438d30:	46287281 	sub.d	$f10,$f14,$f8
  438d34:	462a0102 	mul.d	$f4,$f0,$f10
  438d38:	46227201 	sub.d	$f8,$f14,$f2
  438d3c:	46280282 	mul.d	$f10,$f0,$f8
  438d40:	462021a0 	cvt.s.d	$f6,$f4
  438d44:	e5660000 	swc1	$f6,0(t3)
  438d48:	8fac006c 	lw	t4,108(sp)
  438d4c:	46205120 	cvt.s.d	$f4,$f10
  438d50:	e5840000 	swc1	$f4,0(t4)
  438d54:	8fad0070 	lw	t5,112(sp)
  438d58:	1000001a 	b	438dc4 <hsv_to_rgb+0x38c>
  438d5c:	e5ac0000 	swc1	$f12,0(t5)
  438d60:	c7a70060 	lwc1	$f7,96(sp)
  438d64:	c7a60064 	lwc1	$f6,100(sp)
  438d68:	3c013ff0 	lui	at,0x3ff0
  438d6c:	44817800 	mtc1	at,$f15
  438d70:	44807000 	mtc1	zero,$f14
  438d74:	46203320 	cvt.s.d	$f12,$f6
  438d78:	8fae0068 	lw	t6,104(sp)
  438d7c:	46008221 	cvt.d.s	$f8,$f16
  438d80:	46287281 	sub.d	$f10,$f14,$f8
  438d84:	44824000 	mtc1	v0,$f8
  438d88:	46006021 	cvt.d.s	$f0,$f12
  438d8c:	462a0102 	mul.d	$f4,$f0,$f10
  438d90:	468042a0 	cvt.s.w	$f10,$f8
  438d94:	e5cc0000 	swc1	$f12,0(t6)
  438d98:	8faf006c 	lw	t7,108(sp)
  438d9c:	462021a0 	cvt.s.d	$f6,$f4
  438da0:	460aa101 	sub.s	$f4,$f20,$f10
  438da4:	e5e60000 	swc1	$f6,0(t7)
  438da8:	46048182 	mul.s	$f6,$f16,$f4
  438dac:	8fb80070 	lw	t8,112(sp)
  438db0:	46003221 	cvt.d.s	$f8,$f6
  438db4:	46287281 	sub.d	$f10,$f14,$f8
  438db8:	462a0102 	mul.d	$f4,$f0,$f10
  438dbc:	462021a0 	cvt.s.d	$f6,$f4
  438dc0:	e7060000 	swc1	$f6,0(t8)
  438dc4:	8fbf0024 	lw	ra,36(sp)
  438dc8:	c7b50018 	lwc1	$f21,24(sp)
  438dcc:	c7b4001c 	lwc1	$f20,28(sp)
  438dd0:	03e00008 	jr	ra
  438dd4:	27bd0050 	addiu	sp,sp,80
