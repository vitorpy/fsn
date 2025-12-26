# Function: dirfamMonitorDir
# Address: 0x00427e24 - 0x00427ebc
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427e24 <dirfamMonitorDir>:
  427e24:	3c1c0fbf 	lui	gp,0xfbf
  427e28:	279c5d0c 	addiu	gp,gp,23820
  427e2c:	0399e021 	addu	gp,gp,t9
  427e30:	8f8e8a24 	lw	t6,-30172(gp)
  427e34:	27bdffe0 	addiu	sp,sp,-32
  427e38:	91ce0000 	lbu	t6,0(t6)
  427e3c:	afbf001c 	sw	ra,28(sp)
  427e40:	afbc0018 	sw	gp,24(sp)
  427e44:	15c00019 	bnez	t6,427eac <dirfamMonitorDir+0x88>
  427e48:	00803825 	move	a3,a0
  427e4c:	8c8f0074 	lw	t7,116(a0)
  427e50:	00002025 	move	a0,zero
  427e54:	000fc280 	sll	t8,t7,0xa
  427e58:	0018cfc2 	srl	t9,t8,0x1f
  427e5c:	17200014 	bnez	t9,427eb0 <dirfamMonitorDir+0x8c>
  427e60:	8fbf001c 	lw	ra,28(sp)
  427e64:	8f99857c 	lw	t9,-31364(gp)
  427e68:	00e02825 	move	a1,a3
  427e6c:	0320f809 	jalr	t9
  427e70:	afa70020 	sw	a3,32(sp)
  427e74:	8fbc0018 	lw	gp,24(sp)
  427e78:	8fa70020 	lw	a3,32(sp)
  427e7c:	8f84806c 	lw	a0,-32660(gp)
  427e80:	8f9988e8 	lw	t9,-30488(gp)
  427e84:	00402825 	move	a1,v0
  427e88:	24e60060 	addiu	a2,a3,96
  427e8c:	0320f809 	jalr	t9
  427e90:	24846c70 	addiu	a0,a0,27760
  427e94:	8fa70020 	lw	a3,32(sp)
  427e98:	8fbc0018 	lw	gp,24(sp)
  427e9c:	90e90075 	lbu	t1,117(a3)
  427ea0:	00000000 	nop
  427ea4:	352a0020 	ori	t2,t1,0x20
  427ea8:	a0ea0075 	sb	t2,117(a3)
  427eac:	8fbf001c 	lw	ra,28(sp)
  427eb0:	27bd0020 	addiu	sp,sp,32
  427eb4:	03e00008 	jr	ra
  427eb8:	00000000 	nop
