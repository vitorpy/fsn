# Function: getword__FPcPl
# Address: 0x0043b70c - 0x0043b748
# Size: 0x3c (60 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b70c <getword__FPcPl>:
  43b70c:	00801025 	move	v0,a0
  43b710:	904e0000 	lbu	t6,0(v0)
  43b714:	24840001 	addiu	a0,a0,1
  43b718:	00801025 	move	v0,a0
  43b71c:	a0ae0000 	sb	t6,0(a1)
  43b720:	904f0000 	lbu	t7,0(v0)
  43b724:	24840001 	addiu	a0,a0,1
  43b728:	00801025 	move	v0,a0
  43b72c:	a0af0001 	sb	t7,1(a1)
  43b730:	90580000 	lbu	t8,0(v0)
  43b734:	24840001 	addiu	a0,a0,1
  43b738:	a0b80002 	sb	t8,2(a1)
  43b73c:	90990000 	lbu	t9,0(a0)
  43b740:	03e00008 	jr	ra
  43b744:	a0b90003 	sb	t9,3(a1)
