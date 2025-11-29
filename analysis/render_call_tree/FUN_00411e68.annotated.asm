# Disassembly of FUN_00411e68
# Address: 0x00411e68
# End: 0x00411e98
# Size: 0x30 (48 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411e68 <index_to_dir+0xc>:
  411e68:	8f8e8a44 	lw	t6,-30140(gp)  # dir_index
  411e6c:	00047983 	sra	t7,a0,0x6
  411e70:	8dce0000 	lw	t6,0(t6)
  411e74:	000fc080 	sll	t8,t7,0x2
  411e78:	3089003f 	andi	t1,a0,0x3f
  411e7c:	00095100 	sll	t2,t1,0x4
  411e80:	01d8c821 	addu	t9,t6,t8
  411e84:	8f280000 	lw	t0,0(t9)
  411e88:	01495023 	subu	t2,t2,t1
  411e8c:	000a50c0 	sll	t2,t2,0x3
  411e90:	03e00008 	jr	ra
  411e94:	010a1021 	addu	v0,t0,t2


======================================================================
ANALYSIS SUMMARY: FUN_00411e68
======================================================================

GP SYMBOL REFERENCES:
----------------------------------------
  dir_index

======================================================================