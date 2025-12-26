# Function: FUN_00432370
# Address: 0x00432370 - 0x004324ec
# Size: 0x17c (380 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00432370 <SG_getUnderlayArgs+0x170>:
  432370:	3c1c0fbf 	lui	gp,0xfbf
  432374:	279cb7c0 	addiu	gp,gp,-18496
  432378:	0399e021 	addu	gp,gp,t9
  43237c:	27bdffd8 	addiu	sp,sp,-40
  432380:	afb00014 	sw	s0,20(sp)
  432384:	00e08025 	move	s0,a3
  432388:	afbf001c 	sw	ra,28(sp)
  43238c:	14800003 	bnez	a0,43239c <SG_getUnderlayArgs+0x19c>
  432390:	afbc0018 	sw	gp,24(sp)
  432394:	10000051 	b	4324dc <SG_getUnderlayArgs+0x2dc>
  432398:	2402fffe 	li	v0,-2
  43239c:	14a00003 	bnez	a1,4323ac <SG_getUnderlayArgs+0x1ac>
  4323a0:	00000000 	nop
  4323a4:	8c850084 	lw	a1,132(a0)
  4323a8:	00000000 	nop
  4323ac:	8f998020 	lw	t9,-32736(gp)
  4323b0:	afa40028 	sw	a0,40(sp)
  4323b4:	273925fc 	addiu	t9,t9,9724
  4323b8:	afa5002c 	sw	a1,44(sp)
  4323bc:	0320f809 	jalr	t9
  4323c0:	afa60030 	sw	a2,48(sp)
  4323c4:	8fa70038 	lw	a3,56(sp)
  4323c8:	8fbc0018 	lw	gp,24(sp)
  4323cc:	8fa40028 	lw	a0,40(sp)
  4323d0:	8fa5002c 	lw	a1,44(sp)
  4323d4:	8fa60030 	lw	a2,48(sp)
  4323d8:	14e00003 	bnez	a3,4323e8 <SG_getUnderlayArgs+0x1e8>
  4323dc:	00404025 	move	t0,v0
  4323e0:	8c470024 	lw	a3,36(v0)
  4323e4:	00000000 	nop
  4323e8:	14c0001c 	bnez	a2,43245c <SG_getUnderlayArgs+0x25c>
  4323ec:	00000000 	nop
  4323f0:	8c430024 	lw	v1,36(v0)
  4323f4:	12000007 	beqz	s0,432414 <SG_getUnderlayArgs+0x214>
  4323f8:	00037880 	sll	t7,v1,0x2
  4323fc:	004fc021 	addu	t8,v0,t7
  432400:	8f19003c 	lw	t9,60(t8)
  432404:	8e0e0000 	lw	t6,0(s0)
  432408:	00000000 	nop
  43240c:	15d9000a 	bne	t6,t9,432438 <SG_getUnderlayArgs+0x238>
  432410:	00000000 	nop
  432414:	14e30008 	bne	a3,v1,432438 <SG_getUnderlayArgs+0x238>
  432418:	00055080 	sll	t2,a1,0x2
  43241c:	8c89008c 	lw	t1,140(a0)
  432420:	01455021 	addu	t2,t2,a1
  432424:	000a5100 	sll	t2,t2,0x4
  432428:	012a5821 	addu	t3,t1,t2
  43242c:	8d660024 	lw	a2,36(t3)
  432430:	1000000b 	b	432460 <SG_getUnderlayArgs+0x260>
  432434:	8d040018 	lw	a0,24(t0)
  432438:	8f998800 	lw	t9,-30720(gp)
  43243c:	02003025 	move	a2,s0
  432440:	afa70038 	sw	a3,56(sp)
  432444:	0320f809 	jalr	t9
  432448:	afa80024 	sw	t0,36(sp)
  43244c:	8fbc0018 	lw	gp,24(sp)
  432450:	8fa70038 	lw	a3,56(sp)
  432454:	8fa80024 	lw	t0,36(sp)
  432458:	00403025 	move	a2,v0
  43245c:	8d040018 	lw	a0,24(t0)
  432460:	00001025 	move	v0,zero
  432464:	1880001c 	blez	a0,4324d8 <SG_getUnderlayArgs+0x2d8>
  432468:	00000000 	nop
  43246c:	8d030014 	lw	v1,20(t0)
  432470:	00000000 	nop
  432474:	8c6c000c 	lw	t4,12(v1)
  432478:	00000000 	nop
  43247c:	14cc0012 	bne	a2,t4,4324c8 <SG_getUnderlayArgs+0x2c8>
  432480:	00000000 	nop
  432484:	12000006 	beqz	s0,4324a0 <SG_getUnderlayArgs+0x2a0>
  432488:	00000000 	nop
  43248c:	8c6d0010 	lw	t5,16(v1)
  432490:	8e0f0000 	lw	t7,0(s0)
  432494:	00000000 	nop
  432498:	15af000b 	bne	t5,t7,4324c8 <SG_getUnderlayArgs+0x2c8>
  43249c:	00000000 	nop
  4324a0:	8d180020 	lw	t8,32(t0)
  4324a4:	00027080 	sll	t6,v0,0x2
  4324a8:	030ec821 	addu	t9,t8,t6
  4324ac:	8f290000 	lw	t1,0(t9)
  4324b0:	00000000 	nop
  4324b4:	14e90005 	bne	a3,t1,4324cc <SG_getUnderlayArgs+0x2cc>
  4324b8:	24420001 	addiu	v0,v0,1
  4324bc:	8c620000 	lw	v0,0(v1)
  4324c0:	10000007 	b	4324e0 <SG_getUnderlayArgs+0x2e0>
  4324c4:	8fbf001c 	lw	ra,28(sp)
  4324c8:	24420001 	addiu	v0,v0,1
  4324cc:	0044082a 	slt	at,v0,a0
  4324d0:	1420ffe8 	bnez	at,432474 <SG_getUnderlayArgs+0x274>
  4324d4:	24630028 	addiu	v1,v1,40
  4324d8:	2402ffff 	li	v0,-1
  4324dc:	8fbf001c 	lw	ra,28(sp)
  4324e0:	8fb00014 	lw	s0,20(sp)
  4324e4:	03e00008 	jr	ra
  4324e8:	27bd0028 	addiu	sp,sp,40
