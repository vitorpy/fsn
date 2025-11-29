# Disassembly of FUN_004189b0
# Address: 0x004189b0
# End: 0x00418c24
# Size: 0x274 (628 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004189b0 <text+0xc>:
  4189b0:	27bdffb8 	addiu	sp,sp,-72
  4189b4:	afbf0044 	sw	ra,68(sp)
  4189b8:	afbe0040 	sw	s8,64(sp)
  4189bc:	afbc003c 	sw	gp,60(sp)
  4189c0:	afb70038 	sw	s7,56(sp)
  4189c4:	afb60034 	sw	s6,52(sp)
  4189c8:	afb50030 	sw	s5,48(sp)
  4189cc:	afb4002c 	sw	s4,44(sp)
  4189d0:	afb30028 	sw	s3,40(sp)
  4189d4:	afb20024 	sw	s2,36(sp)
  4189d8:	afb10020 	sw	s1,32(sp)
  4189dc:	afb0001c 	sw	s0,28(sp)
  4189e0:	e7b50010 	swc1	$f21,16(sp)
  4189e4:	e7b40014 	swc1	$f20,20(sp)
  4189e8:	90910000 	lbu	s1,0(a0)
  4189ec:	00809825 	move	s3,a0
  4189f0:	1220007e 	beqz	s1,418bec <text+0x248>
  4189f4:	241e0004 	li	s8,4
  4189f8:	4480a000 	mtc1	zero,$f20
  4189fc:	8f948934 	lw	s4,-30412(gp)  # chrtbl
  418a00:	24170003 	li	s7,3
  418a04:	24160002 	li	s6,2
  418a08:	24150001 	li	s5,1
  418a0c:	001170c0 	sll	t6,s1,0x3
  418a10:	01d17023 	subu	t6,t6,s1
  418a14:	000e7080 	sll	t6,t6,0x2
  418a18:	01d17023 	subu	t6,t6,s1
  418a1c:	000e70c0 	sll	t6,t6,0x3
  418a20:	028e7821 	addu	t7,s4,t6
  418a24:	8de30000 	lw	v1,0(t7)
  418a28:	00000000 	nop
  418a2c:	1060006b 	beqz	v1,418bdc <text+0x238>
  418a30:	00000000 	nop
  418a34:	10600069 	beqz	v1,418bdc <text+0x238>
  418a38:	00601025 	move	v0,v1
  418a3c:	00009025 	move	s2,zero
  418a40:	1055000e 	beq	v0,s5,418a7c <text+0xd8>
  418a44:	001140c0 	sll	t0,s1,0x3
  418a48:	10560025 	beq	v0,s6,418ae0 <text+0x13c>
  418a4c:	0011c0c0 	sll	t8,s1,0x3
  418a50:	0311c023 	subu	t8,t8,s1
  418a54:	0018c080 	sll	t8,t8,0x2
  418a58:	0311c023 	subu	t8,t8,s1
  418a5c:	0018c0c0 	sll	t8,t8,0x3
  418a60:	0298c821 	addu	t9,s4,t8
  418a64:	10570038 	beq	v0,s7,418b48 <text+0x1a4>
  418a68:	03328021 	addu	s0,t9,s2
  418a6c:	105e0044 	beq	v0,s8,418b80 <text+0x1dc>
  418a70:	00000000 	nop
  418a74:	10000056 	b	418bd0 <text+0x22c>
  418a78:	8e02000c 	lw	v0,12(s0)
  418a7c:	01114023 	subu	t0,t0,s1
  418a80:	00084080 	sll	t0,t0,0x2
  418a84:	01114023 	subu	t0,t0,s1
  418a88:	000840c0 	sll	t0,t0,0x3
  418a8c:	02884821 	addu	t1,s4,t0
  418a90:	01328021 	addu	s0,t1,s2
  418a94:	8e0a0004 	lw	t2,4(s0)
  418a98:	8e0b0008 	lw	t3,8(s0)
  418a9c:	8f9984a0 	lw	t9,-31584(gp)  # translate
  418aa0:	448a2000 	mtc1	t2,$f4
  418aa4:	448b3000 	mtc1	t3,$f6
  418aa8:	4406a000 	mfc1	a2,$f20
  418aac:	46802320 	cvt.s.w	$f12,$f4
  418ab0:	0320f809 	jalr	t9  # call translate
  418ab4:	468033a0 	cvt.s.w	$f14,$f6
  418ab8:	92710000 	lbu	s1,0(s3)
  418abc:	8fbc003c 	lw	gp,60(sp)
  418ac0:	001160c0 	sll	t4,s1,0x3
  418ac4:	01916023 	subu	t4,t4,s1
  418ac8:	000c6080 	sll	t4,t4,0x2
  418acc:	01916023 	subu	t4,t4,s1
  418ad0:	000c60c0 	sll	t4,t4,0x3
  418ad4:	028c6821 	addu	t5,s4,t4
  418ad8:	1000003c 	b	418bcc <text+0x228>
  418adc:	01b28021 	addu	s0,t5,s2
  418ae0:	8f998484 	lw	t9,-31612(gp)
  418ae4:	00000000 	nop
  418ae8:	0320f809 	jalr	t9
  418aec:	00000000 	nop
  418af0:	926e0000 	lbu	t6,0(s3)
  418af4:	8fbc003c 	lw	gp,60(sp)
  418af8:	000e78c0 	sll	t7,t6,0x3
  418afc:	01ee7823 	subu	t7,t7,t6
  418b00:	000f7880 	sll	t7,t7,0x2
  418b04:	01ee7823 	subu	t7,t7,t6
  418b08:	000f78c0 	sll	t7,t7,0x3
  418b0c:	8f998398 	lw	t9,-31848(gp)
  418b10:	028fc021 	addu	t8,s4,t7
  418b14:	03122021 	addu	a0,t8,s2
  418b18:	0320f809 	jalr	t9
  418b1c:	24840004 	addiu	a0,a0,4
  418b20:	92710000 	lbu	s1,0(s3)
  418b24:	8fbc003c 	lw	gp,60(sp)
  418b28:	0011c8c0 	sll	t9,s1,0x3
  418b2c:	0331c823 	subu	t9,t9,s1
  418b30:	0019c880 	sll	t9,t9,0x2
  418b34:	0331c823 	subu	t9,t9,s1
  418b38:	0019c8c0 	sll	t9,t9,0x3
  418b3c:	02994021 	addu	t0,s4,t9
  418b40:	10000022 	b	418bcc <text+0x228>
  418b44:	01128021 	addu	s0,t0,s2
  418b48:	8f998398 	lw	t9,-31848(gp)
  418b4c:	26040004 	addiu	a0,s0,4
  418b50:	0320f809 	jalr	t9
  418b54:	00000000 	nop
  418b58:	92710000 	lbu	s1,0(s3)
  418b5c:	8fbc003c 	lw	gp,60(sp)
  418b60:	001148c0 	sll	t1,s1,0x3
  418b64:	01314823 	subu	t1,t1,s1
  418b68:	00094880 	sll	t1,t1,0x2
  418b6c:	01314823 	subu	t1,t1,s1
  418b70:	000948c0 	sll	t1,t1,0x3
  418b74:	02895021 	addu	t2,s4,t1
  418b78:	10000014 	b	418bcc <text+0x228>
  418b7c:	01528021 	addu	s0,t2,s2
  418b80:	8f998398 	lw	t9,-31848(gp)
  418b84:	26040004 	addiu	a0,s0,4
  418b88:	0320f809 	jalr	t9
  418b8c:	00000000 	nop
  418b90:	8fbc003c 	lw	gp,60(sp)
  418b94:	00000000 	nop
  418b98:	8f99846c 	lw	t9,-31636(gp)
  418b9c:	00000000 	nop
  418ba0:	0320f809 	jalr	t9
  418ba4:	00000000 	nop
  418ba8:	92710000 	lbu	s1,0(s3)
  418bac:	8fbc003c 	lw	gp,60(sp)
  418bb0:	001158c0 	sll	t3,s1,0x3
  418bb4:	01715823 	subu	t3,t3,s1
  418bb8:	000b5880 	sll	t3,t3,0x2
  418bbc:	01715823 	subu	t3,t3,s1
  418bc0:	000b58c0 	sll	t3,t3,0x3
  418bc4:	028b6021 	addu	t4,s4,t3
  418bc8:	01928021 	addu	s0,t4,s2
  418bcc:	8e02000c 	lw	v0,12(s0)
  418bd0:	2652000c 	addiu	s2,s2,12
  418bd4:	1440ff9a 	bnez	v0,418a40 <text+0x9c>
  418bd8:	2610000c 	addiu	s0,s0,12
  418bdc:	92710001 	lbu	s1,1(s3)
  418be0:	26730001 	addiu	s3,s3,1
  418be4:	1620ff8a 	bnez	s1,418a10 <text+0x6c>
  418be8:	001170c0 	sll	t6,s1,0x3
  418bec:	8fbf0044 	lw	ra,68(sp)
  418bf0:	c7b50010 	lwc1	$f21,16(sp)
  418bf4:	c7b40014 	lwc1	$f20,20(sp)
  418bf8:	8fb0001c 	lw	s0,28(sp)
  418bfc:	8fb10020 	lw	s1,32(sp)
  418c00:	8fb20024 	lw	s2,36(sp)
  418c04:	8fb30028 	lw	s3,40(sp)
  418c08:	8fb4002c 	lw	s4,44(sp)
  418c0c:	8fb50030 	lw	s5,48(sp)
  418c10:	8fb60034 	lw	s6,52(sp)
  418c14:	8fb70038 	lw	s7,56(sp)
  418c18:	8fbe0040 	lw	s8,64(sp)
  418c1c:	03e00008 	jr	ra
  418c20:	27bd0048 	addiu	sp,sp,72


======================================================================
ANALYSIS SUMMARY: FUN_004189b0
======================================================================

FUNCTION CALLS:
----------------------------------------
  translate

IRISGL CALLS (with addresses):
----------------------------------------
  0x00418ab0: translate

GP SYMBOL REFERENCES:
----------------------------------------
  chrtbl
  translate

======================================================================