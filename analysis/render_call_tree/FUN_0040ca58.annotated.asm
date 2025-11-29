# Disassembly of FUN_0040ca58
# Address: 0x0040ca58
# End: 0x0040cac4
# Size: 0x6c (108 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040ca58 <check_visibility+0xc>:
  40ca58:	8f9984b8 	lw	t9,-31560(gp)  # pushmatrix
  40ca5c:	27bdffe0 	addiu	sp,sp,-32
  40ca60:	afbf001c 	sw	ra,28(sp)
  40ca64:	0320f809 	jalr	t9  # call pushmatrix
  40ca68:	afbc0018 	sw	gp,24(sp)
  40ca6c:	8fbc0018 	lw	gp,24(sp)
  40ca70:	00000000 	nop
  40ca74:	8f998524 	lw	t9,-31452(gp)  # FUN_0040bfa0
  40ca78:	00000000 	nop
  40ca7c:	0320f809 	jalr	t9  # call FUN_0040bfa0
  40ca80:	00000000 	nop
  40ca84:	8fbc0018 	lw	gp,24(sp)
  40ca88:	00000000 	nop
  40ca8c:	8f9986d4 	lw	t9,-31020(gp)  # FUN_00425c80
  40ca90:	00000000 	nop
  40ca94:	0320f809 	jalr	t9  # call FUN_00425c80
  40ca98:	00000000 	nop
  40ca9c:	8fbc0018 	lw	gp,24(sp)
  40caa0:	00000000 	nop
  40caa4:	8f9984d8 	lw	t9,-31528(gp)  # popmatrix
  40caa8:	00000000 	nop
  40caac:	0320f809 	jalr	t9  # call popmatrix
  40cab0:	00000000 	nop
  40cab4:	8fbf001c 	lw	ra,28(sp)
  40cab8:	8fbc0018 	lw	gp,24(sp)
  40cabc:	03e00008 	jr	ra
  40cac0:	27bd0020 	addiu	sp,sp,32


======================================================================
ANALYSIS SUMMARY: FUN_0040ca58
======================================================================

FUNCTION CALLS:
----------------------------------------
  FUN_0040bfa0
  FUN_00425c80
  popmatrix
  pushmatrix

IRISGL CALLS (with addresses):
----------------------------------------
  0x0040ca64: pushmatrix
  0x0040caac: popmatrix

GP SYMBOL REFERENCES:
----------------------------------------
  FUN_0040bfa0
  FUN_00425c80
  popmatrix
  pushmatrix

======================================================================