# Function: FUN_00420acc
# Address: 0x00420acc - 0x00420b64
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00420acc <drawOverviewOverlayCursor+0x25c>:
  420acc:	3c1c0fc0 	lui	gp,0xfc0
  420ad0:	279cd064 	addiu	gp,gp,-12188
  420ad4:	0399e021 	addu	gp,gp,t9
  420ad8:	8f8e8980 	lw	t6,-30336(gp)
  420adc:	27bdffe0 	addiu	sp,sp,-32
  420ae0:	8dce0000 	lw	t6,0(t6)
  420ae4:	afbf001c 	sw	ra,28(sp)
  420ae8:	afbc0018 	sw	gp,24(sp)
  420aec:	91cf0c51 	lbu	t7,3153(t6)
  420af0:	00000000 	nop
  420af4:	11e00013 	beqz	t7,420b44 <drawOverviewOverlayCursor+0x2d4>
  420af8:	00000000 	nop
  420afc:	8f99876c 	lw	t9,-30868(gp)
  420b00:	24040001 	li	a0,1
  420b04:	0320f809 	jalr	t9
  420b08:	00000000 	nop
  420b0c:	8fbc0018 	lw	gp,24(sp)
  420b10:	00000000 	nop
  420b14:	8f998678 	lw	t9,-31112(gp)
  420b18:	00000000 	nop
  420b1c:	0320f809 	jalr	t9
  420b20:	00000000 	nop
  420b24:	8fbc0018 	lw	gp,24(sp)
  420b28:	24040001 	li	a0,1
  420b2c:	8f99876c 	lw	t9,-30868(gp)
  420b30:	00000000 	nop
  420b34:	0320f809 	jalr	t9
  420b38:	00000000 	nop
  420b3c:	8fbc0018 	lw	gp,24(sp)
  420b40:	00000000 	nop
  420b44:	8f998678 	lw	t9,-31112(gp)
  420b48:	00000000 	nop
  420b4c:	0320f809 	jalr	t9
  420b50:	00000000 	nop
  420b54:	8fbf001c 	lw	ra,28(sp)
  420b58:	8fbc0018 	lw	gp,24(sp)
  420b5c:	03e00008 	jr	ra
  420b60:	27bd0020 	addiu	sp,sp,32
