# Function: FUN_0040d3cc
# Address: 0x0040d3cc - 0x0040d7f8
# Size: 0x42c (1068 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040d3cc <reset_eye+0x2f4>:
  40d3cc:	3c1c0fc1 	lui	gp,0xfc1
  40d3d0:	279c0764 	addiu	gp,gp,1892
  40d3d4:	0399e021 	addu	gp,gp,t9
  40d3d8:	27bdffc0 	addiu	sp,sp,-64
  40d3dc:	afb1001c 	sw	s1,28(sp)
  40d3e0:	00a08825 	move	s1,a1
  40d3e4:	8f85805c 	lw	a1,-32676(gp)
  40d3e8:	8f998508 	lw	t9,-31480(gp)
  40d3ec:	afbf0024 	sw	ra,36(sp)
  40d3f0:	00c03825 	move	a3,a2
  40d3f4:	afbc0020 	sw	gp,32(sp)
  40d3f8:	afb00018 	sw	s0,24(sp)
  40d3fc:	02203025 	move	a2,s1
  40d400:	0320f809 	jalr	t9
  40d404:	24a5a444 	addiu	a1,a1,-23484
  40d408:	8fbc0020 	lw	gp,32(sp)
  40d40c:	00408025 	move	s0,v0
  40d410:	8f998388 	lw	t9,-31864(gp)
  40d414:	00402025 	move	a0,v0
  40d418:	0320f809 	jalr	t9
  40d41c:	00000000 	nop
  40d420:	8fbc0020 	lw	gp,32(sp)
  40d424:	02002025 	move	a0,s0
  40d428:	8f9987a4 	lw	t9,-30812(gp)
  40d42c:	8f8589c4 	lw	a1,-30268(gp)
  40d430:	0320f809 	jalr	t9
  40d434:	00000000 	nop
  40d438:	8fbc0020 	lw	gp,32(sp)
  40d43c:	02002025 	move	a0,s0
  40d440:	8f85805c 	lw	a1,-32676(gp)
  40d444:	8f9984e0 	lw	t9,-31520(gp)
  40d448:	02203025 	move	a2,s1
  40d44c:	00003825 	move	a3,zero
  40d450:	0320f809 	jalr	t9
  40d454:	24a5a450 	addiu	a1,a1,-23472
  40d458:	8fbc0020 	lw	gp,32(sp)
  40d45c:	afa20038 	sw	v0,56(sp)
  40d460:	8f998388 	lw	t9,-31864(gp)
  40d464:	00402025 	move	a0,v0
  40d468:	0320f809 	jalr	t9
  40d46c:	00000000 	nop
  40d470:	8fbc0020 	lw	gp,32(sp)
  40d474:	8fa40038 	lw	a0,56(sp)
  40d478:	8f8580a0 	lw	a1,-32608(gp)
  40d47c:	8f9983ac 	lw	t9,-31828(gp)
  40d480:	8f868540 	lw	a2,-31424(gp)
  40d484:	00003825 	move	a3,zero
  40d488:	0320f809 	jalr	t9
  40d48c:	24a5124b 	addiu	a1,a1,4683
  40d490:	8fbc0020 	lw	gp,32(sp)
  40d494:	02002025 	move	a0,s0
  40d498:	8f85805c 	lw	a1,-32676(gp)
  40d49c:	8f9984e0 	lw	t9,-31520(gp)
  40d4a0:	02203025 	move	a2,s1
  40d4a4:	00003825 	move	a3,zero
  40d4a8:	0320f809 	jalr	t9
  40d4ac:	24a5a458 	addiu	a1,a1,-23464
  40d4b0:	8fbc0020 	lw	gp,32(sp)
  40d4b4:	afa20038 	sw	v0,56(sp)
  40d4b8:	8f998388 	lw	t9,-31864(gp)
  40d4bc:	00402025 	move	a0,v0
  40d4c0:	0320f809 	jalr	t9
  40d4c4:	00000000 	nop
  40d4c8:	8fbc0020 	lw	gp,32(sp)
  40d4cc:	8fa40038 	lw	a0,56(sp)
  40d4d0:	8f8580a0 	lw	a1,-32608(gp)
  40d4d4:	8f868018 	lw	a2,-32744(gp)
  40d4d8:	8f9983ac 	lw	t9,-31828(gp)
  40d4dc:	00003825 	move	a3,zero
  40d4e0:	24a5124b 	addiu	a1,a1,4683
  40d4e4:	0320f809 	jalr	t9
  40d4e8:	24c6069c 	addiu	a2,a2,1692
  40d4ec:	8fbc0020 	lw	gp,32(sp)
  40d4f0:	02002025 	move	a0,s0
  40d4f4:	8f85805c 	lw	a1,-32676(gp)
  40d4f8:	8f9984e0 	lw	t9,-31520(gp)
  40d4fc:	02203025 	move	a2,s1
  40d500:	00003825 	move	a3,zero
  40d504:	0320f809 	jalr	t9
  40d508:	24a5a460 	addiu	a1,a1,-23456
  40d50c:	8fbc0020 	lw	gp,32(sp)
  40d510:	afa20038 	sw	v0,56(sp)
  40d514:	8f998388 	lw	t9,-31864(gp)
  40d518:	00402025 	move	a0,v0
  40d51c:	0320f809 	jalr	t9
  40d520:	00000000 	nop
  40d524:	8fbc0020 	lw	gp,32(sp)
  40d528:	8fa40038 	lw	a0,56(sp)
  40d52c:	8f8580a0 	lw	a1,-32608(gp)
  40d530:	8f868018 	lw	a2,-32744(gp)
  40d534:	8f9983ac 	lw	t9,-31828(gp)
  40d538:	00003825 	move	a3,zero
  40d53c:	24a5124b 	addiu	a1,a1,4683
  40d540:	0320f809 	jalr	t9
  40d544:	24c6d15c 	addiu	a2,a2,-11940
  40d548:	8fbc0020 	lw	gp,32(sp)
  40d54c:	02002025 	move	a0,s0
  40d550:	8f85805c 	lw	a1,-32676(gp)
  40d554:	8f9984e0 	lw	t9,-31520(gp)
  40d558:	02203025 	move	a2,s1
  40d55c:	00003825 	move	a3,zero
  40d560:	0320f809 	jalr	t9
  40d564:	24a5a464 	addiu	a1,a1,-23452
  40d568:	8fbc0020 	lw	gp,32(sp)
  40d56c:	afa20038 	sw	v0,56(sp)
  40d570:	8f998388 	lw	t9,-31864(gp)
  40d574:	00402025 	move	a0,v0
  40d578:	0320f809 	jalr	t9
  40d57c:	00000000 	nop
  40d580:	8fbc0020 	lw	gp,32(sp)
  40d584:	8fa40038 	lw	a0,56(sp)
  40d588:	8f8580a0 	lw	a1,-32608(gp)
  40d58c:	8f868018 	lw	a2,-32744(gp)
  40d590:	8f9983ac 	lw	t9,-31828(gp)
  40d594:	00003825 	move	a3,zero
  40d598:	24a5124b 	addiu	a1,a1,4683
  40d59c:	0320f809 	jalr	t9
  40d5a0:	24c6d2cc 	addiu	a2,a2,-11572
  40d5a4:	8fbc0020 	lw	gp,32(sp)
  40d5a8:	02002025 	move	a0,s0
  40d5ac:	8f85805c 	lw	a1,-32676(gp)
  40d5b0:	8f9984fc 	lw	t9,-31492(gp)
  40d5b4:	02203025 	move	a2,s1
  40d5b8:	00003825 	move	a3,zero
  40d5bc:	0320f809 	jalr	t9
  40d5c0:	24a5a46c 	addiu	a1,a1,-23444
  40d5c4:	8fbc0020 	lw	gp,32(sp)
  40d5c8:	00402025 	move	a0,v0
  40d5cc:	8f998388 	lw	t9,-31864(gp)
  40d5d0:	00000000 	nop
  40d5d4:	0320f809 	jalr	t9
  40d5d8:	00000000 	nop
  40d5dc:	8fbc0020 	lw	gp,32(sp)
  40d5e0:	02002025 	move	a0,s0
  40d5e4:	8f85805c 	lw	a1,-32676(gp)
  40d5e8:	8f998508 	lw	t9,-31480(gp)
  40d5ec:	02203025 	move	a2,s1
  40d5f0:	00003825 	move	a3,zero
  40d5f4:	0320f809 	jalr	t9
  40d5f8:	24a5a478 	addiu	a1,a1,-23432
  40d5fc:	8fbc0020 	lw	gp,32(sp)
  40d600:	afa20034 	sw	v0,52(sp)
  40d604:	8f998388 	lw	t9,-31864(gp)
  40d608:	00402025 	move	a0,v0
  40d60c:	0320f809 	jalr	t9
  40d610:	00000000 	nop
  40d614:	8fbc0020 	lw	gp,32(sp)
  40d618:	8fa40034 	lw	a0,52(sp)
  40d61c:	8f85805c 	lw	a1,-32676(gp)
  40d620:	8f9984e4 	lw	t9,-31516(gp)
  40d624:	02203025 	move	a2,s1
  40d628:	00003825 	move	a3,zero
  40d62c:	0320f809 	jalr	t9
  40d630:	24a5a488 	addiu	a1,a1,-23416
  40d634:	8fbc0020 	lw	gp,32(sp)
  40d638:	00402025 	move	a0,v0
  40d63c:	8f83806c 	lw	v1,-32660(gp)
  40d640:	8f868018 	lw	a2,-32744(gp)
  40d644:	24636640 	addiu	v1,v1,26176
  40d648:	ac620000 	sw	v0,0(v1)
  40d64c:	8f9983ac 	lw	t9,-31828(gp)
  40d650:	8f8580a0 	lw	a1,-32608(gp)
  40d654:	24c6d9a8 	addiu	a2,a2,-9816
  40d658:	afa6002c 	sw	a2,44(sp)
  40d65c:	00003825 	move	a3,zero
  40d660:	0320f809 	jalr	t9
  40d664:	24a5293d 	addiu	a1,a1,10557
  40d668:	8fbc0020 	lw	gp,32(sp)
  40d66c:	8fa6002c 	lw	a2,44(sp)
  40d670:	8f84806c 	lw	a0,-32660(gp)
  40d674:	8f8580a0 	lw	a1,-32608(gp)
  40d678:	8f9983ac 	lw	t9,-31828(gp)
  40d67c:	8c846640 	lw	a0,26176(a0)
  40d680:	00003825 	move	a3,zero
  40d684:	0320f809 	jalr	t9
  40d688:	24a5182b 	addiu	a1,a1,6187
  40d68c:	8fbc0020 	lw	gp,32(sp)
  40d690:	00000000 	nop
  40d694:	8f84806c 	lw	a0,-32660(gp)
  40d698:	8f998388 	lw	t9,-31864(gp)
  40d69c:	8c846640 	lw	a0,26176(a0)
  40d6a0:	0320f809 	jalr	t9
  40d6a4:	00000000 	nop
  40d6a8:	8fbc0020 	lw	gp,32(sp)
  40d6ac:	8fa40034 	lw	a0,52(sp)
  40d6b0:	8f85805c 	lw	a1,-32676(gp)
  40d6b4:	8f9984e4 	lw	t9,-31516(gp)
  40d6b8:	02203025 	move	a2,s1
  40d6bc:	00003825 	move	a3,zero
  40d6c0:	0320f809 	jalr	t9
  40d6c4:	24a5a490 	addiu	a1,a1,-23408
  40d6c8:	8fbc0020 	lw	gp,32(sp)
  40d6cc:	00402025 	move	a0,v0
  40d6d0:	8f83806c 	lw	v1,-32660(gp)
  40d6d4:	8f868018 	lw	a2,-32744(gp)
  40d6d8:	24636644 	addiu	v1,v1,26180
  40d6dc:	ac620000 	sw	v0,0(v1)
  40d6e0:	8f9983ac 	lw	t9,-31828(gp)
  40d6e4:	8f8580a0 	lw	a1,-32608(gp)
  40d6e8:	24c6da14 	addiu	a2,a2,-9708
  40d6ec:	afa6002c 	sw	a2,44(sp)
  40d6f0:	00003825 	move	a3,zero
  40d6f4:	0320f809 	jalr	t9
  40d6f8:	24a5293d 	addiu	a1,a1,10557
  40d6fc:	8fbc0020 	lw	gp,32(sp)
  40d700:	8fa6002c 	lw	a2,44(sp)
  40d704:	8f84806c 	lw	a0,-32660(gp)
  40d708:	8f8580a0 	lw	a1,-32608(gp)
  40d70c:	8f9983ac 	lw	t9,-31828(gp)
  40d710:	8c846644 	lw	a0,26180(a0)
  40d714:	00003825 	move	a3,zero
  40d718:	0320f809 	jalr	t9
  40d71c:	24a5182b 	addiu	a1,a1,6187
  40d720:	8fbc0020 	lw	gp,32(sp)
  40d724:	00000000 	nop
  40d728:	8f84806c 	lw	a0,-32660(gp)
  40d72c:	8f998388 	lw	t9,-31864(gp)
  40d730:	8c846644 	lw	a0,26180(a0)
  40d734:	0320f809 	jalr	t9
  40d738:	00000000 	nop
  40d73c:	8fbc0020 	lw	gp,32(sp)
  40d740:	02002025 	move	a0,s0
  40d744:	8f85805c 	lw	a1,-32676(gp)
  40d748:	8f9984fc 	lw	t9,-31492(gp)
  40d74c:	02203025 	move	a2,s1
  40d750:	00003825 	move	a3,zero
  40d754:	0320f809 	jalr	t9
  40d758:	24a5a498 	addiu	a1,a1,-23400
  40d75c:	8fbc0020 	lw	gp,32(sp)
  40d760:	00402025 	move	a0,v0
  40d764:	8f998388 	lw	t9,-31864(gp)
  40d768:	00000000 	nop
  40d76c:	0320f809 	jalr	t9
  40d770:	00000000 	nop
  40d774:	8fbc0020 	lw	gp,32(sp)
  40d778:	02002025 	move	a0,s0
  40d77c:	8f9987f4 	lw	t9,-30732(gp)
  40d780:	00000000 	nop
  40d784:	0320f809 	jalr	t9
  40d788:	00000000 	nop
  40d78c:	8fbc0020 	lw	gp,32(sp)
  40d790:	02002025 	move	a0,s0
  40d794:	8f85805c 	lw	a1,-32676(gp)
  40d798:	8f9984fc 	lw	t9,-31492(gp)
  40d79c:	02203025 	move	a2,s1
  40d7a0:	00003825 	move	a3,zero
  40d7a4:	0320f809 	jalr	t9
  40d7a8:	24a5a4a4 	addiu	a1,a1,-23388
  40d7ac:	8fbc0020 	lw	gp,32(sp)
  40d7b0:	00402025 	move	a0,v0
  40d7b4:	8f998388 	lw	t9,-31864(gp)
  40d7b8:	00000000 	nop
  40d7bc:	0320f809 	jalr	t9
  40d7c0:	00000000 	nop
  40d7c4:	8fbc0020 	lw	gp,32(sp)
  40d7c8:	02002025 	move	a0,s0
  40d7cc:	8f9987dc 	lw	t9,-30756(gp)
  40d7d0:	00000000 	nop
  40d7d4:	0320f809 	jalr	t9
  40d7d8:	00000000 	nop
  40d7dc:	8fbf0024 	lw	ra,36(sp)
  40d7e0:	02001025 	move	v0,s0
  40d7e4:	8fbc0020 	lw	gp,32(sp)
  40d7e8:	8fb00018 	lw	s0,24(sp)
  40d7ec:	8fb1001c 	lw	s1,28(sp)
  40d7f0:	03e00008 	jr	ra
  40d7f4:	27bd0040 	addiu	sp,sp,64
