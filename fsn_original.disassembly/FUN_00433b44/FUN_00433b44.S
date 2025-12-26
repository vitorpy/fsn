# Function: FUN_00433b44
# Address: 0x00433b44 - 0x00433b84
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433b44 <cFindIconByName+0xc>:
  433b44:	27bdffe0 	addiu	sp,sp,-32
  433b48:	afbf001c 	sw	ra,28(sp)
  433b4c:	afbc0018 	sw	gp,24(sp)
  433b50:	afa40020 	sw	a0,32(sp)
  433b54:	8f84806c 	lw	a0,-32660(gp)
  433b58:	8f998854 	lw	t9,-30636(gp)
  433b5c:	8fa50020 	lw	a1,32(sp)
  433b60:	0320f809 	jalr	t9
  433b64:	24846f50 	addiu	a0,a0,28496
  433b68:	8fbc0018 	lw	gp,24(sp)
  433b6c:	10000001 	b	433b74 <cFindIconByName+0x3c>
  433b70:	00000000 	nop
  433b74:	8fbf001c 	lw	ra,28(sp)
  433b78:	27bd0020 	addiu	sp,sp,32
  433b7c:	03e00008 	jr	ra
  433b80:	00000000 	nop
