# Function: overviewPickPointer
# Address: 0x004213bc - 0x0042151c
# Size: 0x160 (352 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004213bc <overviewPickPointer>:
  4213bc:	3c1c0fc0 	lui	gp,0xfc0
  4213c0:	279cc774 	addiu	gp,gp,-14476
  4213c4:	0399e021 	addu	gp,gp,t9
  4213c8:	8f998230 	lw	t9,-32208(gp)
  4213cc:	27bdfbe0 	addiu	sp,sp,-1056
  4213d0:	afbf001c 	sw	ra,28(sp)
  4213d4:	afbc0018 	sw	gp,24(sp)
  4213d8:	afb00014 	sw	s0,20(sp)
  4213dc:	24040002 	li	a0,2
  4213e0:	0320f809 	jalr	t9
  4213e4:	24050002 	li	a1,2
  4213e8:	8fbc0018 	lw	gp,24(sp)
  4213ec:	00000000 	nop
  4213f0:	8f9984b8 	lw	t9,-31560(gp)
  4213f4:	00000000 	nop
  4213f8:	0320f809 	jalr	t9
  4213fc:	00000000 	nop
  421400:	8fbc0018 	lw	gp,24(sp)
  421404:	00000000 	nop
  421408:	8f998220 	lw	t9,-32224(gp)
  42140c:	00000000 	nop
  421410:	0320f809 	jalr	t9
  421414:	00000000 	nop
  421418:	8fbc0018 	lw	gp,24(sp)
  42141c:	27b00038 	addiu	s0,sp,56
  421420:	8f99822c 	lw	t9,-32212(gp)
  421424:	02002025 	move	a0,s0
  421428:	0320f809 	jalr	t9
  42142c:	240501f4 	li	a1,500
  421430:	8fbc0018 	lw	gp,24(sp)
  421434:	00000000 	nop
  421438:	8f818a2c 	lw	at,-30164(gp)
  42143c:	8f868a34 	lw	a2,-30156(gp)
  421440:	c42c0000 	lwc1	$f12,0(at)
  421444:	8f818a30 	lw	at,-30160(gp)
  421448:	8f878a38 	lw	a3,-30152(gp)
  42144c:	8f998488 	lw	t9,-31608(gp)
  421450:	8cc60000 	lw	a2,0(a2)
  421454:	c42e0000 	lwc1	$f14,0(at)
  421458:	8ce70000 	lw	a3,0(a3)
  42145c:	0320f809 	jalr	t9
  421460:	00000000 	nop
  421464:	8fbc0018 	lw	gp,24(sp)
  421468:	24050001 	li	a1,1
  42146c:	8f84892c 	lw	a0,-30420(gp)
  421470:	8f998670 	lw	t9,-31120(gp)
  421474:	8c840000 	lw	a0,0(a0)
  421478:	0320f809 	jalr	t9
  42147c:	00000000 	nop
  421480:	8fbc0018 	lw	gp,24(sp)
  421484:	02002025 	move	a0,s0
  421488:	8f998228 	lw	t9,-32216(gp)
  42148c:	00000000 	nop
  421490:	0320f809 	jalr	t9
  421494:	00000000 	nop
  421498:	8fbc0018 	lw	gp,24(sp)
  42149c:	afa20034 	sw	v0,52(sp)
  4214a0:	8f9984d8 	lw	t9,-31528(gp)
  4214a4:	00000000 	nop
  4214a8:	0320f809 	jalr	t9
  4214ac:	00000000 	nop
  4214b0:	8fa60034 	lw	a2,52(sp)
  4214b4:	8fbc0018 	lw	gp,24(sp)
  4214b8:	00001025 	move	v0,zero
  4214bc:	18c00012 	blez	a2,421508 <overviewPickPointer+0x14c>
  4214c0:	00002025 	move	a0,zero
  4214c4:	24070001 	li	a3,1
  4214c8:	00027040 	sll	t6,v0,0x1
  4214cc:	020e1821 	addu	v1,s0,t6
  4214d0:	84650000 	lh	a1,0(v1)
  4214d4:	24630002 	addiu	v1,v1,2
  4214d8:	14a70008 	bne	a1,a3,4214fc <overviewPickPointer+0x140>
  4214dc:	24420001 	addiu	v0,v0,1
  4214e0:	8f998584 	lw	t9,-31356(gp)
  4214e4:	84640000 	lh	a0,0(v1)
  4214e8:	0320f809 	jalr	t9
  4214ec:	00000000 	nop
  4214f0:	8fbc0018 	lw	gp,24(sp)
  4214f4:	10000006 	b	421510 <overviewPickPointer+0x154>
  4214f8:	8fbf001c 	lw	ra,28(sp)
  4214fc:	24840001 	addiu	a0,a0,1
  421500:	1486fff1 	bne	a0,a2,4214c8 <overviewPickPointer+0x10c>
  421504:	00451021 	addu	v0,v0,a1
  421508:	00001025 	move	v0,zero
  42150c:	8fbf001c 	lw	ra,28(sp)
  421510:	8fb00014 	lw	s0,20(sp)
  421514:	03e00008 	jr	ra
  421518:	27bd0420 	addiu	sp,sp,1056
