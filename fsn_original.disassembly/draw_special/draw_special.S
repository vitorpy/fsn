# Function: draw_special
# Address: 0x00418c24 - 0x00418f44
# Size: 0x320 (800 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00418c24 <draw_special>:
  418c24:	3c1c0fc0 	lui	gp,0xfc0
  418c28:	279c4f0c 	addiu	gp,gp,20236
  418c2c:	0399e021 	addu	gp,gp,t9
  418c30:	27bdffd8 	addiu	sp,sp,-40
  418c34:	afbf0024 	sw	ra,36(sp)
  418c38:	afbc0020 	sw	gp,32(sp)
  418c3c:	e7b50018 	swc1	$f21,24(sp)
  418c40:	e7b4001c 	swc1	$f20,28(sp)
  418c44:	afa40028 	sw	a0,40(sp)
  418c48:	afa5002c 	sw	a1,44(sp)
  418c4c:	8c8e0074 	lw	t6,116(a0)
  418c50:	4487a000 	mtc1	a3,$f20
  418c54:	4486a800 	mtc1	a2,$f21
  418c58:	000ec0c0 	sll	t8,t6,0x3
  418c5c:	070100b4 	bgez	t8,418f30 <draw_special+0x30c>
  418c60:	00803025 	move	a2,a0
  418c64:	8f9981e4 	lw	t9,-32284(gp)
  418c68:	8484005e 	lh	a0,94(a0)
  418c6c:	0320f809 	jalr	t9
  418c70:	afa60028 	sw	a2,40(sp)
  418c74:	8fbc0020 	lw	gp,32(sp)
  418c78:	00000000 	nop
  418c7c:	8f9984b8 	lw	t9,-31560(gp)
  418c80:	00000000 	nop
  418c84:	0320f809 	jalr	t9
  418c88:	00000000 	nop
  418c8c:	8fbc0020 	lw	gp,32(sp)
  418c90:	c7a50038 	lwc1	$f5,56(sp)
  418c94:	c7a4003c 	lwc1	$f4,60(sp)
  418c98:	8f9984a0 	lw	t9,-31584(gp)
  418c9c:	4620a320 	cvt.s.d	$f12,$f20
  418ca0:	24060000 	li	a2,0
  418ca4:	0320f809 	jalr	t9
  418ca8:	462023a0 	cvt.s.d	$f14,$f4
  418cac:	8fbc0020 	lw	gp,32(sp)
  418cb0:	24050078 	li	a1,120
  418cb4:	8f99897c 	lw	t9,-30340(gp)
  418cb8:	00000000 	nop
  418cbc:	8f390000 	lw	t9,0(t9)
  418cc0:	00000000 	nop
  418cc4:	8724000e 	lh	a0,14(t9)
  418cc8:	8f998498 	lw	t9,-31592(gp)
  418ccc:	00042023 	negu	a0,a0
  418cd0:	00044400 	sll	t0,a0,0x10
  418cd4:	0320f809 	jalr	t9
  418cd8:	00082403 	sra	a0,t0,0x10
  418cdc:	8fbc0020 	lw	gp,32(sp)
  418ce0:	44806000 	mtc1	zero,$f12
  418ce4:	8f818a24 	lw	at,-30172(gp)
  418ce8:	8f9984a0 	lw	t9,-31584(gp)
  418cec:	44066000 	mfc1	a2,$f12
  418cf0:	c42e00e8 	lwc1	$f14,232(at)
  418cf4:	0320f809 	jalr	t9
  418cf8:	00000000 	nop
  418cfc:	8fbc0020 	lw	gp,32(sp)
  418d00:	00000000 	nop
  418d04:	8f848a24 	lw	a0,-30172(gp)
  418d08:	8f998464 	lw	t9,-31644(gp)
  418d0c:	8c840170 	lw	a0,368(a0)
  418d10:	0320f809 	jalr	t9
  418d14:	00000000 	nop
  418d18:	8fbc0020 	lw	gp,32(sp)
  418d1c:	3c014000 	lui	at,0x4000
  418d20:	4481a800 	mtc1	at,$f21
  418d24:	8f818a24 	lw	at,-30172(gp)
  418d28:	4480a000 	mtc1	zero,$f20
  418d2c:	c42000e4 	lwc1	$f0,228(at)
  418d30:	8f9981e0 	lw	t9,-32288(gp)
  418d34:	46000421 	cvt.d.s	$f16,$f0
  418d38:	00000000 	nop
  418d3c:	46348483 	div.d	$f18,$f16,$f20
  418d40:	46000187 	neg.s	$f6,$f0
  418d44:	46003221 	cvt.d.s	$f8,$f6
  418d48:	00000000 	nop
  418d4c:	46344283 	div.d	$f10,$f8,$f20
  418d50:	462090a0 	cvt.s.d	$f2,$f18
  418d54:	44061000 	mfc1	a2,$f2
  418d58:	44071000 	mfc1	a3,$f2
  418d5c:	46205320 	cvt.s.d	$f12,$f10
  418d60:	0320f809 	jalr	t9
  418d64:	46006386 	mov.s	$f14,$f12
  418d68:	8fbc0020 	lw	gp,32(sp)
  418d6c:	00000000 	nop
  418d70:	8f9984b8 	lw	t9,-31560(gp)
  418d74:	00000000 	nop
  418d78:	0320f809 	jalr	t9
  418d7c:	00000000 	nop
  418d80:	8fbc0020 	lw	gp,32(sp)
  418d84:	8faa0028 	lw	t2,40(sp)
  418d88:	8f81805c 	lw	at,-32676(gp)
  418d8c:	8d4b0004 	lw	t3,4(t2)
  418d90:	c429aed8 	lwc1	$f9,-20776(at)
  418d94:	c428aedc 	lwc1	$f8,-20772(at)
  418d98:	8f818a24 	lw	at,-30172(gp)
  418d9c:	448b2000 	mtc1	t3,$f4
  418da0:	c43000e4 	lwc1	$f16,228(at)
  418da4:	468021a1 	cvt.d.w	$f6,$f4
  418da8:	3c013fe0 	lui	at,0x3fe0
  418dac:	8f9984a0 	lw	t9,-31584(gp)
  418db0:	46008487 	neg.s	$f18,$f16
  418db4:	46283282 	mul.d	$f10,$f6,$f8
  418db8:	46009121 	cvt.d.s	$f4,$f18
  418dbc:	00000000 	nop
  418dc0:	46342183 	div.d	$f6,$f4,$f20
  418dc4:	44804000 	mtc1	zero,$f8
  418dc8:	44814800 	mtc1	at,$f9
  418dcc:	46205320 	cvt.s.d	$f12,$f10
  418dd0:	24060000 	li	a2,0
  418dd4:	46283281 	sub.d	$f10,$f6,$f8
  418dd8:	0320f809 	jalr	t9
  418ddc:	462053a0 	cvt.s.d	$f14,$f10
  418de0:	8fbc0020 	lw	gp,32(sp)
  418de4:	3c063f80 	lui	a2,0x3f80
  418de8:	8f81805c 	lw	at,-32676(gp)
  418dec:	8f998494 	lw	t9,-31596(gp)
  418df0:	c42caee0 	lwc1	$f12,-20768(at)
  418df4:	0320f809 	jalr	t9
  418df8:	46006386 	mov.s	$f14,$f12
  418dfc:	8fbc0020 	lw	gp,32(sp)
  418e00:	8fac0028 	lw	t4,40(sp)
  418e04:	8f9985f8 	lw	t9,-31240(gp)
  418e08:	8d840000 	lw	a0,0(t4)
  418e0c:	0320f809 	jalr	t9
  418e10:	00000000 	nop
  418e14:	8fbc0020 	lw	gp,32(sp)
  418e18:	00000000 	nop
  418e1c:	8f9984d8 	lw	t9,-31528(gp)
  418e20:	00000000 	nop
  418e24:	0320f809 	jalr	t9
  418e28:	00000000 	nop
  418e2c:	8fbc0020 	lw	gp,32(sp)
  418e30:	00000000 	nop
  418e34:	8f9984b8 	lw	t9,-31560(gp)
  418e38:	00000000 	nop
  418e3c:	0320f809 	jalr	t9
  418e40:	00000000 	nop
  418e44:	8fbc0020 	lw	gp,32(sp)
  418e48:	8fa4002c 	lw	a0,44(sp)
  418e4c:	8f9983e0 	lw	t9,-31776(gp)
  418e50:	00000000 	nop
  418e54:	0320f809 	jalr	t9
  418e58:	00000000 	nop
  418e5c:	44828000 	mtc1	v0,$f16
  418e60:	8fbc0020 	lw	gp,32(sp)
  418e64:	04410006 	bgez	v0,418e80 <draw_special+0x25c>
  418e68:	468084a1 	cvt.d.w	$f18,$f16
  418e6c:	3c0141f0 	lui	at,0x41f0
  418e70:	44812800 	mtc1	at,$f5
  418e74:	44802000 	mtc1	zero,$f4
  418e78:	00000000 	nop
  418e7c:	46249480 	add.d	$f18,$f18,$f4
  418e80:	8f81805c 	lw	at,-32676(gp)
  418e84:	8f9984a0 	lw	t9,-31584(gp)
  418e88:	c427aee8 	lwc1	$f7,-20760(at)
  418e8c:	c426aeec 	lwc1	$f6,-20756(at)
  418e90:	8f818a24 	lw	at,-30172(gp)
  418e94:	46269202 	mul.d	$f8,$f18,$f6
  418e98:	c42a00e4 	lwc1	$f10,228(at)
  418e9c:	8f81805c 	lw	at,-32676(gp)
  418ea0:	46005421 	cvt.d.s	$f16,$f10
  418ea4:	c433aef0 	lwc1	$f19,-20752(at)
  418ea8:	46348103 	div.d	$f4,$f16,$f20
  418eac:	c432aef4 	lwc1	$f18,-20748(at)
  418eb0:	46204320 	cvt.s.d	$f12,$f8
  418eb4:	24060000 	li	a2,0
  418eb8:	46322180 	add.d	$f6,$f4,$f18
  418ebc:	0320f809 	jalr	t9
  418ec0:	462033a0 	cvt.s.d	$f14,$f6
  418ec4:	8fbc0020 	lw	gp,32(sp)
  418ec8:	3c063f80 	lui	a2,0x3f80
  418ecc:	8f81805c 	lw	at,-32676(gp)
  418ed0:	8f998494 	lw	t9,-31596(gp)
  418ed4:	c42caef8 	lwc1	$f12,-20744(at)
  418ed8:	0320f809 	jalr	t9
  418edc:	46006386 	mov.s	$f14,$f12
  418ee0:	8fbc0020 	lw	gp,32(sp)
  418ee4:	8fa4002c 	lw	a0,44(sp)
  418ee8:	8f9985f8 	lw	t9,-31240(gp)
  418eec:	00000000 	nop
  418ef0:	0320f809 	jalr	t9
  418ef4:	00000000 	nop
  418ef8:	8fbc0020 	lw	gp,32(sp)
  418efc:	00000000 	nop
  418f00:	8f9984d8 	lw	t9,-31528(gp)
  418f04:	00000000 	nop
  418f08:	0320f809 	jalr	t9
  418f0c:	00000000 	nop
  418f10:	8fbc0020 	lw	gp,32(sp)
  418f14:	00000000 	nop
  418f18:	8f9984d8 	lw	t9,-31528(gp)
  418f1c:	00000000 	nop
  418f20:	0320f809 	jalr	t9
  418f24:	00000000 	nop
  418f28:	8fbc0020 	lw	gp,32(sp)
  418f2c:	00000000 	nop
  418f30:	8fbf0024 	lw	ra,36(sp)
  418f34:	c7b50018 	lwc1	$f21,24(sp)
  418f38:	c7b4001c 	lwc1	$f20,28(sp)
  418f3c:	03e00008 	jr	ra
  418f40:	27bd0028 	addiu	sp,sp,40
