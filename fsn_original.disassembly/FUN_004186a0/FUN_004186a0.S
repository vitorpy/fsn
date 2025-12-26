# Function: FUN_004186a0
# Address: 0x004186a0 - 0x004187e8
# Size: 0x148 (328 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004186a0 <pruneSubTree+0xc>:
  4186a0:	27bdffd8 	addiu	sp,sp,-40
  4186a4:	afbf0024 	sw	ra,36(sp)
  4186a8:	afbc0020 	sw	gp,32(sp)
  4186ac:	afb2001c 	sw	s2,28(sp)
  4186b0:	afb10018 	sw	s1,24(sp)
  4186b4:	afb00014 	sw	s0,20(sp)
  4186b8:	908e0075 	lbu	t6,117(a0)
  4186bc:	00809025 	move	s2,a0
  4186c0:	31cfffef 	andi	t7,t6,0xffef
  4186c4:	a08f0075 	sb	t7,117(a0)
  4186c8:	8f998718 	lw	t9,-30952(gp)
  4186cc:	00000000 	nop
  4186d0:	0320f809 	jalr	t9
  4186d4:	00000000 	nop
  4186d8:	8e43000c 	lw	v1,12(s2)
  4186dc:	8fbc0020 	lw	gp,32(sp)
  4186e0:	18600011 	blez	v1,418728 <pruneSubTree+0x94>
  4186e4:	00008825 	move	s1,zero
  4186e8:	00008025 	move	s0,zero
  4186ec:	8e580010 	lw	t8,16(s2)
  4186f0:	26310001 	addiu	s1,s1,1
  4186f4:	0310c821 	addu	t9,t8,s0
  4186f8:	8f220000 	lw	v0,0(t9)
  4186fc:	26100004 	addiu	s0,s0,4
  418700:	90480028 	lbu	t0,40(v0)
  418704:	00000000 	nop
  418708:	3109fffb 	andi	t1,t0,0xfffb
  41870c:	a0490028 	sb	t1,40(v0)
  418710:	8e43000c 	lw	v1,12(s2)
  418714:	00000000 	nop
  418718:	0223082a 	slt	at,s1,v1
  41871c:	1420fff3 	bnez	at,4186ec <pruneSubTree+0x58>
  418720:	00000000 	nop
  418724:	00008825 	move	s1,zero
  418728:	10600008 	beqz	v1,41874c <pruneSubTree+0xb8>
  41872c:	00000000 	nop
  418730:	8f9980c0 	lw	t9,-32576(gp)
  418734:	8e440010 	lw	a0,16(s2)
  418738:	0320f809 	jalr	t9
  41873c:	00000000 	nop
  418740:	8fbc0020 	lw	gp,32(sp)
  418744:	ae400010 	sw	zero,16(s2)
  418748:	ae40000c 	sw	zero,12(s2)
  41874c:	8e430014 	lw	v1,20(s2)
  418750:	00008025 	move	s0,zero
  418754:	18600015 	blez	v1,4187ac <pruneSubTree+0x118>
  418758:	00000000 	nop
  41875c:	8e4a0018 	lw	t2,24(s2)
  418760:	8f9985e8 	lw	t9,-31256(gp)
  418764:	01505821 	addu	t3,t2,s0
  418768:	8d640000 	lw	a0,0(t3)
  41876c:	0320f809 	jalr	t9
  418770:	00000000 	nop
  418774:	8e4c0018 	lw	t4,24(s2)
  418778:	8fbc0020 	lw	gp,32(sp)
  41877c:	01906821 	addu	t5,t4,s0
  418780:	8da20000 	lw	v0,0(t5)
  418784:	26310001 	addiu	s1,s1,1
  418788:	904e0074 	lbu	t6,116(v0)
  41878c:	26100004 	addiu	s0,s0,4
  418790:	31cfffef 	andi	t7,t6,0xffef
  418794:	a04f0074 	sb	t7,116(v0)
  418798:	8e430014 	lw	v1,20(s2)
  41879c:	00000000 	nop
  4187a0:	0223082a 	slt	at,s1,v1
  4187a4:	1420ffed 	bnez	at,41875c <pruneSubTree+0xc8>
  4187a8:	00000000 	nop
  4187ac:	10600009 	beqz	v1,4187d4 <pruneSubTree+0x140>
  4187b0:	8fbf0024 	lw	ra,36(sp)
  4187b4:	8f9980c0 	lw	t9,-32576(gp)
  4187b8:	8e440018 	lw	a0,24(s2)
  4187bc:	0320f809 	jalr	t9
  4187c0:	00000000 	nop
  4187c4:	8fbc0020 	lw	gp,32(sp)
  4187c8:	ae400018 	sw	zero,24(s2)
  4187cc:	ae400014 	sw	zero,20(s2)
  4187d0:	8fbf0024 	lw	ra,36(sp)
  4187d4:	8fb00014 	lw	s0,20(sp)
  4187d8:	8fb10018 	lw	s1,24(sp)
  4187dc:	8fb2001c 	lw	s2,28(sp)
  4187e0:	03e00008 	jr	ra
  4187e4:	27bd0028 	addiu	sp,sp,40
