# Disassembly of FUN_0041fdb0
# Address: 0x0041fdb0
# End: 0x0041fde4
# Size: 0x34 (52 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fdb0 <setOverviewOverlayWindow+0xc>:
  41fdb0:	8f848a04 	lw	a0,-30204(gp)  # display
  41fdb4:	8f85806c 	lw	a1,-32660(gp)  # DAT_10010000
  41fdb8:	8f9982f4 	lw	t9,-32012(gp)
  41fdbc:	27bdffe0 	addiu	sp,sp,-32
  41fdc0:	afbf001c 	sw	ra,28(sp)
  41fdc4:	8c840000 	lw	a0,0(a0)
  41fdc8:	8ca56c04 	lw	a1,27652(a1)
  41fdcc:	0320f809 	jalr	t9
  41fdd0:	afbc0018 	sw	gp,24(sp)
  41fdd4:	8fbf001c 	lw	ra,28(sp)
  41fdd8:	8fbc0018 	lw	gp,24(sp)
  41fddc:	03e00008 	jr	ra
  41fde0:	27bd0020 	addiu	sp,sp,32


======================================================================
ANALYSIS SUMMARY: FUN_0041fdb0
======================================================================

GP SYMBOL REFERENCES:
----------------------------------------
  DAT_10010000
  display

======================================================================