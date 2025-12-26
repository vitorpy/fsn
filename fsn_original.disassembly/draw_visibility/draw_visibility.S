# Function: draw_visibility
# Address: 0x00425c74 - 0x00425ed8
# Size: 0x264 (612 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00425c74 <draw_visibility>:
  425c74:	3c1c0fbf 	lui	gp,0xfbf
  425c78:	279c7ebc 	addiu	gp,gp,32444
  425c7c:	0399e021 	addu	gp,gp,t9
  425c80:	27bdefa8 	addiu	sp,sp,-4184
  425c84:	afb10018 	sw	s1,24(sp)
  425c88:	8f91892c 	lw	s1,-30420(gp)
  425c8c:	afbf0034 	sw	ra,52(sp)
  425c90:	8e2e0000 	lw	t6,0(s1)
  425c94:	afbc0030 	sw	gp,48(sp)
  425c98:	afb6002c 	sw	s6,44(sp)
  425c9c:	afb50028 	sw	s5,40(sp)
  425ca0:	afb40024 	sw	s4,36(sp)
  425ca4:	afb30020 	sw	s3,32(sp)
  425ca8:	afb2001c 	sw	s2,28(sp)
  425cac:	11c00080 	beqz	t6,425eb0 <draw_visibility+0x23c>
  425cb0:	afb00014 	sw	s0,20(sp)
  425cb4:	8f998220 	lw	t9,-32224(gp)
  425cb8:	00000000 	nop
  425cbc:	0320f809 	jalr	t9
  425cc0:	00000000 	nop
  425cc4:	8fbc0030 	lw	gp,48(sp)
  425cc8:	27b60058 	addiu	s6,sp,88
  425ccc:	8f998290 	lw	t9,-32112(gp)
  425cd0:	02c02025 	move	a0,s6
  425cd4:	0320f809 	jalr	t9
  425cd8:	24050800 	li	a1,2048
  425cdc:	8fbc0030 	lw	gp,48(sp)
  425ce0:	3c013f80 	lui	at,0x3f80
  425ce4:	8f90897c 	lw	s0,-30340(gp)
  425ce8:	44817000 	mtc1	at,$f14
  425cec:	8e0f0000 	lw	t7,0(s0)
  425cf0:	3c013ff0 	lui	at,0x3ff0
  425cf4:	c5e60034 	lwc1	$f6,52(t7)
  425cf8:	44812800 	mtc1	at,$f5
  425cfc:	44802000 	mtc1	zero,$f4
  425d00:	46003221 	cvt.d.s	$f8,$f6
  425d04:	00000000 	nop
  425d08:	46282283 	div.d	$f10,$f4,$f8
  425d0c:	8f998494 	lw	t9,-31596(gp)
  425d10:	44067000 	mfc1	a2,$f14
  425d14:	0320f809 	jalr	t9
  425d18:	46205320 	cvt.s.d	$f12,$f10
  425d1c:	8fbc0030 	lw	gp,48(sp)
  425d20:	8e180000 	lw	t8,0(s0)
  425d24:	8f998498 	lw	t9,-31592(gp)
  425d28:	8704000e 	lh	a0,14(t8)
  425d2c:	0320f809 	jalr	t9
  425d30:	24050078 	li	a1,120
  425d34:	8e190000 	lw	t9,0(s0)
  425d38:	8fbc0030 	lw	gp,48(sp)
  425d3c:	8724000c 	lh	a0,12(t9)
  425d40:	8f998498 	lw	t9,-31592(gp)
  425d44:	2405007a 	li	a1,122
  425d48:	0320f809 	jalr	t9
  425d4c:	00000000 	nop
  425d50:	8e020000 	lw	v0,0(s0)
  425d54:	8fbc0030 	lw	gp,48(sp)
  425d58:	c4500018 	lwc1	$f16,24(v0)
  425d5c:	c4460020 	lwc1	$f6,32(v0)
  425d60:	460084a1 	cvt.d.s	$f18,$f16
  425d64:	46003121 	cvt.d.s	$f4,$f6
  425d68:	46249202 	mul.d	$f8,$f18,$f4
  425d6c:	c44a0008 	lwc1	$f10,8(v0)
  425d70:	c4520004 	lwc1	$f18,4(v0)
  425d74:	46005421 	cvt.d.s	$f16,$f10
  425d78:	8f838a24 	lw	v1,-30172(gp)
  425d7c:	46304182 	mul.d	$f6,$f8,$f16
  425d80:	c4680108 	lwc1	$f8,264(v1)
  425d84:	46009121 	cvt.d.s	$f4,$f18
  425d88:	46004421 	cvt.d.s	$f16,$f8
  425d8c:	8f99849c 	lw	t9,-31588(gp)
  425d90:	46262281 	sub.d	$f10,$f4,$f6
  425d94:	c46c0104 	lwc1	$f12,260(v1)
  425d98:	46305483 	div.d	$f18,$f10,$f16
  425d9c:	0320f809 	jalr	t9
  425da0:	462093a0 	cvt.s.d	$f14,$f18
  425da4:	8fbc0030 	lw	gp,48(sp)
  425da8:	3c013f80 	lui	at,0x3f80
  425dac:	44817000 	mtc1	at,$f14
  425db0:	8f998494 	lw	t9,-31596(gp)
  425db4:	44067000 	mfc1	a2,$f14
  425db8:	0320f809 	jalr	t9
  425dbc:	46000306 	mov.s	$f12,$f0
  425dc0:	8e020000 	lw	v0,0(s0)
  425dc4:	8fbc0030 	lw	gp,48(sp)
  425dc8:	c4440008 	lwc1	$f4,8(v0)
  425dcc:	c44c0000 	lwc1	$f12,0(v0)
  425dd0:	c44e0004 	lwc1	$f14,4(v0)
  425dd4:	8f9984a0 	lw	t9,-31584(gp)
  425dd8:	46002187 	neg.s	$f6,$f4
  425ddc:	44063000 	mfc1	a2,$f6
  425de0:	46006307 	neg.s	$f12,$f12
  425de4:	0320f809 	jalr	t9
  425de8:	46007387 	neg.s	$f14,$f14
  425dec:	8fbc0030 	lw	gp,48(sp)
  425df0:	8e240000 	lw	a0,0(s1)
  425df4:	8f9986cc 	lw	t9,-31028(gp)
  425df8:	00000000 	nop
  425dfc:	0320f809 	jalr	t9
  425e00:	00000000 	nop
  425e04:	8fbc0030 	lw	gp,48(sp)
  425e08:	02c02025 	move	a0,s6
  425e0c:	8f998294 	lw	t9,-32108(gp)
  425e10:	00000000 	nop
  425e14:	0320f809 	jalr	t9
  425e18:	00000000 	nop
  425e1c:	8fbc0030 	lw	gp,48(sp)
  425e20:	04410007 	bgez	v0,425e40 <draw_visibility+0x1cc>
  425e24:	0040a825 	move	s5,v0
  425e28:	8f9986d0 	lw	t9,-31024(gp)
  425e2c:	8e240000 	lw	a0,0(s1)
  425e30:	0320f809 	jalr	t9
  425e34:	00000000 	nop
  425e38:	8fbc0030 	lw	gp,48(sp)
  425e3c:	00000000 	nop
  425e40:	00008025 	move	s0,zero
  425e44:	1aa0001a 	blez	s5,425eb0 <draw_visibility+0x23c>
  425e48:	00009025 	move	s2,zero
  425e4c:	8f948990 	lw	s4,-30320(gp)
  425e50:	24130001 	li	s3,1
  425e54:	00104040 	sll	t0,s0,0x1
  425e58:	02c81021 	addu	v0,s6,t0
  425e5c:	84510000 	lh	s1,0(v0)
  425e60:	24420002 	addiu	v0,v0,2
  425e64:	1633000f 	bne	s1,s3,425ea4 <draw_visibility+0x230>
  425e68:	26100001 	addiu	s0,s0,1
  425e6c:	8f998584 	lw	t9,-31356(gp)
  425e70:	84440000 	lh	a0,0(v0)
  425e74:	0320f809 	jalr	t9
  425e78:	00000000 	nop
  425e7c:	8c490074 	lw	t1,116(v0)
  425e80:	8e8b0000 	lw	t3,0(s4)
  425e84:	90580074 	lbu	t8,116(v0)
  425e88:	00095782 	srl	t2,t1,0x1e
  425e8c:	014b6825 	or	t5,t2,t3
  425e90:	000d7980 	sll	t7,t5,0x6
  425e94:	3319ff3f 	andi	t9,t8,0xff3f
  425e98:	01f94025 	or	t0,t7,t9
  425e9c:	8fbc0030 	lw	gp,48(sp)
  425ea0:	a0480074 	sb	t0,116(v0)
  425ea4:	26520001 	addiu	s2,s2,1
  425ea8:	1655ffea 	bne	s2,s5,425e54 <draw_visibility+0x1e0>
  425eac:	02118021 	addu	s0,s0,s1
  425eb0:	8fbf0034 	lw	ra,52(sp)
  425eb4:	8fb00014 	lw	s0,20(sp)
  425eb8:	8fb10018 	lw	s1,24(sp)
  425ebc:	8fb2001c 	lw	s2,28(sp)
  425ec0:	8fb30020 	lw	s3,32(sp)
  425ec4:	8fb40024 	lw	s4,36(sp)
  425ec8:	8fb50028 	lw	s5,40(sp)
  425ecc:	8fb6002c 	lw	s6,44(sp)
  425ed0:	03e00008 	jr	ra
  425ed4:	27bd1058 	addiu	sp,sp,4184
