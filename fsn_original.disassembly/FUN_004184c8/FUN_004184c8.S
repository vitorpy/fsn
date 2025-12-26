# Function: FUN_004184c8
# Address: 0x004184c8 - 0x00418514
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004184c8 <fileDeleted+0x194>:
  4184c8:	8c830014 	lw	v1,20(a0)
  4184cc:	00001025 	move	v0,zero
  4184d0:	18600012 	blez	v1,41851c <fileDeleted+0x1e8>
  4184d4:	00000000 	nop
  4184d8:	8c850010 	lw	a1,16(a0)
  4184dc:	00000000 	nop
  4184e0:	8cae0000 	lw	t6,0(a1)
  4184e4:	24420001 	addiu	v0,v0,1
  4184e8:	8dcf0028 	lw	t7,40(t6)
  4184ec:	0043082a 	slt	at,v0,v1
  4184f0:	000fc300 	sll	t8,t7,0xc
  4184f4:	0018cfc2 	srl	t9,t8,0x1f
  4184f8:	13200006 	beqz	t9,418514 <fileDeleted+0x1e0>
  4184fc:	00000000 	nop
  418500:	90890075 	lbu	t1,117(a0)
  418504:	00000000 	nop
  418508:	352a0002 	ori	t2,t1,0x2
  41850c:	03e00008 	jr	ra
  418510:	a08a0075 	sb	t2,117(a0)
