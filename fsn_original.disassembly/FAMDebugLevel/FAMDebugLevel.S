# Function: FAMDebugLevel
# Address: 0x0043ac20 - 0x0043ace4
# Size: 0xc4 (196 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043ac20 <FAMDebugLevel>:
  43ac20:	3c1c0fbe 	lui	gp,0xfbe
  43ac24:	279c2f10 	addiu	gp,gp,12048
  43ac28:	0399e021 	addu	gp,gp,t9
  43ac2c:	27bdff10 	addiu	sp,sp,-240
  43ac30:	afbf001c 	sw	ra,28(sp)
  43ac34:	afbc0018 	sw	gp,24(sp)
  43ac38:	10a00008 	beqz	a1,43ac5c <FAMDebugLevel+0x3c>
  43ac3c:	afa400f0 	sw	a0,240(sp)
  43ac40:	24010001 	li	at,1
  43ac44:	10a10007 	beq	a1,at,43ac64 <FAMDebugLevel+0x44>
  43ac48:	24010002 	li	at,2
  43ac4c:	10a10007 	beq	a1,at,43ac6c <FAMDebugLevel+0x4c>
  43ac50:	00000000 	nop
  43ac54:	1000001f 	b	43acd4 <FAMDebugLevel+0xb4>
  43ac58:	2402ffff 	li	v0,-1
  43ac5c:	10000007 	b	43ac7c <FAMDebugLevel+0x5c>
  43ac60:	24020045 	li	v0,69
  43ac64:	10000005 	b	43ac7c <FAMDebugLevel+0x5c>
  43ac68:	24020044 	li	v0,68
  43ac6c:	10000003 	b	43ac7c <FAMDebugLevel+0x5c>
  43ac70:	24020056 	li	v0,86
  43ac74:	10000017 	b	43acd4 <FAMDebugLevel+0xb4>
  43ac78:	2402ffff 	li	v0,-1
  43ac7c:	8f85806c 	lw	a1,-32660(gp)
  43ac80:	8f9983e4 	lw	t9,-31772(gp)
  43ac84:	27a40028 	addiu	a0,sp,40
  43ac88:	00403025 	move	a2,v0
  43ac8c:	0320f809 	jalr	t9
  43ac90:	24a59f3c 	addiu	a1,a1,-24772
  43ac94:	8fbc0018 	lw	gp,24(sp)
  43ac98:	27a40028 	addiu	a0,sp,40
  43ac9c:	8f9983e0 	lw	t9,-31776(gp)
  43aca0:	00000000 	nop
  43aca4:	0320f809 	jalr	t9
  43aca8:	00000000 	nop
  43acac:	8fbc0018 	lw	gp,24(sp)
  43acb0:	8fa300f0 	lw	v1,240(sp)
  43acb4:	8f998900 	lw	t9,-30464(gp)
  43acb8:	8c640004 	lw	a0,4(v1)
  43acbc:	8c650000 	lw	a1,0(v1)
  43acc0:	27a60028 	addiu	a2,sp,40
  43acc4:	0320f809 	jalr	t9
  43acc8:	24470001 	addiu	a3,v0,1
  43accc:	8fbc0018 	lw	gp,24(sp)
  43acd0:	24020001 	li	v0,1
  43acd4:	8fbf001c 	lw	ra,28(sp)
  43acd8:	27bd00f0 	addiu	sp,sp,240
  43acdc:	03e00008 	jr	ra
  43ace0:	00000000 	nop
