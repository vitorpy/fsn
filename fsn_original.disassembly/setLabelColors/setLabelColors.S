# Function: setLabelColors
# Address: 0x00429034 - 0x004291f0
# Size: 0x1bc (444 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429034 <setLabelColors>:
  429034:	3c1c0fbf 	lui	gp,0xfbf
  429038:	279c4afc 	addiu	gp,gp,19196
  42903c:	0399e021 	addu	gp,gp,t9
  429040:	27bdff90 	addiu	sp,sp,-112
  429044:	8f8e80a4 	lw	t6,-32604(gp)
  429048:	8f848a10 	lw	a0,-30192(gp)
  42904c:	8f998364 	lw	t9,-31900(gp)
  429050:	afbf002c 	sw	ra,44(sp)
  429054:	27af0040 	addiu	t7,sp,64
  429058:	25ce009a 	addiu	t6,t6,154
  42905c:	8c840000 	lw	a0,0(a0)
  429060:	afbc0028 	sw	gp,40(sp)
  429064:	afb30024 	sw	s3,36(sp)
  429068:	afb20020 	sw	s2,32(sp)
  42906c:	afb1001c 	sw	s1,28(sp)
  429070:	afb00018 	sw	s0,24(sp)
  429074:	afae0048 	sw	t6,72(sp)
  429078:	afaf004c 	sw	t7,76(sp)
  42907c:	27a50048 	addiu	a1,sp,72
  429080:	0320f809 	jalr	t9
  429084:	24060001 	li	a2,1
  429088:	8fbc0028 	lw	gp,40(sp)
  42908c:	00000000 	nop
  429090:	8f908a18 	lw	s0,-30184(gp)
  429094:	8f918978 	lw	s1,-30344(gp)
  429098:	8f928a3c 	lw	s2,-30148(gp)
  42909c:	2613001c 	addiu	s3,s0,28
  4290a0:	8e380000 	lw	t8,0(s1)
  4290a4:	8f998020 	lw	t9,-32736(gp)
  4290a8:	8e060000 	lw	a2,0(s0)
  4290ac:	8fa70040 	lw	a3,64(sp)
  4290b0:	8f040004 	lw	a0,4(t8)
  4290b4:	27398cc0 	addiu	t9,t9,-29504
  4290b8:	0320f809 	jalr	t9
  4290bc:	02402825 	move	a1,s2
  4290c0:	26100004 	addiu	s0,s0,4
  4290c4:	8fbc0028 	lw	gp,40(sp)
  4290c8:	26310004 	addiu	s1,s1,4
  4290cc:	1613fff4 	bne	s0,s3,4290a0 <setLabelColors+0x6c>
  4290d0:	26520010 	addiu	s2,s2,16
  4290d4:	8f908a24 	lw	s0,-30172(gp)
  4290d8:	8fa70040 	lw	a3,64(sp)
  4290dc:	92190004 	lbu	t9,4(s0)
  4290e0:	00000000 	nop
  4290e4:	1320000e 	beqz	t9,429120 <setLabelColors+0xec>
  4290e8:	00000000 	nop
  4290ec:	8f888984 	lw	t0,-30332(gp)
  4290f0:	8f998020 	lw	t9,-32736(gp)
  4290f4:	8d080000 	lw	t0,0(t0)
  4290f8:	8f918a28 	lw	s1,-30168(gp)
  4290fc:	8e04014c 	lw	a0,332(s0)
  429100:	8fa70040 	lw	a3,64(sp)
  429104:	27398cc0 	addiu	t9,t9,-29504
  429108:	8d06002c 	lw	a2,44(t0)
  42910c:	0320f809 	jalr	t9
  429110:	02202825 	move	a1,s1
  429114:	8fbc0028 	lw	gp,40(sp)
  429118:	1000000c 	b	42914c <setLabelColors+0x118>
  42911c:	00000000 	nop
  429120:	8f898984 	lw	t1,-30332(gp)
  429124:	8f998020 	lw	t9,-32736(gp)
  429128:	8d290000 	lw	t1,0(t1)
  42912c:	8f918a28 	lw	s1,-30168(gp)
  429130:	8e040148 	lw	a0,328(s0)
  429134:	27398cc0 	addiu	t9,t9,-29504
  429138:	8d26002c 	lw	a2,44(t1)
  42913c:	0320f809 	jalr	t9
  429140:	02202825 	move	a1,s1
  429144:	8fbc0028 	lw	gp,40(sp)
  429148:	00000000 	nop
  42914c:	8f828988 	lw	v0,-30328(gp)
  429150:	27a50048 	addiu	a1,sp,72
  429154:	8c420000 	lw	v0,0(v0)
  429158:	00000000 	nop
  42915c:	8c4a002c 	lw	t2,44(v0)
  429160:	00000000 	nop
  429164:	11400011 	beqz	t2,4291ac <setLabelColors+0x178>
  429168:	00000000 	nop
  42916c:	8f8b80a4 	lw	t3,-32604(gp)
  429170:	8f8d80a4 	lw	t5,-32604(gp)
  429174:	8e2c0004 	lw	t4,4(s1)
  429178:	8e2e0000 	lw	t6,0(s1)
  42917c:	256b00d6 	addiu	t3,t3,214
  429180:	25ad0034 	addiu	t5,t5,52
  429184:	8f998340 	lw	t9,-31936(gp)
  429188:	afab0048 	sw	t3,72(sp)
  42918c:	afad0050 	sw	t5,80(sp)
  429190:	afac004c 	sw	t4,76(sp)
  429194:	afae0054 	sw	t6,84(sp)
  429198:	8c44002c 	lw	a0,44(v0)
  42919c:	0320f809 	jalr	t9
  4291a0:	24060002 	li	a2,2
  4291a4:	8fbc0028 	lw	gp,40(sp)
  4291a8:	00000000 	nop
  4291ac:	8f868a14 	lw	a2,-30188(gp)
  4291b0:	8f998020 	lw	t9,-32736(gp)
  4291b4:	8e040174 	lw	a0,372(s0)
  4291b8:	8f858a40 	lw	a1,-30144(gp)
  4291bc:	8fa70040 	lw	a3,64(sp)
  4291c0:	8cc60000 	lw	a2,0(a2)
  4291c4:	27398cc0 	addiu	t9,t9,-29504
  4291c8:	0320f809 	jalr	t9
  4291cc:	00000000 	nop
  4291d0:	8fbf002c 	lw	ra,44(sp)
  4291d4:	8fbc0028 	lw	gp,40(sp)
  4291d8:	8fb00018 	lw	s0,24(sp)
  4291dc:	8fb1001c 	lw	s1,28(sp)
  4291e0:	8fb20020 	lw	s2,32(sp)
  4291e4:	8fb30024 	lw	s3,36(sp)
  4291e8:	03e00008 	jr	ra
  4291ec:	27bd0070 	addiu	sp,sp,112
