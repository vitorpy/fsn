# Function: FUN_00433af4
# Address: 0x00433af4 - 0x00433b38
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433af4 <cIconInit+0xc>:
  433af4:	27bdffe0 	addiu	sp,sp,-32
  433af8:	afbf001c 	sw	ra,28(sp)
  433afc:	afbc0018 	sw	gp,24(sp)
  433b00:	afa40020 	sw	a0,32(sp)
  433b04:	8f84806c 	lw	a0,-32660(gp)
  433b08:	8f99884c 	lw	t9,-30644(gp)
  433b0c:	8fa50020 	lw	a1,32(sp)
  433b10:	0320f809 	jalr	t9
  433b14:	24846f50 	addiu	a0,a0,28496
  433b18:	8fbc0018 	lw	gp,24(sp)
  433b1c:	00000000 	nop
  433b20:	10000001 	b	433b28 <cIconInit+0x40>
  433b24:	00000000 	nop
  433b28:	8fbf001c 	lw	ra,28(sp)
  433b2c:	27bd0020 	addiu	sp,sp,32
  433b30:	03e00008 	jr	ra
  433b34:	00000000 	nop
