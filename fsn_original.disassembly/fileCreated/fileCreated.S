# Function: fileCreated
# Address: 0x00417e1c - 0x00418334
# Size: 0x518 (1304 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00417e1c <fileCreated>:
  417e1c:	3c1c0fc0 	lui	gp,0xfc0
  417e20:	279c5d14 	addiu	gp,gp,23828
  417e24:	0399e021 	addu	gp,gp,t9
  417e28:	27bdff38 	addiu	sp,sp,-200
  417e2c:	afbf0024 	sw	ra,36(sp)
  417e30:	afbc0020 	sw	gp,32(sp)
  417e34:	afb1001c 	sw	s1,28(sp)
  417e38:	afb00018 	sw	s0,24(sp)
  417e3c:	afa500cc 	sw	a1,204(sp)
  417e40:	8c8e0074 	lw	t6,116(a0)
  417e44:	00808825 	move	s1,a0
  417e48:	000ec340 	sll	t8,t6,0xd
  417e4c:	07010003 	bgez	t8,417e5c <fileCreated+0x40>
  417e50:	00000000 	nop
  417e54:	10000132 	b	418320 <fileCreated+0x504>
  417e58:	00001025 	move	v0,zero
  417e5c:	8f99857c 	lw	t9,-31364(gp)
  417e60:	00002025 	move	a0,zero
  417e64:	0320f809 	jalr	t9
  417e68:	02202825 	move	a1,s1
  417e6c:	8fbc0020 	lw	gp,32(sp)
  417e70:	afa200bc 	sw	v0,188(sp)
  417e74:	8f9983e0 	lw	t9,-31776(gp)
  417e78:	00402025 	move	a0,v0
  417e7c:	0320f809 	jalr	t9
  417e80:	00000000 	nop
  417e84:	8fb900bc 	lw	t9,188(sp)
  417e88:	8fbc0020 	lw	gp,32(sp)
  417e8c:	00592021 	addu	a0,v0,t9
  417e90:	8f998134 	lw	t9,-32460(gp)
  417e94:	8fa500cc 	lw	a1,204(sp)
  417e98:	0320f809 	jalr	t9
  417e9c:	afa40030 	sw	a0,48(sp)
  417ea0:	8fbc0020 	lw	gp,32(sp)
  417ea4:	8fa400bc 	lw	a0,188(sp)
  417ea8:	8f998120 	lw	t9,-32480(gp)
  417eac:	27a50034 	addiu	a1,sp,52
  417eb0:	0320f809 	jalr	t9
  417eb4:	00000000 	nop
  417eb8:	8fbc0020 	lw	gp,32(sp)
  417ebc:	04410003 	bgez	v0,417ecc <fileCreated+0xb0>
  417ec0:	00000000 	nop
  417ec4:	10000116 	b	418320 <fileCreated+0x504>
  417ec8:	00001025 	move	v0,zero
  417ecc:	922a0075 	lbu	t2,117(s1)
  417ed0:	92280074 	lbu	t0,116(s1)
  417ed4:	314cff7f 	andi	t4,t2,0xff7f
  417ed8:	a22c0075 	sb	t4,117(s1)
  417edc:	318d00bf 	andi	t5,t4,0xbf
  417ee0:	3109fffe 	andi	t1,t0,0xfffe
  417ee4:	a2290074 	sb	t1,116(s1)
  417ee8:	a22d0075 	sb	t5,117(s1)
  417eec:	8fae0048 	lw	t6,72(sp)
  417ef0:	24014000 	li	at,16384
  417ef4:	31cff000 	andi	t7,t6,0xf000
  417ef8:	11e1008b 	beq	t7,at,418128 <fileCreated+0x30c>
  417efc:	00000000 	nop
  417f00:	8f9987b8 	lw	t9,-30792(gp)
  417f04:	00000000 	nop
  417f08:	0320f809 	jalr	t9
  417f0c:	00000000 	nop
  417f10:	8fbc0020 	lw	gp,32(sp)
  417f14:	8fa500cc 	lw	a1,204(sp)
  417f18:	8f9985a4 	lw	t9,-31324(gp)
  417f1c:	02202025 	move	a0,s1
  417f20:	0320f809 	jalr	t9
  417f24:	00000000 	nop
  417f28:	8fbc0020 	lw	gp,32(sp)
  417f2c:	10400008 	beqz	v0,417f50 <fileCreated+0x134>
  417f30:	00000000 	nop
  417f34:	8f9985d0 	lw	t9,-31280(gp)
  417f38:	8fa500cc 	lw	a1,204(sp)
  417f3c:	0320f809 	jalr	t9
  417f40:	02202025 	move	a0,s1
  417f44:	8fbc0020 	lw	gp,32(sp)
  417f48:	100000f6 	b	418324 <fileCreated+0x508>
  417f4c:	8fbf0024 	lw	ra,36(sp)
  417f50:	8f998018 	lw	t9,-32744(gp)
  417f54:	00000000 	nop
  417f58:	27391b84 	addiu	t9,t9,7044
  417f5c:	0320f809 	jalr	t9
  417f60:	00000000 	nop
  417f64:	8e23000c 	lw	v1,12(s1)
  417f68:	8fbc0020 	lw	gp,32(sp)
  417f6c:	14600008 	bnez	v1,417f90 <fileCreated+0x174>
  417f70:	00408025 	move	s0,v0
  417f74:	8f9983b8 	lw	t9,-31816(gp)
  417f78:	24040004 	li	a0,4
  417f7c:	0320f809 	jalr	t9
  417f80:	00000000 	nop
  417f84:	8fbc0020 	lw	gp,32(sp)
  417f88:	10000008 	b	417fac <fileCreated+0x190>
  417f8c:	ae220010 	sw	v0,16(s1)
  417f90:	8f99818c 	lw	t9,-32372(gp)
  417f94:	8e240010 	lw	a0,16(s1)
  417f98:	00032880 	sll	a1,v1,0x2
  417f9c:	0320f809 	jalr	t9
  417fa0:	24a50004 	addiu	a1,a1,4
  417fa4:	8fbc0020 	lw	gp,32(sp)
  417fa8:	ae220010 	sw	v0,16(s1)
  417fac:	8e39000c 	lw	t9,12(s1)
  417fb0:	8e380010 	lw	t8,16(s1)
  417fb4:	00194080 	sll	t0,t9,0x2
  417fb8:	03084821 	addu	t1,t8,t0
  417fbc:	ad300000 	sw	s0,0(t1)
  417fc0:	8e2a000c 	lw	t2,12(s1)
  417fc4:	00000000 	nop
  417fc8:	254b0001 	addiu	t3,t2,1
  417fcc:	ae2b000c 	sw	t3,12(s1)
  417fd0:	92190029 	lbu	t9,41(s0)
  417fd4:	920d0028 	lbu	t5,40(s0)
  417fd8:	37380080 	ori	t8,t9,0x80
  417fdc:	8f998018 	lw	t9,-32744(gp)
  417fe0:	35ae0002 	ori	t6,t5,0x2
  417fe4:	a20e0028 	sb	t6,40(s0)
  417fe8:	a2180029 	sb	t8,41(s0)
  417fec:	8fa400cc 	lw	a0,204(sp)
  417ff0:	27391d68 	addiu	t9,t9,7528
  417ff4:	0320f809 	jalr	t9
  417ff8:	00000000 	nop
  417ffc:	8fbc0020 	lw	gp,32(sp)
  418000:	ae020000 	sw	v0,0(s0)
  418004:	8f9983e0 	lw	t9,-31776(gp)
  418008:	8fa400cc 	lw	a0,204(sp)
  41800c:	0320f809 	jalr	t9
  418010:	00000000 	nop
  418014:	8fbc0020 	lw	gp,32(sp)
  418018:	ae020004 	sw	v0,4(s0)
  41801c:	8fa80048 	lw	t0,72(sp)
  418020:	00000000 	nop
  418024:	ae080008 	sw	t0,8(s0)
  418028:	8f998818 	lw	t9,-30696(gp)
  41802c:	8fa400bc 	lw	a0,188(sp)
  418030:	0320f809 	jalr	t9
  418034:	00000000 	nop
  418038:	8fbc0020 	lw	gp,32(sp)
  41803c:	ae020020 	sw	v0,32(s0)
  418040:	8e29001c 	lw	t1,28(s1)
  418044:	8faa0064 	lw	t2,100(sp)
  418048:	8e0c000c 	lw	t4,12(s0)
  41804c:	8f998018 	lw	t9,-32744(gp)
  418050:	012a5821 	addu	t3,t1,t2
  418054:	016c6823 	subu	t5,t3,t4
  418058:	273918b0 	addiu	t9,t9,6320
  41805c:	ae2d001c 	sw	t5,28(s1)
  418060:	0320f809 	jalr	t9
  418064:	02202025 	move	a0,s1
  418068:	8fbc0020 	lw	gp,32(sp)
  41806c:	e6200024 	swc1	$f0,36(s1)
  418070:	8fae0064 	lw	t6,100(sp)
  418074:	8f838068 	lw	v1,-32664(gp)
  418078:	ae0e000c 	sw	t6,12(s0)
  41807c:	24630184 	addiu	v1,v1,388
  418080:	8c6f0000 	lw	t7,0(v1)
  418084:	00000000 	nop
  418088:	01ee082a 	slt	at,t7,t6
  41808c:	10200002 	beqz	at,418098 <fileCreated+0x27c>
  418090:	00000000 	nop
  418094:	ac6e0000 	sw	t6,0(v1)
  418098:	8f838068 	lw	v1,-32664(gp)
  41809c:	8e22001c 	lw	v0,28(s1)
  4180a0:	2463018c 	addiu	v1,v1,396
  4180a4:	8c790000 	lw	t9,0(v1)
  4180a8:	00000000 	nop
  4180ac:	0322082a 	slt	at,t9,v0
  4180b0:	10200003 	beqz	at,4180c0 <fileCreated+0x2a4>
  4180b4:	8fb80074 	lw	t8,116(sp)
  4180b8:	ac620000 	sw	v0,0(v1)
  4180bc:	8fb80074 	lw	t8,116(sp)
  4180c0:	02002025 	move	a0,s0
  4180c4:	ae180010 	sw	t8,16(s0)
  4180c8:	8f99858c 	lw	t9,-31348(gp)
  4180cc:	00000000 	nop
  4180d0:	0320f809 	jalr	t9
  4180d4:	00000000 	nop
  4180d8:	c600001c 	lwc1	$f0,28(s0)
  4180dc:	c6240054 	lwc1	$f4,84(s1)
  4180e0:	46000221 	cvt.d.s	$f8,$f0
  4180e4:	460021a1 	cvt.d.s	$f6,$f4
  4180e8:	4628303c 	c.lt.d	$f6,$f8
  4180ec:	8fbc0020 	lw	gp,32(sp)
  4180f0:	45000002 	bc1f	4180fc <fileCreated+0x2e0>
  4180f4:	00000000 	nop
  4180f8:	e6200054 	swc1	$f0,84(s1)
  4180fc:	92290074 	lbu	t1,116(s1)
  418100:	00000000 	nop
  418104:	352a0001 	ori	t2,t1,0x1
  418108:	a22a0074 	sb	t2,116(s1)
  41810c:	8f9987c4 	lw	t9,-30780(gp)
  418110:	00000000 	nop
  418114:	0320f809 	jalr	t9
  418118:	00000000 	nop
  41811c:	8fbc0020 	lw	gp,32(sp)
  418120:	1000006f 	b	4182e0 <fileCreated+0x4c4>
  418124:	92390074 	lbu	t9,116(s1)
  418128:	8f9985a8 	lw	t9,-31320(gp)
  41812c:	8fa500cc 	lw	a1,204(sp)
  418130:	0320f809 	jalr	t9
  418134:	02202025 	move	a0,s1
  418138:	8fbc0020 	lw	gp,32(sp)
  41813c:	10400003 	beqz	v0,41814c <fileCreated+0x330>
  418140:	00000000 	nop
  418144:	10000076 	b	418320 <fileCreated+0x504>
  418148:	00001025 	move	v0,zero
  41814c:	8f998018 	lw	t9,-32744(gp)
  418150:	00000000 	nop
  418154:	27391c04 	addiu	t9,t9,7172
  418158:	0320f809 	jalr	t9
  41815c:	00000000 	nop
  418160:	8e230014 	lw	v1,20(s1)
  418164:	8fbc0020 	lw	gp,32(sp)
  418168:	14600008 	bnez	v1,41818c <fileCreated+0x370>
  41816c:	00408025 	move	s0,v0
  418170:	8f9983b8 	lw	t9,-31816(gp)
  418174:	24040004 	li	a0,4
  418178:	0320f809 	jalr	t9
  41817c:	00000000 	nop
  418180:	8fbc0020 	lw	gp,32(sp)
  418184:	10000008 	b	4181a8 <fileCreated+0x38c>
  418188:	ae220018 	sw	v0,24(s1)
  41818c:	8f99818c 	lw	t9,-32372(gp)
  418190:	8e240018 	lw	a0,24(s1)
  418194:	00032880 	sll	a1,v1,0x2
  418198:	0320f809 	jalr	t9
  41819c:	24a50004 	addiu	a1,a1,4
  4181a0:	8fbc0020 	lw	gp,32(sp)
  4181a4:	ae220018 	sw	v0,24(s1)
  4181a8:	8e2c0014 	lw	t4,20(s1)
  4181ac:	8e2b0018 	lw	t3,24(s1)
  4181b0:	000c6880 	sll	t5,t4,0x2
  4181b4:	016d7021 	addu	t6,t3,t5
  4181b8:	add00000 	sw	s0,0(t6)
  4181bc:	8e2f0014 	lw	t7,20(s1)
  4181c0:	00000000 	nop
  4181c4:	25f90001 	addiu	t9,t7,1
  4181c8:	ae390014 	sw	t9,20(s1)
  4181cc:	92080074 	lbu	t0,116(s0)
  4181d0:	8f998018 	lw	t9,-32744(gp)
  4181d4:	350c0008 	ori	t4,t0,0x8
  4181d8:	a20c0074 	sb	t4,116(s0)
  4181dc:	358b0002 	ori	t3,t4,0x2
  4181e0:	a20b0074 	sb	t3,116(s0)
  4181e4:	8fa400cc 	lw	a0,204(sp)
  4181e8:	27391d68 	addiu	t9,t9,7528
  4181ec:	0320f809 	jalr	t9
  4181f0:	00000000 	nop
  4181f4:	8fbc0020 	lw	gp,32(sp)
  4181f8:	ae020000 	sw	v0,0(s0)
  4181fc:	8f9983e0 	lw	t9,-31776(gp)
  418200:	8fa400cc 	lw	a0,204(sp)
  418204:	0320f809 	jalr	t9
  418208:	00000000 	nop
  41820c:	8fbc0020 	lw	gp,32(sp)
  418210:	ae020004 	sw	v0,4(s0)
  418214:	8fad0048 	lw	t5,72(sp)
  418218:	8f838a24 	lw	v1,-30172(gp)
  41821c:	ae00000c 	sw	zero,12(s0)
  418220:	ae000014 	sw	zero,20(s0)
  418224:	ae110028 	sw	s1,40(s0)
  418228:	ae0d0008 	sw	t5,8(s0)
  41822c:	90630003 	lbu	v1,3(v1)
  418230:	00000000 	nop
  418234:	0003702b 	sltu	t6,zero,v1
  418238:	11c00006 	beqz	t6,418254 <fileCreated+0x438>
  41823c:	01c01825 	move	v1,t6
  418240:	8e230074 	lw	v1,116(s1)
  418244:	00000000 	nop
  418248:	00037ac0 	sll	t7,v1,0xb
  41824c:	000fcfc2 	srl	t9,t7,0x1f
  418250:	0019182b 	sltu	v1,zero,t9
  418254:	920c0075 	lbu	t4,117(s0)
  418258:	00034900 	sll	t1,v1,0x4
  41825c:	312a0010 	andi	t2,t1,0x10
  418260:	318bffef 	andi	t3,t4,0xffef
  418264:	014b6825 	or	t5,t2,t3
  418268:	a20d0075 	sb	t5,117(s0)
  41826c:	8e0e0074 	lw	t6,116(s0)
  418270:	00000000 	nop
  418274:	000ecac0 	sll	t9,t6,0xb
  418278:	07210007 	bgez	t9,418298 <fileCreated+0x47c>
  41827c:	00000000 	nop
  418280:	8f998714 	lw	t9,-30956(gp)
  418284:	02002025 	move	a0,s0
  418288:	0320f809 	jalr	t9
  41828c:	00000000 	nop
  418290:	8fbc0020 	lw	gp,32(sp)
  418294:	00000000 	nop
  418298:	92280075 	lbu	t0,117(s1)
  41829c:	8f998018 	lw	t9,-32744(gp)
  4182a0:	35090080 	ori	t1,t0,0x80
  4182a4:	a2290075 	sb	t1,117(s1)
  4182a8:	8fa60030 	lw	a2,48(sp)
  4182ac:	8fa500bc 	lw	a1,188(sp)
  4182b0:	273938e8 	addiu	t9,t9,14568
  4182b4:	02002025 	move	a0,s0
  4182b8:	0320f809 	jalr	t9
  4182bc:	00003825 	move	a3,zero
  4182c0:	922d0075 	lbu	t5,117(s1)
  4182c4:	00025180 	sll	t2,v0,0x6
  4182c8:	314b0040 	andi	t3,t2,0x40
  4182cc:	31aeffbf 	andi	t6,t5,0xffbf
  4182d0:	016e7825 	or	t7,t3,t6
  4182d4:	8fbc0020 	lw	gp,32(sp)
  4182d8:	a22f0075 	sb	t7,117(s1)
  4182dc:	92390074 	lbu	t9,116(s1)
  4182e0:	00000000 	nop
  4182e4:	33380001 	andi	t8,t9,0x1
  4182e8:	17000005 	bnez	t8,418300 <fileCreated+0x4e4>
  4182ec:	00000000 	nop
  4182f0:	82290075 	lb	t1,117(s1)
  4182f4:	00001025 	move	v0,zero
  4182f8:	05210009 	bgez	t1,418320 <fileCreated+0x504>
  4182fc:	00000000 	nop
  418300:	8f998018 	lw	t9,-32744(gp)
  418304:	02202025 	move	a0,s1
  418308:	273944ec 	addiu	t9,t9,17644
  41830c:	0320f809 	jalr	t9
  418310:	00000000 	nop
  418314:	8fbc0020 	lw	gp,32(sp)
  418318:	10000001 	b	418320 <fileCreated+0x504>
  41831c:	24020001 	li	v0,1
  418320:	8fbf0024 	lw	ra,36(sp)
  418324:	8fb00018 	lw	s0,24(sp)
  418328:	8fb1001c 	lw	s1,28(sp)
  41832c:	03e00008 	jr	ra
  418330:	27bd00c8 	addiu	sp,sp,200
