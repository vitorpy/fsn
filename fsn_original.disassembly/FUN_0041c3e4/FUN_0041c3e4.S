# Function: FUN_0041c3e4
# Address: 0x0041c3e4 - 0x0041c714
# Size: 0x330 (816 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041c3e4 <createSelectedInfo+0x5b0>:
  41c3e4:	3c1c0fc0 	lui	gp,0xfc0
  41c3e8:	279c174c 	addiu	gp,gp,5964
  41c3ec:	0399e021 	addu	gp,gp,t9
  41c3f0:	8f82897c 	lw	v0,-30340(gp)
  41c3f4:	27bdfec0 	addiu	sp,sp,-320
  41c3f8:	8c420000 	lw	v0,0(v0)
  41c3fc:	afbf002c 	sw	ra,44(sp)
  41c400:	afbc0028 	sw	gp,40(sp)
  41c404:	8c430048 	lw	v1,72(v0)
  41c408:	00000000 	nop
  41c40c:	10600062 	beqz	v1,41c598 <createSelectedInfo+0x764>
  41c410:	00000000 	nop
  41c414:	8f99801c 	lw	t9,-32740(gp)
  41c418:	8c640008 	lw	a0,8(v1)
  41c41c:	2739c1c4 	addiu	t9,t9,-15932
  41c420:	0320f809 	jalr	t9
  41c424:	00000000 	nop
  41c428:	8fbc0028 	lw	gp,40(sp)
  41c42c:	afa20038 	sw	v0,56(sp)
  41c430:	8f8e897c 	lw	t6,-30340(gp)
  41c434:	8f998580 	lw	t9,-31360(gp)
  41c438:	8dce0000 	lw	t6,0(t6)
  41c43c:	00000000 	nop
  41c440:	8dcf0048 	lw	t7,72(t6)
  41c444:	00000000 	nop
  41c448:	8de40010 	lw	a0,16(t7)
  41c44c:	0320f809 	jalr	t9
  41c450:	00000000 	nop
  41c454:	8fbc0028 	lw	gp,40(sp)
  41c458:	3401a000 	li	at,0xa000
  41c45c:	8f98897c 	lw	t8,-30340(gp)
  41c460:	00404825 	move	t1,v0
  41c464:	8f180000 	lw	t8,0(t8)
  41c468:	00000000 	nop
  41c46c:	8f030048 	lw	v1,72(t8)
  41c470:	00000000 	nop
  41c474:	8c790008 	lw	t9,8(v1)
  41c478:	00000000 	nop
  41c47c:	332af000 	andi	t2,t9,0xf000
  41c480:	15410006 	bne	t2,at,41c49c <createSelectedInfo+0x668>
  41c484:	00000000 	nop
  41c488:	8f8b805c 	lw	t3,-32676(gp)
  41c48c:	00000000 	nop
  41c490:	256bb2e4 	addiu	t3,t3,-19740
  41c494:	10000005 	b	41c4ac <createSelectedInfo+0x678>
  41c498:	afab0040 	sw	t3,64(sp)
  41c49c:	8f86805c 	lw	a2,-32676(gp)
  41c4a0:	00000000 	nop
  41c4a4:	24c6b2f0 	addiu	a2,a2,-19728
  41c4a8:	afa60040 	sw	a2,64(sp)
  41c4ac:	8c640020 	lw	a0,32(v1)
  41c4b0:	00000000 	nop
  41c4b4:	1080000e 	beqz	a0,41c4f0 <createSelectedInfo+0x6bc>
  41c4b8:	00000000 	nop
  41c4bc:	8f998824 	lw	t9,-30684(gp)
  41c4c0:	24050003 	li	a1,3
  41c4c4:	0320f809 	jalr	t9
  41c4c8:	afa9003c 	sw	t1,60(sp)
  41c4cc:	8fbc0028 	lw	gp,40(sp)
  41c4d0:	8fa9003c 	lw	t1,60(sp)
  41c4d4:	8f8c897c 	lw	t4,-30340(gp)
  41c4d8:	00404025 	move	t0,v0
  41c4dc:	8d8c0000 	lw	t4,0(t4)
  41c4e0:	00000000 	nop
  41c4e4:	8d830048 	lw	v1,72(t4)
  41c4e8:	10000005 	b	41c500 <createSelectedInfo+0x6cc>
  41c4ec:	8c67000c 	lw	a3,12(v1)
  41c4f0:	8f88805c 	lw	t0,-32676(gp)
  41c4f4:	00000000 	nop
  41c4f8:	2508b2f4 	addiu	t0,t0,-19724
  41c4fc:	8c67000c 	lw	a3,12(v1)
  41c500:	8f85805c 	lw	a1,-32676(gp)
  41c504:	8fad0040 	lw	t5,64(sp)
  41c508:	8f9983e4 	lw	t9,-31772(gp)
  41c50c:	8fa60038 	lw	a2,56(sp)
  41c510:	afa80018 	sw	t0,24(sp)
  41c514:	afa90010 	sw	t1,16(sp)
  41c518:	27a40078 	addiu	a0,sp,120
  41c51c:	24a5b2c0 	addiu	a1,a1,-19776
  41c520:	0320f809 	jalr	t9
  41c524:	afad0014 	sw	t5,20(sp)
  41c528:	8fbc0028 	lw	gp,40(sp)
  41c52c:	27a40078 	addiu	a0,sp,120
  41c530:	8f9983dc 	lw	t9,-31780(gp)
  41c534:	8f8580a0 	lw	a1,-32608(gp)
  41c538:	0320f809 	jalr	t9
  41c53c:	00000000 	nop
  41c540:	8fbc0028 	lw	gp,40(sp)
  41c544:	afa20074 	sw	v0,116(sp)
  41c548:	8f8e80a0 	lw	t6,-32608(gp)
  41c54c:	8f8f8984 	lw	t7,-30332(gp)
  41c550:	25ce1d4d 	addiu	t6,t6,7501
  41c554:	8def0000 	lw	t7,0(t7)
  41c558:	8f998340 	lw	t9,-31936(gp)
  41c55c:	afae004c 	sw	t6,76(sp)
  41c560:	afa20050 	sw	v0,80(sp)
  41c564:	8de40020 	lw	a0,32(t7)
  41c568:	27a5004c 	addiu	a1,sp,76
  41c56c:	0320f809 	jalr	t9
  41c570:	24060001 	li	a2,1
  41c574:	8fbc0028 	lw	gp,40(sp)
  41c578:	8fa40074 	lw	a0,116(sp)
  41c57c:	8f998178 	lw	t9,-32392(gp)
  41c580:	00000000 	nop
  41c584:	0320f809 	jalr	t9
  41c588:	00000000 	nop
  41c58c:	8fbc0028 	lw	gp,40(sp)
  41c590:	1000005d 	b	41c708 <createSelectedInfo+0x8d4>
  41c594:	8fbf002c 	lw	ra,44(sp)
  41c598:	8c430044 	lw	v1,68(v0)
  41c59c:	27a5004c 	addiu	a1,sp,76
  41c5a0:	1060004a 	beqz	v1,41c6cc <createSelectedInfo+0x898>
  41c5a4:	00000000 	nop
  41c5a8:	8c780074 	lw	t8,116(v1)
  41c5ac:	00000000 	nop
  41c5b0:	00185340 	sll	t2,t8,0xd
  41c5b4:	05410009 	bgez	t2,41c5dc <createSelectedInfo+0x7a8>
  41c5b8:	00000000 	nop
  41c5bc:	8f85805c 	lw	a1,-32676(gp)
  41c5c0:	8f9983e4 	lw	t9,-31772(gp)
  41c5c4:	27a40078 	addiu	a0,sp,120
  41c5c8:	0320f809 	jalr	t9
  41c5cc:	24a5b304 	addiu	a1,a1,-19708
  41c5d0:	8fbc0028 	lw	gp,40(sp)
  41c5d4:	10000023 	b	41c664 <createSelectedInfo+0x830>
  41c5d8:	00000000 	nop
  41c5dc:	8f99801c 	lw	t9,-32740(gp)
  41c5e0:	8c640008 	lw	a0,8(v1)
  41c5e4:	2739c1c4 	addiu	t9,t9,-15932
  41c5e8:	0320f809 	jalr	t9
  41c5ec:	00000000 	nop
  41c5f0:	8fbc0028 	lw	gp,40(sp)
  41c5f4:	00403025 	move	a2,v0
  41c5f8:	8f8b897c 	lw	t3,-30340(gp)
  41c5fc:	27a40078 	addiu	a0,sp,120
  41c600:	8d6b0000 	lw	t3,0(t3)
  41c604:	00000000 	nop
  41c608:	8d630044 	lw	v1,68(t3)
  41c60c:	00000000 	nop
  41c610:	8c6c0074 	lw	t4,116(v1)
  41c614:	00000000 	nop
  41c618:	000c72c0 	sll	t6,t4,0xb
  41c61c:	05c10004 	bgez	t6,41c630 <createSelectedInfo+0x7fc>
  41c620:	00000000 	nop
  41c624:	8f88805c 	lw	t0,-32676(gp)
  41c628:	10000004 	b	41c63c <createSelectedInfo+0x808>
  41c62c:	2508b32c 	addiu	t0,t0,-19668
  41c630:	8f88805c 	lw	t0,-32676(gp)
  41c634:	00000000 	nop
  41c638:	2508b338 	addiu	t0,t0,-19656
  41c63c:	8f85805c 	lw	a1,-32676(gp)
  41c640:	8c6f000c 	lw	t7,12(v1)
  41c644:	8f9983e4 	lw	t9,-31772(gp)
  41c648:	8c670014 	lw	a3,20(v1)
  41c64c:	afa80014 	sw	t0,20(sp)
  41c650:	24a5b30c 	addiu	a1,a1,-19700
  41c654:	0320f809 	jalr	t9
  41c658:	afaf0010 	sw	t7,16(sp)
  41c65c:	8fbc0028 	lw	gp,40(sp)
  41c660:	00000000 	nop
  41c664:	8f9983dc 	lw	t9,-31780(gp)
  41c668:	8f8580a0 	lw	a1,-32608(gp)
  41c66c:	0320f809 	jalr	t9
  41c670:	27a40078 	addiu	a0,sp,120
  41c674:	8fbc0028 	lw	gp,40(sp)
  41c678:	afa20074 	sw	v0,116(sp)
  41c67c:	8f9880a0 	lw	t8,-32608(gp)
  41c680:	8f998984 	lw	t9,-30332(gp)
  41c684:	27181d4d 	addiu	t8,t8,7501
  41c688:	8f390000 	lw	t9,0(t9)
  41c68c:	afb8004c 	sw	t8,76(sp)
  41c690:	afa20050 	sw	v0,80(sp)
  41c694:	8f240020 	lw	a0,32(t9)
  41c698:	8f998340 	lw	t9,-31936(gp)
  41c69c:	27a5004c 	addiu	a1,sp,76
  41c6a0:	0320f809 	jalr	t9
  41c6a4:	24060001 	li	a2,1
  41c6a8:	8fbc0028 	lw	gp,40(sp)
  41c6ac:	8fa40074 	lw	a0,116(sp)
  41c6b0:	8f998178 	lw	t9,-32392(gp)
  41c6b4:	00000000 	nop
  41c6b8:	0320f809 	jalr	t9
  41c6bc:	00000000 	nop
  41c6c0:	8fbc0028 	lw	gp,40(sp)
  41c6c4:	10000010 	b	41c708 <createSelectedInfo+0x8d4>
  41c6c8:	8fbf002c 	lw	ra,44(sp)
  41c6cc:	8f8b8a08 	lw	t3,-30200(gp)
  41c6d0:	8f8a80a0 	lw	t2,-32608(gp)
  41c6d4:	8f8c8984 	lw	t4,-30332(gp)
  41c6d8:	8d6b0000 	lw	t3,0(t3)
  41c6dc:	8d8c0000 	lw	t4,0(t4)
  41c6e0:	254a1d4d 	addiu	t2,t2,7501
  41c6e4:	8f998340 	lw	t9,-31936(gp)
  41c6e8:	afaa004c 	sw	t2,76(sp)
  41c6ec:	afab0050 	sw	t3,80(sp)
  41c6f0:	8d840020 	lw	a0,32(t4)
  41c6f4:	0320f809 	jalr	t9
  41c6f8:	24060001 	li	a2,1
  41c6fc:	8fbc0028 	lw	gp,40(sp)
  41c700:	00000000 	nop
  41c704:	8fbf002c 	lw	ra,44(sp)
  41c708:	27bd0140 	addiu	sp,sp,320
  41c70c:	03e00008 	jr	ra
  41c710:	00000000 	nop
