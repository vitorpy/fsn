# Function: FUN_00410858
# Address: 0x00410858 - 0x004108ac
# Size: 0x54 (84 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410858 <do_warp+0x180>:
  410858:	3c1c0fc1 	lui	gp,0xfc1
  41085c:	279cd2d8 	addiu	gp,gp,-11560
  410860:	0399e021 	addu	gp,gp,t9
  410864:	8f8f897c 	lw	t7,-30340(gp)
  410868:	27bdffe0 	addiu	sp,sp,-32
  41086c:	8def0000 	lw	t7,0(t7)
  410870:	afbf001c 	sw	ra,28(sp)
  410874:	afbc0018 	sw	gp,24(sp)
  410878:	240e0001 	li	t6,1
  41087c:	a1ee0c50 	sb	t6,3152(t7)
  410880:	8f998534 	lw	t9,-31436(gp)
  410884:	00000000 	nop
  410888:	0320f809 	jalr	t9
  41088c:	00000000 	nop
  410890:	8fbc0018 	lw	gp,24(sp)
  410894:	8fbf001c 	lw	ra,28(sp)
  410898:	8f818068 	lw	at,-32664(gp)
  41089c:	27bd0020 	addiu	sp,sp,32
  4108a0:	24020001 	li	v0,1
  4108a4:	03e00008 	jr	ra
  4108a8:	ac200154 	sw	zero,340(at)
