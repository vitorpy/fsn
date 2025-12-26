# Function: message
# Address: 0x00410d98 - 0x00410e70
# Size: 0xd8 (216 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410d98 <message>:
  410d98:	3c1c0fc1 	lui	gp,0xfc1
  410d9c:	279ccd98 	addiu	gp,gp,-12904
  410da0:	0399e021 	addu	gp,gp,t9
  410da4:	27bdff80 	addiu	sp,sp,-128
  410da8:	8f9984c0 	lw	t9,-31552(gp)
  410dac:	afbf001c 	sw	ra,28(sp)
  410db0:	afa40080 	sw	a0,128(sp)
  410db4:	afbc0018 	sw	gp,24(sp)
  410db8:	afb00014 	sw	s0,20(sp)
  410dbc:	afa50084 	sw	a1,132(sp)
  410dc0:	0320f809 	jalr	t9
  410dc4:	2404000c 	li	a0,12
  410dc8:	8fbc0018 	lw	gp,24(sp)
  410dcc:	8fa40080 	lw	a0,128(sp)
  410dd0:	8f998170 	lw	t9,-32400(gp)
  410dd4:	00408025 	move	s0,v0
  410dd8:	0320f809 	jalr	t9
  410ddc:	00000000 	nop
  410de0:	8fbc0018 	lw	gp,24(sp)
  410de4:	ae020000 	sw	v0,0(s0)
  410de8:	8f838068 	lw	v1,-32664(gp)
  410dec:	8f8f80a0 	lw	t7,-32608(gp)
  410df0:	24630020 	addiu	v1,v1,32
  410df4:	8c6e0000 	lw	t6,0(v1)
  410df8:	a2000008 	sb	zero,8(s0)
  410dfc:	ae0e0004 	sw	t6,4(s0)
  410e00:	ac700000 	sw	s0,0(v1)
  410e04:	25ef1d4d 	addiu	t7,t7,7501
  410e08:	8f84806c 	lw	a0,-32660(gp)
  410e0c:	afaf002c 	sw	t7,44(sp)
  410e10:	8e180000 	lw	t8,0(s0)
  410e14:	8f998340 	lw	t9,-31936(gp)
  410e18:	8c846648 	lw	a0,26184(a0)
  410e1c:	27a5002c 	addiu	a1,sp,44
  410e20:	24060001 	li	a2,1
  410e24:	0320f809 	jalr	t9
  410e28:	afb80030 	sw	t8,48(sp)
  410e2c:	8fa50084 	lw	a1,132(sp)
  410e30:	8fbc0018 	lw	gp,24(sp)
  410e34:	10a0000a 	beqz	a1,410e60 <message+0xc8>
  410e38:	8fbf001c 	lw	ra,28(sp)
  410e3c:	8f848a00 	lw	a0,-30208(gp)
  410e40:	8f99816c 	lw	t9,-32404(gp)
  410e44:	8f868564 	lw	a2,-31388(gp)
  410e48:	8c840000 	lw	a0,0(a0)
  410e4c:	0320f809 	jalr	t9
  410e50:	02003825 	move	a3,s0
  410e54:	8fbc0018 	lw	gp,24(sp)
  410e58:	00000000 	nop
  410e5c:	8fbf001c 	lw	ra,28(sp)
  410e60:	02001025 	move	v0,s0
  410e64:	8fb00014 	lw	s0,20(sp)
  410e68:	03e00008 	jr	ra
  410e6c:	27bd0080 	addiu	sp,sp,128
