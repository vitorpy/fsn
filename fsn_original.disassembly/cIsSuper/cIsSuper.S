# Function: cIsSuper
# Address: 0x00433d64 - 0x00433e18
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00433d64 <cIsSuper>:
  433d64:	3c1c0fbf 	lui	gp,0xfbf
  433d68:	279c9dcc 	addiu	gp,gp,-25140
  433d6c:	0399e021 	addu	gp,gp,t9
  433d70:	27bdffd8 	addiu	sp,sp,-40
  433d74:	afbf001c 	sw	ra,28(sp)
  433d78:	afbc0018 	sw	gp,24(sp)
  433d7c:	afa40028 	sw	a0,40(sp)
  433d80:	afa5002c 	sw	a1,44(sp)
  433d84:	8fae0028 	lw	t6,40(sp)
  433d88:	00000000 	nop
  433d8c:	8dcf0014 	lw	t7,20(t6)
  433d90:	00000000 	nop
  433d94:	8df80030 	lw	t8,48(t7)
  433d98:	00000000 	nop
  433d9c:	afb80024 	sw	t8,36(sp)
  433da0:	8fb90024 	lw	t9,36(sp)
  433da4:	00000000 	nop
  433da8:	13200015 	beqz	t9,433e00 <cIsSuper+0x9c>
  433dac:	00000000 	nop
  433db0:	8fa80024 	lw	t0,36(sp)
  433db4:	8f9980cc 	lw	t9,-32564(gp)
  433db8:	8fa5002c 	lw	a1,44(sp)
  433dbc:	8d040000 	lw	a0,0(t0)
  433dc0:	0320f809 	jalr	t9
  433dc4:	00000000 	nop
  433dc8:	8fbc0018 	lw	gp,24(sp)
  433dcc:	14400003 	bnez	v0,433ddc <cIsSuper+0x78>
  433dd0:	00000000 	nop
  433dd4:	1000000c 	b	433e08 <cIsSuper+0xa4>
  433dd8:	24020001 	li	v0,1
  433ddc:	8fa90024 	lw	t1,36(sp)
  433de0:	00000000 	nop
  433de4:	8d2a0004 	lw	t2,4(t1)
  433de8:	00000000 	nop
  433dec:	afaa0024 	sw	t2,36(sp)
  433df0:	8fab0024 	lw	t3,36(sp)
  433df4:	00000000 	nop
  433df8:	1560ffed 	bnez	t3,433db0 <cIsSuper+0x4c>
  433dfc:	00000000 	nop
  433e00:	10000001 	b	433e08 <cIsSuper+0xa4>
  433e04:	00001025 	move	v0,zero
  433e08:	8fbf001c 	lw	ra,28(sp)
  433e0c:	27bd0028 	addiu	sp,sp,40
  433e10:	03e00008 	jr	ra
  433e14:	00000000 	nop
