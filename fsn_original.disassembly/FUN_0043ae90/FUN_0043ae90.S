# Function: FUN_0043ae90
# Address: 0x0043ae90 - 0x0043aedc
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043ae90 <FAMDebugLevel+0x270>:
  43ae90:	3c1c0fbe 	lui	gp,0xfbe
  43ae94:	279c2ca0 	addiu	gp,gp,11424
  43ae98:	0399e021 	addu	gp,gp,t9
  43ae9c:	8f82806c 	lw	v0,-32660(gp)
  43aea0:	00001825 	move	v1,zero
  43aea4:	8c429e40 	lw	v0,-25024(v0)
  43aea8:	00000000 	nop
  43aeac:	1840000f 	blez	v0,43aeec <FAMDebugLevel+0x2cc>
  43aeb0:	00000000 	nop
  43aeb4:	8f85806c 	lw	a1,-32660(gp)
  43aeb8:	00000000 	nop
  43aebc:	8ca57414 	lw	a1,29716(a1)
  43aec0:	00000000 	nop
  43aec4:	8cae0000 	lw	t6,0(a1)
  43aec8:	00000000 	nop
  43aecc:	148e0003 	bne	a0,t6,43aedc <FAMDebugLevel+0x2bc>
  43aed0:	00000000 	nop
  43aed4:	03e00008 	jr	ra
  43aed8:	00601025 	move	v0,v1
