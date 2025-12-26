# Function: getlong__FPc
# Address: 0x004355a8 - 0x004355ec
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004355a8 <getlong__FPc>:
  4355a8:	00801825 	move	v1,a0
  4355ac:	90650000 	lbu	a1,0(v1)
  4355b0:	24840001 	addiu	a0,a0,1
  4355b4:	00801825 	move	v1,a0
  4355b8:	906f0000 	lbu	t7,0(v1)
  4355bc:	24840001 	addiu	a0,a0,1
  4355c0:	00801825 	move	v1,a0
  4355c4:	00057200 	sll	t6,a1,0x8
  4355c8:	90790000 	lbu	t9,0(v1)
  4355cc:	01cf2825 	or	a1,t6,t7
  4355d0:	0005c200 	sll	t8,a1,0x8
  4355d4:	90890001 	lbu	t1,1(a0)
  4355d8:	03192825 	or	a1,t8,t9
  4355dc:	00054200 	sll	t0,a1,0x8
  4355e0:	24840001 	addiu	a0,a0,1
  4355e4:	03e00008 	jr	ra
  4355e8:	01091025 	or	v0,t0,t1
