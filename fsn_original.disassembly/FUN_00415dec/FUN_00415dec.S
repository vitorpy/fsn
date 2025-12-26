# Function: FUN_00415dec
# Address: 0x00415dec - 0x00416198
# Size: 0x3ac (940 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00415dec <rescanDatabase+0x6f0>:
  415dec:	3c1c0fc0 	lui	gp,0xfc0
  415df0:	279c7d44 	addiu	gp,gp,32068
  415df4:	0399e021 	addu	gp,gp,t9
  415df8:	27bdfb60 	addiu	sp,sp,-1184
  415dfc:	8f998578 	lw	t9,-31368(gp)
  415e00:	afbf0044 	sw	ra,68(sp)
  415e04:	afbe0040 	sw	s8,64(sp)
  415e08:	afb10020 	sw	s1,32(sp)
  415e0c:	00a08825 	move	s1,a1
  415e10:	0080f025 	move	s8,a0
  415e14:	afbc003c 	sw	gp,60(sp)
  415e18:	afb70038 	sw	s7,56(sp)
  415e1c:	afb60034 	sw	s6,52(sp)
  415e20:	afb50030 	sw	s5,48(sp)
  415e24:	afb4002c 	sw	s4,44(sp)
  415e28:	afb30028 	sw	s3,40(sp)
  415e2c:	afb20024 	sw	s2,36(sp)
  415e30:	0320f809 	jalr	t9
  415e34:	afb0001c 	sw	s0,28(sp)
  415e38:	8fbc003c 	lw	gp,60(sp)
  415e3c:	00000000 	nop
  415e40:	8f998018 	lw	t9,-32744(gp)
  415e44:	00000000 	nop
  415e48:	27391c04 	addiu	t9,t9,7172
  415e4c:	0320f809 	jalr	t9
  415e50:	00000000 	nop
  415e54:	8fbc003c 	lw	gp,60(sp)
  415e58:	27b7008c 	addiu	s7,sp,140
  415e5c:	8f8e8a54 	lw	t6,-30124(gp)
  415e60:	0040a025 	move	s4,v0
  415e64:	8dce0000 	lw	t6,0(t6)
  415e68:	02e02025 	move	a0,s7
  415e6c:	8dd90008 	lw	t9,8(t6)
  415e70:	00000000 	nop
  415e74:	0320f809 	jalr	t9
  415e78:	00000000 	nop
  415e7c:	904f000a 	lbu	t7,10(v0)
  415e80:	8fbc003c 	lw	gp,60(sp)
  415e84:	13cf0012 	beq	s8,t7,415ed0 <rescanDatabase+0x7d4>
  415e88:	00408025 	move	s0,v0
  415e8c:	8f848098 	lw	a0,-32616(gp)
  415e90:	8f85805c 	lw	a1,-32676(gp)
  415e94:	8f9983f8 	lw	t9,-31752(gp)
  415e98:	9047000a 	lbu	a3,10(v0)
  415e9c:	afb70010 	sw	s7,16(sp)
  415ea0:	03c03025 	move	a2,s8
  415ea4:	24840020 	addiu	a0,a0,32
  415ea8:	0320f809 	jalr	t9
  415eac:	24a5a984 	addiu	a1,a1,-22140
  415eb0:	8fbc003c 	lw	gp,60(sp)
  415eb4:	24040001 	li	a0,1
  415eb8:	8f9983a0 	lw	t9,-31840(gp)
  415ebc:	00000000 	nop
  415ec0:	0320f809 	jalr	t9
  415ec4:	00000000 	nop
  415ec8:	8fbc003c 	lw	gp,60(sp)
  415ecc:	00000000 	nop
  415ed0:	8f998018 	lw	t9,-32744(gp)
  415ed4:	27de0001 	addiu	s8,s8,1
  415ed8:	27391d68 	addiu	t9,t9,7528
  415edc:	0320f809 	jalr	t9
  415ee0:	02e02025 	move	a0,s7
  415ee4:	8fbc003c 	lw	gp,60(sp)
  415ee8:	ae820000 	sw	v0,0(s4)
  415eec:	96180004 	lhu	t8,4(s0)
  415ef0:	928c0074 	lbu	t4,116(s4)
  415ef4:	ae980004 	sw	t8,4(s4)
  415ef8:	8e080000 	lw	t0,0(s0)
  415efc:	358d0002 	ori	t5,t4,0x2
  415f00:	ae880008 	sw	t0,8(s4)
  415f04:	96090008 	lhu	t1,8(s0)
  415f08:	00000000 	nop
  415f0c:	ae89000c 	sw	t1,12(s4)
  415f10:	960a0006 	lhu	t2,6(s0)
  415f14:	a28d0074 	sb	t5,116(s4)
  415f18:	ae8a0014 	sw	t2,20(s4)
  415f1c:	9203000b 	lbu	v1,11(s0)
  415f20:	00000000 	nop
  415f24:	306e0001 	andi	t6,v1,0x1
  415f28:	11c00008 	beqz	t6,415f4c <rescanDatabase+0x850>
  415f2c:	30680002 	andi	t0,v1,0x2
  415f30:	92990075 	lbu	t9,117(s4)
  415f34:	00000000 	nop
  415f38:	37380004 	ori	t8,t9,0x4
  415f3c:	a2980075 	sb	t8,117(s4)
  415f40:	9203000b 	lbu	v1,11(s0)
  415f44:	00000000 	nop
  415f48:	30680002 	andi	t0,v1,0x2
  415f4c:	11000005 	beqz	t0,415f64 <rescanDatabase+0x868>
  415f50:	00000000 	nop
  415f54:	928a0075 	lbu	t2,117(s4)
  415f58:	00000000 	nop
  415f5c:	354b0010 	ori	t3,t2,0x10
  415f60:	a28b0075 	sb	t3,117(s4)
  415f64:	8e82000c 	lw	v0,12(s4)
  415f68:	00000000 	nop
  415f6c:	10400008 	beqz	v0,415f90 <rescanDatabase+0x894>
  415f70:	00000000 	nop
  415f74:	8f9983b8 	lw	t9,-31816(gp)
  415f78:	00022080 	sll	a0,v0,0x2
  415f7c:	0320f809 	jalr	t9
  415f80:	00000000 	nop
  415f84:	8fbc003c 	lw	gp,60(sp)
  415f88:	10000002 	b	415f94 <rescanDatabase+0x898>
  415f8c:	ae820010 	sw	v0,16(s4)
  415f90:	ae800010 	sw	zero,16(s4)
  415f94:	8e820014 	lw	v0,20(s4)
  415f98:	00000000 	nop
  415f9c:	10400008 	beqz	v0,415fc0 <rescanDatabase+0x8c4>
  415fa0:	00000000 	nop
  415fa4:	8f9983b8 	lw	t9,-31816(gp)
  415fa8:	00022080 	sll	a0,v0,0x2
  415fac:	0320f809 	jalr	t9
  415fb0:	00000000 	nop
  415fb4:	8fbc003c 	lw	gp,60(sp)
  415fb8:	10000002 	b	415fc4 <rescanDatabase+0x8c8>
  415fbc:	ae820018 	sw	v0,24(s4)
  415fc0:	ae800018 	sw	zero,24(s4)
  415fc4:	8e8c000c 	lw	t4,12(s4)
  415fc8:	ae910028 	sw	s1,40(s4)
  415fcc:	19800053 	blez	t4,41611c <rescanDatabase+0xa20>
  415fd0:	00009825 	move	s3,zero
  415fd4:	8f968068 	lw	s6,-32664(gp)
  415fd8:	00009025 	move	s2,zero
  415fdc:	27b50058 	addiu	s5,sp,88
  415fe0:	26d60184 	addiu	s6,s6,388
  415fe4:	8f998018 	lw	t9,-32744(gp)
  415fe8:	00000000 	nop
  415fec:	27391b84 	addiu	t9,t9,7044
  415ff0:	0320f809 	jalr	t9
  415ff4:	00000000 	nop
  415ff8:	8fbc003c 	lw	gp,60(sp)
  415ffc:	8e8d0010 	lw	t5,16(s4)
  416000:	8f998a54 	lw	t9,-30124(gp)
  416004:	01b27021 	addu	t6,t5,s2
  416008:	adc20000 	sw	v0,0(t6)
  41600c:	8f390000 	lw	t9,0(t9)
  416010:	00408025 	move	s0,v0
  416014:	8f39000c 	lw	t9,12(t9)
  416018:	02e02025 	move	a0,s7
  41601c:	0320f809 	jalr	t9
  416020:	02a02825 	move	a1,s5
  416024:	904f0010 	lbu	t7,16(v0)
  416028:	8fbc003c 	lw	gp,60(sp)
  41602c:	13cf0012 	beq	s8,t7,416078 <rescanDatabase+0x97c>
  416030:	00408825 	move	s1,v0
  416034:	8f848098 	lw	a0,-32616(gp)
  416038:	8f85805c 	lw	a1,-32676(gp)
  41603c:	8f9983f8 	lw	t9,-31752(gp)
  416040:	90470010 	lbu	a3,16(v0)
  416044:	afb70010 	sw	s7,16(sp)
  416048:	03c03025 	move	a2,s8
  41604c:	24840020 	addiu	a0,a0,32
  416050:	0320f809 	jalr	t9
  416054:	24a5a9ac 	addiu	a1,a1,-22100
  416058:	8fbc003c 	lw	gp,60(sp)
  41605c:	24040001 	li	a0,1
  416060:	8f9983a0 	lw	t9,-31840(gp)
  416064:	00000000 	nop
  416068:	0320f809 	jalr	t9
  41606c:	00000000 	nop
  416070:	8fbc003c 	lw	gp,60(sp)
  416074:	00000000 	nop
  416078:	8f998018 	lw	t9,-32744(gp)
  41607c:	02e02025 	move	a0,s7
  416080:	27391d68 	addiu	t9,t9,7528
  416084:	0320f809 	jalr	t9
  416088:	00000000 	nop
  41608c:	8fbc003c 	lw	gp,60(sp)
  416090:	ae020000 	sw	v0,0(s0)
  416094:	9638000c 	lhu	t8,12(s1)
  416098:	02a02025 	move	a0,s5
  41609c:	ae180004 	sw	t8,4(s0)
  4160a0:	8e280008 	lw	t0,8(s1)
  4160a4:	00000000 	nop
  4160a8:	ae080008 	sw	t0,8(s0)
  4160ac:	8e290000 	lw	t1,0(s1)
  4160b0:	00000000 	nop
  4160b4:	ae09000c 	sw	t1,12(s0)
  4160b8:	8e2a0004 	lw	t2,4(s1)
  4160bc:	00000000 	nop
  4160c0:	ae0a0010 	sw	t2,16(s0)
  4160c4:	8f99881c 	lw	t9,-30692(gp)
  4160c8:	00000000 	nop
  4160cc:	0320f809 	jalr	t9
  4160d0:	00000000 	nop
  4160d4:	920c0029 	lbu	t4,41(s0)
  4160d8:	8fbc003c 	lw	gp,60(sp)
  4160dc:	358d0080 	ori	t5,t4,0x80
  4160e0:	ae020020 	sw	v0,32(s0)
  4160e4:	a20d0029 	sb	t5,41(s0)
  4160e8:	8ece0000 	lw	t6,0(s6)
  4160ec:	8e03000c 	lw	v1,12(s0)
  4160f0:	00000000 	nop
  4160f4:	01c3082a 	slt	at,t6,v1
  4160f8:	10200002 	beqz	at,416104 <rescanDatabase+0xa08>
  4160fc:	00000000 	nop
  416100:	aec30000 	sw	v1,0(s6)
  416104:	8e99000c 	lw	t9,12(s4)
  416108:	26730001 	addiu	s3,s3,1
  41610c:	0279082a 	slt	at,s3,t9
  416110:	1420ffb4 	bnez	at,415fe4 <rescanDatabase+0x8e8>
  416114:	26520004 	addiu	s2,s2,4
  416118:	00009825 	move	s3,zero
  41611c:	8e8f0014 	lw	t7,20(s4)
  416120:	00009025 	move	s2,zero
  416124:	19e00010 	blez	t7,416168 <rescanDatabase+0xa6c>
  416128:	8fbf0044 	lw	ra,68(sp)
  41612c:	8f998018 	lw	t9,-32744(gp)
  416130:	03c02025 	move	a0,s8
  416134:	27395dec 	addiu	t9,t9,24044
  416138:	0320f809 	jalr	t9
  41613c:	02802825 	move	a1,s4
  416140:	8e980018 	lw	t8,24(s4)
  416144:	8fbc003c 	lw	gp,60(sp)
  416148:	03124021 	addu	t0,t8,s2
  41614c:	ad020000 	sw	v0,0(t0)
  416150:	8e890014 	lw	t1,20(s4)
  416154:	26730001 	addiu	s3,s3,1
  416158:	0269082a 	slt	at,s3,t1
  41615c:	1420fff3 	bnez	at,41612c <rescanDatabase+0xa30>
  416160:	26520004 	addiu	s2,s2,4
  416164:	8fbf0044 	lw	ra,68(sp)
  416168:	02801025 	move	v0,s4
  41616c:	8fb4002c 	lw	s4,44(sp)
  416170:	8fb0001c 	lw	s0,28(sp)
  416174:	8fb10020 	lw	s1,32(sp)
  416178:	8fb20024 	lw	s2,36(sp)
  41617c:	8fb30028 	lw	s3,40(sp)
  416180:	8fb50030 	lw	s5,48(sp)
  416184:	8fb60034 	lw	s6,52(sp)
  416188:	8fb70038 	lw	s7,56(sp)
  41618c:	8fbe0040 	lw	s8,64(sp)
  416190:	03e00008 	jr	ra
  416194:	27bd04a0 	addiu	sp,sp,1184
