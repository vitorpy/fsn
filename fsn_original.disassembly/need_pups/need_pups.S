# Function: need_pups
# Address: 0x00421f04 - 0x00421f88
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421f04 <need_pups>:
  421f04:	3c1c0fc0 	lui	gp,0xfc0
  421f08:	279cbc2c 	addiu	gp,gp,-17364
  421f0c:	0399e021 	addu	gp,gp,t9
  421f10:	8f8e8068 	lw	t6,-32664(gp)
  421f14:	27bdffe0 	addiu	sp,sp,-32
  421f18:	91ce6f04 	lbu	t6,28420(t6)
  421f1c:	afbf001c 	sw	ra,28(sp)
  421f20:	11c00006 	beqz	t6,421f3c <need_pups+0x38>
  421f24:	afbc0018 	sw	gp,24(sp)
  421f28:	8f828068 	lw	v0,-32664(gp)
  421f2c:	00000000 	nop
  421f30:	90426f00 	lbu	v0,28416(v0)
  421f34:	10000011 	b	421f7c <need_pups+0x78>
  421f38:	8fbf001c 	lw	ra,28(sp)
  421f3c:	8f998344 	lw	t9,-31932(gp)
  421f40:	24040011 	li	a0,17
  421f44:	0320f809 	jalr	t9
  421f48:	00000000 	nop
  421f4c:	8fbc0018 	lw	gp,24(sp)
  421f50:	28410002 	slti	at,v0,2
  421f54:	10200004 	beqz	at,421f68 <need_pups+0x64>
  421f58:	24180001 	li	t8,1
  421f5c:	8f818068 	lw	at,-32664(gp)
  421f60:	240f0001 	li	t7,1
  421f64:	a02f6f00 	sb	t7,28416(at)
  421f68:	8f828068 	lw	v0,-32664(gp)
  421f6c:	8f818068 	lw	at,-32664(gp)
  421f70:	90426f00 	lbu	v0,28416(v0)
  421f74:	a0386f04 	sb	t8,28420(at)
  421f78:	8fbf001c 	lw	ra,28(sp)
  421f7c:	27bd0020 	addiu	sp,sp,32
  421f80:	03e00008 	jr	ra
  421f84:	00000000 	nop
