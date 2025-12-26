# Function: getcolorsys
# Address: 0x0043982c - 0x0043984c
# Size: 0x20 (32 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043982c <getcolorsys>:
  43982c:	3c1c0fbe 	lui	gp,0xfbe
  439830:	279c4304 	addiu	gp,gp,17156
  439834:	0399e021 	addu	gp,gp,t9
  439838:	8f82806c 	lw	v0,-32660(gp)
  43983c:	afa40000 	sw	a0,0(sp)
  439840:	8c429e38 	lw	v0,-25032(v0)
  439844:	03e00008 	jr	ra
  439848:	00000000 	nop
