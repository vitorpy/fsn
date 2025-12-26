# Function: restorePosition
# Address: 0x0042e3b0 - 0x0042e5b8
# Size: 0x208 (520 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042e3b0 <restorePosition>:
  42e3b0:	3c1c0fbf 	lui	gp,0xfbf
  42e3b4:	279cf780 	addiu	gp,gp,-2176
  42e3b8:	0399e021 	addu	gp,gp,t9
  42e3bc:	27bdffa8 	addiu	sp,sp,-88
  42e3c0:	8f83897c 	lw	v1,-30340(gp)
  42e3c4:	27b90040 	addiu	t9,sp,64
  42e3c8:	8c690000 	lw	t1,0(v1)
  42e3cc:	afb9001c 	sw	t9,28(sp)
  42e3d0:	8f9987bc 	lw	t9,-30788(gp)
  42e3d4:	afbf0034 	sw	ra,52(sp)
  42e3d8:	27ae004c 	addiu	t6,sp,76
  42e3dc:	27af0048 	addiu	t7,sp,72
  42e3e0:	27b80044 	addiu	t8,sp,68
  42e3e4:	27a8003c 	addiu	t0,sp,60
  42e3e8:	252a0c50 	addiu	t2,t1,3152
  42e3ec:	afbc0030 	sw	gp,48(sp)
  42e3f0:	afaa0024 	sw	t2,36(sp)
  42e3f4:	afa80020 	sw	t0,32(sp)
  42e3f8:	afb80018 	sw	t8,24(sp)
  42e3fc:	afaf0014 	sw	t7,20(sp)
  42e400:	afae0010 	sw	t6,16(sp)
  42e404:	27a50056 	addiu	a1,sp,86
  42e408:	27a60054 	addiu	a2,sp,84
  42e40c:	0320f809 	jalr	t9
  42e410:	27a70050 	addiu	a3,sp,80
  42e414:	8fbc0030 	lw	gp,48(sp)
  42e418:	87ab0056 	lh	t3,86(sp)
  42e41c:	8f83897c 	lw	v1,-30340(gp)
  42e420:	00000000 	nop
  42e424:	8c620000 	lw	v0,0(v1)
  42e428:	00000000 	nop
  42e42c:	844c000c 	lh	t4,12(v0)
  42e430:	00000000 	nop
  42e434:	116c000d 	beq	t3,t4,42e46c <restorePosition+0xbc>
  42e438:	87ad0054 	lh	t5,84(sp)
  42e43c:	a44b000c 	sh	t3,12(v0)
  42e440:	8f998528 	lw	t9,-31448(gp)
  42e444:	00000000 	nop
  42e448:	0320f809 	jalr	t9
  42e44c:	00000000 	nop
  42e450:	8fbc0030 	lw	gp,48(sp)
  42e454:	00000000 	nop
  42e458:	8f83897c 	lw	v1,-30340(gp)
  42e45c:	00000000 	nop
  42e460:	8c620000 	lw	v0,0(v1)
  42e464:	00000000 	nop
  42e468:	87ad0054 	lh	t5,84(sp)
  42e46c:	844e000e 	lh	t6,14(v0)
  42e470:	00000000 	nop
  42e474:	11ae000c 	beq	t5,t6,42e4a8 <restorePosition+0xf8>
  42e478:	00000000 	nop
  42e47c:	a44d000e 	sh	t5,14(v0)
  42e480:	8f99852c 	lw	t9,-31444(gp)
  42e484:	00000000 	nop
  42e488:	0320f809 	jalr	t9
  42e48c:	00000000 	nop
  42e490:	8fbc0030 	lw	gp,48(sp)
  42e494:	00000000 	nop
  42e498:	8f83897c 	lw	v1,-30340(gp)
  42e49c:	00000000 	nop
  42e4a0:	8c620000 	lw	v0,0(v1)
  42e4a4:	00000000 	nop
  42e4a8:	c7a40050 	lwc1	$f4,80(sp)
  42e4ac:	00000000 	nop
  42e4b0:	e4440000 	swc1	$f4,0(v0)
  42e4b4:	8c6f0000 	lw	t7,0(v1)
  42e4b8:	c7a6004c 	lwc1	$f6,76(sp)
  42e4bc:	00000000 	nop
  42e4c0:	e5e60004 	swc1	$f6,4(t7)
  42e4c4:	8c780000 	lw	t8,0(v1)
  42e4c8:	c7a80048 	lwc1	$f8,72(sp)
  42e4cc:	00000000 	nop
  42e4d0:	e7080008 	swc1	$f8,8(t8)
  42e4d4:	8c680000 	lw	t0,0(v1)
  42e4d8:	8fb90044 	lw	t9,68(sp)
  42e4dc:	00000000 	nop
  42e4e0:	ad19003c 	sw	t9,60(t0)
  42e4e4:	8c620000 	lw	v0,0(v1)
  42e4e8:	8fa90040 	lw	t1,64(sp)
  42e4ec:	8c4a0044 	lw	t2,68(v0)
  42e4f0:	00000000 	nop
  42e4f4:	112a0019 	beq	t1,t2,42e55c <restorePosition+0x1ac>
  42e4f8:	8fac003c 	lw	t4,60(sp)
  42e4fc:	1120000c 	beqz	t1,42e530 <restorePosition+0x180>
  42e500:	01202025 	move	a0,t1
  42e504:	8f99863c 	lw	t9,-31172(gp)
  42e508:	00000000 	nop
  42e50c:	0320f809 	jalr	t9
  42e510:	00000000 	nop
  42e514:	8fbc0030 	lw	gp,48(sp)
  42e518:	00000000 	nop
  42e51c:	8f82897c 	lw	v0,-30340(gp)
  42e520:	00000000 	nop
  42e524:	8c420000 	lw	v0,0(v0)
  42e528:	1000000c 	b	42e55c <restorePosition+0x1ac>
  42e52c:	8fac003c 	lw	t4,60(sp)
  42e530:	8f998638 	lw	t9,-31176(gp)
  42e534:	00000000 	nop
  42e538:	0320f809 	jalr	t9
  42e53c:	00000000 	nop
  42e540:	8fbc0030 	lw	gp,48(sp)
  42e544:	00000000 	nop
  42e548:	8f82897c 	lw	v0,-30340(gp)
  42e54c:	00000000 	nop
  42e550:	8c420000 	lw	v0,0(v0)
  42e554:	00000000 	nop
  42e558:	8fac003c 	lw	t4,60(sp)
  42e55c:	8c4b0048 	lw	t3,72(v0)
  42e560:	00000000 	nop
  42e564:	118b0011 	beq	t4,t3,42e5ac <restorePosition+0x1fc>
  42e568:	8fbf0034 	lw	ra,52(sp)
  42e56c:	11800008 	beqz	t4,42e590 <restorePosition+0x1e0>
  42e570:	01802025 	move	a0,t4
  42e574:	8f998644 	lw	t9,-31164(gp)
  42e578:	00000000 	nop
  42e57c:	0320f809 	jalr	t9
  42e580:	00000000 	nop
  42e584:	8fbc0030 	lw	gp,48(sp)
  42e588:	10000008 	b	42e5ac <restorePosition+0x1fc>
  42e58c:	8fbf0034 	lw	ra,52(sp)
  42e590:	8f998640 	lw	t9,-31168(gp)
  42e594:	00000000 	nop
  42e598:	0320f809 	jalr	t9
  42e59c:	00000000 	nop
  42e5a0:	8fbc0030 	lw	gp,48(sp)
  42e5a4:	00000000 	nop
  42e5a8:	8fbf0034 	lw	ra,52(sp)
  42e5ac:	27bd0058 	addiu	sp,sp,88
  42e5b0:	03e00008 	jr	ra
  42e5b4:	00000000 	nop
