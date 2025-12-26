# Function: viewFile
# Address: 0x00429fc8 - 0x0042a2d8
# Size: 0x310 (784 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429fc8 <viewFile>:
  429fc8:	3c1c0fbf 	lui	gp,0xfbf
  429fcc:	279c3b68 	addiu	gp,gp,15208
  429fd0:	0399e021 	addu	gp,gp,t9
  429fd4:	27bdff48 	addiu	sp,sp,-184
  429fd8:	afa500bc 	sw	a1,188(sp)
  429fdc:	00802825 	move	a1,a0
  429fe0:	afa400b8 	sw	a0,184(sp)
  429fe4:	8f84897c 	lw	a0,-30340(gp)
  429fe8:	8f99857c 	lw	t9,-31364(gp)
  429fec:	8c840000 	lw	a0,0(a0)
  429ff0:	afbf001c 	sw	ra,28(sp)
  429ff4:	afbc0018 	sw	gp,24(sp)
  429ff8:	0320f809 	jalr	t9
  429ffc:	2484084c 	addiu	a0,a0,2124
  42a000:	8fbc0018 	lw	gp,24(sp)
  42a004:	8fae00bc 	lw	t6,188(sp)
  42a008:	8f84897c 	lw	a0,-30340(gp)
  42a00c:	8f99831c 	lw	t9,-31972(gp)
  42a010:	8c840000 	lw	a0,0(a0)
  42a014:	8dc50000 	lw	a1,0(t6)
  42a018:	0320f809 	jalr	t9
  42a01c:	2484084c 	addiu	a0,a0,2124
  42a020:	8fbc0018 	lw	gp,24(sp)
  42a024:	27a5002c 	addiu	a1,sp,44
  42a028:	8f84897c 	lw	a0,-30340(gp)
  42a02c:	8f9981d0 	lw	t9,-32304(gp)
  42a030:	8c840000 	lw	a0,0(a0)
  42a034:	0320f809 	jalr	t9
  42a038:	2484084c 	addiu	a0,a0,2124
  42a03c:	8fbc0018 	lw	gp,24(sp)
  42a040:	0441000c 	bgez	v0,42a074 <viewFile+0xac>
  42a044:	8fa4005c 	lw	a0,92(sp)
  42a048:	8f85897c 	lw	a1,-30340(gp)
  42a04c:	8f84805c 	lw	a0,-32676(gp)
  42a050:	8f998574 	lw	t9,-31372(gp)
  42a054:	8ca50000 	lw	a1,0(a1)
  42a058:	2484e950 	addiu	a0,a0,-5808
  42a05c:	0320f809 	jalr	t9
  42a060:	24a5084c 	addiu	a1,a1,2124
  42a064:	8fbc0018 	lw	gp,24(sp)
  42a068:	10000098 	b	42a2cc <viewFile+0x304>
  42a06c:	8fbf001c 	lw	ra,28(sp)
  42a070:	8fa4005c 	lw	a0,92(sp)
  42a074:	8f9984c0 	lw	t9,-31552(gp)
  42a078:	24840001 	addiu	a0,a0,1
  42a07c:	0320f809 	jalr	t9
  42a080:	00000000 	nop
  42a084:	8fbc0018 	lw	gp,24(sp)
  42a088:	afa200b4 	sw	v0,180(sp)
  42a08c:	8f84897c 	lw	a0,-30340(gp)
  42a090:	8f9981cc 	lw	t9,-32308(gp)
  42a094:	8c840000 	lw	a0,0(a0)
  42a098:	00002825 	move	a1,zero
  42a09c:	0320f809 	jalr	t9
  42a0a0:	2484084c 	addiu	a0,a0,2124
  42a0a4:	8fbc0018 	lw	gp,24(sp)
  42a0a8:	0441000b 	bgez	v0,42a0d8 <viewFile+0x110>
  42a0ac:	00403825 	move	a3,v0
  42a0b0:	8f85897c 	lw	a1,-30340(gp)
  42a0b4:	8f84805c 	lw	a0,-32676(gp)
  42a0b8:	8f998574 	lw	t9,-31372(gp)
  42a0bc:	8ca50000 	lw	a1,0(a1)
  42a0c0:	2484e95c 	addiu	a0,a0,-5796
  42a0c4:	0320f809 	jalr	t9
  42a0c8:	24a5084c 	addiu	a1,a1,2124
  42a0cc:	8fbc0018 	lw	gp,24(sp)
  42a0d0:	1000007e 	b	42a2cc <viewFile+0x304>
  42a0d4:	8fbf001c 	lw	ra,28(sp)
  42a0d8:	8f9981ec 	lw	t9,-32276(gp)
  42a0dc:	8fa500b4 	lw	a1,180(sp)
  42a0e0:	8fa6005c 	lw	a2,92(sp)
  42a0e4:	00e02025 	move	a0,a3
  42a0e8:	0320f809 	jalr	t9
  42a0ec:	afa70028 	sw	a3,40(sp)
  42a0f0:	8faf005c 	lw	t7,92(sp)
  42a0f4:	8fbc0018 	lw	gp,24(sp)
  42a0f8:	8fa70028 	lw	a3,40(sp)
  42a0fc:	104f0013 	beq	v0,t7,42a14c <viewFile+0x184>
  42a100:	8fb800b4 	lw	t8,180(sp)
  42a104:	8f85897c 	lw	a1,-30340(gp)
  42a108:	8f84805c 	lw	a0,-32676(gp)
  42a10c:	8f998574 	lw	t9,-31372(gp)
  42a110:	8ca50000 	lw	a1,0(a1)
  42a114:	afa70028 	sw	a3,40(sp)
  42a118:	2484e968 	addiu	a0,a0,-5784
  42a11c:	0320f809 	jalr	t9
  42a120:	24a5084c 	addiu	a1,a1,2124
  42a124:	8fbc0018 	lw	gp,24(sp)
  42a128:	8fa40028 	lw	a0,40(sp)
  42a12c:	8f99825c 	lw	t9,-32164(gp)
  42a130:	00000000 	nop
  42a134:	0320f809 	jalr	t9
  42a138:	00000000 	nop
  42a13c:	8fbc0018 	lw	gp,24(sp)
  42a140:	10000062 	b	42a2cc <viewFile+0x304>
  42a144:	8fbf001c 	lw	ra,28(sp)
  42a148:	8fb800b4 	lw	t8,180(sp)
  42a14c:	8fb9005c 	lw	t9,92(sp)
  42a150:	00e02025 	move	a0,a3
  42a154:	03194021 	addu	t0,t8,t9
  42a158:	a1000000 	sb	zero,0(t0)
  42a15c:	8f99825c 	lw	t9,-32164(gp)
  42a160:	00000000 	nop
  42a164:	0320f809 	jalr	t9
  42a168:	00000000 	nop
  42a16c:	8fbc0018 	lw	gp,24(sp)
  42a170:	8fa500b4 	lw	a1,180(sp)
  42a174:	8f898984 	lw	t1,-30332(gp)
  42a178:	8f998114 	lw	t9,-32492(gp)
  42a17c:	8d290000 	lw	t1,0(t1)
  42a180:	00000000 	nop
  42a184:	8d240014 	lw	a0,20(t1)
  42a188:	0320f809 	jalr	t9
  42a18c:	00000000 	nop
  42a190:	8fbc0018 	lw	gp,24(sp)
  42a194:	8fa400b4 	lw	a0,180(sp)
  42a198:	8f998174 	lw	t9,-32396(gp)
  42a19c:	00000000 	nop
  42a1a0:	0320f809 	jalr	t9
  42a1a4:	00000000 	nop
  42a1a8:	8fbc0018 	lw	gp,24(sp)
  42a1ac:	24050002 	li	a1,2
  42a1b0:	8f84897c 	lw	a0,-30340(gp)
  42a1b4:	8f9981d8 	lw	t9,-32296(gp)
  42a1b8:	8c840000 	lw	a0,0(a0)
  42a1bc:	0320f809 	jalr	t9
  42a1c0:	2484084c 	addiu	a0,a0,2124
  42a1c4:	8fbc0018 	lw	gp,24(sp)
  42a1c8:	04410014 	bgez	v0,42a21c <viewFile+0x254>
  42a1cc:	00000000 	nop
  42a1d0:	8f8a8984 	lw	t2,-30332(gp)
  42a1d4:	8f998318 	lw	t9,-31976(gp)
  42a1d8:	8d4a0000 	lw	t2,0(t2)
  42a1dc:	00002825 	move	a1,zero
  42a1e0:	8d440018 	lw	a0,24(t2)
  42a1e4:	0320f809 	jalr	t9
  42a1e8:	00000000 	nop
  42a1ec:	8fbc0018 	lw	gp,24(sp)
  42a1f0:	00002825 	move	a1,zero
  42a1f4:	8f8b8984 	lw	t3,-30332(gp)
  42a1f8:	8f9980c8 	lw	t9,-32568(gp)
  42a1fc:	8d6b0000 	lw	t3,0(t3)
  42a200:	00000000 	nop
  42a204:	8d640014 	lw	a0,20(t3)
  42a208:	0320f809 	jalr	t9
  42a20c:	00000000 	nop
  42a210:	8fbc0018 	lw	gp,24(sp)
  42a214:	10000013 	b	42a264 <viewFile+0x29c>
  42a218:	00000000 	nop
  42a21c:	8f8c8984 	lw	t4,-30332(gp)
  42a220:	8f998318 	lw	t9,-31976(gp)
  42a224:	8d8c0000 	lw	t4,0(t4)
  42a228:	24050001 	li	a1,1
  42a22c:	8d840018 	lw	a0,24(t4)
  42a230:	0320f809 	jalr	t9
  42a234:	00000000 	nop
  42a238:	8fbc0018 	lw	gp,24(sp)
  42a23c:	24050001 	li	a1,1
  42a240:	8f8d8984 	lw	t5,-30332(gp)
  42a244:	8f9980c8 	lw	t9,-32568(gp)
  42a248:	8dad0000 	lw	t5,0(t5)
  42a24c:	00000000 	nop
  42a250:	8da40014 	lw	a0,20(t5)
  42a254:	0320f809 	jalr	t9
  42a258:	00000000 	nop
  42a25c:	8fbc0018 	lw	gp,24(sp)
  42a260:	00000000 	nop
  42a264:	8f8e8984 	lw	t6,-30332(gp)
  42a268:	8f998388 	lw	t9,-31864(gp)
  42a26c:	8dce0000 	lw	t6,0(t6)
  42a270:	00000000 	nop
  42a274:	8dc40010 	lw	a0,16(t6)
  42a278:	0320f809 	jalr	t9
  42a27c:	00000000 	nop
  42a280:	8fbc0018 	lw	gp,24(sp)
  42a284:	00000000 	nop
  42a288:	8f8f8984 	lw	t7,-30332(gp)
  42a28c:	8f998368 	lw	t9,-31896(gp)
  42a290:	8def0000 	lw	t7,0(t7)
  42a294:	00000000 	nop
  42a298:	8de40010 	lw	a0,16(t7)
  42a29c:	0320f809 	jalr	t9
  42a2a0:	00000000 	nop
  42a2a4:	8fbc0018 	lw	gp,24(sp)
  42a2a8:	00402825 	move	a1,v0
  42a2ac:	8f848a04 	lw	a0,-30204(gp)
  42a2b0:	8f99817c 	lw	t9,-32388(gp)
  42a2b4:	8c840000 	lw	a0,0(a0)
  42a2b8:	0320f809 	jalr	t9
  42a2bc:	00000000 	nop
  42a2c0:	8fbc0018 	lw	gp,24(sp)
  42a2c4:	00000000 	nop
  42a2c8:	8fbf001c 	lw	ra,28(sp)
  42a2cc:	27bd00b8 	addiu	sp,sp,184
  42a2d0:	03e00008 	jr	ra
  42a2d4:	00000000 	nop
