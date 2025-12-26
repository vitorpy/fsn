# Function: FUN_0042d8e0
# Address: 0x0042d8e0 - 0x0042d9f8
# Size: 0x118 (280 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042d8e0 <hidePreferencePanel+0xc8c>:
  42d8e0:	3c1c0fbf 	lui	gp,0xfbf
  42d8e4:	279c0250 	addiu	gp,gp,592
  42d8e8:	0399e021 	addu	gp,gp,t9
  42d8ec:	27bdffc8 	addiu	sp,sp,-56
  42d8f0:	afa40038 	sw	a0,56(sp)
  42d8f4:	8f8e80a4 	lw	t6,-32604(gp)
  42d8f8:	8f84806c 	lw	a0,-32660(gp)
  42d8fc:	8f998364 	lw	t9,-31900(gp)
  42d900:	afbf001c 	sw	ra,28(sp)
  42d904:	afa5003c 	sw	a1,60(sp)
  42d908:	afa60040 	sw	a2,64(sp)
  42d90c:	27af0034 	addiu	t7,sp,52
  42d910:	25ce035b 	addiu	t6,t6,859
  42d914:	8c846e30 	lw	a0,28208(a0)
  42d918:	afbc0018 	sw	gp,24(sp)
  42d91c:	afae0024 	sw	t6,36(sp)
  42d920:	afaf0028 	sw	t7,40(sp)
  42d924:	24060001 	li	a2,1
  42d928:	0320f809 	jalr	t9
  42d92c:	27a50024 	addiu	a1,sp,36
  42d930:	8fbc0018 	lw	gp,24(sp)
  42d934:	27b90030 	addiu	t9,sp,48
  42d938:	8f9880a4 	lw	t8,-32604(gp)
  42d93c:	8f84806c 	lw	a0,-32660(gp)
  42d940:	afb90028 	sw	t9,40(sp)
  42d944:	8f998364 	lw	t9,-31900(gp)
  42d948:	2718035b 	addiu	t8,t8,859
  42d94c:	8c846e34 	lw	a0,28212(a0)
  42d950:	afb80024 	sw	t8,36(sp)
  42d954:	27a50024 	addiu	a1,sp,36
  42d958:	0320f809 	jalr	t9
  42d95c:	24060001 	li	a2,1
  42d960:	8fbc0018 	lw	gp,24(sp)
  42d964:	27a9002c 	addiu	t1,sp,44
  42d968:	8f8880a4 	lw	t0,-32604(gp)
  42d96c:	8f84806c 	lw	a0,-32660(gp)
  42d970:	8f998364 	lw	t9,-31900(gp)
  42d974:	2508035b 	addiu	t0,t0,859
  42d978:	8c846e38 	lw	a0,28216(a0)
  42d97c:	afa80024 	sw	t0,36(sp)
  42d980:	afa90028 	sw	t1,40(sp)
  42d984:	27a50024 	addiu	a1,sp,36
  42d988:	0320f809 	jalr	t9
  42d98c:	24060001 	li	a2,1
  42d990:	8fbc0018 	lw	gp,24(sp)
  42d994:	8faa0030 	lw	t2,48(sp)
  42d998:	8f99806c 	lw	t9,-32660(gp)
  42d99c:	8fac0034 	lw	t4,52(sp)
  42d9a0:	8f3994ec 	lw	t9,-27412(t9)
  42d9a4:	8fae002c 	lw	t6,44(sp)
  42d9a8:	8f280004 	lw	t0,4(t9)
  42d9ac:	8f998020 	lw	t9,-32736(gp)
  42d9b0:	000a5a00 	sll	t3,t2,0x8
  42d9b4:	016c6821 	addu	t5,t3,t4
  42d9b8:	000e7c00 	sll	t7,t6,0x10
  42d9bc:	01afc021 	addu	t8,t5,t7
  42d9c0:	2739d6f0 	addiu	t9,t9,-10512
  42d9c4:	0320f809 	jalr	t9
  42d9c8:	ad180000 	sw	t8,0(t0)
  42d9cc:	8fbc0018 	lw	gp,24(sp)
  42d9d0:	24040006 	li	a0,6
  42d9d4:	8f998020 	lw	t9,-32736(gp)
  42d9d8:	00000000 	nop
  42d9dc:	2739c970 	addiu	t9,t9,-13968
  42d9e0:	0320f809 	jalr	t9
  42d9e4:	00000000 	nop
  42d9e8:	8fbf001c 	lw	ra,28(sp)
  42d9ec:	8fbc0018 	lw	gp,24(sp)
  42d9f0:	03e00008 	jr	ra
  42d9f4:	27bd0038 	addiu	sp,sp,56
