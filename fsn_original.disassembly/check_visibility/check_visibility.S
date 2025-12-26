# Function: check_visibility
# Address: 0x0040ca4c - 0x0040cac4
# Size: 0x78 (120 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040ca4c <check_visibility>:
  40ca4c:	3c1c0fc1 	lui	gp,0xfc1
  40ca50:	279c10e4 	addiu	gp,gp,4324
  40ca54:	0399e021 	addu	gp,gp,t9
  40ca58:	8f9984b8 	lw	t9,-31560(gp)
  40ca5c:	27bdffe0 	addiu	sp,sp,-32
  40ca60:	afbf001c 	sw	ra,28(sp)
  40ca64:	0320f809 	jalr	t9
  40ca68:	afbc0018 	sw	gp,24(sp)
  40ca6c:	8fbc0018 	lw	gp,24(sp)
  40ca70:	00000000 	nop
  40ca74:	8f998524 	lw	t9,-31452(gp)
  40ca78:	00000000 	nop
  40ca7c:	0320f809 	jalr	t9
  40ca80:	00000000 	nop
  40ca84:	8fbc0018 	lw	gp,24(sp)
  40ca88:	00000000 	nop
  40ca8c:	8f9986d4 	lw	t9,-31020(gp)
  40ca90:	00000000 	nop
  40ca94:	0320f809 	jalr	t9
  40ca98:	00000000 	nop
  40ca9c:	8fbc0018 	lw	gp,24(sp)
  40caa0:	00000000 	nop
  40caa4:	8f9984d8 	lw	t9,-31528(gp)
  40caa8:	00000000 	nop
  40caac:	0320f809 	jalr	t9
  40cab0:	00000000 	nop
  40cab4:	8fbf001c 	lw	ra,28(sp)
  40cab8:	8fbc0018 	lw	gp,24(sp)
  40cabc:	03e00008 	jr	ra
  40cac0:	27bd0020 	addiu	sp,sp,32
