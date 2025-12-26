# Function: deleteCmapWindow
# Address: 0x00421e4c - 0x00421f04
# Size: 0xb8 (184 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421e4c <deleteCmapWindow>:
  421e4c:	3c1c0fc0 	lui	gp,0xfc0
  421e50:	279cbce4 	addiu	gp,gp,-17180
  421e54:	0399e021 	addu	gp,gp,t9
  421e58:	8f868948 	lw	a2,-30392(gp)
  421e5c:	27bdffe0 	addiu	sp,sp,-32
  421e60:	8cc50000 	lw	a1,0(a2)
  421e64:	afbf001c 	sw	ra,28(sp)
  421e68:	afbc0018 	sw	gp,24(sp)
  421e6c:	18a00021 	blez	a1,421ef4 <deleteCmapWindow+0xa8>
  421e70:	00001825 	move	v1,zero
  421e74:	8f82806c 	lw	v0,-32660(gp)
  421e78:	00000000 	nop
  421e7c:	24426c38 	addiu	v0,v0,27704
  421e80:	8c4e0000 	lw	t6,0(v0)
  421e84:	00000000 	nop
  421e88:	148e0016 	bne	a0,t6,421ee4 <deleteCmapWindow+0x98>
  421e8c:	00000000 	nop
  421e90:	24a4ffff 	addiu	a0,a1,-1
  421e94:	0064082a 	slt	at,v1,a0
  421e98:	1020000a 	beqz	at,421ec4 <deleteCmapWindow+0x78>
  421e9c:	00000000 	nop
  421ea0:	8f98806c 	lw	t8,-32660(gp)
  421ea4:	00047880 	sll	t7,a0,0x2
  421ea8:	27186c38 	addiu	t8,t8,27704
  421eac:	01f81821 	addu	v1,t7,t8
  421eb0:	8c590004 	lw	t9,4(v0)
  421eb4:	24420004 	addiu	v0,v0,4
  421eb8:	0043082b 	sltu	at,v0,v1
  421ebc:	1420fffc 	bnez	at,421eb0 <deleteCmapWindow+0x64>
  421ec0:	ac59fffc 	sw	t9,-4(v0)
  421ec4:	8f99801c 	lw	t9,-32740(gp)
  421ec8:	acc40000 	sw	a0,0(a2)
  421ecc:	27391c14 	addiu	t9,t9,7188
  421ed0:	0320f809 	jalr	t9
  421ed4:	00000000 	nop
  421ed8:	8fbc0018 	lw	gp,24(sp)
  421edc:	10000006 	b	421ef8 <deleteCmapWindow+0xac>
  421ee0:	8fbf001c 	lw	ra,28(sp)
  421ee4:	24630001 	addiu	v1,v1,1
  421ee8:	0065082a 	slt	at,v1,a1
  421eec:	1420ffe4 	bnez	at,421e80 <deleteCmapWindow+0x34>
  421ef0:	24420004 	addiu	v0,v0,4
  421ef4:	8fbf001c 	lw	ra,28(sp)
  421ef8:	27bd0020 	addiu	sp,sp,32
  421efc:	03e00008 	jr	ra
  421f00:	00000000 	nop
