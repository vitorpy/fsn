# Function: FUN_00428cc0
# Address: 0x00428cc0 - 0x00429034
# Size: 0x374 (884 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00428cc0 <makeColorBoxes+0x160>:
  428cc0:	3c1c0fbf 	lui	gp,0xfbf
  428cc4:	279c4e70 	addiu	gp,gp,20080
  428cc8:	0399e021 	addu	gp,gp,t9
  428ccc:	27bdff50 	addiu	sp,sp,-176
  428cd0:	8f998100 	lw	t9,-32512(gp)
  428cd4:	afbf002c 	sw	ra,44(sp)
  428cd8:	afb00024 	sw	s0,36(sp)
  428cdc:	00a08025 	move	s0,a1
  428ce0:	afbc0028 	sw	gp,40(sp)
  428ce4:	afa400b0 	sw	a0,176(sp)
  428ce8:	afa600b8 	sw	a2,184(sp)
  428cec:	0320f809 	jalr	t9
  428cf0:	afa700bc 	sw	a3,188(sp)
  428cf4:	afa20074 	sw	v0,116(sp)
  428cf8:	8e0e0008 	lw	t6,8(s0)
  428cfc:	8fbc0028 	lw	gp,40(sp)
  428d00:	11c00007 	beqz	t6,428d20 <makeColorBoxes+0x1c0>
  428d04:	8fa300b0 	lw	v1,176(sp)
  428d08:	8fa300b0 	lw	v1,176(sp)
  428d0c:	8e0f000c 	lw	t7,12(s0)
  428d10:	00000000 	nop
  428d14:	106f00c4 	beq	v1,t7,429028 <makeColorBoxes+0x4c8>
  428d18:	8fbf002c 	lw	ra,44(sp)
  428d1c:	8fa300b0 	lw	v1,176(sp)
  428d20:	240e0007 	li	t6,7
  428d24:	307800ff 	andi	t8,v1,0xff
  428d28:	00034a02 	srl	t1,v1,0x8
  428d2c:	00036402 	srl	t4,v1,0x10
  428d30:	0018ca00 	sll	t9,t8,0x8
  428d34:	00095200 	sll	t2,t1,0x8
  428d38:	000c6a00 	sll	t5,t4,0x8
  428d3c:	a7b900a8 	sh	t9,168(sp)
  428d40:	a7aa00aa 	sh	t2,170(sp)
  428d44:	a7ad00ac 	sh	t5,172(sp)
  428d48:	a3ae00ae 	sb	t6,174(sp)
  428d4c:	8e020008 	lw	v0,8(s0)
  428d50:	8fa500bc 	lw	a1,188(sp)
  428d54:	10400008 	beqz	v0,428d78 <makeColorBoxes+0x218>
  428d58:	24010001 	li	at,1
  428d5c:	10410053 	beq	v0,at,428eac <makeColorBoxes+0x34c>
  428d60:	00003025 	move	a2,zero
  428d64:	24010002 	li	at,2
  428d68:	1041006b 	beq	v0,at,428f18 <makeColorBoxes+0x3b8>
  428d6c:	00000000 	nop
  428d70:	10000098 	b	428fd4 <makeColorBoxes+0x474>
  428d74:	8fa400b8 	lw	a0,184(sp)
  428d78:	8f848a04 	lw	a0,-30204(gp)
  428d7c:	8f9980ec 	lw	t9,-32532(gp)
  428d80:	8c840000 	lw	a0,0(a0)
  428d84:	0320f809 	jalr	t9
  428d88:	27a600a4 	addiu	a2,sp,164
  428d8c:	8fbc0028 	lw	gp,40(sp)
  428d90:	10400027 	beqz	v0,428e30 <makeColorBoxes+0x2d0>
  428d94:	27a400a4 	addiu	a0,sp,164
  428d98:	8faf00a4 	lw	t7,164(sp)
  428d9c:	27b80044 	addiu	t8,sp,68
  428da0:	ae0f0000 	sw	t7,0(s0)
  428da4:	8fb90074 	lw	t9,116(sp)
  428da8:	afb80010 	sw	t8,16(sp)
  428dac:	27a50068 	addiu	a1,sp,104
  428db0:	27a6005c 	addiu	a2,sp,92
  428db4:	0320f809 	jalr	t9
  428db8:	27a70050 	addiu	a3,sp,80
  428dbc:	8fbc0028 	lw	gp,40(sp)
  428dc0:	8fa500bc 	lw	a1,188(sp)
  428dc4:	8f848a04 	lw	a0,-30204(gp)
  428dc8:	8f9980ec 	lw	t9,-32532(gp)
  428dcc:	8c840000 	lw	a0,0(a0)
  428dd0:	0320f809 	jalr	t9
  428dd4:	27a60068 	addiu	a2,sp,104
  428dd8:	8fbc0028 	lw	gp,40(sp)
  428ddc:	10400004 	beqz	v0,428df0 <makeColorBoxes+0x290>
  428de0:	240e0001 	li	t6,1
  428de4:	8fa80068 	lw	t0,104(sp)
  428de8:	1000000d 	b	428e20 <makeColorBoxes+0x2c0>
  428dec:	ae080004 	sw	t0,4(s0)
  428df0:	8f838a04 	lw	v1,-30204(gp)
  428df4:	24040050 	li	a0,80
  428df8:	8c630000 	lw	v1,0(v1)
  428dfc:	00000000 	nop
  428e00:	8c6a0084 	lw	t2,132(v1)
  428e04:	8c69008c 	lw	t1,140(v1)
  428e08:	01440019 	multu	t2,a0
  428e0c:	00005812 	mflo	t3
  428e10:	012b6021 	addu	t4,t1,t3
  428e14:	8d8d0038 	lw	t5,56(t4)
  428e18:	00000000 	nop
  428e1c:	ae0d0004 	sw	t5,4(s0)
  428e20:	ae0e0008 	sw	t6,8(s0)
  428e24:	8faf00b0 	lw	t7,176(sp)
  428e28:	10000069 	b	428fd0 <makeColorBoxes+0x470>
  428e2c:	ae0f000c 	sw	t7,12(s0)
  428e30:	8f848098 	lw	a0,-32616(gp)
  428e34:	8f85805c 	lw	a1,-32676(gp)
  428e38:	8f9983f8 	lw	t9,-31752(gp)
  428e3c:	24840020 	addiu	a0,a0,32
  428e40:	0320f809 	jalr	t9
  428e44:	24a5e8c0 	addiu	a1,a1,-5952
  428e48:	8fbc0028 	lw	gp,40(sp)
  428e4c:	24040050 	li	a0,80
  428e50:	8f838a04 	lw	v1,-30204(gp)
  428e54:	00000000 	nop
  428e58:	8c630000 	lw	v1,0(v1)
  428e5c:	00000000 	nop
  428e60:	8c790084 	lw	t9,132(v1)
  428e64:	8c78008c 	lw	t8,140(v1)
  428e68:	03240019 	multu	t9,a0
  428e6c:	8f838a04 	lw	v1,-30204(gp)
  428e70:	00004012 	mflo	t0
  428e74:	03085021 	addu	t2,t8,t0
  428e78:	8d490038 	lw	t1,56(t2)
  428e7c:	00000000 	nop
  428e80:	ae090000 	sw	t1,0(s0)
  428e84:	8c630000 	lw	v1,0(v1)
  428e88:	00000000 	nop
  428e8c:	8c6c0084 	lw	t4,132(v1)
  428e90:	8c6b008c 	lw	t3,140(v1)
  428e94:	01840019 	multu	t4,a0
  428e98:	00006812 	mflo	t5
  428e9c:	016d7021 	addu	t6,t3,t5
  428ea0:	8dcf0038 	lw	t7,56(t6)
  428ea4:	1000004a 	b	428fd0 <makeColorBoxes+0x470>
  428ea8:	ae0f0004 	sw	t7,4(s0)
  428eac:	24190001 	li	t9,1
  428eb0:	8f848a04 	lw	a0,-30204(gp)
  428eb4:	afb90010 	sw	t9,16(sp)
  428eb8:	8f998124 	lw	t9,-32476(gp)
  428ebc:	8fa500bc 	lw	a1,188(sp)
  428ec0:	27b8003c 	addiu	t8,sp,60
  428ec4:	24080001 	li	t0,1
  428ec8:	8c840000 	lw	a0,0(a0)
  428ecc:	afa80018 	sw	t0,24(sp)
  428ed0:	afb80014 	sw	t8,20(sp)
  428ed4:	0320f809 	jalr	t9
  428ed8:	27a70040 	addiu	a3,sp,64
  428edc:	8fbc0028 	lw	gp,40(sp)
  428ee0:	1440000a 	bnez	v0,428f0c <makeColorBoxes+0x3ac>
  428ee4:	24090002 	li	t1,2
  428ee8:	8f848098 	lw	a0,-32616(gp)
  428eec:	8f85805c 	lw	a1,-32676(gp)
  428ef0:	8f9983f8 	lw	t9,-31752(gp)
  428ef4:	24840020 	addiu	a0,a0,32
  428ef8:	0320f809 	jalr	t9
  428efc:	24a5e8e4 	addiu	a1,a1,-5916
  428f00:	8fbc0028 	lw	gp,40(sp)
  428f04:	10000033 	b	428fd4 <makeColorBoxes+0x474>
  428f08:	8fa400b8 	lw	a0,184(sp)
  428f0c:	8faa003c 	lw	t2,60(sp)
  428f10:	ae090008 	sw	t1,8(s0)
  428f14:	ae0a0000 	sw	t2,0(s0)
  428f18:	8f848a04 	lw	a0,-30204(gp)
  428f1c:	8e0c0000 	lw	t4,0(s0)
  428f20:	8f998128 	lw	t9,-32472(gp)
  428f24:	8fa500bc 	lw	a1,188(sp)
  428f28:	8c840000 	lw	a0,0(a0)
  428f2c:	27a600a4 	addiu	a2,sp,164
  428f30:	0320f809 	jalr	t9
  428f34:	afac00a4 	sw	t4,164(sp)
  428f38:	8fab00a4 	lw	t3,164(sp)
  428f3c:	8fbc0028 	lw	gp,40(sp)
  428f40:	ae0b0000 	sw	t3,0(s0)
  428f44:	8fad00b0 	lw	t5,176(sp)
  428f48:	27ae0044 	addiu	t6,sp,68
  428f4c:	ae0d000c 	sw	t5,12(s0)
  428f50:	8fb90074 	lw	t9,116(sp)
  428f54:	afae0010 	sw	t6,16(sp)
  428f58:	27a400a4 	addiu	a0,sp,164
  428f5c:	27a50068 	addiu	a1,sp,104
  428f60:	27a6005c 	addiu	a2,sp,92
  428f64:	0320f809 	jalr	t9
  428f68:	27a70050 	addiu	a3,sp,80
  428f6c:	8fbc0028 	lw	gp,40(sp)
  428f70:	8fa500bc 	lw	a1,188(sp)
  428f74:	8f848a04 	lw	a0,-30204(gp)
  428f78:	8f9980ec 	lw	t9,-32532(gp)
  428f7c:	8c840000 	lw	a0,0(a0)
  428f80:	0320f809 	jalr	t9
  428f84:	27a60068 	addiu	a2,sp,104
  428f88:	8fbc0028 	lw	gp,40(sp)
  428f8c:	10400004 	beqz	v0,428fa0 <makeColorBoxes+0x440>
  428f90:	00000000 	nop
  428f94:	8faf0068 	lw	t7,104(sp)
  428f98:	1000000d 	b	428fd0 <makeColorBoxes+0x470>
  428f9c:	ae0f0004 	sw	t7,4(s0)
  428fa0:	8f838a04 	lw	v1,-30204(gp)
  428fa4:	24040050 	li	a0,80
  428fa8:	8c630000 	lw	v1,0(v1)
  428fac:	00000000 	nop
  428fb0:	8c680084 	lw	t0,132(v1)
  428fb4:	8c78008c 	lw	t8,140(v1)
  428fb8:	01040019 	multu	t0,a0
  428fbc:	00005012 	mflo	t2
  428fc0:	030a4821 	addu	t1,t8,t2
  428fc4:	8d2c0038 	lw	t4,56(t1)
  428fc8:	00000000 	nop
  428fcc:	ae0c0004 	sw	t4,4(s0)
  428fd0:	8fa400b8 	lw	a0,184(sp)
  428fd4:	00000000 	nop
  428fd8:	10800013 	beqz	a0,429028 <makeColorBoxes+0x4c8>
  428fdc:	8fbf002c 	lw	ra,44(sp)
  428fe0:	8f8b80a4 	lw	t3,-32604(gp)
  428fe4:	8f8e80a4 	lw	t6,-32604(gp)
  428fe8:	256b00d6 	addiu	t3,t3,214
  428fec:	afab007c 	sw	t3,124(sp)
  428ff0:	8e0d0004 	lw	t5,4(s0)
  428ff4:	25ce0034 	addiu	t6,t6,52
  428ff8:	afae0084 	sw	t6,132(sp)
  428ffc:	afad0080 	sw	t5,128(sp)
  429000:	8e190000 	lw	t9,0(s0)
  429004:	27a5007c 	addiu	a1,sp,124
  429008:	afb90088 	sw	t9,136(sp)
  42900c:	8f998340 	lw	t9,-31936(gp)
  429010:	24060002 	li	a2,2
  429014:	0320f809 	jalr	t9
  429018:	00000000 	nop
  42901c:	8fbc0028 	lw	gp,40(sp)
  429020:	00000000 	nop
  429024:	8fbf002c 	lw	ra,44(sp)
  429028:	8fb00024 	lw	s0,36(sp)
  42902c:	03e00008 	jr	ra
  429030:	27bd00b0 	addiu	sp,sp,176
