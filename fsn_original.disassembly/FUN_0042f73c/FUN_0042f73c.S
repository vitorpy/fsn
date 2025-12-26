# Function: FUN_0042f73c
# Address: 0x0042f73c - 0x0042f8b0
# Size: 0x174 (372 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f73c <createMarkControls+0x4c4>:
  42f73c:	3c1c0fbf 	lui	gp,0xfbf
  42f740:	279ce3f4 	addiu	gp,gp,-7180
  42f744:	0399e021 	addu	gp,gp,t9
  42f748:	27bdffa0 	addiu	sp,sp,-96
  42f74c:	afb00014 	sw	s0,20(sp)
  42f750:	8f90806c 	lw	s0,-32660(gp)
  42f754:	afbf001c 	sw	ra,28(sp)
  42f758:	26106ec8 	addiu	s0,s0,28360
  42f75c:	8e0e0000 	lw	t6,0(s0)
  42f760:	afbc0018 	sw	gp,24(sp)
  42f764:	afa50064 	sw	a1,100(sp)
  42f768:	15c0001c 	bnez	t6,42f7dc <createMarkControls+0x564>
  42f76c:	afa60068 	sw	a2,104(sp)
  42f770:	8f85805c 	lw	a1,-32676(gp)
  42f774:	8f998454 	lw	t9,-31660(gp)
  42f778:	27a60038 	addiu	a2,sp,56
  42f77c:	00003825 	move	a3,zero
  42f780:	0320f809 	jalr	t9
  42f784:	24a53c54 	addiu	a1,a1,15444
  42f788:	8fbc0018 	lw	gp,24(sp)
  42f78c:	ae020000 	sw	v0,0(s0)
  42f790:	8f9983ac 	lw	t9,-31828(gp)
  42f794:	8f8580a4 	lw	a1,-32604(gp)
  42f798:	8f868020 	lw	a2,-32736(gp)
  42f79c:	00402025 	move	a0,v0
  42f7a0:	00003825 	move	a3,zero
  42f7a4:	24a500a9 	addiu	a1,a1,169
  42f7a8:	0320f809 	jalr	t9
  42f7ac:	24c6f4b4 	addiu	a2,a2,-2892
  42f7b0:	8fbc0018 	lw	gp,24(sp)
  42f7b4:	8e040000 	lw	a0,0(s0)
  42f7b8:	8f8580a0 	lw	a1,-32608(gp)
  42f7bc:	8f868020 	lw	a2,-32736(gp)
  42f7c0:	8f9983ac 	lw	t9,-31828(gp)
  42f7c4:	00003825 	move	a3,zero
  42f7c8:	24a5214e 	addiu	a1,a1,8526
  42f7cc:	0320f809 	jalr	t9
  42f7d0:	24c6f66c 	addiu	a2,a2,-2452
  42f7d4:	8fbc0018 	lw	gp,24(sp)
  42f7d8:	00000000 	nop
  42f7dc:	8f82897c 	lw	v0,-30340(gp)
  42f7e0:	00000000 	nop
  42f7e4:	8c420000 	lw	v0,0(v0)
  42f7e8:	00000000 	nop
  42f7ec:	8c430048 	lw	v1,72(v0)
  42f7f0:	00000000 	nop
  42f7f4:	10600004 	beqz	v1,42f808 <createMarkControls+0x590>
  42f7f8:	00000000 	nop
  42f7fc:	8c640000 	lw	a0,0(v1)
  42f800:	1000000b 	b	42f830 <createMarkControls+0x5b8>
  42f804:	00000000 	nop
  42f808:	8c430044 	lw	v1,68(v0)
  42f80c:	00000000 	nop
  42f810:	10600004 	beqz	v1,42f824 <createMarkControls+0x5ac>
  42f814:	00000000 	nop
  42f818:	8c640000 	lw	a0,0(v1)
  42f81c:	10000004 	b	42f830 <createMarkControls+0x5b8>
  42f820:	00000000 	nop
  42f824:	8f84805c 	lw	a0,-32676(gp)
  42f828:	00000000 	nop
  42f82c:	24843c60 	addiu	a0,a0,15456
  42f830:	8f998170 	lw	t9,-32400(gp)
  42f834:	00000000 	nop
  42f838:	0320f809 	jalr	t9
  42f83c:	00000000 	nop
  42f840:	8fbc0018 	lw	gp,24(sp)
  42f844:	8e040000 	lw	a0,0(s0)
  42f848:	8f8f80a0 	lw	t7,-32608(gp)
  42f84c:	8f998340 	lw	t9,-31936(gp)
  42f850:	25ef2751 	addiu	t7,t7,10065
  42f854:	afa2002c 	sw	v0,44(sp)
  42f858:	afaf0038 	sw	t7,56(sp)
  42f85c:	afa2003c 	sw	v0,60(sp)
  42f860:	27a50038 	addiu	a1,sp,56
  42f864:	0320f809 	jalr	t9
  42f868:	24060001 	li	a2,1
  42f86c:	8fbc0018 	lw	gp,24(sp)
  42f870:	8fa4002c 	lw	a0,44(sp)
  42f874:	8f998178 	lw	t9,-32392(gp)
  42f878:	00000000 	nop
  42f87c:	0320f809 	jalr	t9
  42f880:	00000000 	nop
  42f884:	8fbc0018 	lw	gp,24(sp)
  42f888:	8e040000 	lw	a0,0(s0)
  42f88c:	8f998388 	lw	t9,-31864(gp)
  42f890:	00000000 	nop
  42f894:	0320f809 	jalr	t9
  42f898:	00000000 	nop
  42f89c:	8fbf001c 	lw	ra,28(sp)
  42f8a0:	8fbc0018 	lw	gp,24(sp)
  42f8a4:	8fb00014 	lw	s0,20(sp)
  42f8a8:	03e00008 	jr	ra
  42f8ac:	27bd0060 	addiu	sp,sp,96
