# Function: FUN_0042a9b4
# Address: 0x0042a9b4 - 0x0042ab10
# Size: 0x15c (348 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042a9b4 <bsearch2+0xc>:
  42a9b4:	24ceffff 	addiu	t6,a2,-1
  42a9b8:	00ee0019 	multu	a3,t6
  42a9bc:	27bdffa8 	addiu	sp,sp,-88
  42a9c0:	afb60030 	sw	s6,48(sp)
  42a9c4:	afb30024 	sw	s3,36(sp)
  42a9c8:	afb20020 	sw	s2,32(sp)
  42a9cc:	afb1001c 	sw	s1,28(sp)
  42a9d0:	00a08825 	move	s1,a1
  42a9d4:	00e09825 	move	s3,a3
  42a9d8:	0080b025 	move	s6,a0
  42a9dc:	afbf003c 	sw	ra,60(sp)
  42a9e0:	afbc0038 	sw	gp,56(sp)
  42a9e4:	afb70034 	sw	s7,52(sp)
  42a9e8:	00007812 	mflo	t7
  42a9ec:	00af1021 	addu	v0,a1,t7
  42a9f0:	0045082b 	sltu	at,v0,a1
  42a9f4:	afb5002c 	sw	s5,44(sp)
  42a9f8:	afb40028 	sw	s4,40(sp)
  42a9fc:	afb00018 	sw	s0,24(sp)
  42aa00:	00409025 	move	s2,v0
  42aa04:	1420002a 	bnez	at,42aab0 <bsearch2+0x108>
  42aa08:	afa2004c 	sw	v0,76(sp)
  42aa0c:	8fb70068 	lw	s7,104(sp)
  42aa10:	00e7a821 	addu	s5,a3,a3
  42aa14:	0251c023 	subu	t8,s2,s1
  42aa18:	0315001a 	div	zero,t8,s5
  42aa1c:	02c02025 	move	a0,s6
  42aa20:	16a00002 	bnez	s5,42aa2c <bsearch2+0x84>
  42aa24:	00000000 	nop
  42aa28:	0007000d 	break	0x7
  42aa2c:	2401ffff 	li	at,-1
  42aa30:	16a10004 	bne	s5,at,42aa44 <bsearch2+0x9c>
  42aa34:	3c018000 	lui	at,0x8000
  42aa38:	17010002 	bne	t8,at,42aa44 <bsearch2+0x9c>
  42aa3c:	00000000 	nop
  42aa40:	0006000d 	break	0x6
  42aa44:	0000c812 	mflo	t9
	...
  42aa50:	02790019 	multu	s3,t9
  42aa54:	02e0c825 	move	t9,s7
  42aa58:	00004012 	mflo	t0
  42aa5c:	02288021 	addu	s0,s1,t0
  42aa60:	0200a025 	move	s4,s0
  42aa64:	02e0f809 	jalr	s7
  42aa68:	02002825 	move	a1,s0
  42aa6c:	8fbc0038 	lw	gp,56(sp)
  42aa70:	14400005 	bnez	v0,42aa88 <bsearch2+0xe0>
  42aa74:	00401825 	move	v1,v0
  42aa78:	8fa9006c 	lw	t1,108(sp)
  42aa7c:	24020001 	li	v0,1
  42aa80:	10000018 	b	42aae4 <bsearch2+0x13c>
  42aa84:	ad300000 	sw	s0,0(t1)
  42aa88:	04410003 	bgez	v0,42aa98 <bsearch2+0xf0>
  42aa8c:	00000000 	nop
  42aa90:	10000002 	b	42aa9c <bsearch2+0xf4>
  42aa94:	02939023 	subu	s2,s4,s3
  42aa98:	02938821 	addu	s1,s4,s3
  42aa9c:	0251082b 	sltu	at,s2,s1
  42aaa0:	1020ffdd 	beqz	at,42aa18 <bsearch2+0x70>
  42aaa4:	0251c023 	subu	t8,s2,s1
  42aaa8:	afa30044 	sw	v1,68(sp)
  42aaac:	afb40048 	sw	s4,72(sp)
  42aab0:	8fa30044 	lw	v1,68(sp)
  42aab4:	8fb40048 	lw	s4,72(sp)
  42aab8:	8faa004c 	lw	t2,76(sp)
  42aabc:	18600003 	blez	v1,42aacc <bsearch2+0x124>
  42aac0:	0154082b 	sltu	at,t2,s4
  42aac4:	0293a021 	addu	s4,s4,s3
  42aac8:	0154082b 	sltu	at,t2,s4
  42aacc:	10200003 	beqz	at,42aadc <bsearch2+0x134>
  42aad0:	8fab006c 	lw	t3,108(sp)
  42aad4:	0000a025 	move	s4,zero
  42aad8:	8fab006c 	lw	t3,108(sp)
  42aadc:	00001025 	move	v0,zero
  42aae0:	ad740000 	sw	s4,0(t3)
  42aae4:	8fbf003c 	lw	ra,60(sp)
  42aae8:	8fb00018 	lw	s0,24(sp)
  42aaec:	8fb1001c 	lw	s1,28(sp)
  42aaf0:	8fb20020 	lw	s2,32(sp)
  42aaf4:	8fb30024 	lw	s3,36(sp)
  42aaf8:	8fb40028 	lw	s4,40(sp)
  42aafc:	8fb5002c 	lw	s5,44(sp)
  42ab00:	8fb60030 	lw	s6,48(sp)
  42ab04:	8fb70034 	lw	s7,52(sp)
  42ab08:	03e00008 	jr	ra
  42ab0c:	27bd0058 	addiu	sp,sp,88
