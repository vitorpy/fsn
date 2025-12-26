# Function: FUN_00412bc0
# Address: 0x00412bc0 - 0x004134ec
# Size: 0x92c (2348 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00412bc0 <third_traversal+0xc>:
  412bc0:	27bdffc0 	addiu	sp,sp,-64
  412bc4:	8f998018 	lw	t9,-32744(gp)
  412bc8:	e7b50010 	swc1	$f21,16(sp)
  412bcc:	e7b40014 	swc1	$f20,20(sp)
  412bd0:	4487a000 	mtc1	a3,$f20
  412bd4:	4486a800 	mtc1	a2,$f21
  412bd8:	afbf0034 	sw	ra,52(sp)
  412bdc:	afb2002c 	sw	s2,44(sp)
  412be0:	273918b0 	addiu	t9,t9,6320
  412be4:	00809025 	move	s2,a0
  412be8:	afbc0030 	sw	gp,48(sp)
  412bec:	afb10028 	sw	s1,40(sp)
  412bf0:	afb00024 	sw	s0,36(sp)
  412bf4:	e7b70018 	swc1	$f23,24(sp)
  412bf8:	0320f809 	jalr	t9
  412bfc:	e7b6001c 	swc1	$f22,28(sp)
  412c00:	c644003c 	lwc1	$f4,60(s2)
  412c04:	3c014000 	lui	at,0x4000
  412c08:	4481b800 	mtc1	at,$f23
  412c0c:	4480b000 	mtc1	zero,$f22
  412c10:	460021a1 	cvt.d.s	$f6,$f4
  412c14:	00000000 	nop
  412c18:	46363083 	div.d	$f2,$f6,$f22
  412c1c:	8fbc0030 	lw	gp,48(sp)
  412c20:	4620a320 	cvt.s.d	$f12,$f20
  412c24:	8f828a2c 	lw	v0,-30164(gp)
  412c28:	e6400024 	swc1	$f0,36(s2)
  412c2c:	e64c0034 	swc1	$f12,52(s2)
  412c30:	c4440000 	lwc1	$f4,0(v0)
  412c34:	46006221 	cvt.d.s	$f8,$f12
  412c38:	460021a1 	cvt.d.s	$f6,$f4
  412c3c:	46224281 	sub.d	$f10,$f8,$f2
  412c40:	4626503c 	c.lt.d	$f10,$f6
  412c44:	00000000 	nop
  412c48:	4500000c 	bc1f	412c7c <third_traversal+0xc8>
  412c4c:	00000000 	nop
  412c50:	c6480034 	lwc1	$f8,52(s2)
  412c54:	00000000 	nop
  412c58:	46004121 	cvt.d.s	$f4,$f8
  412c5c:	46222281 	sub.d	$f10,$f4,$f2
  412c60:	462051a0 	cvt.s.d	$f6,$f10
  412c64:	e4460000 	swc1	$f6,0(v0)
  412c68:	c648003c 	lwc1	$f8,60(s2)
  412c6c:	00000000 	nop
  412c70:	46004121 	cvt.d.s	$f4,$f8
  412c74:	10000012 	b	412cc0 <third_traversal+0x10c>
  412c78:	46362083 	div.d	$f2,$f4,$f22
  412c7c:	8f828a30 	lw	v0,-30160(gp)
  412c80:	c64a0034 	lwc1	$f10,52(s2)
  412c84:	c4480000 	lwc1	$f8,0(v0)
  412c88:	460051a1 	cvt.d.s	$f6,$f10
  412c8c:	46223000 	add.d	$f0,$f6,$f2
  412c90:	46004121 	cvt.d.s	$f4,$f8
  412c94:	4620203c 	c.lt.d	$f4,$f0
  412c98:	00000000 	nop
  412c9c:	45000008 	bc1f	412cc0 <third_traversal+0x10c>
  412ca0:	00000000 	nop
  412ca4:	462002a0 	cvt.s.d	$f10,$f0
  412ca8:	e44a0000 	swc1	$f10,0(v0)
  412cac:	c646003c 	lwc1	$f6,60(s2)
  412cb0:	00000000 	nop
  412cb4:	46003221 	cvt.d.s	$f8,$f6
  412cb8:	00000000 	nop
  412cbc:	46364083 	div.d	$f2,$f8,$f22
  412cc0:	8f828a38 	lw	v0,-30152(gp)
  412cc4:	c6440038 	lwc1	$f4,56(s2)
  412cc8:	c4460000 	lwc1	$f6,0(v0)
  412ccc:	460022a1 	cvt.d.s	$f10,$f4
  412cd0:	46225000 	add.d	$f0,$f10,$f2
  412cd4:	46003221 	cvt.d.s	$f8,$f6
  412cd8:	4620403c 	c.lt.d	$f8,$f0
  412cdc:	00000000 	nop
  412ce0:	45000003 	bc1f	412cf0 <third_traversal+0x13c>
  412ce4:	00000000 	nop
  412ce8:	46200120 	cvt.s.d	$f4,$f0
  412cec:	e4440000 	swc1	$f4,0(v0)
  412cf0:	c64a0040 	lwc1	$f10,64(s2)
  412cf4:	8e460014 	lw	a2,20(s2)
  412cf8:	460051a1 	cvt.d.s	$f6,$f10
  412cfc:	00000000 	nop
  412d00:	46363203 	div.d	$f8,$f6,$f22
  412d04:	00001825 	move	v1,zero
  412d08:	18c0001f 	blez	a2,412d88 <third_traversal+0x1d4>
  412d0c:	4628a501 	sub.d	$f20,$f20,$f8
  412d10:	00008825 	move	s1,zero
  412d14:	8e4e0018 	lw	t6,24(s2)
  412d18:	8f998598 	lw	t9,-31336(gp)
  412d1c:	01d17821 	addu	t7,t6,s1
  412d20:	8df00000 	lw	s0,0(t7)
  412d24:	00000000 	nop
  412d28:	c6040044 	lwc1	$f4,68(s0)
  412d2c:	afa3003c 	sw	v1,60(sp)
  412d30:	460022a1 	cvt.d.s	$f10,$f4
  412d34:	00000000 	nop
  412d38:	46365183 	div.d	$f6,$f10,$f22
  412d3c:	02002025 	move	a0,s0
  412d40:	4626a500 	add.d	$f20,$f20,$f6
  412d44:	4407a000 	mfc1	a3,$f20
  412d48:	4406a800 	mfc1	a2,$f21
  412d4c:	0320f809 	jalr	t9
  412d50:	00000000 	nop
  412d54:	c6080044 	lwc1	$f8,68(s0)
  412d58:	8fa3003c 	lw	v1,60(sp)
  412d5c:	46004121 	cvt.d.s	$f4,$f8
  412d60:	00000000 	nop
  412d64:	46362283 	div.d	$f10,$f4,$f22
  412d68:	8e460014 	lw	a2,20(s2)
  412d6c:	24630001 	addiu	v1,v1,1
  412d70:	8fbc0030 	lw	gp,48(sp)
  412d74:	0066082a 	slt	at,v1,a2
  412d78:	26310004 	addiu	s1,s1,4
  412d7c:	1420ffe5 	bnez	at,412d14 <third_traversal+0x160>
  412d80:	462aa500 	add.d	$f20,$f20,$f10
  412d84:	00001825 	move	v1,zero
  412d88:	c654003c 	lwc1	$f20,60(s2)
  412d8c:	00002825 	move	a1,zero
  412d90:	18c00028 	blez	a2,412e34 <third_traversal+0x280>
  412d94:	4600a4a1 	cvt.d.s	$f18,$f20
  412d98:	8e440018 	lw	a0,24(s2)
  412d9c:	c6460038 	lwc1	$f6,56(s2)
  412da0:	8c820000 	lw	v0,0(a0)
  412da4:	c6440058 	lwc1	$f4,88(s2)
  412da8:	c44a0038 	lwc1	$f10,56(v0)
  412dac:	c6480034 	lwc1	$f8,52(s2)
  412db0:	460030a1 	cvt.d.s	$f2,$f6
  412db4:	46002321 	cvt.d.s	$f12,$f4
  412db8:	c4440034 	lwc1	$f4,52(v0)
  412dbc:	460051a1 	cvt.d.s	$f6,$f10
  412dc0:	46004021 	cvt.d.s	$f0,$f8
  412dc4:	46223201 	sub.d	$f8,$f6,$f2
  412dc8:	460022a1 	cvt.d.s	$f10,$f4
  412dcc:	462a0181 	sub.d	$f6,$f0,$f10
  412dd0:	00000000 	nop
  412dd4:	462c3103 	div.d	$f4,$f6,$f12
  412dd8:	4624403c 	c.lt.d	$f8,$f4
  412ddc:	00000000 	nop
  412de0:	45000015 	bc1f	412e38 <third_traversal+0x284>
  412de4:	24a80001 	addiu	t0,a1,1
  412de8:	24a50001 	addiu	a1,a1,1
  412dec:	00a6082a 	slt	at,a1,a2
  412df0:	10200010 	beqz	at,412e34 <third_traversal+0x280>
  412df4:	0005c080 	sll	t8,a1,0x2
  412df8:	0098c821 	addu	t9,a0,t8
  412dfc:	8f220000 	lw	v0,0(t9)
  412e00:	00000000 	nop
  412e04:	c44a0038 	lwc1	$f10,56(v0)
  412e08:	c4440034 	lwc1	$f4,52(v0)
  412e0c:	460051a1 	cvt.d.s	$f6,$f10
  412e10:	46223201 	sub.d	$f8,$f6,$f2
  412e14:	460022a1 	cvt.d.s	$f10,$f4
  412e18:	462a0181 	sub.d	$f6,$f0,$f10
  412e1c:	00000000 	nop
  412e20:	462c3103 	div.d	$f4,$f6,$f12
  412e24:	4624403c 	c.lt.d	$f8,$f4
  412e28:	00000000 	nop
  412e2c:	4501ffee 	bc1t	412de8 <third_traversal+0x234>
  412e30:	00000000 	nop
  412e34:	24a80001 	addiu	t0,a1,1
  412e38:	44885000 	mtc1	t0,$f10
  412e3c:	4600a107 	neg.s	$f4,$f20
  412e40:	468051a1 	cvt.d.w	$f6,$f10
  412e44:	00000000 	nop
  412e48:	46269203 	div.d	$f8,$f18,$f6
  412e4c:	460022a1 	cvt.d.s	$f10,$f4
  412e50:	00000000 	nop
  412e54:	46365403 	div.d	$f16,$f10,$f22
  412e58:	462043a0 	cvt.s.d	$f14,$f8
  412e5c:	460070a1 	cvt.d.s	$f2,$f14
  412e60:	46228180 	add.d	$f6,$f16,$f2
  412e64:	18a0006a 	blez	a1,413010 <third_traversal+0x45c>
  412e68:	46203020 	cvt.s.d	$f0,$f6
  412e6c:	30a40003 	andi	a0,a1,0x3
  412e70:	10800017 	beqz	a0,412ed0 <third_traversal+0x31c>
  412e74:	00801025 	move	v0,a0
  412e78:	00038880 	sll	s1,v1,0x2
  412e7c:	c654003c 	lwc1	$f20,60(s2)
  412e80:	c6520058 	lwc1	$f18,88(s2)
  412e84:	4600a507 	neg.s	$f20,$f20
  412e88:	4600a521 	cvt.d.s	$f20,$f20
  412e8c:	00000000 	nop
  412e90:	4636a503 	div.d	$f20,$f20,$f22
  412e94:	8e490018 	lw	t1,24(s2)
  412e98:	460094a1 	cvt.d.s	$f18,$f18
  412e9c:	01315021 	addu	t2,t1,s1
  412ea0:	8d500000 	lw	s0,0(t2)
  412ea4:	46000421 	cvt.d.s	$f16,$f0
  412ea8:	46228400 	add.d	$f16,$f16,$f2
  412eac:	e6000050 	swc1	$f0,80(s0)
  412eb0:	46208020 	cvt.s.d	$f0,$f16
  412eb4:	24630001 	addiu	v1,v1,1
  412eb8:	26310004 	addiu	s1,s1,4
  412ebc:	4632a482 	mul.d	$f18,$f20,$f18
  412ec0:	462094a0 	cvt.s.d	$f18,$f18
  412ec4:	1443ffed 	bne	v0,v1,412e7c <third_traversal+0x2c8>
  412ec8:	e612004c 	swc1	$f18,76(s0)
  412ecc:	10650048 	beq	v1,a1,412ff0 <third_traversal+0x43c>
  412ed0:	00038880 	sll	s1,v1,0x2
  412ed4:	00051080 	sll	v0,a1,0x2
  412ed8:	c654003c 	lwc1	$f20,60(s2)
  412edc:	8e4b0018 	lw	t3,24(s2)
  412ee0:	c6520058 	lwc1	$f18,88(s2)
  412ee4:	4600a507 	neg.s	$f20,$f20
  412ee8:	4600a521 	cvt.d.s	$f20,$f20
  412eec:	00000000 	nop
  412ef0:	4636a503 	div.d	$f20,$f20,$f22
  412ef4:	01716021 	addu	t4,t3,s1
  412ef8:	8d900000 	lw	s0,0(t4)
  412efc:	460094a1 	cvt.d.s	$f18,$f18
  412f00:	e6000050 	swc1	$f0,80(s0)
  412f04:	46000421 	cvt.d.s	$f16,$f0
  412f08:	46228400 	add.d	$f16,$f16,$f2
  412f0c:	46208020 	cvt.s.d	$f0,$f16
  412f10:	46000421 	cvt.d.s	$f16,$f0
  412f14:	46228400 	add.d	$f16,$f16,$f2
  412f18:	4632a482 	mul.d	$f18,$f20,$f18
  412f1c:	462094a0 	cvt.s.d	$f18,$f18
  412f20:	e612004c 	swc1	$f18,76(s0)
  412f24:	c652003c 	lwc1	$f18,60(s2)
  412f28:	8e4d0018 	lw	t5,24(s2)
  412f2c:	c6540058 	lwc1	$f20,88(s2)
  412f30:	46009487 	neg.s	$f18,$f18
  412f34:	460094a1 	cvt.d.s	$f18,$f18
  412f38:	00000000 	nop
  412f3c:	46369483 	div.d	$f18,$f18,$f22
  412f40:	01b17021 	addu	t6,t5,s1
  412f44:	8dd00004 	lw	s0,4(t6)
  412f48:	4600a521 	cvt.d.s	$f20,$f20
  412f4c:	e6000050 	swc1	$f0,80(s0)
  412f50:	46208020 	cvt.s.d	$f0,$f16
  412f54:	46000421 	cvt.d.s	$f16,$f0
  412f58:	46228400 	add.d	$f16,$f16,$f2
  412f5c:	46349502 	mul.d	$f20,$f18,$f20
  412f60:	4620a520 	cvt.s.d	$f20,$f20
  412f64:	e614004c 	swc1	$f20,76(s0)
  412f68:	c654003c 	lwc1	$f20,60(s2)
  412f6c:	8e4f0018 	lw	t7,24(s2)
  412f70:	c6520058 	lwc1	$f18,88(s2)
  412f74:	4600a507 	neg.s	$f20,$f20
  412f78:	4600a521 	cvt.d.s	$f20,$f20
  412f7c:	00000000 	nop
  412f80:	4636a503 	div.d	$f20,$f20,$f22
  412f84:	01f1c021 	addu	t8,t7,s1
  412f88:	8f100008 	lw	s0,8(t8)
  412f8c:	460094a1 	cvt.d.s	$f18,$f18
  412f90:	e6000050 	swc1	$f0,80(s0)
  412f94:	46208020 	cvt.s.d	$f0,$f16
  412f98:	46000421 	cvt.d.s	$f16,$f0
  412f9c:	46228400 	add.d	$f16,$f16,$f2
  412fa0:	4632a482 	mul.d	$f18,$f20,$f18
  412fa4:	462094a0 	cvt.s.d	$f18,$f18
  412fa8:	e612004c 	swc1	$f18,76(s0)
  412fac:	c652003c 	lwc1	$f18,60(s2)
  412fb0:	c6540058 	lwc1	$f20,88(s2)
  412fb4:	46009487 	neg.s	$f18,$f18
  412fb8:	460094a1 	cvt.d.s	$f18,$f18
  412fbc:	00000000 	nop
  412fc0:	46369483 	div.d	$f18,$f18,$f22
  412fc4:	8e590018 	lw	t9,24(s2)
  412fc8:	4600a521 	cvt.d.s	$f20,$f20
  412fcc:	03314021 	addu	t0,t9,s1
  412fd0:	8d10000c 	lw	s0,12(t0)
  412fd4:	26310010 	addiu	s1,s1,16
  412fd8:	e6000050 	swc1	$f0,80(s0)
  412fdc:	46208020 	cvt.s.d	$f0,$f16
  412fe0:	46349502 	mul.d	$f20,$f18,$f20
  412fe4:	4620a520 	cvt.s.d	$f20,$f20
  412fe8:	1622ffbb 	bne	s1,v0,412ed8 <third_traversal+0x324>
  412fec:	e614004c 	swc1	$f20,76(s0)
  412ff0:	c648003c 	lwc1	$f8,60(s2)
  412ff4:	c64a003c 	lwc1	$f10,60(s2)
  412ff8:	46004187 	neg.s	$f6,$f8
  412ffc:	46003121 	cvt.d.s	$f4,$f6
  413000:	8e460014 	lw	a2,20(s2)
  413004:	46362403 	div.d	$f16,$f4,$f22
  413008:	00001825 	move	v1,zero
  41300c:	460054a1 	cvt.d.s	$f18,$f10
  413010:	18c0002b 	blez	a2,4130c0 <third_traversal+0x50c>
  413014:	00002025 	move	a0,zero
  413018:	8e490018 	lw	t1,24(s2)
  41301c:	00065080 	sll	t2,a2,0x2
  413020:	012a3821 	addu	a3,t1,t2
  413024:	8ce2fffc 	lw	v0,-4(a3)
  413028:	c64a0038 	lwc1	$f10,56(s2)
  41302c:	c6460058 	lwc1	$f6,88(s2)
  413030:	c4440038 	lwc1	$f4,56(v0)
  413034:	c6480034 	lwc1	$f8,52(s2)
  413038:	460050a1 	cvt.d.s	$f2,$f10
  41303c:	46003321 	cvt.d.s	$f12,$f6
  413040:	c4460034 	lwc1	$f6,52(v0)
  413044:	460022a1 	cvt.d.s	$f10,$f4
  413048:	46004021 	cvt.d.s	$f0,$f8
  41304c:	46225201 	sub.d	$f8,$f10,$f2
  413050:	46003121 	cvt.d.s	$f4,$f6
  413054:	46202281 	sub.d	$f10,$f4,$f0
  413058:	00000000 	nop
  41305c:	462c5183 	div.d	$f6,$f10,$f12
  413060:	4626403c 	c.lt.d	$f8,$f6
  413064:	00000000 	nop
  413068:	45000016 	bc1f	4130c4 <third_traversal+0x510>
  41306c:	248e0001 	addiu	t6,a0,1
  413070:	24840001 	addiu	a0,a0,1
  413074:	0086082a 	slt	at,a0,a2
  413078:	10200011 	beqz	at,4130c0 <third_traversal+0x50c>
  41307c:	00045880 	sll	t3,a0,0x2
  413080:	000b6023 	negu	t4,t3
  413084:	00ec6821 	addu	t5,a3,t4
  413088:	8da2fffc 	lw	v0,-4(t5)
  41308c:	00000000 	nop
  413090:	c4440038 	lwc1	$f4,56(v0)
  413094:	c4460034 	lwc1	$f6,52(v0)
  413098:	460022a1 	cvt.d.s	$f10,$f4
  41309c:	46225201 	sub.d	$f8,$f10,$f2
  4130a0:	46003121 	cvt.d.s	$f4,$f6
  4130a4:	46202281 	sub.d	$f10,$f4,$f0
  4130a8:	00000000 	nop
  4130ac:	462c5183 	div.d	$f6,$f10,$f12
  4130b0:	4626403c 	c.lt.d	$f8,$f6
  4130b4:	00000000 	nop
  4130b8:	4501ffed 	bc1t	413070 <third_traversal+0x4bc>
  4130bc:	00000000 	nop
  4130c0:	248e0001 	addiu	t6,a0,1
  4130c4:	448e2000 	mtc1	t6,$f4
  4130c8:	00000000 	nop
  4130cc:	468022a1 	cvt.d.w	$f10,$f4
  4130d0:	00000000 	nop
  4130d4:	462a9203 	div.d	$f8,$f18,$f10
  4130d8:	462043a0 	cvt.s.d	$f14,$f8
  4130dc:	460070a1 	cvt.d.s	$f2,$f14
  4130e0:	46228180 	add.d	$f6,$f16,$f2
  4130e4:	1880007a 	blez	a0,4132d0 <third_traversal+0x71c>
  4130e8:	46203020 	cvt.s.d	$f0,$f6
  4130ec:	30860003 	andi	a2,a0,0x3
  4130f0:	10c0001a 	beqz	a2,41315c <third_traversal+0x5a8>
  4130f4:	00c01025 	move	v0,a2
  4130f8:	00038880 	sll	s1,v1,0x2
  4130fc:	c654003c 	lwc1	$f20,60(s2)
  413100:	8e580014 	lw	t8,20(s2)
  413104:	4600a521 	cvt.d.s	$f20,$f20
  413108:	00000000 	nop
  41310c:	4636a503 	div.d	$f20,$f20,$f22
  413110:	8e4f0018 	lw	t7,24(s2)
  413114:	c6520058 	lwc1	$f18,88(s2)
  413118:	0018c880 	sll	t9,t8,0x2
  41311c:	01f94021 	addu	t0,t7,t9
  413120:	460094a1 	cvt.d.s	$f18,$f18
  413124:	00114823 	negu	t1,s1
  413128:	01095021 	addu	t2,t0,t1
  41312c:	8d50fffc 	lw	s0,-4(t2)
  413130:	46000421 	cvt.d.s	$f16,$f0
  413134:	46228400 	add.d	$f16,$f16,$f2
  413138:	e6000050 	swc1	$f0,80(s0)
  41313c:	46208020 	cvt.s.d	$f0,$f16
  413140:	24630001 	addiu	v1,v1,1
  413144:	26310004 	addiu	s1,s1,4
  413148:	4632a482 	mul.d	$f18,$f20,$f18
  41314c:	462094a0 	cvt.s.d	$f18,$f18
  413150:	1443ffea 	bne	v0,v1,4130fc <third_traversal+0x548>
  413154:	e612004c 	swc1	$f18,76(s0)
  413158:	10640055 	beq	v1,a0,4132b0 <third_traversal+0x6fc>
  41315c:	00038880 	sll	s1,v1,0x2
  413160:	00041080 	sll	v0,a0,0x2
  413164:	c64a003c 	lwc1	$f10,60(s2)
  413168:	c6440058 	lwc1	$f4,88(s2)
  41316c:	460051a1 	cvt.d.s	$f6,$f10
  413170:	00000000 	nop
  413174:	46363203 	div.d	$f8,$f6,$f22
  413178:	8e4c0014 	lw	t4,20(s2)
  41317c:	460022a1 	cvt.d.s	$f10,$f4
  413180:	8e4b0018 	lw	t3,24(s2)
  413184:	000c6880 	sll	t5,t4,0x2
  413188:	0011c023 	negu	t8,s1
  41318c:	016d7021 	addu	t6,t3,t5
  413190:	01d87821 	addu	t7,t6,t8
  413194:	8df0fffc 	lw	s0,-4(t7)
  413198:	00116023 	negu	t4,s1
  41319c:	e6000050 	swc1	$f0,80(s0)
  4131a0:	462a4182 	mul.d	$f6,$f8,$f10
  4131a4:	46000221 	cvt.d.s	$f8,$f0
  4131a8:	46224280 	add.d	$f10,$f8,$f2
  4131ac:	46203120 	cvt.s.d	$f4,$f6
  4131b0:	e604004c 	swc1	$f4,76(s0)
  4131b4:	c646003c 	lwc1	$f6,60(s2)
  4131b8:	46205020 	cvt.s.d	$f0,$f10
  4131bc:	c64a0058 	lwc1	$f10,88(s2)
  4131c0:	46003121 	cvt.d.s	$f4,$f6
  4131c4:	00000000 	nop
  4131c8:	46362203 	div.d	$f8,$f4,$f22
  4131cc:	8e480014 	lw	t0,20(s2)
  4131d0:	460051a1 	cvt.d.s	$f6,$f10
  4131d4:	8e590018 	lw	t9,24(s2)
  4131d8:	00084880 	sll	t1,t0,0x2
  4131dc:	03295021 	addu	t2,t9,t1
  4131e0:	014c5821 	addu	t3,t2,t4
  4131e4:	8d70fff8 	lw	s0,-8(t3)
  4131e8:	00114023 	negu	t0,s1
  4131ec:	e6000050 	swc1	$f0,80(s0)
  4131f0:	46264102 	mul.d	$f4,$f8,$f6
  4131f4:	46000221 	cvt.d.s	$f8,$f0
  4131f8:	46224180 	add.d	$f6,$f8,$f2
  4131fc:	462022a0 	cvt.s.d	$f10,$f4
  413200:	e60a004c 	swc1	$f10,76(s0)
  413204:	c644003c 	lwc1	$f4,60(s2)
  413208:	46203020 	cvt.s.d	$f0,$f6
  41320c:	c6460058 	lwc1	$f6,88(s2)
  413210:	460022a1 	cvt.d.s	$f10,$f4
  413214:	00000000 	nop
  413218:	46365203 	div.d	$f8,$f10,$f22
  41321c:	8e4e0014 	lw	t6,20(s2)
  413220:	46003121 	cvt.d.s	$f4,$f6
  413224:	8e4d0018 	lw	t5,24(s2)
  413228:	000ec080 	sll	t8,t6,0x2
  41322c:	01b87821 	addu	t7,t5,t8
  413230:	01e8c821 	addu	t9,t7,t0
  413234:	8f30fff4 	lw	s0,-12(t9)
  413238:	00117023 	negu	t6,s1
  41323c:	e6000050 	swc1	$f0,80(s0)
  413240:	26310010 	addiu	s1,s1,16
  413244:	46244282 	mul.d	$f10,$f8,$f4
  413248:	46000221 	cvt.d.s	$f8,$f0
  41324c:	46224100 	add.d	$f4,$f8,$f2
  413250:	462051a0 	cvt.s.d	$f6,$f10
  413254:	e606004c 	swc1	$f6,76(s0)
  413258:	c64a003c 	lwc1	$f10,60(s2)
  41325c:	46202020 	cvt.s.d	$f0,$f4
  413260:	c6440058 	lwc1	$f4,88(s2)
  413264:	460051a1 	cvt.d.s	$f6,$f10
  413268:	00000000 	nop
  41326c:	46363203 	div.d	$f8,$f6,$f22
  413270:	8e4a0014 	lw	t2,20(s2)
  413274:	8e490018 	lw	t1,24(s2)
  413278:	460022a1 	cvt.d.s	$f10,$f4
  41327c:	000a6080 	sll	t4,t2,0x2
  413280:	012c5821 	addu	t3,t1,t4
  413284:	016e6821 	addu	t5,t3,t6
  413288:	8db0fff0 	lw	s0,-16(t5)
  41328c:	00000000 	nop
  413290:	e6000050 	swc1	$f0,80(s0)
  413294:	462a4182 	mul.d	$f6,$f8,$f10
  413298:	46000221 	cvt.d.s	$f8,$f0
  41329c:	46224280 	add.d	$f10,$f8,$f2
  4132a0:	46203120 	cvt.s.d	$f4,$f6
  4132a4:	46205020 	cvt.s.d	$f0,$f10
  4132a8:	1622ffae 	bne	s1,v0,413164 <third_traversal+0x5b0>
  4132ac:	e604004c 	swc1	$f4,76(s0)
  4132b0:	c644003c 	lwc1	$f4,60(s2)
  4132b4:	c646003c 	lwc1	$f6,60(s2)
  4132b8:	46002207 	neg.s	$f8,$f4
  4132bc:	460042a1 	cvt.d.s	$f10,$f8
  4132c0:	8e460014 	lw	a2,20(s2)
  4132c4:	46365403 	div.d	$f16,$f10,$f22
  4132c8:	00001825 	move	v1,zero
  4132cc:	460034a1 	cvt.d.s	$f18,$f6
  4132d0:	00c5c023 	subu	t8,a2,a1
  4132d4:	03043823 	subu	a3,t8,a0
  4132d8:	24ef0001 	addiu	t7,a3,1
  4132dc:	448f3000 	mtc1	t7,$f6
  4132e0:	00000000 	nop
  4132e4:	46803121 	cvt.d.w	$f4,$f6
  4132e8:	00000000 	nop
  4132ec:	46249203 	div.d	$f8,$f18,$f4
  4132f0:	462043a0 	cvt.s.d	$f14,$f8
  4132f4:	460070a1 	cvt.d.s	$f2,$f14
  4132f8:	46228280 	add.d	$f10,$f16,$f2
  4132fc:	18e00071 	blez	a3,4134c4 <third_traversal+0x910>
  413300:	46205320 	cvt.s.d	$f12,$f10
  413304:	30e40003 	andi	a0,a3,0x3
  413308:	1080001a 	beqz	a0,413374 <third_traversal+0x7c0>
  41330c:	00801025 	move	v0,a0
  413310:	00038880 	sll	s1,v1,0x2
  413314:	c654003c 	lwc1	$f20,60(s2)
  413318:	8e480018 	lw	t0,24(s2)
  41331c:	4600a521 	cvt.d.s	$f20,$f20
  413320:	00000000 	nop
  413324:	4636a503 	div.d	$f20,$f20,$f22
  413328:	0005c880 	sll	t9,a1,0x2
  41332c:	01195021 	addu	t2,t0,t9
  413330:	01514821 	addu	t1,t2,s1
  413334:	8d300000 	lw	s0,0(t1)
  413338:	460064a1 	cvt.d.s	$f18,$f12
  41333c:	46229400 	add.d	$f16,$f18,$f2
  413340:	24630001 	addiu	v1,v1,1
  413344:	46208320 	cvt.s.d	$f12,$f16
  413348:	26310004 	addiu	s1,s1,4
  41334c:	4620a520 	cvt.s.d	$f20,$f20
  413350:	e6140050 	swc1	$f20,80(s0)
  413354:	c6540058 	lwc1	$f20,88(s2)
  413358:	00000000 	nop
  41335c:	4600a521 	cvt.d.s	$f20,$f20
  413360:	46349502 	mul.d	$f20,$f18,$f20
  413364:	4620a520 	cvt.s.d	$f20,$f20
  413368:	1443ffea 	bne	v0,v1,413314 <third_traversal+0x760>
  41336c:	e614004c 	swc1	$f20,76(s0)
  413370:	10670054 	beq	v1,a3,4134c4 <third_traversal+0x910>
  413374:	00038880 	sll	s1,v1,0x2
  413378:	00071080 	sll	v0,a3,0x2
  41337c:	c644003c 	lwc1	$f4,60(s2)
  413380:	8e4c0018 	lw	t4,24(s2)
  413384:	46002221 	cvt.d.s	$f8,$f4
  413388:	00000000 	nop
  41338c:	46364283 	div.d	$f10,$f8,$f22
  413390:	00055880 	sll	t3,a1,0x2
  413394:	018b7021 	addu	t6,t4,t3
  413398:	01d16821 	addu	t5,t6,s1
  41339c:	8db00000 	lw	s0,0(t5)
  4133a0:	46006021 	cvt.d.s	$f0,$f12
  4133a4:	00057880 	sll	t7,a1,0x2
  4133a8:	00054880 	sll	t1,a1,0x2
  4133ac:	00056880 	sll	t5,a1,0x2
  4133b0:	462051a0 	cvt.s.d	$f6,$f10
  4133b4:	e6060050 	swc1	$f6,80(s0)
  4133b8:	c6440058 	lwc1	$f4,88(s2)
  4133bc:	00000000 	nop
  4133c0:	46002221 	cvt.d.s	$f8,$f4
  4133c4:	46280282 	mul.d	$f10,$f0,$f8
  4133c8:	46220100 	add.d	$f4,$f0,$f2
  4133cc:	462051a0 	cvt.s.d	$f6,$f10
  4133d0:	e606004c 	swc1	$f6,76(s0)
  4133d4:	c648003c 	lwc1	$f8,60(s2)
  4133d8:	8e580018 	lw	t8,24(s2)
  4133dc:	460042a1 	cvt.d.s	$f10,$f8
  4133e0:	00000000 	nop
  4133e4:	46365183 	div.d	$f6,$f10,$f22
  4133e8:	030f4021 	addu	t0,t8,t7
  4133ec:	46202320 	cvt.s.d	$f12,$f4
  4133f0:	0111c821 	addu	t9,t0,s1
  4133f4:	8f300004 	lw	s0,4(t9)
  4133f8:	46006021 	cvt.d.s	$f0,$f12
  4133fc:	46203120 	cvt.s.d	$f4,$f6
  413400:	e6040050 	swc1	$f4,80(s0)
  413404:	c6480058 	lwc1	$f8,88(s2)
  413408:	00000000 	nop
  41340c:	460042a1 	cvt.d.s	$f10,$f8
  413410:	462a0182 	mul.d	$f6,$f0,$f10
  413414:	46220200 	add.d	$f8,$f0,$f2
  413418:	46203120 	cvt.s.d	$f4,$f6
  41341c:	e604004c 	swc1	$f4,76(s0)
  413420:	c64a003c 	lwc1	$f10,60(s2)
  413424:	8e4a0018 	lw	t2,24(s2)
  413428:	460051a1 	cvt.d.s	$f6,$f10
  41342c:	00000000 	nop
  413430:	46363103 	div.d	$f4,$f6,$f22
  413434:	01496021 	addu	t4,t2,t1
  413438:	46204320 	cvt.s.d	$f12,$f8
  41343c:	01915821 	addu	t3,t4,s1
  413440:	8d700008 	lw	s0,8(t3)
  413444:	46006021 	cvt.d.s	$f0,$f12
  413448:	46202220 	cvt.s.d	$f8,$f4
  41344c:	e6080050 	swc1	$f8,80(s0)
  413450:	c64a0058 	lwc1	$f10,88(s2)
  413454:	00000000 	nop
  413458:	460051a1 	cvt.d.s	$f6,$f10
  41345c:	46260102 	mul.d	$f4,$f0,$f6
  413460:	46220280 	add.d	$f10,$f0,$f2
  413464:	46202220 	cvt.s.d	$f8,$f4
  413468:	e608004c 	swc1	$f8,76(s0)
  41346c:	c646003c 	lwc1	$f6,60(s2)
  413470:	8e4e0018 	lw	t6,24(s2)
  413474:	46003121 	cvt.d.s	$f4,$f6
  413478:	00000000 	nop
  41347c:	46362203 	div.d	$f8,$f4,$f22
  413480:	01cdc021 	addu	t8,t6,t5
  413484:	46205320 	cvt.s.d	$f12,$f10
  413488:	03117821 	addu	t7,t8,s1
  41348c:	8df0000c 	lw	s0,12(t7)
  413490:	46006021 	cvt.d.s	$f0,$f12
  413494:	26310010 	addiu	s1,s1,16
  413498:	462042a0 	cvt.s.d	$f10,$f8
  41349c:	e60a0050 	swc1	$f10,80(s0)
  4134a0:	c6460058 	lwc1	$f6,88(s2)
  4134a4:	00000000 	nop
  4134a8:	46003121 	cvt.d.s	$f4,$f6
  4134ac:	46240202 	mul.d	$f8,$f0,$f4
  4134b0:	46220180 	add.d	$f6,$f0,$f2
  4134b4:	462042a0 	cvt.s.d	$f10,$f8
  4134b8:	46203320 	cvt.s.d	$f12,$f6
  4134bc:	1622ffaf 	bne	s1,v0,41337c <third_traversal+0x7c8>
  4134c0:	e60a004c 	swc1	$f10,76(s0)
  4134c4:	8fbf0034 	lw	ra,52(sp)
  4134c8:	c7b50010 	lwc1	$f21,16(sp)
  4134cc:	c7b40014 	lwc1	$f20,20(sp)
  4134d0:	c7b70018 	lwc1	$f23,24(sp)
  4134d4:	c7b6001c 	lwc1	$f22,28(sp)
  4134d8:	8fb00024 	lw	s0,36(sp)
  4134dc:	8fb10028 	lw	s1,40(sp)
  4134e0:	8fb2002c 	lw	s2,44(sp)
  4134e4:	03e00008 	jr	ra
  4134e8:	27bd0040 	addiu	sp,sp,64
