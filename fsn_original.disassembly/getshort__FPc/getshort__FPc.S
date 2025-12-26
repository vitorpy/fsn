# Function: getshort__FPc
# Address: 0x00435578 - 0x004355a8
# Size: 0x30 (48 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435578 <getshort__FPc>:
  435578:	00801825 	move	v1,a0
  43557c:	90650000 	lbu	a1,0(v1)
  435580:	908f0001 	lbu	t7,1(a0)
  435584:	00057200 	sll	t6,a1,0x8
  435588:	01cf2825 	or	a1,t6,t7
  43558c:	0005c400 	sll	t8,a1,0x10
  435590:	0018cc03 	sra	t9,t8,0x10
  435594:	00191400 	sll	v0,t9,0x10
  435598:	00024403 	sra	t0,v0,0x10
  43559c:	24840001 	addiu	a0,a0,1
  4355a0:	03e00008 	jr	ra
  4355a4:	01001025 	move	v0,t0
