# Function: FUN_004169cc
# Address: 0x004169cc - 0x00416ac4
# Size: 0xf8 (248 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004169cc <rescanDatabase+0x12d0>:
  4169cc:	3c1c0fc0 	lui	gp,0xfc0
  4169d0:	279c7164 	addiu	gp,gp,29028
  4169d4:	0399e021 	addu	gp,gp,t9
  4169d8:	8f8e809c 	lw	t6,-32612(gp)
  4169dc:	27bdffe0 	addiu	sp,sp,-32
  4169e0:	8dce0000 	lw	t6,0(t6)
  4169e4:	afbf001c 	sw	ra,28(sp)
  4169e8:	11c00009 	beqz	t6,416a10 <rescanDatabase+0x1314>
  4169ec:	afbc0018 	sw	gp,24(sp)
  4169f0:	8f84806c 	lw	a0,-32660(gp)
  4169f4:	8f9982c8 	lw	t9,-32056(gp)
  4169f8:	8c846690 	lw	a0,26256(a0)
  4169fc:	0320f809 	jalr	t9
  416a00:	00000000 	nop
  416a04:	8fbc0018 	lw	gp,24(sp)
  416a08:	1000001e 	b	416a84 <rescanDatabase+0x1388>
  416a0c:	00402025 	move	a0,v0
  416a10:	8f84806c 	lw	a0,-32660(gp)
  416a14:	00000000 	nop
  416a18:	8c846690 	lw	a0,26256(a0)
  416a1c:	00000000 	nop
  416a20:	8c8f0000 	lw	t7,0(a0)
  416a24:	00000000 	nop
  416a28:	25f8ffff 	addiu	t8,t7,-1
  416a2c:	ac980000 	sw	t8,0(a0)
  416a30:	8f84806c 	lw	a0,-32660(gp)
  416a34:	00000000 	nop
  416a38:	8c846690 	lw	a0,26256(a0)
  416a3c:	00000000 	nop
  416a40:	8c990000 	lw	t9,0(a0)
  416a44:	00000000 	nop
  416a48:	07210008 	bgez	t9,416a6c <rescanDatabase+0x1370>
  416a4c:	00000000 	nop
  416a50:	8f9982d8 	lw	t9,-32040(gp)
  416a54:	00000000 	nop
  416a58:	0320f809 	jalr	t9
  416a5c:	00000000 	nop
  416a60:	8fbc0018 	lw	gp,24(sp)
  416a64:	10000006 	b	416a80 <rescanDatabase+0x1384>
  416a68:	00401825 	move	v1,v0
  416a6c:	8c820004 	lw	v0,4(a0)
  416a70:	00000000 	nop
  416a74:	90430000 	lbu	v1,0(v0)
  416a78:	24480001 	addiu	t0,v0,1
  416a7c:	ac880004 	sw	t0,4(a0)
  416a80:	00602025 	move	a0,v1
  416a84:	2401ffff 	li	at,-1
  416a88:	14810003 	bne	a0,at,416a98 <rescanDatabase+0x139c>
  416a8c:	00000000 	nop
  416a90:	10000008 	b	416ab4 <rescanDatabase+0x13b8>
  416a94:	2402ffff 	li	v0,-1
  416a98:	8f85806c 	lw	a1,-32660(gp)
  416a9c:	8f9982a4 	lw	t9,-32092(gp)
  416aa0:	8ca56690 	lw	a1,26256(a1)
  416aa4:	0320f809 	jalr	t9
  416aa8:	00000000 	nop
  416aac:	8fbc0018 	lw	gp,24(sp)
  416ab0:	24020001 	li	v0,1
  416ab4:	8fbf001c 	lw	ra,28(sp)
  416ab8:	27bd0020 	addiu	sp,sp,32
  416abc:	03e00008 	jr	ra
  416ac0:	00000000 	nop
