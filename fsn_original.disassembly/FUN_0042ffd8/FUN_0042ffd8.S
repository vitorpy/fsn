# Function: FUN_0042ffd8
# Address: 0x0042ffd8 - 0x00430358
# Size: 0x380 (896 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042ffd8 <usystem+0x240>:
  42ffd8:	3c1c0fbf 	lui	gp,0xfbf
  42ffdc:	279cdb58 	addiu	gp,gp,-9384
  42ffe0:	0399e021 	addu	gp,gp,t9
  42ffe4:	27bdffc0 	addiu	sp,sp,-64
  42ffe8:	afbf003c 	sw	ra,60(sp)
  42ffec:	afbe0038 	sw	s8,56(sp)
  42fff0:	afbc0034 	sw	gp,52(sp)
  42fff4:	afb70030 	sw	s7,48(sp)
  42fff8:	afb6002c 	sw	s6,44(sp)
  42fffc:	afb50028 	sw	s5,40(sp)
  430000:	afb40024 	sw	s4,36(sp)
  430004:	afb30020 	sw	s3,32(sp)
  430008:	afb2001c 	sw	s2,28(sp)
  43000c:	afb10018 	sw	s1,24(sp)
  430010:	afb00014 	sw	s0,20(sp)
  430014:	8c8e0074 	lw	t6,116(a0)
  430018:	00808825 	move	s1,a0
  43001c:	000ec0c0 	sll	t8,t6,0x3
  430020:	070100c1 	bgez	t8,430328 <usystem+0x590>
  430024:	0000a825 	move	s5,zero
  430028:	8f92806c 	lw	s2,-32660(gp)
  43002c:	24010001 	li	at,1
  430030:	26526f00 	addiu	s2,s2,28416
  430034:	8e590000 	lw	t9,0(s2)
  430038:	00000000 	nop
  43003c:	17210024 	bne	t9,at,4300d0 <usystem+0x338>
  430040:	00000000 	nop
  430044:	8f998440 	lw	t9,-31680(gp)
  430048:	8c840000 	lw	a0,0(a0)
  43004c:	8e450008 	lw	a1,8(s2)
  430050:	0320f809 	jalr	t9
  430054:	00000000 	nop
  430058:	8fbc0034 	lw	gp,52(sp)
  43005c:	1040001c 	beqz	v0,4300d0 <usystem+0x338>
  430060:	00000000 	nop
  430064:	92290075 	lbu	t1,117(s1)
  430068:	922c0076 	lbu	t4,118(s1)
  43006c:	8f97806c 	lw	s7,-32660(gp)
  430070:	352a0001 	ori	t2,t1,0x1
  430074:	358d0080 	ori	t5,t4,0x80
  430078:	8f9e8a64 	lw	s8,-30108(gp)
  43007c:	a22a0075 	sb	t2,117(s1)
  430080:	a22d0076 	sb	t5,118(s1)
  430084:	26f76edc 	addiu	s7,s7,28380
  430088:	8eee0000 	lw	t6,0(s7)
  43008c:	8fc20000 	lw	v0,0(s8)
  430090:	25cf0001 	addiu	t7,t6,1
  430094:	1222000b 	beq	s1,v0,4300c4 <usystem+0x32c>
  430098:	aeef0000 	sw	t7,0(s7)
  43009c:	10400002 	beqz	v0,4300a8 <usystem+0x310>
  4300a0:	00000000 	nop
  4300a4:	ac51006c 	sw	s1,108(v0)
  4300a8:	8f968a60 	lw	s6,-30112(gp)
  4300ac:	afd10000 	sw	s1,0(s8)
  4300b0:	8ed80000 	lw	t8,0(s6)
  4300b4:	00000000 	nop
  4300b8:	17000002 	bnez	t8,4300c4 <usystem+0x32c>
  4300bc:	00000000 	nop
  4300c0:	aed10000 	sw	s1,0(s6)
  4300c4:	8f968a60 	lw	s6,-30112(gp)
  4300c8:	1000000c 	b	4300fc <usystem+0x364>
  4300cc:	8e2b000c 	lw	t3,12(s1)
  4300d0:	92390076 	lbu	t9,118(s1)
  4300d4:	92290075 	lbu	t1,117(s1)
  4300d8:	8f97806c 	lw	s7,-32660(gp)
  4300dc:	3328ff7f 	andi	t0,t9,0xff7f
  4300e0:	312afffe 	andi	t2,t1,0xfffe
  4300e4:	8f9e8a64 	lw	s8,-30108(gp)
  4300e8:	8f968a60 	lw	s6,-30112(gp)
  4300ec:	a2280076 	sb	t0,118(s1)
  4300f0:	a22a0075 	sb	t2,117(s1)
  4300f4:	26f76edc 	addiu	s7,s7,28380
  4300f8:	8e2b000c 	lw	t3,12(s1)
  4300fc:	0000a025 	move	s4,zero
  430100:	19600078 	blez	t3,4302e4 <usystem+0x54c>
  430104:	00009825 	move	s3,zero
  430108:	8e2c0010 	lw	t4,16(s1)
  43010c:	00000000 	nop
  430110:	01936821 	addu	t5,t4,s3
  430114:	8db00000 	lw	s0,0(t5)
  430118:	00000000 	nop
  43011c:	920f0028 	lbu	t7,40(s0)
  430120:	00000000 	nop
  430124:	35f80008 	ori	t8,t7,0x8
  430128:	a2180028 	sb	t8,40(s0)
  43012c:	8e590000 	lw	t9,0(s2)
  430130:	00000000 	nop
  430134:	33280001 	andi	t0,t9,0x1
  430138:	1100000d 	beqz	t0,430170 <usystem+0x3d8>
  43013c:	00000000 	nop
  430140:	8f998440 	lw	t9,-31680(gp)
  430144:	8e040000 	lw	a0,0(s0)
  430148:	8e450008 	lw	a1,8(s2)
  43014c:	0320f809 	jalr	t9
  430150:	00000000 	nop
  430154:	8fbc0034 	lw	gp,52(sp)
  430158:	14400005 	bnez	v0,430170 <usystem+0x3d8>
  43015c:	00000000 	nop
  430160:	92090028 	lbu	t1,40(s0)
  430164:	00000000 	nop
  430168:	312afff7 	andi	t2,t1,0xfff7
  43016c:	a20a0028 	sb	t2,40(s0)
  430170:	8e430000 	lw	v1,0(s2)
  430174:	00000000 	nop
  430178:	306b0002 	andi	t3,v1,0x2
  43017c:	1160001a 	beqz	t3,4301e8 <usystem+0x450>
  430180:	30680004 	andi	t0,v1,0x4
  430184:	92420004 	lbu	v0,4(s2)
  430188:	00000000 	nop
  43018c:	10400007 	beqz	v0,4301ac <usystem+0x414>
  430190:	00000000 	nop
  430194:	8e0c000c 	lw	t4,12(s0)
  430198:	8e4d000c 	lw	t5,12(s2)
  43019c:	00000000 	nop
  4301a0:	018d082a 	slt	at,t4,t5
  4301a4:	10200009 	beqz	at,4301cc <usystem+0x434>
  4301a8:	00000000 	nop
  4301ac:	1440000e 	bnez	v0,4301e8 <usystem+0x450>
  4301b0:	30680004 	andi	t0,v1,0x4
  4301b4:	8e4e000c 	lw	t6,12(s2)
  4301b8:	8e0f000c 	lw	t7,12(s0)
  4301bc:	00000000 	nop
  4301c0:	01cf082a 	slt	at,t6,t7
  4301c4:	14200008 	bnez	at,4301e8 <usystem+0x450>
  4301c8:	30680004 	andi	t0,v1,0x4
  4301cc:	92180028 	lbu	t8,40(s0)
  4301d0:	00000000 	nop
  4301d4:	3319fff7 	andi	t9,t8,0xfff7
  4301d8:	a2190028 	sb	t9,40(s0)
  4301dc:	8e430000 	lw	v1,0(s2)
  4301e0:	00000000 	nop
  4301e4:	30680004 	andi	t0,v1,0x4
  4301e8:	11000019 	beqz	t0,430250 <usystem+0x4b8>
  4301ec:	00000000 	nop
  4301f0:	8f998580 	lw	t9,-31360(gp)
  4301f4:	8e040010 	lw	a0,16(s0)
  4301f8:	0320f809 	jalr	t9
  4301fc:	00000000 	nop
  430200:	92430005 	lbu	v1,5(s2)
  430204:	8fbc0034 	lw	gp,52(sp)
  430208:	10600006 	beqz	v1,430224 <usystem+0x48c>
  43020c:	00000000 	nop
  430210:	8e490010 	lw	t1,16(s2)
  430214:	00000000 	nop
  430218:	0049082a 	slt	at,v0,t1
  43021c:	10200008 	beqz	at,430240 <usystem+0x4a8>
  430220:	00000000 	nop
  430224:	1460000a 	bnez	v1,430250 <usystem+0x4b8>
  430228:	00000000 	nop
  43022c:	8e4a0010 	lw	t2,16(s2)
  430230:	00000000 	nop
  430234:	0142082a 	slt	at,t2,v0
  430238:	14200005 	bnez	at,430250 <usystem+0x4b8>
  43023c:	00000000 	nop
  430240:	920b0028 	lbu	t3,40(s0)
  430244:	00000000 	nop
  430248:	316cfff7 	andi	t4,t3,0xfff7
  43024c:	a20c0028 	sb	t4,40(s0)
  430250:	8e0d0028 	lw	t5,40(s0)
  430254:	00000000 	nop
  430258:	000d7900 	sll	t7,t5,0x4
  43025c:	05e1001b 	bgez	t7,4302cc <usystem+0x534>
  430260:	00000000 	nop
  430264:	92380075 	lbu	t8,117(s1)
  430268:	00000000 	nop
  43026c:	3319fffe 	andi	t9,t8,0xfffe
  430270:	37280001 	ori	t0,t9,0x1
  430274:	a2280075 	sb	t0,117(s1)
  430278:	8ee90000 	lw	t1,0(s7)
  43027c:	8fc20000 	lw	v0,0(s8)
  430280:	252a0001 	addiu	t2,t1,1
  430284:	12220009 	beq	s1,v0,4302ac <usystem+0x514>
  430288:	aeea0000 	sw	t2,0(s7)
  43028c:	10400002 	beqz	v0,430298 <usystem+0x500>
  430290:	00000000 	nop
  430294:	ac51006c 	sw	s1,108(v0)
  430298:	8ecb0000 	lw	t3,0(s6)
  43029c:	afd10000 	sw	s1,0(s8)
  4302a0:	15600002 	bnez	t3,4302ac <usystem+0x514>
  4302a4:	00000000 	nop
  4302a8:	aed10000 	sw	s1,0(s6)
  4302ac:	12a00002 	beqz	s5,4302b8 <usystem+0x520>
  4302b0:	00000000 	nop
  4302b4:	aeb00024 	sw	s0,36(s5)
  4302b8:	8e2c0070 	lw	t4,112(s1)
  4302bc:	0200a825 	move	s5,s0
  4302c0:	15800002 	bnez	t4,4302cc <usystem+0x534>
  4302c4:	00000000 	nop
  4302c8:	ae300070 	sw	s0,112(s1)
  4302cc:	8e2d000c 	lw	t5,12(s1)
  4302d0:	26940001 	addiu	s4,s4,1
  4302d4:	028d082a 	slt	at,s4,t5
  4302d8:	1420ff8b 	bnez	at,430108 <usystem+0x370>
  4302dc:	26730004 	addiu	s3,s3,4
  4302e0:	0000a025 	move	s4,zero
  4302e4:	8e2e0014 	lw	t6,20(s1)
  4302e8:	00009825 	move	s3,zero
  4302ec:	19c0000f 	blez	t6,43032c <usystem+0x594>
  4302f0:	8fbf003c 	lw	ra,60(sp)
  4302f4:	8e2f0018 	lw	t7,24(s1)
  4302f8:	8f998020 	lw	t9,-32736(gp)
  4302fc:	01f3c021 	addu	t8,t7,s3
  430300:	8f040000 	lw	a0,0(t8)
  430304:	2739ffd8 	addiu	t9,t9,-40
  430308:	0320f809 	jalr	t9
  43030c:	00000000 	nop
  430310:	8e390014 	lw	t9,20(s1)
  430314:	26940001 	addiu	s4,s4,1
  430318:	8fbc0034 	lw	gp,52(sp)
  43031c:	0299082a 	slt	at,s4,t9
  430320:	1420fff4 	bnez	at,4302f4 <usystem+0x55c>
  430324:	26730004 	addiu	s3,s3,4
  430328:	8fbf003c 	lw	ra,60(sp)
  43032c:	8fb00014 	lw	s0,20(sp)
  430330:	8fb10018 	lw	s1,24(sp)
  430334:	8fb2001c 	lw	s2,28(sp)
  430338:	8fb30020 	lw	s3,32(sp)
  43033c:	8fb40024 	lw	s4,36(sp)
  430340:	8fb50028 	lw	s5,40(sp)
  430344:	8fb6002c 	lw	s6,44(sp)
  430348:	8fb70030 	lw	s7,48(sp)
  43034c:	8fbe0038 	lw	s8,56(sp)
  430350:	03e00008 	jr	ra
  430354:	27bd0040 	addiu	sp,sp,64
