# Function: FUN_0042728c
# Address: 0x0042728c - 0x004272f4
# Size: 0x68 (104 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042728c <highlightDir+0xc>:
  42728c:	8f8e897c 	lw	t6,-30340(gp)
  427290:	27bdffe0 	addiu	sp,sp,-32
  427294:	8dce0000 	lw	t6,0(t6)
  427298:	afbf001c 	sw	ra,28(sp)
  42729c:	afbc0018 	sw	gp,24(sp)
  4272a0:	8dcf003c 	lw	t7,60(t6)
  4272a4:	00000000 	nop
  4272a8:	11e00008 	beqz	t7,4272cc <highlightDir+0x4c>
  4272ac:	00000000 	nop
  4272b0:	8f998614 	lw	t9,-31212(gp)
  4272b4:	00000000 	nop
  4272b8:	0320f809 	jalr	t9
  4272bc:	00000000 	nop
  4272c0:	8fbc0018 	lw	gp,24(sp)
  4272c4:	10000008 	b	4272e8 <highlightDir+0x68>
  4272c8:	8fbf001c 	lw	ra,28(sp)
  4272cc:	8f9986f0 	lw	t9,-30992(gp)
  4272d0:	00000000 	nop
  4272d4:	0320f809 	jalr	t9
  4272d8:	00000000 	nop
  4272dc:	8fbc0018 	lw	gp,24(sp)
  4272e0:	00000000 	nop
  4272e4:	8fbf001c 	lw	ra,28(sp)
  4272e8:	27bd0020 	addiu	sp,sp,32
  4272ec:	03e00008 	jr	ra
  4272f0:	00000000 	nop
