# Function: FUN_00430b70
# Address: 0x00430b70 - 0x00430c0c
# Size: 0x9c (156 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00430b70 <usystem+0xdd8>:
  430b70:	3c1c0fbf 	lui	gp,0xfbf
  430b74:	279ccfc0 	addiu	gp,gp,-12352
  430b78:	0399e021 	addu	gp,gp,t9
  430b7c:	8f83806c 	lw	v1,-32660(gp)
  430b80:	27bdffb0 	addiu	sp,sp,-80
  430b84:	24636f00 	addiu	v1,v1,28416
  430b88:	90620004 	lbu	v0,4(v1)
  430b8c:	8f8f80a0 	lw	t7,-32608(gp)
  430b90:	2c4e0001 	sltiu	t6,v0,1
  430b94:	31d800ff 	andi	t8,t6,0xff
  430b98:	25ef1d4d 	addiu	t7,t7,7501
  430b9c:	afbf001c 	sw	ra,28(sp)
  430ba0:	afbc0018 	sw	gp,24(sp)
  430ba4:	afa40050 	sw	a0,80(sp)
  430ba8:	afa50054 	sw	a1,84(sp)
  430bac:	afa60058 	sw	a2,88(sp)
  430bb0:	a06e0004 	sb	t6,4(v1)
  430bb4:	13000006 	beqz	t8,430bd0 <usystem+0xe38>
  430bb8:	afaf0028 	sw	t7,40(sp)
  430bbc:	8f99806c 	lw	t9,-32660(gp)
  430bc0:	00000000 	nop
  430bc4:	8f396ed4 	lw	t9,28372(t9)
  430bc8:	10000006 	b	430be4 <usystem+0xe4c>
  430bcc:	afb9002c 	sw	t9,44(sp)
  430bd0:	8f88806c 	lw	t0,-32660(gp)
  430bd4:	00000000 	nop
  430bd8:	8d086ed8 	lw	t0,28376(t0)
  430bdc:	00000000 	nop
  430be0:	afa8002c 	sw	t0,44(sp)
  430be4:	8f84806c 	lw	a0,-32660(gp)
  430be8:	8f998340 	lw	t9,-31936(gp)
  430bec:	8c846ef0 	lw	a0,28400(a0)
  430bf0:	24060001 	li	a2,1
  430bf4:	0320f809 	jalr	t9
  430bf8:	27a50028 	addiu	a1,sp,40
  430bfc:	8fbf001c 	lw	ra,28(sp)
  430c00:	8fbc0018 	lw	gp,24(sp)
  430c04:	03e00008 	jr	ra
  430c08:	27bd0050 	addiu	sp,sp,80
