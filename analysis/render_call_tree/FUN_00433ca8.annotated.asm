# Disassembly of FUN_00433ca8
# Address: 0x00433ca8
# End: 0x00433d00
# Size: 0x58 (88 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433ca8 <cIconDraw+0xc>:
  433ca8:	27bdffd8 	addiu	sp,sp,-40
  433cac:	afbf001c 	sw	ra,28(sp)
  433cb0:	afbc0018 	sw	gp,24(sp)
  433cb4:	afa40028 	sw	a0,40(sp)
  433cb8:	afb00014 	sw	s0,20(sp)
  433cbc:	8fae0028 	lw	t6,40(sp)
  433cc0:	00000000 	nop
  433cc4:	8dd00060 	lw	s0,96(t6)
  433cc8:	00000000 	nop
  433ccc:	860f0008 	lh	t7,8(s0)
  433cd0:	8e19000c 	lw	t9,12(s0)
  433cd4:	01ee2021 	addu	a0,t7,t6
  433cd8:	0320f809 	jalr	t9
  433cdc:	00000000 	nop
  433ce0:	8fbc0018 	lw	gp,24(sp)
  433ce4:	00000000 	nop
  433ce8:	10000001 	b	433cf0 <cIconDraw+0x54>
  433cec:	00000000 	nop
  433cf0:	8fbf001c 	lw	ra,28(sp)
  433cf4:	8fb00014 	lw	s0,20(sp)
  433cf8:	03e00008 	jr	ra
  433cfc:	27bd0028 	addiu	sp,sp,40


======================================================================
ANALYSIS SUMMARY: FUN_00433ca8
======================================================================

======================================================================