# Function: bitpat__Ff
# Address: 0x004355ec - 0x0043562c
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004355ec <bitpat__Ff>:
  4355ec:	3c1c0fbf 	lui	gp,0xfbf
  4355f0:	279c8544 	addiu	gp,gp,-31420
  4355f4:	0399e021 	addu	gp,gp,t9
  4355f8:	3c014f00 	lui	at,0x4f00
  4355fc:	44810000 	mtc1	at,$f0
  435600:	00000000 	nop
  435604:	460c003c 	c.lt.s	$f0,$f12
  435608:	00000000 	nop
  43560c:	45010005 	bc1t	435624 <bitpat__Ff+0x38>
  435610:	00000000 	nop
  435614:	4600603c 	c.lt.s	$f12,$f0
  435618:	00000000 	nop
  43561c:	45000003 	bc1f	43562c <bitpat__Ff+0x40>
  435620:	00000000 	nop
  435624:	03e00008 	jr	ra
  435628:	00001025 	move	v0,zero
