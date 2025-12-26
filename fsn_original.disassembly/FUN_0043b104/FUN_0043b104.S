# Function: FUN_0043b104
# Address: 0x0043b104 - 0x0043b150
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b104 <FAMDebugLevel+0x4e4>:
  43b104:	3c1c0fbe 	lui	gp,0xfbe
  43b108:	279c2a2c 	addiu	gp,gp,10796
  43b10c:	0399e021 	addu	gp,gp,t9
  43b110:	8f83806c 	lw	v1,-32660(gp)
  43b114:	00001025 	move	v0,zero
  43b118:	8c639e40 	lw	v1,-25024(v1)
  43b11c:	240fffff 	li	t7,-1
  43b120:	1860000d 	blez	v1,43b158 <FAMDebugLevel+0x538>
  43b124:	00000000 	nop
  43b128:	8f85806c 	lw	a1,-32660(gp)
  43b12c:	00000000 	nop
  43b130:	8ca57414 	lw	a1,29716(a1)
  43b134:	00000000 	nop
  43b138:	8cae0000 	lw	t6,0(a1)
  43b13c:	24420001 	addiu	v0,v0,1
  43b140:	148e0003 	bne	a0,t6,43b150 <FAMDebugLevel+0x530>
  43b144:	0043082a 	slt	at,v0,v1
  43b148:	03e00008 	jr	ra
  43b14c:	acaf0000 	sw	t7,0(a1)
