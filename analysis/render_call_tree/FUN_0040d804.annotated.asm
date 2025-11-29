# Disassembly of FUN_0040d804
# Address: 0x0040d804
# End: 0x0040d9a0
# Size: 0x19c (412 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040d804 <setScales+0xc>:
  40d804:	8f8e8a20 	lw	t6,-30176(gp)  # controlsShowing
  40d808:	27bdff80 	addiu	sp,sp,-128
  40d80c:	91ce0000 	lbu	t6,0(t6)
  40d810:	afbf001c 	sw	ra,28(sp)
  40d814:	11c0005e 	beqz	t6,40d990 <setScales+0x198>
  40d818:	afbc0018 	sw	gp,24(sp)
  40d81c:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40d820:	00000000 	nop
  40d824:	8c420000 	lw	v0,0(v0)
  40d828:	00000000 	nop
  40d82c:	904f0c53 	lbu	t7,3155(v0)
  40d830:	00000000 	nop
  40d834:	15e00057 	bnez	t7,40d994 <setScales+0x19c>
  40d838:	8fbf001c 	lw	ra,28(sp)
  40d83c:	8f988068 	lw	t8,-32664(gp)  # small
  40d840:	8443000c 	lh	v1,12(v0)
  40d844:	87180148 	lh	t8,328(t8)
  40d848:	27a50030 	addiu	a1,sp,48
  40d84c:	13030012 	beq	t8,v1,40d898 <setScales+0xa0>
  40d850:	24060001 	li	a2,1
  40d854:	8f9980a4 	lw	t9,-32604(gp)
  40d858:	8f818068 	lw	at,-32664(gp)  # small
  40d85c:	2739035b 	addiu	t9,t9,859
  40d860:	afb90030 	sw	t9,48(sp)
  40d864:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  40d868:	a4230148 	sh	v1,328(at)
  40d86c:	8448000c 	lh	t0,12(v0)
  40d870:	8f998340 	lw	t9,-31936(gp)
  40d874:	8c84663c 	lw	a0,26172(a0)
  40d878:	0320f809 	jalr	t9
  40d87c:	afa80034 	sw	t0,52(sp)
  40d880:	8fbc0018 	lw	gp,24(sp)
  40d884:	00000000 	nop
  40d888:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40d88c:	00000000 	nop
  40d890:	8c420000 	lw	v0,0(v0)
  40d894:	00000000 	nop
  40d898:	8f898068 	lw	t1,-32664(gp)  # small
  40d89c:	8443000e 	lh	v1,14(v0)
  40d8a0:	8529014c 	lh	t1,332(t1)
  40d8a4:	27a50030 	addiu	a1,sp,48
  40d8a8:	11230012 	beq	t1,v1,40d8f4 <setScales+0xfc>
  40d8ac:	24060001 	li	a2,1
  40d8b0:	8f8a80a4 	lw	t2,-32604(gp)
  40d8b4:	8f818068 	lw	at,-32664(gp)  # small
  40d8b8:	254a035b 	addiu	t2,t2,859
  40d8bc:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  40d8c0:	afaa0030 	sw	t2,48(sp)
  40d8c4:	a423014c 	sh	v1,332(at)
  40d8c8:	844b000e 	lh	t3,14(v0)
  40d8cc:	8f998340 	lw	t9,-31936(gp)
  40d8d0:	8c846640 	lw	a0,26176(a0)
  40d8d4:	0320f809 	jalr	t9
  40d8d8:	afab0034 	sw	t3,52(sp)
  40d8dc:	8fbc0018 	lw	gp,24(sp)
  40d8e0:	00000000 	nop
  40d8e4:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  40d8e8:	00000000 	nop
  40d8ec:	8c420000 	lw	v0,0(v0)
  40d8f0:	00000000 	nop
  40d8f4:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  40d8f8:	c4400008 	lwc1	$f0,8(v0)
  40d8fc:	c426668c 	lwc1	$f6,26252(at)
  40d900:	46000121 	cvt.d.s	$f4,$f0
  40d904:	46003221 	cvt.d.s	$f8,$f6
  40d908:	46282032 	c.eq.d	$f4,$f8
  40d90c:	00000000 	nop
  40d910:	45010020 	bc1t	40d994 <setScales+0x19c>
  40d914:	8fbf001c 	lw	ra,28(sp)
  40d918:	8f8c80a4 	lw	t4,-32604(gp)
  40d91c:	8f81806c 	lw	at,-32660(gp)  # DAT_10010000
  40d920:	258c035b 	addiu	t4,t4,859
  40d924:	8f9984f0 	lw	t9,-31504(gp)
  40d928:	afac0030 	sw	t4,48(sp)
  40d92c:	e420668c 	swc1	$f0,26252(at)
  40d930:	c44c0008 	lwc1	$f12,8(v0)
  40d934:	0320f809 	jalr	t9
  40d938:	00000000 	nop
  40d93c:	3c014024 	lui	at,0x4024
  40d940:	44818800 	mtc1	at,$f17  # $f17 = 2.5625f
  40d944:	44808000 	mtc1	zero,$f16
  40d948:	460002a1 	cvt.d.s	$f10,$f0
  40d94c:	46305482 	mul.d	$f18,$f10,$f16
  40d950:	8fbc0018 	lw	gp,24(sp)
  40d954:	24060001 	li	a2,1
  40d958:	8f84806c 	lw	a0,-32660(gp)  # DAT_10010000
  40d95c:	8f998340 	lw	t9,-31936(gp)
  40d960:	444df800 	cfc1	t5,c1_fcsr
  40d964:	8c846644 	lw	a0,26180(a0)
  40d968:	35a10003 	ori	at,t5,0x3
  40d96c:	38210002 	xori	at,at,0x2
  40d970:	44c1f800 	ctc1	at,c1_fcsr
  40d974:	27a50030 	addiu	a1,sp,48
  40d978:	462091a4 	cvt.w.d	$f6,$f18
  40d97c:	44cdf800 	ctc1	t5,c1_fcsr
  40d980:	0320f809 	jalr	t9
  40d984:	e7a60034 	swc1	$f6,52(sp)
  40d988:	8fbc0018 	lw	gp,24(sp)
  40d98c:	00000000 	nop
  40d990:	8fbf001c 	lw	ra,28(sp)
  40d994:	27bd0080 	addiu	sp,sp,128
  40d998:	03e00008 	jr	ra
  40d99c:	00000000 	nop


======================================================================
ANALYSIS SUMMARY: FUN_0040d804
======================================================================

FLOAT CONSTANTS LOADED:
----------------------------------------
  0x40240000 = 2.5625f

GP SYMBOL REFERENCES:
----------------------------------------
  DAT_10010000
  controlsShowing
  curcontext
  small

======================================================================