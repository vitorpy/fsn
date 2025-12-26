# Function: __sti__12520_3102cde5
# Address: 0x00433e88 - 0x00433ed0
# Size: 0x48 (72 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433e88 <__sti__12520_3102cde5>:
  433e88:	3c1c0fbf 	lui	gp,0xfbf
  433e8c:	279c9ca8 	addiu	gp,gp,-25432
  433e90:	0399e021 	addu	gp,gp,t9
  433e94:	27bdffe0 	addiu	sp,sp,-32
  433e98:	afbf001c 	sw	ra,28(sp)
  433e9c:	afbc0018 	sw	gp,24(sp)
  433ea0:	8f84806c 	lw	a0,-32660(gp)
  433ea4:	8f998848 	lw	t9,-30648(gp)
  433ea8:	24846f50 	addiu	a0,a0,28496
  433eac:	0320f809 	jalr	t9
  433eb0:	00000000 	nop
  433eb4:	8fbc0018 	lw	gp,24(sp)
  433eb8:	10000001 	b	433ec0 <__sti__12520_3102cde5+0x38>
  433ebc:	00000000 	nop
  433ec0:	8fbf001c 	lw	ra,28(sp)
  433ec4:	27bd0020 	addiu	sp,sp,32
  433ec8:	03e00008 	jr	ra
  433ecc:	00000000 	nop
