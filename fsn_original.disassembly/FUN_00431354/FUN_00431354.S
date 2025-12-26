# Function: FUN_00431354
# Address: 0x00431354 - 0x004314d4
# Size: 0x180 (384 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431354 <SG_getDefaultColormap+0xc>:
  431354:	27bdffd0 	addiu	sp,sp,-48
  431358:	afb00014 	sw	s0,20(sp)
  43135c:	00808025 	move	s0,a0
  431360:	afbf001c 	sw	ra,28(sp)
  431364:	14800003 	bnez	a0,431374 <SG_getDefaultColormap+0x2c>
  431368:	afbc0018 	sw	gp,24(sp)
  43136c:	10000055 	b	4314c4 <SG_getDefaultColormap+0x17c>
  431370:	2402fffe 	li	v0,-2
  431374:	14a00003 	bnez	a1,431384 <SG_getDefaultColormap+0x3c>
  431378:	02002025 	move	a0,s0
  43137c:	8e050084 	lw	a1,132(s0)
  431380:	00000000 	nop
  431384:	14c00008 	bnez	a2,4313a8 <SG_getDefaultColormap+0x60>
  431388:	00054880 	sll	t1,a1,0x2
  43138c:	00057880 	sll	t7,a1,0x2
  431390:	8e0e008c 	lw	t6,140(s0)
  431394:	01e57821 	addu	t7,t7,a1
  431398:	000f7900 	sll	t7,t7,0x4
  43139c:	01cfc021 	addu	t8,t6,t7
  4313a0:	8f060028 	lw	a2,40(t8)
  4313a4:	00000000 	nop
  4313a8:	8e19008c 	lw	t9,140(s0)
  4313ac:	01254821 	addu	t1,t1,a1
  4313b0:	00094900 	sll	t1,t1,0x4
  4313b4:	03291821 	addu	v1,t9,t1
  4313b8:	8c6a0028 	lw	t2,40(v1)
  4313bc:	00000000 	nop
  4313c0:	14ca0004 	bne	a2,t2,4313d4 <SG_getDefaultColormap+0x8c>
  4313c4:	00000000 	nop
  4313c8:	8c620030 	lw	v0,48(v1)
  4313cc:	1000003e 	b	4314c8 <SG_getDefaultColormap+0x180>
  4313d0:	8fbf001c 	lw	ra,28(sp)
  4313d4:	8f998020 	lw	t9,-32736(gp)
  4313d8:	afa60038 	sw	a2,56(sp)
  4313dc:	273925fc 	addiu	t9,t9,9724
  4313e0:	0320f809 	jalr	t9
  4313e4:	afa90024 	sw	t1,36(sp)
  4313e8:	8c4b0018 	lw	t3,24(v0)
  4313ec:	8fbc0018 	lw	gp,24(sp)
  4313f0:	8fa60038 	lw	a2,56(sp)
  4313f4:	8fa90024 	lw	t1,36(sp)
  4313f8:	00404025 	move	t0,v0
  4313fc:	19600028 	blez	t3,4314a0 <SG_getDefaultColormap+0x158>
  431400:	00002025 	move	a0,zero
  431404:	8c430014 	lw	v1,20(v0)
  431408:	00003825 	move	a3,zero
  43140c:	8c6c0000 	lw	t4,0(v1)
  431410:	00000000 	nop
  431414:	10cc0004 	beq	a2,t4,431428 <SG_getDefaultColormap+0xe0>
  431418:	00000000 	nop
  43141c:	8d050018 	lw	a1,24(t0)
  431420:	1000001c 	b	431494 <SG_getDefaultColormap+0x14c>
  431424:	24840001 	addiu	a0,a0,1
  431428:	8c4d001c 	lw	t5,28(v0)
  43142c:	00041880 	sll	v1,a0,0x2
  431430:	01a37021 	addu	t6,t5,v1
  431434:	8dcf0000 	lw	t7,0(t6)
  431438:	00000000 	nop
  43143c:	15e0000f 	bnez	t7,43147c <SG_getDefaultColormap+0x134>
  431440:	00000000 	nop
  431444:	8e18008c 	lw	t8,140(s0)
  431448:	02002025 	move	a0,s0
  43144c:	0309c821 	addu	t9,t8,t1
  431450:	8f250008 	lw	a1,8(t9)
  431454:	8f9982b8 	lw	t9,-32072(gp)
  431458:	afa8002c 	sw	t0,44(sp)
  43145c:	0320f809 	jalr	t9
  431460:	afa30020 	sw	v1,32(sp)
  431464:	8fa8002c 	lw	t0,44(sp)
  431468:	8fa30020 	lw	v1,32(sp)
  43146c:	8d0a001c 	lw	t2,28(t0)
  431470:	8fbc0018 	lw	gp,24(sp)
  431474:	01435821 	addu	t3,t2,v1
  431478:	ad620000 	sw	v0,0(t3)
  43147c:	8d0c001c 	lw	t4,28(t0)
  431480:	00000000 	nop
  431484:	01836821 	addu	t5,t4,v1
  431488:	8da20000 	lw	v0,0(t5)
  43148c:	1000000e 	b	4314c8 <SG_getDefaultColormap+0x180>
  431490:	8fbf001c 	lw	ra,28(sp)
  431494:	0085082a 	slt	at,a0,a1
  431498:	1420ffdc 	bnez	at,43140c <SG_getDefaultColormap+0xc4>
  43149c:	24630028 	addiu	v1,v1,40
  4314a0:	8e0e008c 	lw	t6,140(s0)
  4314a4:	8f9982b8 	lw	t9,-32072(gp)
  4314a8:	01c97821 	addu	t7,t6,t1
  4314ac:	8de50008 	lw	a1,8(t7)
  4314b0:	02002025 	move	a0,s0
  4314b4:	0320f809 	jalr	t9
  4314b8:	00003825 	move	a3,zero
  4314bc:	8fbc0018 	lw	gp,24(sp)
  4314c0:	00000000 	nop
  4314c4:	8fbf001c 	lw	ra,28(sp)
  4314c8:	8fb00014 	lw	s0,20(sp)
  4314cc:	03e00008 	jr	ra
  4314d0:	27bd0030 	addiu	sp,sp,48
