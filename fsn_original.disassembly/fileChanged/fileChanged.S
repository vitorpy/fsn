# Function: fileChanged
# Address: 0x00417c20 - 0x00417e1c
# Size: 0x1fc (508 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00417c20 <fileChanged>:
  417c20:	3c1c0fc0 	lui	gp,0xfc0
  417c24:	279c5f10 	addiu	gp,gp,24336
  417c28:	0399e021 	addu	gp,gp,t9
  417c2c:	27bdff40 	addiu	sp,sp,-192
  417c30:	8f9985a4 	lw	t9,-31324(gp)
  417c34:	afbf0024 	sw	ra,36(sp)
  417c38:	afb1001c 	sw	s1,28(sp)
  417c3c:	00808825 	move	s1,a0
  417c40:	afbc0020 	sw	gp,32(sp)
  417c44:	afb00018 	sw	s0,24(sp)
  417c48:	afa500c4 	sw	a1,196(sp)
  417c4c:	0320f809 	jalr	t9
  417c50:	a3a0002f 	sb	zero,47(sp)
  417c54:	8fbc0020 	lw	gp,32(sp)
  417c58:	10400069 	beqz	v0,417e00 <fileChanged+0x1e0>
  417c5c:	00408025 	move	s0,v0
  417c60:	8f99857c 	lw	t9,-31364(gp)
  417c64:	00002025 	move	a0,zero
  417c68:	0320f809 	jalr	t9
  417c6c:	02202825 	move	a1,s1
  417c70:	8fbc0020 	lw	gp,32(sp)
  417c74:	8fa500c4 	lw	a1,196(sp)
  417c78:	8f99831c 	lw	t9,-31972(gp)
  417c7c:	afa200b8 	sw	v0,184(sp)
  417c80:	0320f809 	jalr	t9
  417c84:	00402025 	move	a0,v0
  417c88:	8fbc0020 	lw	gp,32(sp)
  417c8c:	8fa400b8 	lw	a0,184(sp)
  417c90:	8f998120 	lw	t9,-32480(gp)
  417c94:	27a50030 	addiu	a1,sp,48
  417c98:	0320f809 	jalr	t9
  417c9c:	00000000 	nop
  417ca0:	8fbc0020 	lw	gp,32(sp)
  417ca4:	04410004 	bgez	v0,417cb8 <fileChanged+0x98>
  417ca8:	8fae0044 	lw	t6,68(sp)
  417cac:	10000056 	b	417e08 <fileChanged+0x1e8>
  417cb0:	00001025 	move	v0,zero
  417cb4:	8fae0044 	lw	t6,68(sp)
  417cb8:	8e0f0008 	lw	t7,8(s0)
  417cbc:	8fb80060 	lw	t8,96(sp)
  417cc0:	15cf0009 	bne	t6,t7,417ce8 <fileChanged+0xc8>
  417cc4:	02202025 	move	a0,s1
  417cc8:	8e19000c 	lw	t9,12(s0)
  417ccc:	8fa80070 	lw	t0,112(sp)
  417cd0:	17190005 	bne	t8,t9,417ce8 <fileChanged+0xc8>
  417cd4:	00000000 	nop
  417cd8:	8e090010 	lw	t1,16(s0)
  417cdc:	00000000 	nop
  417ce0:	11090043 	beq	t0,t1,417df0 <fileChanged+0x1d0>
  417ce4:	00000000 	nop
  417ce8:	8e2a001c 	lw	t2,28(s1)
  417cec:	8fab0060 	lw	t3,96(sp)
  417cf0:	8e0d000c 	lw	t5,12(s0)
  417cf4:	8f998018 	lw	t9,-32744(gp)
  417cf8:	014b6021 	addu	t4,t2,t3
  417cfc:	018d7023 	subu	t6,t4,t5
  417d00:	273918b0 	addiu	t9,t9,6320
  417d04:	0320f809 	jalr	t9
  417d08:	ae2e001c 	sw	t6,28(s1)
  417d0c:	8fbc0020 	lw	gp,32(sp)
  417d10:	e6200024 	swc1	$f0,36(s1)
  417d14:	8faf0044 	lw	t7,68(sp)
  417d18:	00000000 	nop
  417d1c:	ae0f0008 	sw	t7,8(s0)
  417d20:	8fb80060 	lw	t8,96(sp)
  417d24:	00000000 	nop
  417d28:	ae18000c 	sw	t8,12(s0)
  417d2c:	8fb90070 	lw	t9,112(sp)
  417d30:	00000000 	nop
  417d34:	ae190010 	sw	t9,16(s0)
  417d38:	8f998818 	lw	t9,-30696(gp)
  417d3c:	8fa400b8 	lw	a0,184(sp)
  417d40:	0320f809 	jalr	t9
  417d44:	00000000 	nop
  417d48:	8fbc0020 	lw	gp,32(sp)
  417d4c:	ae020020 	sw	v0,32(s0)
  417d50:	8f848068 	lw	a0,-32664(gp)
  417d54:	8e03000c 	lw	v1,12(s0)
  417d58:	24840184 	addiu	a0,a0,388
  417d5c:	8c880000 	lw	t0,0(a0)
  417d60:	24090001 	li	t1,1
  417d64:	0103082a 	slt	at,t0,v1
  417d68:	10200003 	beqz	at,417d78 <fileChanged+0x158>
  417d6c:	240b0001 	li	t3,1
  417d70:	ac830000 	sw	v1,0(a0)
  417d74:	a3a9002f 	sb	t1,47(sp)
  417d78:	8f838068 	lw	v1,-32664(gp)
  417d7c:	8e22001c 	lw	v0,28(s1)
  417d80:	2463018c 	addiu	v1,v1,396
  417d84:	8c6a0000 	lw	t2,0(v1)
  417d88:	00000000 	nop
  417d8c:	0142082a 	slt	at,t2,v0
  417d90:	10200003 	beqz	at,417da0 <fileChanged+0x180>
  417d94:	00000000 	nop
  417d98:	ac620000 	sw	v0,0(v1)
  417d9c:	a3ab002f 	sb	t3,47(sp)
  417da0:	8f99858c 	lw	t9,-31348(gp)
  417da4:	02002025 	move	a0,s0
  417da8:	0320f809 	jalr	t9
  417dac:	00000000 	nop
  417db0:	8fbc0020 	lw	gp,32(sp)
  417db4:	02202025 	move	a0,s1
  417db8:	8f998018 	lw	t9,-32744(gp)
  417dbc:	00000000 	nop
  417dc0:	27392234 	addiu	t9,t9,8756
  417dc4:	0320f809 	jalr	t9
  417dc8:	00000000 	nop
  417dcc:	c600001c 	lwc1	$f0,28(s0)
  417dd0:	c6240054 	lwc1	$f4,84(s1)
  417dd4:	46000221 	cvt.d.s	$f8,$f0
  417dd8:	460021a1 	cvt.d.s	$f6,$f4
  417ddc:	4628303c 	c.lt.d	$f6,$f8
  417de0:	8fbc0020 	lw	gp,32(sp)
  417de4:	45000002 	bc1f	417df0 <fileChanged+0x1d0>
  417de8:	00000000 	nop
  417dec:	e6200054 	swc1	$f0,84(s1)
  417df0:	920d0029 	lbu	t5,41(s0)
  417df4:	00000000 	nop
  417df8:	35ae0080 	ori	t6,t5,0x80
  417dfc:	a20e0029 	sb	t6,41(s0)
  417e00:	93a2002f 	lbu	v0,47(sp)
  417e04:	00000000 	nop
  417e08:	8fbf0024 	lw	ra,36(sp)
  417e0c:	8fb00018 	lw	s0,24(sp)
  417e10:	8fb1001c 	lw	s1,28(sp)
  417e14:	03e00008 	jr	ra
  417e18:	27bd00c0 	addiu	sp,sp,192
