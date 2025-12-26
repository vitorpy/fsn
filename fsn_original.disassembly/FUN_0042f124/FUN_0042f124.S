# Function: FUN_0042f124
# Address: 0x0042f124 - 0x0042f278
# Size: 0x154 (340 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f124 <addMark+0x22c>:
  42f124:	3c1c0fbf 	lui	gp,0xfbf
  42f128:	279cea0c 	addiu	gp,gp,-5620
  42f12c:	0399e021 	addu	gp,gp,t9
  42f130:	27bdffd8 	addiu	sp,sp,-40
  42f134:	afa40028 	sw	a0,40(sp)
  42f138:	8f84806c 	lw	a0,-32660(gp)
  42f13c:	8fa50028 	lw	a1,40(sp)
  42f140:	8f998130 	lw	t9,-32464(gp)
  42f144:	afbf001c 	sw	ra,28(sp)
  42f148:	8c846ec4 	lw	a0,28356(a0)
  42f14c:	afbc0018 	sw	gp,24(sp)
  42f150:	0320f809 	jalr	t9
  42f154:	24a50001 	addiu	a1,a1,1
  42f158:	8fbc0018 	lw	gp,24(sp)
  42f15c:	8fa20028 	lw	v0,40(sp)
  42f160:	8f87806c 	lw	a3,-32660(gp)
  42f164:	00027180 	sll	t6,v0,0x6
  42f168:	24e79520 	addiu	a3,a3,-27360
  42f16c:	8cef0000 	lw	t7,0(a3)
  42f170:	8f998174 	lw	t9,-32396(gp)
  42f174:	01eec021 	addu	t8,t7,t6
  42f178:	8f040038 	lw	a0,56(t8)
  42f17c:	afae0020 	sw	t6,32(sp)
  42f180:	0320f809 	jalr	t9
  42f184:	01c01025 	move	v0,t6
  42f188:	8fbc0018 	lw	gp,24(sp)
  42f18c:	8fa20020 	lw	v0,32(sp)
  42f190:	8f87806c 	lw	a3,-32660(gp)
  42f194:	00000000 	nop
  42f198:	24e79520 	addiu	a3,a3,-27360
  42f19c:	8cf90000 	lw	t9,0(a3)
  42f1a0:	00000000 	nop
  42f1a4:	03224021 	addu	t0,t9,v0
  42f1a8:	8f998178 	lw	t9,-32392(gp)
  42f1ac:	8d04003c 	lw	a0,60(t0)
  42f1b0:	0320f809 	jalr	t9
  42f1b4:	00000000 	nop
  42f1b8:	8fbc0018 	lw	gp,24(sp)
  42f1bc:	8fa20028 	lw	v0,40(sp)
  42f1c0:	8f86806c 	lw	a2,-32660(gp)
  42f1c4:	8f87806c 	lw	a3,-32660(gp)
  42f1c8:	24c69524 	addiu	a2,a2,-27356
  42f1cc:	8cc90000 	lw	t1,0(a2)
  42f1d0:	00401825 	move	v1,v0
  42f1d4:	2525ffff 	addiu	a1,t1,-1
  42f1d8:	0045082a 	slt	at,v0,a1
  42f1dc:	acc50000 	sw	a1,0(a2)
  42f1e0:	10200018 	beqz	at,42f244 <addMark+0x34c>
  42f1e4:	24e79520 	addiu	a3,a3,-27360
  42f1e8:	00022180 	sll	a0,v0,0x6
  42f1ec:	8ceb0000 	lw	t3,0(a3)
  42f1f0:	00000000 	nop
  42f1f4:	01647821 	addu	t7,t3,a0
  42f1f8:	01e07025 	move	t6,t7
  42f1fc:	25ed003c 	addiu	t5,t7,60
  42f200:	8dc10040 	lw	at,64(t6)
  42f204:	25ce000c 	addiu	t6,t6,12
  42f208:	ade10000 	sw	at,0(t7)
  42f20c:	8dc10038 	lw	at,56(t6)
  42f210:	25ef000c 	addiu	t7,t7,12
  42f214:	ade1fff8 	sw	at,-8(t7)
  42f218:	8dc1003c 	lw	at,60(t6)
  42f21c:	15cdfff8 	bne	t6,t5,42f200 <addMark+0x308>
  42f220:	ade1fffc 	sw	at,-4(t7)
  42f224:	8dc10040 	lw	at,64(t6)
  42f228:	24630001 	addiu	v1,v1,1
  42f22c:	ade10000 	sw	at,0(t7)
  42f230:	8cc50000 	lw	a1,0(a2)
  42f234:	24840040 	addiu	a0,a0,64
  42f238:	0065082a 	slt	at,v1,a1
  42f23c:	1420ffeb 	bnez	at,42f1ec <addMark+0x2f4>
  42f240:	00000000 	nop
  42f244:	14a00009 	bnez	a1,42f26c <addMark+0x374>
  42f248:	8fbf001c 	lw	ra,28(sp)
  42f24c:	8f84806c 	lw	a0,-32660(gp)
  42f250:	8f998318 	lw	t9,-31976(gp)
  42f254:	8c846ec0 	lw	a0,28352(a0)
  42f258:	0320f809 	jalr	t9
  42f25c:	00002825 	move	a1,zero
  42f260:	8fbc0018 	lw	gp,24(sp)
  42f264:	00000000 	nop
  42f268:	8fbf001c 	lw	ra,28(sp)
  42f26c:	27bd0028 	addiu	sp,sp,40
  42f270:	03e00008 	jr	ra
  42f274:	00000000 	nop
