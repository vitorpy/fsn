# Disassembly of FUN_0040bc28
# Address: 0x0040bc28
# End: 0x0040bc64
# Size: 0x3c (60 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040bc28 <setOverlayWindow+0xc>:
  40bc28:	8f8e8984 	lw	t6,-30332(gp)  # curcontextwindows
  40bc2c:	27bdffe0 	addiu	sp,sp,-32
  40bc30:	8f848a04 	lw	a0,-30204(gp)  # display
  40bc34:	8dce0000 	lw	t6,0(t6)
  40bc38:	8f9982f4 	lw	t9,-32012(gp)
  40bc3c:	afbf001c 	sw	ra,28(sp)
  40bc40:	afbc0018 	sw	gp,24(sp)
  40bc44:	8c840000 	lw	a0,0(a0)
  40bc48:	8dc50004 	lw	a1,4(t6)
  40bc4c:	0320f809 	jalr	t9
  40bc50:	00000000 	nop
  40bc54:	8fbf001c 	lw	ra,28(sp)
  40bc58:	8fbc0018 	lw	gp,24(sp)
  40bc5c:	03e00008 	jr	ra
  40bc60:	27bd0020 	addiu	sp,sp,32


======================================================================
ANALYSIS SUMMARY: FUN_0040bc28
======================================================================

GP SYMBOL REFERENCES:
----------------------------------------
  curcontextwindows
  display

======================================================================