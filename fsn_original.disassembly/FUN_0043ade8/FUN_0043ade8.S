# Function: FUN_0043ade8
# Address: 0x0043ade8 - 0x0043ae14
# Size: 0x2c (44 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043ade8 <FAMDebugLevel+0x1c8>:
  43ade8:	3c1c0fbe 	lui	gp,0xfbe
  43adec:	279c2d48 	addiu	gp,gp,11592
  43adf0:	0399e021 	addu	gp,gp,t9
  43adf4:	8f84806c 	lw	a0,-32660(gp)
  43adf8:	00000000 	nop
  43adfc:	24849f44 	addiu	a0,a0,-24764
  43ae00:	8c820000 	lw	v0,0(a0)
  43ae04:	00000000 	nop
  43ae08:	244e0001 	addiu	t6,v0,1
  43ae0c:	03e00008 	jr	ra
  43ae10:	ac8e0000 	sw	t6,0(a0)
