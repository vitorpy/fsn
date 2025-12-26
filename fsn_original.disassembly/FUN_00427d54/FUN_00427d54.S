# Function: FUN_00427d54
# Address: 0x00427d54 - 0x00427dd4
# Size: 0x80 (128 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427d54 <dirfamInit+0xc>:
  427d54:	8f8e8a24 	lw	t6,-30172(gp)
  427d58:	27bdffe0 	addiu	sp,sp,-32
  427d5c:	91ce0000 	lbu	t6,0(t6)
  427d60:	afbf001c 	sw	ra,28(sp)
  427d64:	15c00017 	bnez	t6,427dc4 <dirfamInit+0x7c>
  427d68:	afbc0018 	sw	gp,24(sp)
  427d6c:	8f84806c 	lw	a0,-32660(gp)
  427d70:	8f9988dc 	lw	t9,-30500(gp)
  427d74:	24846c70 	addiu	a0,a0,27760
  427d78:	0320f809 	jalr	t9
  427d7c:	00000000 	nop
  427d80:	8fbc0018 	lw	gp,24(sp)
  427d84:	04410010 	bgez	v0,427dc8 <dirfamInit+0x80>
  427d88:	8fbf001c 	lw	ra,28(sp)
  427d8c:	8f848098 	lw	a0,-32616(gp)
  427d90:	8f85805c 	lw	a1,-32676(gp)
  427d94:	8f9983f8 	lw	t9,-31752(gp)
  427d98:	24840020 	addiu	a0,a0,32
  427d9c:	0320f809 	jalr	t9
  427da0:	24a5e810 	addiu	a1,a1,-6128
  427da4:	8fbc0018 	lw	gp,24(sp)
  427da8:	24040001 	li	a0,1
  427dac:	8f9983a0 	lw	t9,-31840(gp)
  427db0:	00000000 	nop
  427db4:	0320f809 	jalr	t9
  427db8:	00000000 	nop
  427dbc:	8fbc0018 	lw	gp,24(sp)
  427dc0:	00000000 	nop
  427dc4:	8fbf001c 	lw	ra,28(sp)
  427dc8:	27bd0020 	addiu	sp,sp,32
  427dcc:	03e00008 	jr	ra
  427dd0:	00000000 	nop
