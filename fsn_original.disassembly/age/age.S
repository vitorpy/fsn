# Function: age
# Address: 0x00411e2c - 0x00411e5c
# Size: 0x30 (48 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411e2c <age>:
  411e2c:	3c1c0fc1 	lui	gp,0xfc1
  411e30:	279cbd04 	addiu	gp,gp,-17148
  411e34:	0399e021 	addu	gp,gp,t9
  411e38:	8f8e806c 	lw	t6,-32660(gp)
  411e3c:	3c010001 	lui	at,0x1
  411e40:	8dce66ac 	lw	t6,26284(t6)
  411e44:	34215180 	ori	at,at,0x5180
  411e48:	01c41023 	subu	v0,t6,a0
  411e4c:	0041001a 	div	zero,v0,at
  411e50:	00001012 	mflo	v0
  411e54:	03e00008 	jr	ra
  411e58:	00000000 	nop
