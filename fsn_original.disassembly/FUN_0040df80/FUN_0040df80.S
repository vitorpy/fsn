# Function: FUN_0040df80
# Address: 0x0040df80 - 0x0040dff8
# Size: 0x78 (120 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040df80 <setScales+0x788>:
  40df80:	3c1c0fc1 	lui	gp,0xfc1
  40df84:	279cfbb0 	addiu	gp,gp,-1104
  40df88:	0399e021 	addu	gp,gp,t9
  40df8c:	27bdff88 	addiu	sp,sp,-120
  40df90:	8f8e80a0 	lw	t6,-32608(gp)
  40df94:	8f84806c 	lw	a0,-32660(gp)
  40df98:	8f818a20 	lw	at,-30176(gp)
  40df9c:	8f998340 	lw	t9,-31936(gp)
  40dfa0:	afbf001c 	sw	ra,28(sp)
  40dfa4:	240f0001 	li	t7,1
  40dfa8:	25ce1d63 	addiu	t6,t6,7523
  40dfac:	8c846664 	lw	a0,26212(a0)
  40dfb0:	afbc0018 	sw	gp,24(sp)
  40dfb4:	afae0028 	sw	t6,40(sp)
  40dfb8:	afaf002c 	sw	t7,44(sp)
  40dfbc:	27a50028 	addiu	a1,sp,40
  40dfc0:	24060001 	li	a2,1
  40dfc4:	0320f809 	jalr	t9
  40dfc8:	a0200000 	sb	zero,0(at)
  40dfcc:	8fbc0018 	lw	gp,24(sp)
  40dfd0:	00000000 	nop
  40dfd4:	8f84806c 	lw	a0,-32660(gp)
  40dfd8:	8f998490 	lw	t9,-31600(gp)
  40dfdc:	8c84665c 	lw	a0,26204(a0)
  40dfe0:	0320f809 	jalr	t9
  40dfe4:	00000000 	nop
  40dfe8:	8fbf001c 	lw	ra,28(sp)
  40dfec:	8fbc0018 	lw	gp,24(sp)
  40dff0:	03e00008 	jr	ra
  40dff4:	27bd0078 	addiu	sp,sp,120
