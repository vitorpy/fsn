# Function: FUN_0040f42c
# Address: 0x0040f42c - 0x0040f668
# Size: 0x23c (572 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040f42c <activeWorkProc+0x248>:
  40f42c:	3c1c0fc1 	lui	gp,0xfc1
  40f430:	279ce704 	addiu	gp,gp,-6396
  40f434:	0399e021 	addu	gp,gp,t9
  40f438:	27bdffe0 	addiu	sp,sp,-32
  40f43c:	8f998778 	lw	t9,-30856(gp)
  40f440:	afbf001c 	sw	ra,28(sp)
  40f444:	afa50024 	sw	a1,36(sp)
  40f448:	afbc0018 	sw	gp,24(sp)
  40f44c:	afa60028 	sw	a2,40(sp)
  40f450:	afa7002c 	sw	a3,44(sp)
  40f454:	0320f809 	jalr	t9
  40f458:	00002825 	move	a1,zero
  40f45c:	8fbc0018 	lw	gp,24(sp)
  40f460:	00000000 	nop
  40f464:	8f99854c 	lw	t9,-31412(gp)
  40f468:	00000000 	nop
  40f46c:	0320f809 	jalr	t9
  40f470:	00000000 	nop
  40f474:	8fbc0018 	lw	gp,24(sp)
  40f478:	8fa40024 	lw	a0,36(sp)
  40f47c:	8f998018 	lw	t9,-32744(gp)
  40f480:	8f858068 	lw	a1,-32664(gp)
  40f484:	8f868068 	lw	a2,-32664(gp)
  40f488:	2739f080 	addiu	t9,t9,-3968
  40f48c:	24a50158 	addiu	a1,a1,344
  40f490:	0320f809 	jalr	t9
  40f494:	24c6015c 	addiu	a2,a2,348
  40f498:	8fbc0018 	lw	gp,24(sp)
  40f49c:	00000000 	nop
  40f4a0:	8f998744 	lw	t9,-30908(gp)
  40f4a4:	00000000 	nop
  40f4a8:	0320f809 	jalr	t9
  40f4ac:	00000000 	nop
  40f4b0:	8fbc0018 	lw	gp,24(sp)
  40f4b4:	00000000 	nop
  40f4b8:	8f998520 	lw	t9,-31456(gp)
  40f4bc:	00000000 	nop
  40f4c0:	0320f809 	jalr	t9
  40f4c4:	00000000 	nop
  40f4c8:	8fbc0018 	lw	gp,24(sp)
  40f4cc:	00000000 	nop
  40f4d0:	8f9984b8 	lw	t9,-31560(gp)
  40f4d4:	00000000 	nop
  40f4d8:	0320f809 	jalr	t9
  40f4dc:	00000000 	nop
  40f4e0:	8fbc0018 	lw	gp,24(sp)
  40f4e4:	44806000 	mtc1	zero,$f12
  40f4e8:	8f82897c 	lw	v0,-30340(gp)
  40f4ec:	8f998488 	lw	t9,-31608(gp)
  40f4f0:	8c420000 	lw	v0,0(v0)
  40f4f4:	44066000 	mfc1	a2,$f12
  40f4f8:	8c4f0030 	lw	t7,48(v0)
  40f4fc:	8c4e002c 	lw	t6,44(v0)
  40f500:	448f3000 	mtc1	t7,$f6
  40f504:	448e2000 	mtc1	t6,$f4
  40f508:	468031a0 	cvt.s.w	$f6,$f6
  40f50c:	44073000 	mfc1	a3,$f6
  40f510:	0320f809 	jalr	t9
  40f514:	468023a0 	cvt.s.w	$f14,$f4
  40f518:	8fbc0018 	lw	gp,24(sp)
  40f51c:	00000000 	nop
  40f520:	8f8489fc 	lw	a0,-30212(gp)
  40f524:	8f998304 	lw	t9,-31996(gp)
  40f528:	94840002 	lhu	a0,2(a0)
  40f52c:	0320f809 	jalr	t9
  40f530:	00000000 	nop
  40f534:	8fbc0018 	lw	gp,24(sp)
  40f538:	8fb80024 	lw	t8,36(sp)
  40f53c:	8f88897c 	lw	t0,-30340(gp)
  40f540:	8f190020 	lw	t9,32(t8)
  40f544:	8d080000 	lw	t0,0(t0)
  40f548:	8f0a0024 	lw	t2,36(t8)
  40f54c:	8d090030 	lw	t1,48(t0)
  40f550:	44994000 	mtc1	t9,$f8
  40f554:	012a5823 	subu	t3,t1,t2
  40f558:	448b5000 	mtc1	t3,$f10
  40f55c:	8f9984a0 	lw	t9,-31584(gp)
  40f560:	24060000 	li	a2,0
  40f564:	46804320 	cvt.s.w	$f12,$f8
  40f568:	0320f809 	jalr	t9
  40f56c:	468053a0 	cvt.s.w	$f14,$f10
  40f570:	8fbc0018 	lw	gp,24(sp)
  40f574:	00000000 	nop
  40f578:	8f998484 	lw	t9,-31612(gp)
  40f57c:	00000000 	nop
  40f580:	0320f809 	jalr	t9
  40f584:	00000000 	nop
  40f588:	8fbc0018 	lw	gp,24(sp)
  40f58c:	00000000 	nop
  40f590:	8f848068 	lw	a0,-32664(gp)
  40f594:	8f998480 	lw	t9,-31616(gp)
  40f598:	24840160 	addiu	a0,a0,352
  40f59c:	0320f809 	jalr	t9
  40f5a0:	00000000 	nop
  40f5a4:	8fbc0018 	lw	gp,24(sp)
  40f5a8:	00000000 	nop
  40f5ac:	8f848068 	lw	a0,-32664(gp)
  40f5b0:	8f998480 	lw	t9,-31616(gp)
  40f5b4:	24840164 	addiu	a0,a0,356
  40f5b8:	0320f809 	jalr	t9
  40f5bc:	00000000 	nop
  40f5c0:	8fbc0018 	lw	gp,24(sp)
  40f5c4:	00000000 	nop
  40f5c8:	8f99846c 	lw	t9,-31636(gp)
  40f5cc:	00000000 	nop
  40f5d0:	0320f809 	jalr	t9
  40f5d4:	00000000 	nop
  40f5d8:	8fbc0018 	lw	gp,24(sp)
  40f5dc:	00000000 	nop
  40f5e0:	8f998484 	lw	t9,-31612(gp)
  40f5e4:	00000000 	nop
  40f5e8:	0320f809 	jalr	t9
  40f5ec:	00000000 	nop
  40f5f0:	8fbc0018 	lw	gp,24(sp)
  40f5f4:	00000000 	nop
  40f5f8:	8f848068 	lw	a0,-32664(gp)
  40f5fc:	8f998480 	lw	t9,-31616(gp)
  40f600:	24840168 	addiu	a0,a0,360
  40f604:	0320f809 	jalr	t9
  40f608:	00000000 	nop
  40f60c:	8fbc0018 	lw	gp,24(sp)
  40f610:	00000000 	nop
  40f614:	8f848068 	lw	a0,-32664(gp)
  40f618:	8f998480 	lw	t9,-31616(gp)
  40f61c:	2484016c 	addiu	a0,a0,364
  40f620:	0320f809 	jalr	t9
  40f624:	00000000 	nop
  40f628:	8fbc0018 	lw	gp,24(sp)
  40f62c:	00000000 	nop
  40f630:	8f99846c 	lw	t9,-31636(gp)
  40f634:	00000000 	nop
  40f638:	0320f809 	jalr	t9
  40f63c:	00000000 	nop
  40f640:	8fbc0018 	lw	gp,24(sp)
  40f644:	00000000 	nop
  40f648:	8f9984d8 	lw	t9,-31528(gp)
  40f64c:	00000000 	nop
  40f650:	0320f809 	jalr	t9
  40f654:	00000000 	nop
  40f658:	8fbf001c 	lw	ra,28(sp)
  40f65c:	8fbc0018 	lw	gp,24(sp)
  40f660:	03e00008 	jr	ra
  40f664:	27bd0020 	addiu	sp,sp,32
