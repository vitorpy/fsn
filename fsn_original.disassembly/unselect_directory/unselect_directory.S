# Function: unselect_directory
# Address: 0x0041d540 - 0x0041d690
# Size: 0x150 (336 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041d540 <unselect_directory>:
  41d540:	3c1c0fc0 	lui	gp,0xfc0
  41d544:	279c05f0 	addiu	gp,gp,1520
  41d548:	0399e021 	addu	gp,gp,t9
  41d54c:	8f82897c 	lw	v0,-30340(gp)
  41d550:	27bdffa8 	addiu	sp,sp,-88
  41d554:	8c420000 	lw	v0,0(v0)
  41d558:	afbf001c 	sw	ra,28(sp)
  41d55c:	afbc0018 	sw	gp,24(sp)
  41d560:	8c4e0044 	lw	t6,68(v0)
  41d564:	00000000 	nop
  41d568:	11c00046 	beqz	t6,41d684 <unselect_directory+0x144>
  41d56c:	8fbf001c 	lw	ra,28(sp)
  41d570:	8f99801c 	lw	t9,-32740(gp)
  41d574:	a0400c50 	sb	zero,3152(v0)
  41d578:	2739d418 	addiu	t9,t9,-11240
  41d57c:	0320f809 	jalr	t9
  41d580:	00000000 	nop
  41d584:	8fbc0018 	lw	gp,24(sp)
  41d588:	00002825 	move	a1,zero
  41d58c:	8f84806c 	lw	a0,-32660(gp)
  41d590:	8f998318 	lw	t9,-31976(gp)
  41d594:	8c846b98 	lw	a0,27544(a0)
  41d598:	0320f809 	jalr	t9
  41d59c:	00000000 	nop
  41d5a0:	8fbc0018 	lw	gp,24(sp)
  41d5a4:	00000000 	nop
  41d5a8:	8f998640 	lw	t9,-31168(gp)
  41d5ac:	00000000 	nop
  41d5b0:	0320f809 	jalr	t9
  41d5b4:	00000000 	nop
  41d5b8:	8fbc0018 	lw	gp,24(sp)
  41d5bc:	00000000 	nop
  41d5c0:	8f83897c 	lw	v1,-30340(gp)
  41d5c4:	00000000 	nop
  41d5c8:	8c6f0000 	lw	t7,0(v1)
  41d5cc:	00000000 	nop
  41d5d0:	8de20044 	lw	v0,68(t7)
  41d5d4:	00000000 	nop
  41d5d8:	90580074 	lbu	t8,116(v0)
  41d5dc:	00000000 	nop
  41d5e0:	3319ffdf 	andi	t9,t8,0xffdf
  41d5e4:	a0590074 	sb	t9,116(v0)
  41d5e8:	8c680000 	lw	t0,0(v1)
  41d5ec:	00000000 	nop
  41d5f0:	ad000044 	sw	zero,68(t0)
  41d5f4:	8c690000 	lw	t1,0(v1)
  41d5f8:	00000000 	nop
  41d5fc:	a120004c 	sb	zero,76(t1)
  41d600:	8f99862c 	lw	t9,-31188(gp)
  41d604:	00000000 	nop
  41d608:	0320f809 	jalr	t9
  41d60c:	00000000 	nop
  41d610:	8fbc0018 	lw	gp,24(sp)
  41d614:	27a50030 	addiu	a1,sp,48
  41d618:	8f8b8a08 	lw	t3,-30200(gp)
  41d61c:	8f8a80a0 	lw	t2,-32608(gp)
  41d620:	8f8c8984 	lw	t4,-30332(gp)
  41d624:	8d6b0000 	lw	t3,0(t3)
  41d628:	8d8c0000 	lw	t4,0(t4)
  41d62c:	254a1d4d 	addiu	t2,t2,7501
  41d630:	8f998340 	lw	t9,-31936(gp)
  41d634:	afaa0030 	sw	t2,48(sp)
  41d638:	afab0034 	sw	t3,52(sp)
  41d63c:	8d840020 	lw	a0,32(t4)
  41d640:	0320f809 	jalr	t9
  41d644:	24060001 	li	a2,1
  41d648:	8fbc0018 	lw	gp,24(sp)
  41d64c:	00000000 	nop
  41d650:	8f998630 	lw	t9,-31184(gp)
  41d654:	00000000 	nop
  41d658:	0320f809 	jalr	t9
  41d65c:	00000000 	nop
  41d660:	8fbc0018 	lw	gp,24(sp)
  41d664:	00000000 	nop
  41d668:	8f998674 	lw	t9,-31116(gp)
  41d66c:	00000000 	nop
  41d670:	0320f809 	jalr	t9
  41d674:	00000000 	nop
  41d678:	8fbc0018 	lw	gp,24(sp)
  41d67c:	00000000 	nop
  41d680:	8fbf001c 	lw	ra,28(sp)
  41d684:	27bd0058 	addiu	sp,sp,88
  41d688:	03e00008 	jr	ra
  41d68c:	00000000 	nop
