# Function: FUN_0041c928
# Address: 0x0041c928 - 0x0041c9dc
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041c928 <redrawSelectionNames+0x214>:
  41c928:	3c1c0fc0 	lui	gp,0xfc0
  41c92c:	279c1208 	addiu	gp,gp,4616
  41c930:	0399e021 	addu	gp,gp,t9
  41c934:	27bdffd0 	addiu	sp,sp,-48
  41c938:	8f8e8068 	lw	t6,-32664(gp)
  41c93c:	afb30024 	sw	s3,36(sp)
  41c940:	91ce6e54 	lbu	t6,28244(t6)
  41c944:	309300ff 	andi	s3,a0,0xff
  41c948:	afbf002c 	sw	ra,44(sp)
  41c94c:	afbc0028 	sw	gp,40(sp)
  41c950:	afb20020 	sw	s2,32(sp)
  41c954:	afb1001c 	sw	s1,28(sp)
  41c958:	afb00018 	sw	s0,24(sp)
  41c95c:	126e0018 	beq	s3,t6,41c9c0 <redrawSelectionNames+0x2ac>
  41c960:	afa40030 	sw	a0,48(sp)
  41c964:	8f928068 	lw	s2,-32664(gp)
  41c968:	00008025 	move	s0,zero
  41c96c:	26526e20 	addiu	s2,s2,28192
  41c970:	8e4f0000 	lw	t7,0(s2)
  41c974:	00000000 	nop
  41c978:	19e0000e 	blez	t7,41c9b4 <redrawSelectionNames+0x2a0>
  41c97c:	00000000 	nop
  41c980:	8f91806c 	lw	s1,-32660(gp)
  41c984:	00000000 	nop
  41c988:	26316ba0 	addiu	s1,s1,27552
  41c98c:	8f998318 	lw	t9,-31976(gp)
  41c990:	8e240000 	lw	a0,0(s1)
  41c994:	0320f809 	jalr	t9
  41c998:	02602825 	move	a1,s3
  41c99c:	8e580000 	lw	t8,0(s2)
  41c9a0:	26100001 	addiu	s0,s0,1
  41c9a4:	8fbc0028 	lw	gp,40(sp)
  41c9a8:	0218082a 	slt	at,s0,t8
  41c9ac:	1420fff7 	bnez	at,41c98c <redrawSelectionNames+0x278>
  41c9b0:	26310004 	addiu	s1,s1,4
  41c9b4:	8f818068 	lw	at,-32664(gp)
  41c9b8:	00000000 	nop
  41c9bc:	a0336e54 	sb	s3,28244(at)
  41c9c0:	8fbf002c 	lw	ra,44(sp)
  41c9c4:	8fb00018 	lw	s0,24(sp)
  41c9c8:	8fb1001c 	lw	s1,28(sp)
  41c9cc:	8fb20020 	lw	s2,32(sp)
  41c9d0:	8fb30024 	lw	s3,36(sp)
  41c9d4:	03e00008 	jr	ra
  41c9d8:	27bd0030 	addiu	sp,sp,48
