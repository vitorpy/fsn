# Function: FUN_0040cf50
# Address: 0x0040cf50 - 0x0040cf90
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040cf50 <checkRedrawScene+0xc>:
  40cf50:	8f8e806c 	lw	t6,-32660(gp)
  40cf54:	27bdffe0 	addiu	sp,sp,-32
  40cf58:	91ce6688 	lbu	t6,26248(t6)
  40cf5c:	afbf001c 	sw	ra,28(sp)
  40cf60:	11c00007 	beqz	t6,40cf80 <checkRedrawScene+0x3c>
  40cf64:	afbc0018 	sw	gp,24(sp)
  40cf68:	8f998534 	lw	t9,-31436(gp)
  40cf6c:	00000000 	nop
  40cf70:	0320f809 	jalr	t9
  40cf74:	00000000 	nop
  40cf78:	8fbc0018 	lw	gp,24(sp)
  40cf7c:	00000000 	nop
  40cf80:	8fbf001c 	lw	ra,28(sp)
  40cf84:	27bd0020 	addiu	sp,sp,32
  40cf88:	03e00008 	jr	ra
  40cf8c:	00000000 	nop
