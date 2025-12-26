# Function: FUN_00411d68
# Address: 0x00411d68 - 0x00411e2c
# Size: 0xc4 (196 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411d68 <dirToPath+0x244>:
  411d68:	3c1c0fc1 	lui	gp,0xfc1
  411d6c:	279cbdc8 	addiu	gp,gp,-16952
  411d70:	0399e021 	addu	gp,gp,t9
  411d74:	8f9983e0 	lw	t9,-31776(gp)
  411d78:	27bdffd8 	addiu	sp,sp,-40
  411d7c:	afbf001c 	sw	ra,28(sp)
  411d80:	afbc0018 	sw	gp,24(sp)
  411d84:	0320f809 	jalr	t9
  411d88:	afa40028 	sw	a0,40(sp)
  411d8c:	8fbc0018 	lw	gp,24(sp)
  411d90:	24430001 	addiu	v1,v0,1
  411d94:	8f858068 	lw	a1,-32664(gp)
  411d98:	afa30024 	sw	v1,36(sp)
  411d9c:	8ca50200 	lw	a1,512(a1)
  411da0:	00000000 	nop
  411da4:	10a00008 	beqz	a1,411dc8 <dirToPath+0x2a4>
  411da8:	00000000 	nop
  411dac:	8f8f806c 	lw	t7,-32660(gp)
  411db0:	00a37021 	addu	t6,a1,v1
  411db4:	8def6b1c 	lw	t7,27420(t7)
  411db8:	00000000 	nop
  411dbc:	01cf082b 	sltu	at,t6,t7
  411dc0:	1420000a 	bnez	at,411dec <dirToPath+0x2c8>
  411dc4:	00000000 	nop
  411dc8:	8f9983b8 	lw	t9,-31816(gp)
  411dcc:	24042710 	li	a0,10000
  411dd0:	0320f809 	jalr	t9
  411dd4:	00000000 	nop
  411dd8:	8fbc0018 	lw	gp,24(sp)
  411ddc:	24582710 	addiu	t8,v0,10000
  411de0:	8f81806c 	lw	at,-32660(gp)
  411de4:	00402825 	move	a1,v0
  411de8:	ac386b1c 	sw	t8,27420(at)
  411dec:	8f818068 	lw	at,-32664(gp)
  411df0:	8f99819c 	lw	t9,-32356(gp)
  411df4:	8fa40028 	lw	a0,40(sp)
  411df8:	8fa60024 	lw	a2,36(sp)
  411dfc:	0320f809 	jalr	t9
  411e00:	ac250200 	sw	a1,512(at)
  411e04:	8fbc0018 	lw	gp,24(sp)
  411e08:	8fb90024 	lw	t9,36(sp)
  411e0c:	8f858068 	lw	a1,-32664(gp)
  411e10:	8fbf001c 	lw	ra,28(sp)
  411e14:	8ca20200 	lw	v0,512(a1)
  411e18:	8f818068 	lw	at,-32664(gp)
  411e1c:	00592821 	addu	a1,v0,t9
  411e20:	27bd0028 	addiu	sp,sp,40
  411e24:	03e00008 	jr	ra
  411e28:	ac250200 	sw	a1,512(at)
