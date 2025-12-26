# Function: cGetBounds
# Address: 0x00433c30 - 0x00433c94
# Size: 0x64 (100 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433c30 <cGetBounds>:
  433c30:	3c1c0fbf 	lui	gp,0xfbf
  433c34:	279c9f00 	addiu	gp,gp,-24832
  433c38:	0399e021 	addu	gp,gp,t9
  433c3c:	8c8e0014 	lw	t6,20(a0)
  433c40:	00000000 	nop
  433c44:	c5c40038 	lwc1	$f4,56(t6)
  433c48:	00000000 	nop
  433c4c:	e4a40000 	swc1	$f4,0(a1)
  433c50:	8c8f0014 	lw	t7,20(a0)
  433c54:	00000000 	nop
  433c58:	c5e6003c 	lwc1	$f6,60(t7)
  433c5c:	00000000 	nop
  433c60:	e4c60000 	swc1	$f6,0(a2)
  433c64:	8c980014 	lw	t8,20(a0)
  433c68:	00000000 	nop
  433c6c:	c7080040 	lwc1	$f8,64(t8)
  433c70:	00000000 	nop
  433c74:	e4e80000 	swc1	$f8,0(a3)
  433c78:	8c990014 	lw	t9,20(a0)
  433c7c:	8fa80010 	lw	t0,16(sp)
  433c80:	c72a0044 	lwc1	$f10,68(t9)
  433c84:	00000000 	nop
  433c88:	e50a0000 	swc1	$f10,0(t0)
  433c8c:	03e00008 	jr	ra
  433c90:	00000000 	nop
