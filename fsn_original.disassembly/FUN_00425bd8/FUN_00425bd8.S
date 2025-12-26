# Function: FUN_00425bd8
# Address: 0x00425bd8 - 0x00425c74
# Size: 0x9c (156 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00425bd8 <markAllVisible+0xc>:
  425bd8:	27bdffd8 	addiu	sp,sp,-40
  425bdc:	8f988990 	lw	t8,-30320(gp)
  425be0:	afbf0024 	sw	ra,36(sp)
  425be4:	afbc0020 	sw	gp,32(sp)
  425be8:	afb2001c 	sw	s2,28(sp)
  425bec:	afb10018 	sw	s1,24(sp)
  425bf0:	afb00014 	sw	s0,20(sp)
  425bf4:	8c8e0074 	lw	t6,116(a0)
  425bf8:	8f180000 	lw	t8,0(t8)
  425bfc:	908b0074 	lbu	t3,116(a0)
  425c00:	000e7f82 	srl	t7,t6,0x1e
  425c04:	01f8c825 	or	t9,t7,t8
  425c08:	8c8e0014 	lw	t6,20(a0)
  425c0c:	00195180 	sll	t2,t9,0x6
  425c10:	316cff3f 	andi	t4,t3,0xff3f
  425c14:	014c6825 	or	t5,t2,t4
  425c18:	00809025 	move	s2,a0
  425c1c:	a08d0074 	sb	t5,116(a0)
  425c20:	19c0000e 	blez	t6,425c5c <markAllVisible+0x90>
  425c24:	00008025 	move	s0,zero
  425c28:	00008825 	move	s1,zero
  425c2c:	8e4f0018 	lw	t7,24(s2)
  425c30:	8f9986d0 	lw	t9,-31024(gp)
  425c34:	01f1c021 	addu	t8,t7,s1
  425c38:	8f040000 	lw	a0,0(t8)
  425c3c:	0320f809 	jalr	t9
  425c40:	00000000 	nop
  425c44:	8e590014 	lw	t9,20(s2)
  425c48:	26100001 	addiu	s0,s0,1
  425c4c:	8fbc0020 	lw	gp,32(sp)
  425c50:	0219082a 	slt	at,s0,t9
  425c54:	1420fff5 	bnez	at,425c2c <markAllVisible+0x60>
  425c58:	26310004 	addiu	s1,s1,4
  425c5c:	8fbf0024 	lw	ra,36(sp)
  425c60:	8fb00014 	lw	s0,20(sp)
  425c64:	8fb10018 	lw	s1,24(sp)
  425c68:	8fb2001c 	lw	s2,28(sp)
  425c6c:	03e00008 	jr	ra
  425c70:	27bd0028 	addiu	sp,sp,40
