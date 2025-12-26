# Function: FUN_0042f8bc
# Address: 0x0042f8bc - 0x0042fa50
# Size: 0x194 (404 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042f8bc <dumpMarks+0xc>:
  42f8bc:	27bdffb0 	addiu	sp,sp,-80
  42f8c0:	afb70034 	sw	s7,52(sp)
  42f8c4:	8f97806c 	lw	s7,-32660(gp)
  42f8c8:	afb20020 	sw	s2,32(sp)
  42f8cc:	26f79524 	addiu	s7,s7,-27356
  42f8d0:	8eee0000 	lw	t6,0(s7)
  42f8d4:	afb00018 	sw	s0,24(sp)
  42f8d8:	00808025 	move	s0,a0
  42f8dc:	afbf003c 	sw	ra,60(sp)
  42f8e0:	afbc0038 	sw	gp,56(sp)
  42f8e4:	afb60030 	sw	s6,48(sp)
  42f8e8:	afb5002c 	sw	s5,44(sp)
  42f8ec:	afb40028 	sw	s4,40(sp)
  42f8f0:	afb30024 	sw	s3,36(sp)
  42f8f4:	afb1001c 	sw	s1,28(sp)
  42f8f8:	19c0004a 	blez	t6,42fa24 <dumpMarks+0x174>
  42f8fc:	00009025 	move	s2,zero
  42f900:	8f93806c 	lw	s3,-32660(gp)
  42f904:	8f94809c 	lw	s4,-32612(gp)
  42f908:	00008825 	move	s1,zero
  42f90c:	24160007 	li	s6,7
  42f910:	27b50048 	addiu	s5,sp,72
  42f914:	26739520 	addiu	s3,s3,-27360
  42f918:	8e8f0000 	lw	t7,0(s4)
  42f91c:	00000000 	nop
  42f920:	11e00008 	beqz	t7,42f944 <dumpMarks+0x94>
  42f924:	00000000 	nop
  42f928:	8f998284 	lw	t9,-32124(gp)
  42f92c:	24040007 	li	a0,7
  42f930:	0320f809 	jalr	t9
  42f934:	02002825 	move	a1,s0
  42f938:	8fbc0038 	lw	gp,56(sp)
  42f93c:	10000015 	b	42f994 <dumpMarks+0xe4>
  42f940:	8e6c0000 	lw	t4,0(s3)
  42f944:	8e180000 	lw	t8,0(s0)
  42f948:	00000000 	nop
  42f94c:	2719ffff 	addiu	t9,t8,-1
  42f950:	07210008 	bgez	t9,42f974 <dumpMarks+0xc4>
  42f954:	ae190000 	sw	t9,0(s0)
  42f958:	8f998288 	lw	t9,-32120(gp)
  42f95c:	24040007 	li	a0,7
  42f960:	0320f809 	jalr	t9
  42f964:	02002825 	move	a1,s0
  42f968:	8fbc0038 	lw	gp,56(sp)
  42f96c:	10000009 	b	42f994 <dumpMarks+0xe4>
  42f970:	8e6c0000 	lw	t4,0(s3)
  42f974:	8e090004 	lw	t1,4(s0)
  42f978:	00000000 	nop
  42f97c:	a1360000 	sb	s6,0(t1)
  42f980:	8e0a0004 	lw	t2,4(s0)
  42f984:	00000000 	nop
  42f988:	254b0001 	addiu	t3,t2,1
  42f98c:	ae0b0004 	sw	t3,4(s0)
  42f990:	8e6c0000 	lw	t4,0(s3)
  42f994:	8f9983e0 	lw	t9,-31776(gp)
  42f998:	01916821 	addu	t5,t4,s1
  42f99c:	8da40038 	lw	a0,56(t5)
  42f9a0:	0320f809 	jalr	t9
  42f9a4:	00000000 	nop
  42f9a8:	8fbc0038 	lw	gp,56(sp)
  42f9ac:	a7a20048 	sh	v0,72(sp)
  42f9b0:	8f99828c 	lw	t9,-32116(gp)
  42f9b4:	02a02025 	move	a0,s5
  42f9b8:	24050002 	li	a1,2
  42f9bc:	24060001 	li	a2,1
  42f9c0:	0320f809 	jalr	t9
  42f9c4:	02003825 	move	a3,s0
  42f9c8:	8fbc0038 	lw	gp,56(sp)
  42f9cc:	8e6e0000 	lw	t6,0(s3)
  42f9d0:	8f99828c 	lw	t9,-32116(gp)
  42f9d4:	01d17821 	addu	t7,t6,s1
  42f9d8:	8de40038 	lw	a0,56(t7)
  42f9dc:	87a60048 	lh	a2,72(sp)
  42f9e0:	24050001 	li	a1,1
  42f9e4:	0320f809 	jalr	t9
  42f9e8:	02003825 	move	a3,s0
  42f9ec:	8e790000 	lw	t9,0(s3)
  42f9f0:	8fbc0038 	lw	gp,56(sp)
  42f9f4:	0012c180 	sll	t8,s2,0x6
  42f9f8:	03192021 	addu	a0,t8,t9
  42f9fc:	8f9987d0 	lw	t9,-30768(gp)
  42fa00:	02002825 	move	a1,s0
  42fa04:	0320f809 	jalr	t9
  42fa08:	00000000 	nop
  42fa0c:	8ee80000 	lw	t0,0(s7)
  42fa10:	26520001 	addiu	s2,s2,1
  42fa14:	8fbc0038 	lw	gp,56(sp)
  42fa18:	0248082a 	slt	at,s2,t0
  42fa1c:	1420ffbe 	bnez	at,42f918 <dumpMarks+0x68>
  42fa20:	26310040 	addiu	s1,s1,64
  42fa24:	8fbf003c 	lw	ra,60(sp)
  42fa28:	8fb00018 	lw	s0,24(sp)
  42fa2c:	8fb1001c 	lw	s1,28(sp)
  42fa30:	8fb20020 	lw	s2,32(sp)
  42fa34:	8fb30024 	lw	s3,36(sp)
  42fa38:	8fb40028 	lw	s4,40(sp)
  42fa3c:	8fb5002c 	lw	s5,44(sp)
  42fa40:	8fb60030 	lw	s6,48(sp)
  42fa44:	8fb70034 	lw	s7,52(sp)
  42fa48:	03e00008 	jr	ra
  42fa4c:	27bd0050 	addiu	sp,sp,80
