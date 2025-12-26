# Function: FUN_00421c14
# Address: 0x00421c14 - 0x00421cd0
# Size: 0xbc (188 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421c14 <highlightOverviewDir+0x2d4>:
  421c14:	3c1c0fc0 	lui	gp,0xfc0
  421c18:	279cbf1c 	addiu	gp,gp,-16612
  421c1c:	0399e021 	addu	gp,gp,t9
  421c20:	27bdffc8 	addiu	sp,sp,-56
  421c24:	afb30024 	sw	s3,36(sp)
  421c28:	8f938944 	lw	s3,-30396(gp)
  421c2c:	afb00018 	sw	s0,24(sp)
  421c30:	8e6e0000 	lw	t6,0(s3)
  421c34:	afbf0034 	sw	ra,52(sp)
  421c38:	afbc0030 	sw	gp,48(sp)
  421c3c:	afb5002c 	sw	s5,44(sp)
  421c40:	afb40028 	sw	s4,40(sp)
  421c44:	afb20020 	sw	s2,32(sp)
  421c48:	afb1001c 	sw	s1,28(sp)
  421c4c:	19c00017 	blez	t6,421cac <highlightOverviewDir+0x36c>
  421c50:	00008025 	move	s0,zero
  421c54:	8f91806c 	lw	s1,-32660(gp)
  421c58:	8f92806c 	lw	s2,-32660(gp)
  421c5c:	8f958a04 	lw	s5,-30204(gp)
  421c60:	8f948948 	lw	s4,-30392(gp)
  421c64:	26316c10 	addiu	s1,s1,27664
  421c68:	26526c38 	addiu	s2,s2,27704
  421c6c:	8e820000 	lw	v0,0(s4)
  421c70:	8e250000 	lw	a1,0(s1)
  421c74:	00027880 	sll	t7,v0,0x2
  421c78:	024fc021 	addu	t8,s2,t7
  421c7c:	af050000 	sw	a1,0(t8)
  421c80:	8f9982b4 	lw	t9,-32076(gp)
  421c84:	8ea40000 	lw	a0,0(s5)
  421c88:	02403025 	move	a2,s2
  421c8c:	0320f809 	jalr	t9
  421c90:	24470001 	addiu	a3,v0,1
  421c94:	8e790000 	lw	t9,0(s3)
  421c98:	26100001 	addiu	s0,s0,1
  421c9c:	8fbc0030 	lw	gp,48(sp)
  421ca0:	0219082a 	slt	at,s0,t9
  421ca4:	1420fff1 	bnez	at,421c6c <highlightOverviewDir+0x32c>
  421ca8:	26310004 	addiu	s1,s1,4
  421cac:	8fbf0034 	lw	ra,52(sp)
  421cb0:	8fb00018 	lw	s0,24(sp)
  421cb4:	8fb1001c 	lw	s1,28(sp)
  421cb8:	8fb20020 	lw	s2,32(sp)
  421cbc:	8fb30024 	lw	s3,36(sp)
  421cc0:	8fb40028 	lw	s4,40(sp)
  421cc4:	8fb5002c 	lw	s5,44(sp)
  421cc8:	03e00008 	jr	ra
  421ccc:	27bd0038 	addiu	sp,sp,56
