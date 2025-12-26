# Function: FUN_00411c04
# Address: 0x00411c04 - 0x00411d68
# Size: 0x164 (356 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411c04 <dirToPath+0xe0>:
  411c04:	3c1c0fc1 	lui	gp,0xfc1
  411c08:	279cbf2c 	addiu	gp,gp,-16596
  411c0c:	0399e021 	addu	gp,gp,t9
  411c10:	8f848068 	lw	a0,-32664(gp)
  411c14:	27bdffe0 	addiu	sp,sp,-32
  411c18:	8c8401f4 	lw	a0,500(a0)
  411c1c:	afbf001c 	sw	ra,28(sp)
  411c20:	10800008 	beqz	a0,411c44 <dirToPath+0x120>
  411c24:	afbc0018 	sw	gp,24(sp)
  411c28:	8f8e806c 	lw	t6,-32660(gp)
  411c2c:	00000000 	nop
  411c30:	8dce6b14 	lw	t6,27412(t6)
  411c34:	00000000 	nop
  411c38:	008e082b 	sltu	at,a0,t6
  411c3c:	1420003d 	bnez	at,411d34 <dirToPath+0x210>
  411c40:	00000000 	nop
  411c44:	8f998188 	lw	t9,-32376(gp)
  411c48:	24040040 	li	a0,64
  411c4c:	0320f809 	jalr	t9
  411c50:	24050078 	li	a1,120
  411c54:	8fbc0018 	lw	gp,24(sp)
  411c58:	244f1e00 	addiu	t7,v0,7680
  411c5c:	8f838068 	lw	v1,-32664(gp)
  411c60:	8f81806c 	lw	at,-32660(gp)
  411c64:	8c6301f8 	lw	v1,504(v1)
  411c68:	00402025 	move	a0,v0
  411c6c:	14600011 	bnez	v1,411cb4 <dirToPath+0x190>
  411c70:	ac2f6b14 	sw	t7,27412(at)
  411c74:	8f818068 	lw	at,-32664(gp)
  411c78:	8f9983b8 	lw	t9,-31816(gp)
  411c7c:	24040040 	li	a0,64
  411c80:	0320f809 	jalr	t9
  411c84:	ac2201f4 	sw	v0,500(at)
  411c88:	8fbc0018 	lw	gp,24(sp)
  411c8c:	24060010 	li	a2,16
  411c90:	8f818a44 	lw	at,-30140(gp)
  411c94:	8f848068 	lw	a0,-32664(gp)
  411c98:	8f838068 	lw	v1,-32664(gp)
  411c9c:	ac220000 	sw	v0,0(at)
  411ca0:	8f81806c 	lw	at,-32660(gp)
  411ca4:	8c8401f4 	lw	a0,500(a0)
  411ca8:	8c6301f8 	lw	v1,504(v1)
  411cac:	10000019 	b	411d14 <dirToPath+0x1f0>
  411cb0:	ac266b18 	sw	a2,27416(at)
  411cb4:	8f86806c 	lw	a2,-32660(gp)
  411cb8:	00000000 	nop
  411cbc:	8cc66b18 	lw	a2,27416(a2)
  411cc0:	00000000 	nop
  411cc4:	14660013 	bne	v1,a2,411d14 <dirToPath+0x1f0>
  411cc8:	00000000 	nop
  411ccc:	8f818068 	lw	at,-32664(gp)
  411cd0:	8f99818c 	lw	t9,-32372(gp)
  411cd4:	ac2401f4 	sw	a0,500(at)
  411cd8:	8f848a44 	lw	a0,-30140(gp)
  411cdc:	8f81806c 	lw	at,-32660(gp)
  411ce0:	24c60010 	addiu	a2,a2,16
  411ce4:	8c840000 	lw	a0,0(a0)
  411ce8:	00062880 	sll	a1,a2,0x2
  411cec:	0320f809 	jalr	t9
  411cf0:	ac266b18 	sw	a2,27416(at)
  411cf4:	8fbc0018 	lw	gp,24(sp)
  411cf8:	00000000 	nop
  411cfc:	8f848068 	lw	a0,-32664(gp)
  411d00:	8f838068 	lw	v1,-32664(gp)
  411d04:	8f818a44 	lw	at,-30140(gp)
  411d08:	8c8401f4 	lw	a0,500(a0)
  411d0c:	8c6301f8 	lw	v1,504(v1)
  411d10:	ac220000 	sw	v0,0(at)
  411d14:	8f988a44 	lw	t8,-30140(gp)
  411d18:	0003c880 	sll	t9,v1,0x2
  411d1c:	8f180000 	lw	t8,0(t8)
  411d20:	8f818068 	lw	at,-32664(gp)
  411d24:	03194021 	addu	t0,t8,t9
  411d28:	ad040000 	sw	a0,0(t0)
  411d2c:	24630001 	addiu	v1,v1,1
  411d30:	ac2301f8 	sw	v1,504(at)
  411d34:	8f858068 	lw	a1,-32664(gp)
  411d38:	8f818068 	lw	at,-32664(gp)
  411d3c:	8ca501fc 	lw	a1,508(a1)
  411d40:	00801025 	move	v0,a0
  411d44:	24840078 	addiu	a0,a0,120
  411d48:	ac85ffe4 	sw	a1,-28(a0)
  411d4c:	ac2401f4 	sw	a0,500(at)
  411d50:	8f818068 	lw	at,-32664(gp)
  411d54:	8fbf001c 	lw	ra,28(sp)
  411d58:	24a50001 	addiu	a1,a1,1
  411d5c:	27bd0020 	addiu	sp,sp,32
  411d60:	03e00008 	jr	ra
  411d64:	ac2501fc 	sw	a1,508(at)
