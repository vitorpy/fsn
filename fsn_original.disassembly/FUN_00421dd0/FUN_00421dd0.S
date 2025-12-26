# Function: FUN_00421dd0
# Address: 0x00421dd0 - 0x00421e4c
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421dd0 <newCmapWindow+0xc>:
  421dd0:	8f868948 	lw	a2,-30392(gp)
  421dd4:	27bdffe0 	addiu	sp,sp,-32
  421dd8:	8cc50000 	lw	a1,0(a2)
  421ddc:	afbf001c 	sw	ra,28(sp)
  421de0:	afbc0018 	sw	gp,24(sp)
  421de4:	18a0000c 	blez	a1,421e18 <newCmapWindow+0x54>
  421de8:	00a01825 	move	v1,a1
  421dec:	8f8f806c 	lw	t7,-32660(gp)
  421df0:	00037080 	sll	t6,v1,0x2
  421df4:	8f83806c 	lw	v1,-32660(gp)
  421df8:	25ef6c38 	addiu	t7,t7,27704
  421dfc:	01cf1021 	addu	v0,t6,t7
  421e00:	24636c3c 	addiu	v1,v1,27708
  421e04:	8c58fffc 	lw	t8,-4(v0)
  421e08:	2442fffc 	addiu	v0,v0,-4
  421e0c:	0043082b 	sltu	at,v0,v1
  421e10:	1020fffc 	beqz	at,421e04 <newCmapWindow+0x40>
  421e14:	ac580004 	sw	t8,4(v0)
  421e18:	8f81806c 	lw	at,-32660(gp)
  421e1c:	24b90001 	addiu	t9,a1,1
  421e20:	ac246c38 	sw	a0,27704(at)
  421e24:	acd90000 	sw	t9,0(a2)
  421e28:	8f99801c 	lw	t9,-32740(gp)
  421e2c:	00000000 	nop
  421e30:	27391c14 	addiu	t9,t9,7188
  421e34:	0320f809 	jalr	t9
  421e38:	00000000 	nop
  421e3c:	8fbf001c 	lw	ra,28(sp)
  421e40:	8fbc0018 	lw	gp,24(sp)
  421e44:	03e00008 	jr	ra
  421e48:	27bd0020 	addiu	sp,sp,32
