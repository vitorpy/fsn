# Function: createCopyright
# Address: 0x0042aec8 - 0x0042afc8
# Size: 0x100 (256 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042aec8 <createCopyright>:
  42aec8:	3c1c0fbf 	lui	gp,0xfbf
  42aecc:	279c2c68 	addiu	gp,gp,11368
  42aed0:	0399e021 	addu	gp,gp,t9
  42aed4:	27bdffe0 	addiu	sp,sp,-32
  42aed8:	00c03825 	move	a3,a2
  42aedc:	8f8f80a0 	lw	t7,-32608(gp)
  42aee0:	000770c0 	sll	t6,a3,0x3
  42aee4:	afbf001c 	sw	ra,28(sp)
  42aee8:	afbc0018 	sw	gp,24(sp)
  42aeec:	afa50024 	sw	a1,36(sp)
  42aef0:	00ae1021 	addu	v0,a1,t6
  42aef4:	24e70001 	addiu	a3,a3,1
  42aef8:	25ef19b3 	addiu	t7,t7,6579
  42aefc:	8f9980a0 	lw	t9,-32608(gp)
  42af00:	ac4f0000 	sw	t7,0(v0)
  42af04:	ac400004 	sw	zero,4(v0)
  42af08:	0007c0c0 	sll	t8,a3,0x3
  42af0c:	00b81021 	addu	v0,a1,t8
  42af10:	24e70001 	addiu	a3,a3,1
  42af14:	273919aa 	addiu	t9,t9,6570
  42af18:	8f8980a4 	lw	t1,-32604(gp)
  42af1c:	8f8a8068 	lw	t2,-32664(gp)
  42af20:	ac590000 	sw	t9,0(v0)
  42af24:	ac400004 	sw	zero,4(v0)
  42af28:	000740c0 	sll	t0,a3,0x3
  42af2c:	00a81021 	addu	v0,a1,t0
  42af30:	2529035b 	addiu	t1,t1,859
  42af34:	254a79c4 	addiu	t2,t2,31172
  42af38:	00a03025 	move	a2,a1
  42af3c:	ac4a0004 	sw	t2,4(v0)
  42af40:	ac490000 	sw	t1,0(v0)
  42af44:	8f9980bc 	lw	t9,-32580(gp)
  42af48:	8f85805c 	lw	a1,-32676(gp)
  42af4c:	24e70001 	addiu	a3,a3,1
  42af50:	0320f809 	jalr	t9
  42af54:	24a51c74 	addiu	a1,a1,7284
  42af58:	8fbc0018 	lw	gp,24(sp)
  42af5c:	00402025 	move	a0,v0
  42af60:	8f83806c 	lw	v1,-32660(gp)
  42af64:	00000000 	nop
  42af68:	24636e10 	addiu	v1,v1,28176
  42af6c:	ac620000 	sw	v0,0(v1)
  42af70:	8f998388 	lw	t9,-31864(gp)
  42af74:	00000000 	nop
  42af78:	0320f809 	jalr	t9
  42af7c:	00000000 	nop
  42af80:	8fbc0018 	lw	gp,24(sp)
  42af84:	00000000 	nop
  42af88:	8f84806c 	lw	a0,-32660(gp)
  42af8c:	8f998368 	lw	t9,-31896(gp)
  42af90:	8c846e10 	lw	a0,28176(a0)
  42af94:	0320f809 	jalr	t9
  42af98:	00000000 	nop
  42af9c:	8fbc0018 	lw	gp,24(sp)
  42afa0:	00402825 	move	a1,v0
  42afa4:	8f848a04 	lw	a0,-30204(gp)
  42afa8:	8f99817c 	lw	t9,-32388(gp)
  42afac:	8c840000 	lw	a0,0(a0)
  42afb0:	0320f809 	jalr	t9
  42afb4:	00000000 	nop
  42afb8:	8fbf001c 	lw	ra,28(sp)
  42afbc:	8fbc0018 	lw	gp,24(sp)
  42afc0:	03e00008 	jr	ra
  42afc4:	27bd0020 	addiu	sp,sp,32
