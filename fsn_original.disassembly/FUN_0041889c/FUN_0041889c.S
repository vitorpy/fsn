# Function: FUN_0041889c
# Address: 0x0041889c - 0x00418920
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041889c <unpruneTree+0xc>:
  41889c:	27bdffe0 	addiu	sp,sp,-32
  4188a0:	afbf001c 	sw	ra,28(sp)
  4188a4:	afbc0018 	sw	gp,24(sp)
  4188a8:	908e0075 	lbu	t6,117(a0)
  4188ac:	00000000 	nop
  4188b0:	31cffffb 	andi	t7,t6,0xfffb
  4188b4:	a08f0075 	sb	t7,117(a0)
  4188b8:	8f9985cc 	lw	t9,-31284(gp)
  4188bc:	00000000 	nop
  4188c0:	0320f809 	jalr	t9
  4188c4:	00000000 	nop
  4188c8:	8fbc0018 	lw	gp,24(sp)
  4188cc:	00000000 	nop
  4188d0:	8f998588 	lw	t9,-31352(gp)
  4188d4:	00000000 	nop
  4188d8:	0320f809 	jalr	t9
  4188dc:	00000000 	nop
  4188e0:	8fbc0018 	lw	gp,24(sp)
  4188e4:	00000000 	nop
  4188e8:	8f998534 	lw	t9,-31436(gp)
  4188ec:	00000000 	nop
  4188f0:	0320f809 	jalr	t9
  4188f4:	00000000 	nop
  4188f8:	8fbc0018 	lw	gp,24(sp)
  4188fc:	00000000 	nop
  418900:	8f998780 	lw	t9,-30848(gp)
  418904:	00000000 	nop
  418908:	0320f809 	jalr	t9
  41890c:	00000000 	nop
  418910:	8fbf001c 	lw	ra,28(sp)
  418914:	8fbc0018 	lw	gp,24(sp)
  418918:	03e00008 	jr	ra
  41891c:	27bd0020 	addiu	sp,sp,32
