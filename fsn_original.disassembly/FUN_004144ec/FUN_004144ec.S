# Function: FUN_004144ec
# Address: 0x004144ec - 0x00414870
# Size: 0x384 (900 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004144ec <findDirByFullName+0xe58>:
  4144ec:	3c1c0fc1 	lui	gp,0xfc1
  4144f0:	279c9644 	addiu	gp,gp,-27068
  4144f4:	0399e021 	addu	gp,gp,t9
  4144f8:	27bdffc8 	addiu	sp,sp,-56
  4144fc:	afbf0034 	sw	ra,52(sp)
  414500:	afbc0030 	sw	gp,48(sp)
  414504:	afb5002c 	sw	s5,44(sp)
  414508:	afb40028 	sw	s4,40(sp)
  41450c:	afb30024 	sw	s3,36(sp)
  414510:	afb20020 	sw	s2,32(sp)
  414514:	afb1001c 	sw	s1,28(sp)
  414518:	afb00018 	sw	s0,24(sp)
  41451c:	8c8e0074 	lw	t6,116(a0)
  414520:	00808825 	move	s1,a0
  414524:	000ec340 	sll	t8,t6,0xd
  414528:	070000c9 	bltz	t8,414850 <findDirByFullName+0x11bc>
  41452c:	8fbf0034 	lw	ra,52(sp)
  414530:	90990074 	lbu	t9,116(a0)
  414534:	00000000 	nop
  414538:	33290001 	andi	t1,t9,0x1
  41453c:	11200053 	beqz	t1,41468c <findDirByFullName+0xff8>
  414540:	00000000 	nop
  414544:	8c88000c 	lw	t0,12(a0)
  414548:	0000a825 	move	s5,zero
  41454c:	19000031 	blez	t0,414614 <findDirByFullName+0xf80>
  414550:	00009825 	move	s3,zero
  414554:	8c840010 	lw	a0,16(a0)
  414558:	0000a025 	move	s4,zero
  41455c:	8c830000 	lw	v1,0(a0)
  414560:	0268082a 	slt	at,s3,t0
  414564:	10200026 	beqz	at,414600 <findDirByFullName+0xf6c>
  414568:	00000000 	nop
  41456c:	90620028 	lbu	v0,40(v1)
  414570:	26720001 	addiu	s2,s3,1
  414574:	304a0001 	andi	t2,v0,0x1
  414578:	11400021 	beqz	t2,414600 <findDirByFullName+0xf6c>
  41457c:	00000000 	nop
  414580:	24150001 	li	s5,1
  414584:	304bfffb 	andi	t3,v0,0xfffb
  414588:	a06b0028 	sb	t3,40(v1)
  41458c:	8e28000c 	lw	t0,12(s1)
  414590:	02408025 	move	s0,s2
  414594:	0248082a 	slt	at,s2,t0
  414598:	1020000c 	beqz	at,4145cc <findDirByFullName+0xf38>
  41459c:	00101080 	sll	v0,s0,0x2
  4145a0:	8e2c0010 	lw	t4,16(s1)
  4145a4:	26100001 	addiu	s0,s0,1
  4145a8:	01821821 	addu	v1,t4,v0
  4145ac:	8c6d0000 	lw	t5,0(v1)
  4145b0:	24420004 	addiu	v0,v0,4
  4145b4:	ac6dfffc 	sw	t5,-4(v1)
  4145b8:	8e28000c 	lw	t0,12(s1)
  4145bc:	00000000 	nop
  4145c0:	0208082a 	slt	at,s0,t0
  4145c4:	1420fff6 	bnez	at,4145a0 <findDirByFullName+0xf0c>
  4145c8:	00000000 	nop
  4145cc:	8e2f0010 	lw	t7,16(s1)
  4145d0:	250effff 	addiu	t6,t0,-1
  4145d4:	ae2e000c 	sw	t6,12(s1)
  4145d8:	01f42021 	addu	a0,t7,s4
  4145dc:	8c830000 	lw	v1,0(a0)
  4145e0:	026e082a 	slt	at,s3,t6
  4145e4:	10200006 	beqz	at,414600 <findDirByFullName+0xf6c>
  4145e8:	01c04025 	move	t0,t6
  4145ec:	90620028 	lbu	v0,40(v1)
  4145f0:	00000000 	nop
  4145f4:	30580001 	andi	t8,v0,0x1
  4145f8:	1700ffe3 	bnez	t8,414588 <findDirByFullName+0xef4>
  4145fc:	304bfffb 	andi	t3,v0,0xfffb
  414600:	26730001 	addiu	s3,s3,1
  414604:	0268082a 	slt	at,s3,t0
  414608:	26940004 	addiu	s4,s4,4
  41460c:	1420ffd3 	bnez	at,41455c <findDirByFullName+0xec8>
  414610:	24840004 	addiu	a0,a0,4
  414614:	8e300010 	lw	s0,16(s1)
  414618:	12a00014 	beqz	s5,41466c <findDirByFullName+0xfd8>
  41461c:	00000000 	nop
  414620:	1500000a 	bnez	t0,41464c <findDirByFullName+0xfb8>
  414624:	00000000 	nop
  414628:	8f9980c0 	lw	t9,-32576(gp)
  41462c:	02002025 	move	a0,s0
  414630:	0320f809 	jalr	t9
  414634:	00000000 	nop
  414638:	8fbc0030 	lw	gp,48(sp)
  41463c:	8e28000c 	lw	t0,12(s1)
  414640:	ae200010 	sw	zero,16(s1)
  414644:	10000009 	b	41466c <findDirByFullName+0xfd8>
  414648:	00008025 	move	s0,zero
  41464c:	8f99818c 	lw	t9,-32372(gp)
  414650:	02002025 	move	a0,s0
  414654:	0320f809 	jalr	t9
  414658:	00082880 	sll	a1,t0,0x2
  41465c:	8fbc0030 	lw	gp,48(sp)
  414660:	8e28000c 	lw	t0,12(s1)
  414664:	ae220010 	sw	v0,16(s1)
  414668:	00408025 	move	s0,v0
  41466c:	8f998280 	lw	t9,-32128(gp)
  414670:	8f87859c 	lw	a3,-31332(gp)
  414674:	02002025 	move	a0,s0
  414678:	01002825 	move	a1,t0
  41467c:	0320f809 	jalr	t9
  414680:	24060004 	li	a2,4
  414684:	8fbc0030 	lw	gp,48(sp)
  414688:	00000000 	nop
  41468c:	92390075 	lbu	t9,117(s1)
  414690:	00000000 	nop
  414694:	001949c2 	srl	t1,t9,0x7
  414698:	11200056 	beqz	t1,4147f4 <findDirByFullName+0x1160>
  41469c:	00000000 	nop
  4146a0:	8e280014 	lw	t0,20(s1)
  4146a4:	0000a825 	move	s5,zero
  4146a8:	19000034 	blez	t0,41477c <findDirByFullName+0x10e8>
  4146ac:	00009825 	move	s3,zero
  4146b0:	8e220018 	lw	v0,24(s1)
  4146b4:	0000a025 	move	s4,zero
  4146b8:	8c440000 	lw	a0,0(v0)
  4146bc:	0268082a 	slt	at,s3,t0
  4146c0:	10200029 	beqz	at,414768 <findDirByFullName+0x10d4>
  4146c4:	00000000 	nop
  4146c8:	8c8a0074 	lw	t2,116(a0)
  4146cc:	26720001 	addiu	s2,s3,1
  4146d0:	000a6140 	sll	t4,t2,0x5
  4146d4:	05810024 	bgez	t4,414768 <findDirByFullName+0x10d4>
  4146d8:	00000000 	nop
  4146dc:	24150001 	li	s5,1
  4146e0:	8f998018 	lw	t9,-32744(gp)
  4146e4:	02408025 	move	s0,s2
  4146e8:	273943d0 	addiu	t9,t9,17360
  4146ec:	0320f809 	jalr	t9
  4146f0:	00000000 	nop
  4146f4:	8e280014 	lw	t0,20(s1)
  4146f8:	8fbc0030 	lw	gp,48(sp)
  4146fc:	0248082a 	slt	at,s2,t0
  414700:	1020000c 	beqz	at,414734 <findDirByFullName+0x10a0>
  414704:	00101080 	sll	v0,s0,0x2
  414708:	8e2d0018 	lw	t5,24(s1)
  41470c:	26100001 	addiu	s0,s0,1
  414710:	01a21821 	addu	v1,t5,v0
  414714:	8c6e0000 	lw	t6,0(v1)
  414718:	24420004 	addiu	v0,v0,4
  41471c:	ac6efffc 	sw	t6,-4(v1)
  414720:	8e280014 	lw	t0,20(s1)
  414724:	00000000 	nop
  414728:	0208082a 	slt	at,s0,t0
  41472c:	1420fff6 	bnez	at,414708 <findDirByFullName+0x1074>
  414730:	00000000 	nop
  414734:	8e380018 	lw	t8,24(s1)
  414738:	250fffff 	addiu	t7,t0,-1
  41473c:	ae2f0014 	sw	t7,20(s1)
  414740:	03141021 	addu	v0,t8,s4
  414744:	8c440000 	lw	a0,0(v0)
  414748:	026f082a 	slt	at,s3,t7
  41474c:	10200006 	beqz	at,414768 <findDirByFullName+0x10d4>
  414750:	01e04025 	move	t0,t7
  414754:	8c990074 	lw	t9,116(a0)
  414758:	00000000 	nop
  41475c:	00195140 	sll	t2,t9,0x5
  414760:	0540ffdf 	bltz	t2,4146e0 <findDirByFullName+0x104c>
  414764:	00000000 	nop
  414768:	26730001 	addiu	s3,s3,1
  41476c:	0268082a 	slt	at,s3,t0
  414770:	26940004 	addiu	s4,s4,4
  414774:	1420ffd0 	bnez	at,4146b8 <findDirByFullName+0x1024>
  414778:	24420004 	addiu	v0,v0,4
  41477c:	8e300018 	lw	s0,24(s1)
  414780:	12a00014 	beqz	s5,4147d4 <findDirByFullName+0x1140>
  414784:	00000000 	nop
  414788:	1500000a 	bnez	t0,4147b4 <findDirByFullName+0x1120>
  41478c:	00000000 	nop
  414790:	8f9980c0 	lw	t9,-32576(gp)
  414794:	02002025 	move	a0,s0
  414798:	0320f809 	jalr	t9
  41479c:	00000000 	nop
  4147a0:	8fbc0030 	lw	gp,48(sp)
  4147a4:	8e280014 	lw	t0,20(s1)
  4147a8:	ae200018 	sw	zero,24(s1)
  4147ac:	10000009 	b	4147d4 <findDirByFullName+0x1140>
  4147b0:	00008025 	move	s0,zero
  4147b4:	8f99818c 	lw	t9,-32372(gp)
  4147b8:	02002025 	move	a0,s0
  4147bc:	0320f809 	jalr	t9
  4147c0:	00082880 	sll	a1,t0,0x2
  4147c4:	8fbc0030 	lw	gp,48(sp)
  4147c8:	8e280014 	lw	t0,20(s1)
  4147cc:	ae220018 	sw	v0,24(s1)
  4147d0:	00408025 	move	s0,v0
  4147d4:	8f998280 	lw	t9,-32128(gp)
  4147d8:	8f8785a0 	lw	a3,-31328(gp)
  4147dc:	02002025 	move	a0,s0
  4147e0:	01002825 	move	a1,t0
  4147e4:	0320f809 	jalr	t9
  4147e8:	24060004 	li	a2,4
  4147ec:	8fbc0030 	lw	gp,48(sp)
  4147f0:	00000000 	nop
  4147f4:	8e2b0074 	lw	t3,116(s1)
  4147f8:	00000000 	nop
  4147fc:	000b6a40 	sll	t5,t3,0x9
  414800:	05a10013 	bgez	t5,414850 <findDirByFullName+0x11bc>
  414804:	8fbf0034 	lw	ra,52(sp)
  414808:	8e2e0014 	lw	t6,20(s1)
  41480c:	00009825 	move	s3,zero
  414810:	19c0000e 	blez	t6,41484c <findDirByFullName+0x11b8>
  414814:	0000a025 	move	s4,zero
  414818:	8e2f0018 	lw	t7,24(s1)
  41481c:	8f998018 	lw	t9,-32744(gp)
  414820:	01f4c021 	addu	t8,t7,s4
  414824:	8f040000 	lw	a0,0(t8)
  414828:	273944ec 	addiu	t9,t9,17644
  41482c:	0320f809 	jalr	t9
  414830:	00000000 	nop
  414834:	8e390014 	lw	t9,20(s1)
  414838:	26730001 	addiu	s3,s3,1
  41483c:	8fbc0030 	lw	gp,48(sp)
  414840:	0279082a 	slt	at,s3,t9
  414844:	1420fff4 	bnez	at,414818 <findDirByFullName+0x1184>
  414848:	26940004 	addiu	s4,s4,4
  41484c:	8fbf0034 	lw	ra,52(sp)
  414850:	8fb00018 	lw	s0,24(sp)
  414854:	8fb1001c 	lw	s1,28(sp)
  414858:	8fb20020 	lw	s2,32(sp)
  41485c:	8fb30024 	lw	s3,36(sp)
  414860:	8fb40028 	lw	s4,40(sp)
  414864:	8fb5002c 	lw	s5,44(sp)
  414868:	03e00008 	jr	ra
  41486c:	27bd0038 	addiu	sp,sp,56
