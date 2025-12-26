# Function: savePositions
# Address: 0x0042defc - 0x0042dfa8
# Size: 0xac (172 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042defc <savePositions>:
  42defc:	3c1c0fbf 	lui	gp,0xfbf
  42df00:	279cfc34 	addiu	gp,gp,-972
  42df04:	0399e021 	addu	gp,gp,t9
  42df08:	8f84806c 	lw	a0,-32660(gp)
  42df0c:	8f9987b4 	lw	t9,-30796(gp)
  42df10:	27bdffe0 	addiu	sp,sp,-32
  42df14:	afbf001c 	sw	ra,28(sp)
  42df18:	afbc0018 	sw	gp,24(sp)
  42df1c:	0320f809 	jalr	t9
  42df20:	24846e50 	addiu	a0,a0,28240
  42df24:	8fbc0018 	lw	gp,24(sp)
  42df28:	00000000 	nop
  42df2c:	8f8e8980 	lw	t6,-30336(gp)
  42df30:	00000000 	nop
  42df34:	8dce0000 	lw	t6,0(t6)
  42df38:	00000000 	nop
  42df3c:	91cf0c51 	lbu	t7,3153(t6)
  42df40:	00000000 	nop
  42df44:	11e00015 	beqz	t7,42df9c <savePositions+0xa0>
  42df48:	8fbf001c 	lw	ra,28(sp)
  42df4c:	8f99876c 	lw	t9,-30868(gp)
  42df50:	24040001 	li	a0,1
  42df54:	0320f809 	jalr	t9
  42df58:	00000000 	nop
  42df5c:	8fbc0018 	lw	gp,24(sp)
  42df60:	00000000 	nop
  42df64:	8f84806c 	lw	a0,-32660(gp)
  42df68:	8f9987b4 	lw	t9,-30796(gp)
  42df6c:	24846e88 	addiu	a0,a0,28296
  42df70:	0320f809 	jalr	t9
  42df74:	00000000 	nop
  42df78:	8fbc0018 	lw	gp,24(sp)
  42df7c:	24040001 	li	a0,1
  42df80:	8f99876c 	lw	t9,-30868(gp)
  42df84:	00000000 	nop
  42df88:	0320f809 	jalr	t9
  42df8c:	00000000 	nop
  42df90:	8fbc0018 	lw	gp,24(sp)
  42df94:	00000000 	nop
  42df98:	8fbf001c 	lw	ra,28(sp)
  42df9c:	27bd0020 	addiu	sp,sp,32
  42dfa0:	03e00008 	jr	ra
  42dfa4:	00000000 	nop
