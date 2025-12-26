# Function: FUN_0041c1c4
# Address: 0x0041c1c4 - 0x0041c3e4
# Size: 0x220 (544 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041c1c4 <createSelectedInfo+0x390>:
  41c1c4:	3c1c0fc0 	lui	gp,0xfc0
  41c1c8:	279c196c 	addiu	gp,gp,6508
  41c1cc:	0399e021 	addu	gp,gp,t9
  41c1d0:	27bdffe0 	addiu	sp,sp,-32
  41c1d4:	3082f000 	andi	v0,a0,0xf000
  41c1d8:	24011000 	li	at,4096
  41c1dc:	afbf001c 	sw	ra,28(sp)
  41c1e0:	afbc0018 	sw	gp,24(sp)
  41c1e4:	10410027 	beq	v0,at,41c284 <createSelectedInfo+0x450>
  41c1e8:	00803025 	move	a2,a0
  41c1ec:	24012000 	li	at,8192
  41c1f0:	10410015 	beq	v0,at,41c248 <createSelectedInfo+0x414>
  41c1f4:	24014000 	li	at,16384
  41c1f8:	1041000e 	beq	v0,at,41c234 <createSelectedInfo+0x400>
  41c1fc:	24016000 	li	at,24576
  41c200:	10410016 	beq	v0,at,41c25c <createSelectedInfo+0x428>
  41c204:	34018000 	li	at,0x8000
  41c208:	10410019 	beq	v0,at,41c270 <createSelectedInfo+0x43c>
  41c20c:	3401a000 	li	at,0xa000
  41c210:	10410021 	beq	v0,at,41c298 <createSelectedInfo+0x464>
  41c214:	3401c000 	li	at,0xc000
  41c218:	10410024 	beq	v0,at,41c2ac <createSelectedInfo+0x478>
  41c21c:	00000000 	nop
  41c220:	8f83806c 	lw	v1,-32660(gp)
  41c224:	240e003f 	li	t6,63
  41c228:	24636bd0 	addiu	v1,v1,27600
  41c22c:	10000023 	b	41c2bc <createSelectedInfo+0x488>
  41c230:	a06e0000 	sb	t6,0(v1)
  41c234:	8f83806c 	lw	v1,-32660(gp)
  41c238:	240f0064 	li	t7,100
  41c23c:	24636bd0 	addiu	v1,v1,27600
  41c240:	1000001e 	b	41c2bc <createSelectedInfo+0x488>
  41c244:	a06f0000 	sb	t7,0(v1)
  41c248:	8f83806c 	lw	v1,-32660(gp)
  41c24c:	24180063 	li	t8,99
  41c250:	24636bd0 	addiu	v1,v1,27600
  41c254:	10000019 	b	41c2bc <createSelectedInfo+0x488>
  41c258:	a0780000 	sb	t8,0(v1)
  41c25c:	8f83806c 	lw	v1,-32660(gp)
  41c260:	24190062 	li	t9,98
  41c264:	24636bd0 	addiu	v1,v1,27600
  41c268:	10000014 	b	41c2bc <createSelectedInfo+0x488>
  41c26c:	a0790000 	sb	t9,0(v1)
  41c270:	8f83806c 	lw	v1,-32660(gp)
  41c274:	2408002d 	li	t0,45
  41c278:	24636bd0 	addiu	v1,v1,27600
  41c27c:	1000000f 	b	41c2bc <createSelectedInfo+0x488>
  41c280:	a0680000 	sb	t0,0(v1)
  41c284:	8f83806c 	lw	v1,-32660(gp)
  41c288:	24090070 	li	t1,112
  41c28c:	24636bd0 	addiu	v1,v1,27600
  41c290:	1000000a 	b	41c2bc <createSelectedInfo+0x488>
  41c294:	a0690000 	sb	t1,0(v1)
  41c298:	8f83806c 	lw	v1,-32660(gp)
  41c29c:	240a006c 	li	t2,108
  41c2a0:	24636bd0 	addiu	v1,v1,27600
  41c2a4:	10000005 	b	41c2bc <createSelectedInfo+0x488>
  41c2a8:	a06a0000 	sb	t2,0(v1)
  41c2ac:	8f83806c 	lw	v1,-32660(gp)
  41c2b0:	240b0073 	li	t3,115
  41c2b4:	24636bd0 	addiu	v1,v1,27600
  41c2b8:	a06b0000 	sb	t3,0(v1)
  41c2bc:	8f8f8068 	lw	t7,-32664(gp)
  41c2c0:	00066182 	srl	t4,a2,0x6
  41c2c4:	318d0007 	andi	t5,t4,0x7
  41c2c8:	000d7080 	sll	t6,t5,0x2
  41c2cc:	25ef6e34 	addiu	t7,t7,28212
  41c2d0:	8f84806c 	lw	a0,-32660(gp)
  41c2d4:	8f998134 	lw	t9,-32460(gp)
  41c2d8:	01cfc021 	addu	t8,t6,t7
  41c2dc:	8f050000 	lw	a1,0(t8)
  41c2e0:	afa60020 	sw	a2,32(sp)
  41c2e4:	0320f809 	jalr	t9
  41c2e8:	24846bd1 	addiu	a0,a0,27601
  41c2ec:	8fbc0018 	lw	gp,24(sp)
  41c2f0:	8fa60020 	lw	a2,32(sp)
  41c2f4:	8f8a8068 	lw	t2,-32664(gp)
  41c2f8:	0006c8c2 	srl	t9,a2,0x3
  41c2fc:	33280007 	andi	t0,t9,0x7
  41c300:	00084880 	sll	t1,t0,0x2
  41c304:	254a6e34 	addiu	t2,t2,28212
  41c308:	8f998134 	lw	t9,-32460(gp)
  41c30c:	8f84806c 	lw	a0,-32660(gp)
  41c310:	012a5821 	addu	t3,t1,t2
  41c314:	8d650000 	lw	a1,0(t3)
  41c318:	0320f809 	jalr	t9
  41c31c:	24846bd4 	addiu	a0,a0,27604
  41c320:	8fbc0018 	lw	gp,24(sp)
  41c324:	8fa60020 	lw	a2,32(sp)
  41c328:	8f8e8068 	lw	t6,-32664(gp)
  41c32c:	30cc0007 	andi	t4,a2,0x7
  41c330:	000c6880 	sll	t5,t4,0x2
  41c334:	25ce6e34 	addiu	t6,t6,28212
  41c338:	8f84806c 	lw	a0,-32660(gp)
  41c33c:	8f998134 	lw	t9,-32460(gp)
  41c340:	01ae7821 	addu	t7,t5,t6
  41c344:	8de50000 	lw	a1,0(t7)
  41c348:	0320f809 	jalr	t9
  41c34c:	24846bd7 	addiu	a0,a0,27607
  41c350:	8fbc0018 	lw	gp,24(sp)
  41c354:	8fa60020 	lw	a2,32(sp)
  41c358:	8f83806c 	lw	v1,-32660(gp)
  41c35c:	30c20800 	andi	v0,a2,0x800
  41c360:	34590600 	ori	t9,v0,0x600
  41c364:	1320001b 	beqz	t9,41c3d4 <createSelectedInfo+0x5a0>
  41c368:	24636bd0 	addiu	v1,v1,27600
  41c36c:	10400008 	beqz	v0,41c390 <createSelectedInfo+0x55c>
  41c370:	30cb0400 	andi	t3,a2,0x400
  41c374:	30c80040 	andi	t0,a2,0x40
  41c378:	11000004 	beqz	t0,41c38c <createSelectedInfo+0x558>
  41c37c:	240a0053 	li	t2,83
  41c380:	24090073 	li	t1,115
  41c384:	10000002 	b	41c390 <createSelectedInfo+0x55c>
  41c388:	a0690003 	sb	t1,3(v1)
  41c38c:	a06a0003 	sb	t2,3(v1)
  41c390:	11600008 	beqz	t3,41c3b4 <createSelectedInfo+0x580>
  41c394:	30cf0200 	andi	t7,a2,0x200
  41c398:	30cc0008 	andi	t4,a2,0x8
  41c39c:	11800004 	beqz	t4,41c3b0 <createSelectedInfo+0x57c>
  41c3a0:	240e006c 	li	t6,108
  41c3a4:	240d0073 	li	t5,115
  41c3a8:	10000002 	b	41c3b4 <createSelectedInfo+0x580>
  41c3ac:	a06d0006 	sb	t5,6(v1)
  41c3b0:	a06e0006 	sb	t6,6(v1)
  41c3b4:	11e00007 	beqz	t7,41c3d4 <createSelectedInfo+0x5a0>
  41c3b8:	30d80001 	andi	t8,a2,0x1
  41c3bc:	13000004 	beqz	t8,41c3d0 <createSelectedInfo+0x59c>
  41c3c0:	24080054 	li	t0,84
  41c3c4:	24190074 	li	t9,116
  41c3c8:	10000002 	b	41c3d4 <createSelectedInfo+0x5a0>
  41c3cc:	a0790009 	sb	t9,9(v1)
  41c3d0:	a0680009 	sb	t0,9(v1)
  41c3d4:	8fbf001c 	lw	ra,28(sp)
  41c3d8:	27bd0020 	addiu	sp,sp,32
  41c3dc:	03e00008 	jr	ra
  41c3e0:	00601025 	move	v0,v1
