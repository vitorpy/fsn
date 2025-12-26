# Function: deleteMessage
# Address: 0x00410c9c - 0x00410d98
# Size: 0xfc (252 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410c9c <deleteMessage>:
  410c9c:	3c1c0fc1 	lui	gp,0xfc1
  410ca0:	279cce94 	addiu	gp,gp,-12652
  410ca4:	0399e021 	addu	gp,gp,t9
  410ca8:	27bdffc8 	addiu	sp,sp,-56
  410cac:	afb1001c 	sw	s1,28(sp)
  410cb0:	8f918068 	lw	s1,-32664(gp)
  410cb4:	afbf0024 	sw	ra,36(sp)
  410cb8:	26310020 	addiu	s1,s1,32
  410cbc:	8e220000 	lw	v0,0(s1)
  410cc0:	afbc0020 	sw	gp,32(sp)
  410cc4:	1482002d 	bne	a0,v0,410d7c <deleteMessage+0xe0>
  410cc8:	afb00018 	sw	s0,24(sp)
  410ccc:	8c4e0004 	lw	t6,4(v0)
  410cd0:	00408025 	move	s0,v0
  410cd4:	ae2e0000 	sw	t6,0(s1)
  410cd8:	8f998178 	lw	t9,-32392(gp)
  410cdc:	8c440000 	lw	a0,0(v0)
  410ce0:	0320f809 	jalr	t9
  410ce4:	00000000 	nop
  410ce8:	8fbc0020 	lw	gp,32(sp)
  410cec:	02002025 	move	a0,s0
  410cf0:	8f998174 	lw	t9,-32396(gp)
  410cf4:	00000000 	nop
  410cf8:	0320f809 	jalr	t9
  410cfc:	00000000 	nop
  410d00:	8e220000 	lw	v0,0(s1)
  410d04:	8fbc0020 	lw	gp,32(sp)
  410d08:	10400005 	beqz	v0,410d20 <deleteMessage+0x84>
  410d0c:	00000000 	nop
  410d10:	904f0008 	lbu	t7,8(v0)
  410d14:	00000000 	nop
  410d18:	15e0ffec 	bnez	t7,410ccc <deleteMessage+0x30>
  410d1c:	00000000 	nop
  410d20:	10400008 	beqz	v0,410d44 <deleteMessage+0xa8>
  410d24:	27a5002c 	addiu	a1,sp,44
  410d28:	8f9880a0 	lw	t8,-32608(gp)
  410d2c:	00000000 	nop
  410d30:	27181d4d 	addiu	t8,t8,7501
  410d34:	afb8002c 	sw	t8,44(sp)
  410d38:	8c590000 	lw	t9,0(v0)
  410d3c:	10000007 	b	410d5c <deleteMessage+0xc0>
  410d40:	afb90030 	sw	t9,48(sp)
  410d44:	8f898a08 	lw	t1,-30200(gp)
  410d48:	8f8880a0 	lw	t0,-32608(gp)
  410d4c:	8d290000 	lw	t1,0(t1)
  410d50:	25081d4d 	addiu	t0,t0,7501
  410d54:	afa8002c 	sw	t0,44(sp)
  410d58:	afa90030 	sw	t1,48(sp)
  410d5c:	8f84806c 	lw	a0,-32660(gp)
  410d60:	8f998340 	lw	t9,-31936(gp)
  410d64:	8c846648 	lw	a0,26184(a0)
  410d68:	0320f809 	jalr	t9
  410d6c:	24060001 	li	a2,1
  410d70:	8fbc0020 	lw	gp,32(sp)
  410d74:	10000004 	b	410d88 <deleteMessage+0xec>
  410d78:	8fbf0024 	lw	ra,36(sp)
  410d7c:	240a0001 	li	t2,1
  410d80:	a08a0008 	sb	t2,8(a0)
  410d84:	8fbf0024 	lw	ra,36(sp)
  410d88:	8fb00018 	lw	s0,24(sp)
  410d8c:	8fb1001c 	lw	s1,28(sp)
  410d90:	03e00008 	jr	ra
  410d94:	27bd0038 	addiu	sp,sp,56
