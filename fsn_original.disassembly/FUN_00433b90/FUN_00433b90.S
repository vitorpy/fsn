# Function: FUN_00433b90
# Address: 0x00433b90 - 0x00433bd0
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433b90 <cFindIconByType+0xc>:
  433b90:	27bdffe0 	addiu	sp,sp,-32
  433b94:	afbf001c 	sw	ra,28(sp)
  433b98:	afbc0018 	sw	gp,24(sp)
  433b9c:	afa40020 	sw	a0,32(sp)
  433ba0:	8f84806c 	lw	a0,-32660(gp)
  433ba4:	8f998850 	lw	t9,-30640(gp)
  433ba8:	8fa50020 	lw	a1,32(sp)
  433bac:	0320f809 	jalr	t9
  433bb0:	24846f50 	addiu	a0,a0,28496
  433bb4:	8fbc0018 	lw	gp,24(sp)
  433bb8:	10000001 	b	433bc0 <cFindIconByType+0x3c>
  433bbc:	00000000 	nop
  433bc0:	8fbf001c 	lw	ra,28(sp)
  433bc4:	27bd0020 	addiu	sp,sp,32
  433bc8:	03e00008 	jr	ra
  433bcc:	00000000 	nop
