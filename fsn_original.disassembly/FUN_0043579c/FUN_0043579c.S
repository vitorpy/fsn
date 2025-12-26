# Function: FUN_0043579c
# Address: 0x0043579c - 0x004357e0
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043579c <__dt__19FileIconInterpreterFv+0xc>:
  43579c:	27bdffe0 	addiu	sp,sp,-32
  4357a0:	afbf001c 	sw	ra,28(sp)
  4357a4:	1080000a 	beqz	a0,4357d0 <__dt__19FileIconInterpreterFv+0x40>
  4357a8:	afbc0018 	sw	gp,24(sp)
  4357ac:	30ae0001 	andi	t6,a1,0x1
  4357b0:	11c00008 	beqz	t6,4357d4 <__dt__19FileIconInterpreterFv+0x44>
  4357b4:	8fbf001c 	lw	ra,28(sp)
  4357b8:	8f9984cc 	lw	t9,-31540(gp)
  4357bc:	00000000 	nop
  4357c0:	0320f809 	jalr	t9
  4357c4:	00000000 	nop
  4357c8:	8fbc0018 	lw	gp,24(sp)
  4357cc:	00000000 	nop
  4357d0:	8fbf001c 	lw	ra,28(sp)
  4357d4:	27bd0020 	addiu	sp,sp,32
  4357d8:	03e00008 	jr	ra
  4357dc:	00000000 	nop
