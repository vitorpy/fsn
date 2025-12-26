# Function: findDirByFullName
# Address: 0x00413694 - 0x00413824
# Size: 0x190 (400 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00413694 <findDirByFullName>:
  413694:	3c1c0fc1 	lui	gp,0xfc1
  413698:	279ca49c 	addiu	gp,gp,-23396
  41369c:	0399e021 	addu	gp,gp,t9
  4136a0:	27bdffd0 	addiu	sp,sp,-48
  4136a4:	8f9983e0 	lw	t9,-31776(gp)
  4136a8:	afbf002c 	sw	ra,44(sp)
  4136ac:	afb00018 	sw	s0,24(sp)
  4136b0:	00808025 	move	s0,a0
  4136b4:	afbc0028 	sw	gp,40(sp)
  4136b8:	afb30024 	sw	s3,36(sp)
  4136bc:	afb20020 	sw	s2,32(sp)
  4136c0:	0320f809 	jalr	t9
  4136c4:	afb1001c 	sw	s1,28(sp)
  4136c8:	8fbc0028 	lw	gp,40(sp)
  4136cc:	00000000 	nop
  4136d0:	8f92892c 	lw	s2,-30420(gp)
  4136d4:	00000000 	nop
  4136d8:	8e430000 	lw	v1,0(s2)
  4136dc:	00000000 	nop
  4136e0:	8c660004 	lw	a2,4(v1)
  4136e4:	00000000 	nop
  4136e8:	00c2082b 	sltu	at,a2,v0
  4136ec:	14200003 	bnez	at,4136fc <findDirByFullName+0x68>
  4136f0:	00000000 	nop
  4136f4:	10000044 	b	413808 <findDirByFullName+0x174>
  4136f8:	00001025 	move	v0,zero
  4136fc:	8f9980f0 	lw	t9,-32528(gp)
  413700:	8c650000 	lw	a1,0(v1)
  413704:	0320f809 	jalr	t9
  413708:	02002025 	move	a0,s0
  41370c:	8fbc0028 	lw	gp,40(sp)
  413710:	10400003 	beqz	v0,413720 <findDirByFullName+0x8c>
  413714:	2405002f 	li	a1,47
  413718:	1000003b 	b	413808 <findDirByFullName+0x174>
  41371c:	00001025 	move	v0,zero
  413720:	8e430000 	lw	v1,0(s2)
  413724:	2411002f 	li	s1,47
  413728:	8c6e0004 	lw	t6,4(v1)
  41372c:	00000000 	nop
  413730:	020e8021 	addu	s0,s0,t6
  413734:	920f0000 	lbu	t7,0(s0)
  413738:	00000000 	nop
  41373c:	162f0005 	bne	s1,t7,413754 <findDirByFullName+0xc0>
  413740:	00000000 	nop
  413744:	92180001 	lbu	t8,1(s0)
  413748:	26100001 	addiu	s0,s0,1
  41374c:	1238fffd 	beq	s1,t8,413744 <findDirByFullName+0xb0>
  413750:	00000000 	nop
  413754:	8f9980e8 	lw	t9,-32536(gp)
  413758:	00609825 	move	s3,v1
  41375c:	0320f809 	jalr	t9
  413760:	02002025 	move	a0,s0
  413764:	8fbc0028 	lw	gp,40(sp)
  413768:	1040001b 	beqz	v0,4137d8 <findDirByFullName+0x144>
  41376c:	00409025 	move	s2,v0
  413770:	a2400000 	sb	zero,0(s2)
  413774:	8f9985a8 	lw	t9,-31320(gp)
  413778:	02602025 	move	a0,s3
  41377c:	0320f809 	jalr	t9
  413780:	02002825 	move	a1,s0
  413784:	8fbc0028 	lw	gp,40(sp)
  413788:	14400004 	bnez	v0,41379c <findDirByFullName+0x108>
  41378c:	00409825 	move	s3,v0
  413790:	a2510000 	sb	s1,0(s2)
  413794:	1000001c 	b	413808 <findDirByFullName+0x174>
  413798:	00001025 	move	v0,zero
  41379c:	92590001 	lbu	t9,1(s2)
  4137a0:	26500001 	addiu	s0,s2,1
  4137a4:	16390005 	bne	s1,t9,4137bc <findDirByFullName+0x128>
  4137a8:	00000000 	nop
  4137ac:	92080001 	lbu	t0,1(s0)
  4137b0:	26100001 	addiu	s0,s0,1
  4137b4:	1228fffd 	beq	s1,t0,4137ac <findDirByFullName+0x118>
  4137b8:	00000000 	nop
  4137bc:	8f9980e8 	lw	t9,-32536(gp)
  4137c0:	02002025 	move	a0,s0
  4137c4:	0320f809 	jalr	t9
  4137c8:	2405002f 	li	a1,47
  4137cc:	8fbc0028 	lw	gp,40(sp)
  4137d0:	1440ffe7 	bnez	v0,413770 <findDirByFullName+0xdc>
  4137d4:	00409025 	move	s2,v0
  4137d8:	92090000 	lbu	t1,0(s0)
  4137dc:	00000000 	nop
  4137e0:	15200003 	bnez	t1,4137f0 <findDirByFullName+0x15c>
  4137e4:	00000000 	nop
  4137e8:	10000007 	b	413808 <findDirByFullName+0x174>
  4137ec:	02601025 	move	v0,s3
  4137f0:	8f9985a8 	lw	t9,-31320(gp)
  4137f4:	02602025 	move	a0,s3
  4137f8:	0320f809 	jalr	t9
  4137fc:	02002825 	move	a1,s0
  413800:	8fbc0028 	lw	gp,40(sp)
  413804:	00000000 	nop
  413808:	8fbf002c 	lw	ra,44(sp)
  41380c:	8fb00018 	lw	s0,24(sp)
  413810:	8fb1001c 	lw	s1,28(sp)
  413814:	8fb20020 	lw	s2,32(sp)
  413818:	8fb30024 	lw	s3,36(sp)
  41381c:	03e00008 	jr	ra
  413820:	27bd0030 	addiu	sp,sp,48
