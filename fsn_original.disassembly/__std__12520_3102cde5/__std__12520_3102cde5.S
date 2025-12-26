# Function: __std__12520_3102cde5
# Address: 0x00433ed0 - 0x00433f18
# Size: 0x48 (72 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433ed0 <__std__12520_3102cde5>:
  433ed0:	3c1c0fbf 	lui	gp,0xfbf
  433ed4:	279c9c60 	addiu	gp,gp,-25504
  433ed8:	0399e021 	addu	gp,gp,t9
  433edc:	27bdffe0 	addiu	sp,sp,-32
  433ee0:	afbf001c 	sw	ra,28(sp)
  433ee4:	afbc0018 	sw	gp,24(sp)
  433ee8:	8f84806c 	lw	a0,-32660(gp)
  433eec:	8f998860 	lw	t9,-30624(gp)
  433ef0:	24050002 	li	a1,2
  433ef4:	0320f809 	jalr	t9
  433ef8:	24846f50 	addiu	a0,a0,28496
  433efc:	8fbc0018 	lw	gp,24(sp)
  433f00:	10000001 	b	433f08 <__std__12520_3102cde5+0x38>
  433f04:	00000000 	nop
  433f08:	8fbf001c 	lw	ra,28(sp)
  433f0c:	27bd0020 	addiu	sp,sp,32
  433f10:	03e00008 	jr	ra
  433f14:	00000000 	nop
