# Function: readMark
# Address: 0x0042fa50 - 0x0042fb74
# Size: 0x124 (292 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042fa50 <readMark>:
  42fa50:	3c1c0fbf 	lui	gp,0xfbf
  42fa54:	279ce0e0 	addiu	gp,gp,-7968
  42fa58:	0399e021 	addu	gp,gp,t9
  42fa5c:	27bdfba0 	addiu	sp,sp,-1120
  42fa60:	8f9982cc 	lw	t9,-32052(gp)
  42fa64:	afa40460 	sw	a0,1120(sp)
  42fa68:	afbf001c 	sw	ra,28(sp)
  42fa6c:	8fa70460 	lw	a3,1120(sp)
  42fa70:	afbc0018 	sw	gp,24(sp)
  42fa74:	27a4005c 	addiu	a0,sp,92
  42fa78:	24050002 	li	a1,2
  42fa7c:	0320f809 	jalr	t9
  42fa80:	24060001 	li	a2,1
  42fa84:	8fbc0018 	lw	gp,24(sp)
  42fa88:	24010001 	li	at,1
  42fa8c:	1041000f 	beq	v0,at,42facc <readMark+0x7c>
  42fa90:	00000000 	nop
  42fa94:	8f848098 	lw	a0,-32616(gp)
  42fa98:	8f85805c 	lw	a1,-32676(gp)
  42fa9c:	8f9983f8 	lw	t9,-31752(gp)
  42faa0:	24840020 	addiu	a0,a0,32
  42faa4:	0320f809 	jalr	t9
  42faa8:	24a53c64 	addiu	a1,a1,15460
  42faac:	8fbc0018 	lw	gp,24(sp)
  42fab0:	24040001 	li	a0,1
  42fab4:	8f9983a0 	lw	t9,-31840(gp)
  42fab8:	00000000 	nop
  42fabc:	0320f809 	jalr	t9
  42fac0:	00000000 	nop
  42fac4:	8fbc0018 	lw	gp,24(sp)
  42fac8:	00000000 	nop
  42facc:	8f9982cc 	lw	t9,-32052(gp)
  42fad0:	87a6005c 	lh	a2,92(sp)
  42fad4:	8fa70460 	lw	a3,1120(sp)
  42fad8:	27a40060 	addiu	a0,sp,96
  42fadc:	0320f809 	jalr	t9
  42fae0:	24050001 	li	a1,1
  42fae4:	87ae005c 	lh	t6,92(sp)
  42fae8:	8fbc0018 	lw	gp,24(sp)
  42faec:	104e0010 	beq	v0,t6,42fb30 <readMark+0xe0>
  42faf0:	87af005c 	lh	t7,92(sp)
  42faf4:	8f848098 	lw	a0,-32616(gp)
  42faf8:	8f85805c 	lw	a1,-32676(gp)
  42fafc:	8f9983f8 	lw	t9,-31752(gp)
  42fb00:	24840020 	addiu	a0,a0,32
  42fb04:	0320f809 	jalr	t9
  42fb08:	24a53c90 	addiu	a1,a1,15504
  42fb0c:	8fbc0018 	lw	gp,24(sp)
  42fb10:	24040001 	li	a0,1
  42fb14:	8f9983a0 	lw	t9,-31840(gp)
  42fb18:	00000000 	nop
  42fb1c:	0320f809 	jalr	t9
  42fb20:	00000000 	nop
  42fb24:	8fbc0018 	lw	gp,24(sp)
  42fb28:	00000000 	nop
  42fb2c:	87af005c 	lh	t7,92(sp)
  42fb30:	27b80060 	addiu	t8,sp,96
  42fb34:	01f8c821 	addu	t9,t7,t8
  42fb38:	a3200000 	sb	zero,0(t9)
  42fb3c:	8f9987d4 	lw	t9,-30764(gp)
  42fb40:	8fa50460 	lw	a1,1120(sp)
  42fb44:	0320f809 	jalr	t9
  42fb48:	27a40024 	addiu	a0,sp,36
  42fb4c:	8fbc0018 	lw	gp,24(sp)
  42fb50:	27a40060 	addiu	a0,sp,96
  42fb54:	8f9987d8 	lw	t9,-30760(gp)
  42fb58:	27a50024 	addiu	a1,sp,36
  42fb5c:	0320f809 	jalr	t9
  42fb60:	00000000 	nop
  42fb64:	8fbf001c 	lw	ra,28(sp)
  42fb68:	8fbc0018 	lw	gp,24(sp)
  42fb6c:	03e00008 	jr	ra
  42fb70:	27bd0460 	addiu	sp,sp,1120
