# Disassembly of FUN_00411e38
# Address: 0x00411e38
# End: 0x00411e5c
# Size: 0x24 (36 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411e38 <age+0xc>:
  411e38:	8f8e806c 	lw	t6,-32660(gp)  # DAT_10010000
  411e3c:	3c010001 	lui	at,0x1
  411e40:	8dce66ac 	lw	t6,26284(t6)
  411e44:	34215180 	ori	at,at,0x5180
  411e48:	01c41023 	subu	v0,t6,a0
  411e4c:	0041001a 	div	zero,v0,at
  411e50:	00001012 	mflo	v0
  411e54:	03e00008 	jr	ra
  411e58:	00000000 	nop


======================================================================
ANALYSIS SUMMARY: FUN_00411e38
======================================================================

GP SYMBOL REFERENCES:
----------------------------------------
  DAT_10010000

======================================================================