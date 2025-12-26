# Function: cIconToTypeName
# Address: 0x00433bd0 - 0x00433bfc
# Size: 0x2c (44 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433bd0 <cIconToTypeName>:
  433bd0:	3c1c0fbf 	lui	gp,0xfbf
  433bd4:	279c9f60 	addiu	gp,gp,-24736
  433bd8:	0399e021 	addu	gp,gp,t9
  433bdc:	27bdfff8 	addiu	sp,sp,-8
  433be0:	8c850014 	lw	a1,20(a0)
  433be4:	00000000 	nop
  433be8:	8ca20000 	lw	v0,0(a1)
  433bec:	10000001 	b	433bf4 <cIconToTypeName+0x24>
  433bf0:	00000000 	nop
  433bf4:	03e00008 	jr	ra
  433bf8:	27bd0008 	addiu	sp,sp,8
