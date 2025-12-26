# Function: FUN_00430c0c
# Address: 0x00430c0c - 0x00430ca8
# Size: 0x9c (156 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00430c0c <usystem+0xe74>:
  430c0c:	3c1c0fbf 	lui	gp,0xfbf
  430c10:	279ccf24 	addiu	gp,gp,-12508
  430c14:	0399e021 	addu	gp,gp,t9
  430c18:	8f83806c 	lw	v1,-32660(gp)
  430c1c:	27bdffb0 	addiu	sp,sp,-80
  430c20:	24636f00 	addiu	v1,v1,28416
  430c24:	90620005 	lbu	v0,5(v1)
  430c28:	8f8f80a0 	lw	t7,-32608(gp)
  430c2c:	2c4e0001 	sltiu	t6,v0,1
  430c30:	31d800ff 	andi	t8,t6,0xff
  430c34:	25ef1d4d 	addiu	t7,t7,7501
  430c38:	afbf001c 	sw	ra,28(sp)
  430c3c:	afbc0018 	sw	gp,24(sp)
  430c40:	afa40050 	sw	a0,80(sp)
  430c44:	afa50054 	sw	a1,84(sp)
  430c48:	afa60058 	sw	a2,88(sp)
  430c4c:	a06e0005 	sb	t6,5(v1)
  430c50:	13000006 	beqz	t8,430c6c <usystem+0xed4>
  430c54:	afaf0028 	sw	t7,40(sp)
  430c58:	8f99806c 	lw	t9,-32660(gp)
  430c5c:	00000000 	nop
  430c60:	8f396ed4 	lw	t9,28372(t9)
  430c64:	10000006 	b	430c80 <usystem+0xee8>
  430c68:	afb9002c 	sw	t9,44(sp)
  430c6c:	8f88806c 	lw	t0,-32660(gp)
  430c70:	00000000 	nop
  430c74:	8d086ed8 	lw	t0,28376(t0)
  430c78:	00000000 	nop
  430c7c:	afa8002c 	sw	t0,44(sp)
  430c80:	8f84806c 	lw	a0,-32660(gp)
  430c84:	8f998340 	lw	t9,-31936(gp)
  430c88:	8c846ef4 	lw	a0,28404(a0)
  430c8c:	24060001 	li	a2,1
  430c90:	0320f809 	jalr	t9
  430c94:	27a50028 	addiu	a1,sp,40
  430c98:	8fbf001c 	lw	ra,28(sp)
  430c9c:	8fbc0018 	lw	gp,24(sp)
  430ca0:	03e00008 	jr	ra
  430ca4:	27bd0050 	addiu	sp,sp,80
