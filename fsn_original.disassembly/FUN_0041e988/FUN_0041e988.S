# Function: FUN_0041e988
# Address: 0x0041e988 - 0x0041eaf8
# Size: 0x170 (368 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041e988 <editCB+0x864>:
  41e988:	3c1c0fc0 	lui	gp,0xfc0
  41e98c:	279cf1a8 	addiu	gp,gp,-3672
  41e990:	0399e021 	addu	gp,gp,t9
  41e994:	27bdffa8 	addiu	sp,sp,-88
  41e998:	8f83897c 	lw	v1,-30340(gp)
  41e99c:	afbf001c 	sw	ra,28(sp)
  41e9a0:	8c630000 	lw	v1,0(v1)
  41e9a4:	afbc0018 	sw	gp,24(sp)
  41e9a8:	afa40058 	sw	a0,88(sp)
  41e9ac:	afa5005c 	sw	a1,92(sp)
  41e9b0:	8c620048 	lw	v0,72(v1)
  41e9b4:	00000000 	nop
  41e9b8:	1040004c 	beqz	v0,41eaec <editCB+0x9c8>
  41e9bc:	8fbf001c 	lw	ra,28(sp)
  41e9c0:	8c6e0044 	lw	t6,68(v1)
  41e9c4:	00000000 	nop
  41e9c8:	11c00048 	beqz	t6,41eaec <editCB+0x9c8>
  41e9cc:	8fbf001c 	lw	ra,28(sp)
  41e9d0:	8ccf0008 	lw	t7,8(a2)
  41e9d4:	00000000 	nop
  41e9d8:	11e0001b 	beqz	t7,41ea48 <editCB+0x924>
  41e9dc:	00000000 	nop
  41e9e0:	90590029 	lbu	t9,41(v0)
  41e9e4:	8f89897c 	lw	t1,-30340(gp)
  41e9e8:	37280040 	ori	t0,t9,0x40
  41e9ec:	a0480029 	sb	t0,41(v0)
  41e9f0:	8d290000 	lw	t1,0(t1)
  41e9f4:	8f84806c 	lw	a0,-32660(gp)
  41e9f8:	8d230044 	lw	v1,68(t1)
  41e9fc:	24050001 	li	a1,1
  41ea00:	906b0075 	lbu	t3,117(v1)
  41ea04:	00000000 	nop
  41ea08:	356c0008 	ori	t4,t3,0x8
  41ea0c:	a06c0075 	sb	t4,117(v1)
  41ea10:	8f998318 	lw	t9,-31976(gp)
  41ea14:	8c846b8c 	lw	a0,27532(a0)
  41ea18:	0320f809 	jalr	t9
  41ea1c:	00000000 	nop
  41ea20:	8fbc0018 	lw	gp,24(sp)
  41ea24:	24050001 	li	a1,1
  41ea28:	8f84806c 	lw	a0,-32660(gp)
  41ea2c:	8f998318 	lw	t9,-31976(gp)
  41ea30:	8c846b90 	lw	a0,27536(a0)
  41ea34:	0320f809 	jalr	t9
  41ea38:	00000000 	nop
  41ea3c:	8fbc0018 	lw	gp,24(sp)
  41ea40:	10000005 	b	41ea58 <editCB+0x934>
  41ea44:	00000000 	nop
  41ea48:	904d0029 	lbu	t5,41(v0)
  41ea4c:	00000000 	nop
  41ea50:	31aeffbf 	andi	t6,t5,0xffbf
  41ea54:	a04e0029 	sb	t6,41(v0)
  41ea58:	8f998534 	lw	t9,-31436(gp)
  41ea5c:	00000000 	nop
  41ea60:	0320f809 	jalr	t9
  41ea64:	00000000 	nop
  41ea68:	8fbc0018 	lw	gp,24(sp)
  41ea6c:	00000000 	nop
  41ea70:	8f998780 	lw	t9,-30848(gp)
  41ea74:	00000000 	nop
  41ea78:	0320f809 	jalr	t9
  41ea7c:	00000000 	nop
  41ea80:	8fbc0018 	lw	gp,24(sp)
  41ea84:	27a5002c 	addiu	a1,sp,44
  41ea88:	8f8f80a0 	lw	t7,-32608(gp)
  41ea8c:	8f98897c 	lw	t8,-30340(gp)
  41ea90:	25ef2589 	addiu	t7,t7,9609
  41ea94:	8f180000 	lw	t8,0(t8)
  41ea98:	afaf002c 	sw	t7,44(sp)
  41ea9c:	8f190048 	lw	t9,72(t8)
  41eaa0:	8f84806c 	lw	a0,-32660(gp)
  41eaa4:	8f280028 	lw	t0,40(t9)
  41eaa8:	8f998340 	lw	t9,-31936(gp)
  41eaac:	00084a40 	sll	t1,t0,0x9
  41eab0:	000957c2 	srl	t2,t1,0x1f
  41eab4:	8c846b84 	lw	a0,27524(a0)
  41eab8:	afaa0030 	sw	t2,48(sp)
  41eabc:	0320f809 	jalr	t9
  41eac0:	24060001 	li	a2,1
  41eac4:	8fbc0018 	lw	gp,24(sp)
  41eac8:	27a5002c 	addiu	a1,sp,44
  41eacc:	8f84806c 	lw	a0,-32660(gp)
  41ead0:	8f998340 	lw	t9,-31936(gp)
  41ead4:	8c846b88 	lw	a0,27528(a0)
  41ead8:	0320f809 	jalr	t9
  41eadc:	24060001 	li	a2,1
  41eae0:	8fbc0018 	lw	gp,24(sp)
  41eae4:	00000000 	nop
  41eae8:	8fbf001c 	lw	ra,28(sp)
  41eaec:	27bd0058 	addiu	sp,sp,88
  41eaf0:	03e00008 	jr	ra
  41eaf4:	00000000 	nop
