# Function: putword__FPcPl
# Address: 0x0043b748 - 0x0043b784
# Size: 0x3c (60 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043b748 <putword__FPcPl>:
  43b748:	90ae0000 	lbu	t6,0(a1)
  43b74c:	00801025 	move	v0,a0
  43b750:	a04e0000 	sb	t6,0(v0)
  43b754:	90af0001 	lbu	t7,1(a1)
  43b758:	24840001 	addiu	a0,a0,1
  43b75c:	00801025 	move	v0,a0
  43b760:	a04f0000 	sb	t7,0(v0)
  43b764:	90b80002 	lbu	t8,2(a1)
  43b768:	24840001 	addiu	a0,a0,1
  43b76c:	00801025 	move	v0,a0
  43b770:	a0580000 	sb	t8,0(v0)
  43b774:	90b90003 	lbu	t9,3(a1)
  43b778:	24840001 	addiu	a0,a0,1
  43b77c:	03e00008 	jr	ra
  43b780:	a0990000 	sb	t9,0(a0)
