# Function: FUN_00415d24
# Address: 0x00415d24 - 0x00415dec
# Size: 0xc8 (200 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00415d24 <rescanDatabase+0x628>:
  415d24:	3c1c0fc0 	lui	gp,0xfc0
  415d28:	279c7e0c 	addiu	gp,gp,32268
  415d2c:	0399e021 	addu	gp,gp,t9
  415d30:	8f8e809c 	lw	t6,-32612(gp)
  415d34:	27bdffe0 	addiu	sp,sp,-32
  415d38:	8dce0000 	lw	t6,0(t6)
  415d3c:	afbf001c 	sw	ra,28(sp)
  415d40:	11c0000a 	beqz	t6,415d6c <rescanDatabase+0x670>
  415d44:	afbc0018 	sw	gp,24(sp)
  415d48:	8f82806c 	lw	v0,-32660(gp)
  415d4c:	8f9982c8 	lw	t9,-32056(gp)
  415d50:	24426690 	addiu	v0,v0,26256
  415d54:	8c440000 	lw	a0,0(v0)
  415d58:	0320f809 	jalr	t9
  415d5c:	00000000 	nop
  415d60:	8fbc0018 	lw	gp,24(sp)
  415d64:	1000001d 	b	415ddc <rescanDatabase+0x6e0>
  415d68:	00401825 	move	v1,v0
  415d6c:	8f82806c 	lw	v0,-32660(gp)
  415d70:	00000000 	nop
  415d74:	24426690 	addiu	v0,v0,26256
  415d78:	8c440000 	lw	a0,0(v0)
  415d7c:	00000000 	nop
  415d80:	8c8f0000 	lw	t7,0(a0)
  415d84:	00000000 	nop
  415d88:	25f8ffff 	addiu	t8,t7,-1
  415d8c:	ac980000 	sw	t8,0(a0)
  415d90:	8c440000 	lw	a0,0(v0)
  415d94:	00000000 	nop
  415d98:	8c990000 	lw	t9,0(a0)
  415d9c:	00000000 	nop
  415da0:	07210008 	bgez	t9,415dc4 <rescanDatabase+0x6c8>
  415da4:	00000000 	nop
  415da8:	8f9982d8 	lw	t9,-32040(gp)
  415dac:	00000000 	nop
  415db0:	0320f809 	jalr	t9
  415db4:	00000000 	nop
  415db8:	8fbc0018 	lw	gp,24(sp)
  415dbc:	10000006 	b	415dd8 <rescanDatabase+0x6dc>
  415dc0:	00402825 	move	a1,v0
  415dc4:	8c820004 	lw	v0,4(a0)
  415dc8:	00000000 	nop
  415dcc:	90450000 	lbu	a1,0(v0)
  415dd0:	24480001 	addiu	t0,v0,1
  415dd4:	ac880004 	sw	t0,4(a0)
  415dd8:	00a01825 	move	v1,a1
  415ddc:	8fbf001c 	lw	ra,28(sp)
  415de0:	27bd0020 	addiu	sp,sp,32
  415de4:	03e00008 	jr	ra
  415de8:	00601025 	move	v0,v1
