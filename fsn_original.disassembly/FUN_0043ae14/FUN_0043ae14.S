# Function: FUN_0043ae14
# Address: 0x0043ae14 - 0x0043ae78
# Size: 0x64 (100 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043ae14 <FAMDebugLevel+0x1f4>:
  43ae14:	3c1c0fbe 	lui	gp,0xfbe
  43ae18:	279c2d1c 	addiu	gp,gp,11548
  43ae1c:	0399e021 	addu	gp,gp,t9
  43ae20:	8f83806c 	lw	v1,-32660(gp)
  43ae24:	00001025 	move	v0,zero
  43ae28:	8c639e40 	lw	v1,-25024(v1)
  43ae2c:	00000000 	nop
  43ae30:	18600014 	blez	v1,43ae84 <FAMDebugLevel+0x264>
  43ae34:	00000000 	nop
  43ae38:	8f86806c 	lw	a2,-32660(gp)
  43ae3c:	00002825 	move	a1,zero
  43ae40:	8cc67414 	lw	a2,29716(a2)
  43ae44:	00000000 	nop
  43ae48:	8cce0000 	lw	t6,0(a2)
  43ae4c:	24420001 	addiu	v0,v0,1
  43ae50:	148e0009 	bne	a0,t6,43ae78 <FAMDebugLevel+0x258>
  43ae54:	24c60004 	addiu	a2,a2,4
  43ae58:	8f8f806c 	lw	t7,-32660(gp)
  43ae5c:	00000000 	nop
  43ae60:	8def7410 	lw	t7,29712(t7)
  43ae64:	00000000 	nop
  43ae68:	01e5c021 	addu	t8,t7,a1
  43ae6c:	8f020000 	lw	v0,0(t8)
  43ae70:	03e00008 	jr	ra
  43ae74:	00000000 	nop
