# Function: FUN_00439c48
# Address: 0x00439c48 - 0x00439ee0
# Size: 0x298 (664 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439c48 <FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi+0xc>:
  439c48:	27bdf318 	addiu	sp,sp,-3304
  439c4c:	8f998024 	lw	t9,-32732(gp)
  439c50:	afbf0044 	sw	ra,68(sp)
  439c54:	afbc0040 	sw	gp,64(sp)
  439c58:	afb6003c 	sw	s6,60(sp)
  439c5c:	afb50038 	sw	s5,56(sp)
  439c60:	afb40034 	sw	s4,52(sp)
  439c64:	afb30030 	sw	s3,48(sp)
  439c68:	afb2002c 	sw	s2,44(sp)
  439c6c:	afb10028 	sw	s1,40(sp)
  439c70:	afb00024 	sw	s0,36(sp)
  439c74:	afa40ce8 	sw	a0,3304(sp)
  439c78:	afa50cec 	sw	a1,3308(sp)
  439c7c:	8cc40000 	lw	a0,0(a2)
  439c80:	2739aef8 	addiu	t9,t9,-20744
  439c84:	00e02825 	move	a1,a3
  439c88:	0320f809 	jalr	t9
  439c8c:	afa40ce4 	sw	a0,3300(sp)
  439c90:	8fbc0040 	lw	gp,64(sp)
  439c94:	24040010 	li	a0,16
  439c98:	8f9983d4 	lw	t9,-31788(gp)
  439c9c:	27a50c20 	addiu	a1,sp,3104
  439ca0:	0320f809 	jalr	t9
  439ca4:	00000000 	nop
  439ca8:	8fbc0040 	lw	gp,64(sp)
  439cac:	28410002 	slti	at,v0,2
  439cb0:	00409025 	move	s2,v0
  439cb4:	a3a00c64 	sb	zero,3172(sp)
  439cb8:	14200028 	bnez	at,439d5c <FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi+0x120>
  439cbc:	27b00c64 	addiu	s0,sp,3172
  439cc0:	8f96806c 	lw	s6,-32660(gp)
  439cc4:	8f95806c 	lw	s5,-32660(gp)
  439cc8:	00027080 	sll	t6,v0,0x2
  439ccc:	27af0c20 	addiu	t7,sp,3104
  439cd0:	01cf9821 	addu	s3,t6,t7
  439cd4:	27b10c24 	addiu	s1,sp,3108
  439cd8:	27b40c24 	addiu	s4,sp,3108
  439cdc:	26d69e5c 	addiu	s6,s6,-24996
  439ce0:	26b59e58 	addiu	s5,s5,-25000
  439ce4:	1634000d 	bne	s1,s4,439d1c <FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi+0xe0>
  439ce8:	02002025 	move	a0,s0
  439cec:	8f9983e4 	lw	t9,-31772(gp)
  439cf0:	02a02825 	move	a1,s5
  439cf4:	0320f809 	jalr	t9
  439cf8:	2646ffff 	addiu	a2,s2,-1
  439cfc:	8fbc0040 	lw	gp,64(sp)
  439d00:	02002025 	move	a0,s0
  439d04:	8f9983e0 	lw	t9,-31776(gp)
  439d08:	00000000 	nop
  439d0c:	0320f809 	jalr	t9
  439d10:	00000000 	nop
  439d14:	8fbc0040 	lw	gp,64(sp)
  439d18:	02028021 	addu	s0,s0,v0
  439d1c:	8f9983e4 	lw	t9,-31772(gp)
  439d20:	8e260000 	lw	a2,0(s1)
  439d24:	02002025 	move	a0,s0
  439d28:	0320f809 	jalr	t9
  439d2c:	02c02825 	move	a1,s6
  439d30:	8fbc0040 	lw	gp,64(sp)
  439d34:	02002025 	move	a0,s0
  439d38:	8f9983e0 	lw	t9,-31776(gp)
  439d3c:	00000000 	nop
  439d40:	0320f809 	jalr	t9
  439d44:	00000000 	nop
  439d48:	26310004 	addiu	s1,s1,4
  439d4c:	8fbc0040 	lw	gp,64(sp)
  439d50:	0233082b 	sltu	at,s1,s3
  439d54:	1420ffe3 	bnez	at,439ce4 <FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi+0xa8>
  439d58:	02028021 	addu	s0,s0,v0
  439d5c:	93b80c64 	lbu	t8,3172(sp)
  439d60:	00000000 	nop
  439d64:	13000032 	beqz	t8,439e30 <FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi+0x1f4>
  439d68:	00000000 	nop
  439d6c:	8f998314 	lw	t9,-31980(gp)
  439d70:	00000000 	nop
  439d74:	0320f809 	jalr	t9
  439d78:	00000000 	nop
  439d7c:	8fbc0040 	lw	gp,64(sp)
  439d80:	8fb90c20 	lw	t9,3104(sp)
  439d84:	8fa80cec 	lw	t0,3308(sp)
  439d88:	afb90014 	sw	t9,20(sp)
  439d8c:	8f9983e4 	lw	t9,-31772(gp)
  439d90:	8f85806c 	lw	a1,-32660(gp)
  439d94:	27b00060 	addiu	s0,sp,96
  439d98:	8fa60cf8 	lw	a2,3320(sp)
  439d9c:	8fa70ce4 	lw	a3,3300(sp)
  439da0:	02002025 	move	a0,s0
  439da4:	afa20010 	sw	v0,16(sp)
  439da8:	afa80018 	sw	t0,24(sp)
  439dac:	0320f809 	jalr	t9
  439db0:	24a59e60 	addiu	a1,a1,-24992
  439db4:	8fbc0040 	lw	gp,64(sp)
  439db8:	02002025 	move	a0,s0
  439dbc:	8f9983e0 	lw	t9,-31776(gp)
  439dc0:	00000000 	nop
  439dc4:	0320f809 	jalr	t9
  439dc8:	00000000 	nop
  439dcc:	8fbc0040 	lw	gp,64(sp)
  439dd0:	02022021 	addu	a0,s0,v0
  439dd4:	8f85806c 	lw	a1,-32660(gp)
  439dd8:	8f9983e4 	lw	t9,-31772(gp)
  439ddc:	24840001 	addiu	a0,a0,1
  439de0:	00808825 	move	s1,a0
  439de4:	27a60c64 	addiu	a2,sp,3172
  439de8:	0320f809 	jalr	t9
  439dec:	24a59e70 	addiu	a1,a1,-24976
  439df0:	8fbc0040 	lw	gp,64(sp)
  439df4:	02202025 	move	a0,s1
  439df8:	8f9983e0 	lw	t9,-31776(gp)
  439dfc:	00000000 	nop
  439e00:	0320f809 	jalr	t9
  439e04:	00000000 	nop
  439e08:	8fbc0040 	lw	gp,64(sp)
  439e0c:	00408825 	move	s1,v0
  439e10:	8f9983e0 	lw	t9,-31776(gp)
  439e14:	02002025 	move	a0,s0
  439e18:	0320f809 	jalr	t9
  439e1c:	00000000 	nop
  439e20:	8fbc0040 	lw	gp,64(sp)
  439e24:	00513821 	addu	a3,v0,s1
  439e28:	1000001b 	b	439e98 <FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi+0x25c>
  439e2c:	24e70002 	addiu	a3,a3,2
  439e30:	8f998314 	lw	t9,-31980(gp)
  439e34:	00000000 	nop
  439e38:	0320f809 	jalr	t9
  439e3c:	00000000 	nop
  439e40:	8fbc0040 	lw	gp,64(sp)
  439e44:	8fa90c20 	lw	t1,3104(sp)
  439e48:	8faa0cec 	lw	t2,3308(sp)
  439e4c:	8f85806c 	lw	a1,-32660(gp)
  439e50:	8f9983e4 	lw	t9,-31772(gp)
  439e54:	27b00060 	addiu	s0,sp,96
  439e58:	8fa60cf8 	lw	a2,3320(sp)
  439e5c:	8fa70ce4 	lw	a3,3300(sp)
  439e60:	02002025 	move	a0,s0
  439e64:	afa20010 	sw	v0,16(sp)
  439e68:	afa90014 	sw	t1,20(sp)
  439e6c:	afaa0018 	sw	t2,24(sp)
  439e70:	0320f809 	jalr	t9
  439e74:	24a59e74 	addiu	a1,a1,-24972
  439e78:	8fbc0040 	lw	gp,64(sp)
  439e7c:	02002025 	move	a0,s0
  439e80:	8f9983e0 	lw	t9,-31776(gp)
  439e84:	00000000 	nop
  439e88:	0320f809 	jalr	t9
  439e8c:	00000000 	nop
  439e90:	8fbc0040 	lw	gp,64(sp)
  439e94:	24470001 	addiu	a3,v0,1
  439e98:	8fa20ce8 	lw	v0,3304(sp)
  439e9c:	8f998900 	lw	t9,-30464(gp)
  439ea0:	8c440004 	lw	a0,4(v0)
  439ea4:	8c450000 	lw	a1,0(v0)
  439ea8:	0320f809 	jalr	t9
  439eac:	02003025 	move	a2,s0
  439eb0:	8fbf0044 	lw	ra,68(sp)
  439eb4:	8fbc0040 	lw	gp,64(sp)
  439eb8:	8fb00024 	lw	s0,36(sp)
  439ebc:	8fb10028 	lw	s1,40(sp)
  439ec0:	8fb2002c 	lw	s2,44(sp)
  439ec4:	8fb30030 	lw	s3,48(sp)
  439ec8:	8fb40034 	lw	s4,52(sp)
  439ecc:	8fb50038 	lw	s5,56(sp)
  439ed0:	8fb6003c 	lw	s6,60(sp)
  439ed4:	27bd0ce8 	addiu	sp,sp,3304
  439ed8:	03e00008 	jr	ra
  439edc:	00001025 	move	v0,zero
