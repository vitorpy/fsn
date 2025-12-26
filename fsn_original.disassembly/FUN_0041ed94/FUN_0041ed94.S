# Function: FUN_0041ed94
# Address: 0x0041ed94 - 0x0041ee80
# Size: 0xec (236 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041ed94 <editCB+0xc70>:
  41ed94:	3c1c0fc0 	lui	gp,0xfc0
  41ed98:	279ced9c 	addiu	gp,gp,-4708
  41ed9c:	0399e021 	addu	gp,gp,t9
  41eda0:	27bdffd8 	addiu	sp,sp,-40
  41eda4:	afbf0024 	sw	ra,36(sp)
  41eda8:	afbc0020 	sw	gp,32(sp)
  41edac:	afb2001c 	sw	s2,28(sp)
  41edb0:	afb10018 	sw	s1,24(sp)
  41edb4:	afb00014 	sw	s0,20(sp)
  41edb8:	8c8e0074 	lw	t6,116(a0)
  41edbc:	00809025 	move	s2,a0
  41edc0:	000ec300 	sll	t8,t6,0xc
  41edc4:	07010015 	bgez	t8,41ee1c <editCB+0xcf8>
  41edc8:	00008825 	move	s1,zero
  41edcc:	90990075 	lbu	t9,117(a0)
  41edd0:	8c89000c 	lw	t1,12(a0)
  41edd4:	3328fff7 	andi	t0,t9,0xfff7
  41edd8:	19200010 	blez	t1,41ee1c <editCB+0xcf8>
  41eddc:	a0880075 	sb	t0,117(a0)
  41ede0:	00008025 	move	s0,zero
  41ede4:	8e4a0010 	lw	t2,16(s2)
  41ede8:	26310001 	addiu	s1,s1,1
  41edec:	01505821 	addu	t3,t2,s0
  41edf0:	8d620000 	lw	v0,0(t3)
  41edf4:	26100004 	addiu	s0,s0,4
  41edf8:	904c0029 	lbu	t4,41(v0)
  41edfc:	00000000 	nop
  41ee00:	318dffbf 	andi	t5,t4,0xffbf
  41ee04:	a04d0029 	sb	t5,41(v0)
  41ee08:	8e4e000c 	lw	t6,12(s2)
  41ee0c:	00000000 	nop
  41ee10:	022e082a 	slt	at,s1,t6
  41ee14:	1420fff3 	bnez	at,41ede4 <editCB+0xcc0>
  41ee18:	00000000 	nop
  41ee1c:	8e4f0014 	lw	t7,20(s2)
  41ee20:	00008825 	move	s1,zero
  41ee24:	19e00010 	blez	t7,41ee68 <editCB+0xd44>
  41ee28:	00008025 	move	s0,zero
  41ee2c:	8e580018 	lw	t8,24(s2)
  41ee30:	00000000 	nop
  41ee34:	0310c821 	addu	t9,t8,s0
  41ee38:	8f240000 	lw	a0,0(t9)
  41ee3c:	8f99801c 	lw	t9,-32740(gp)
  41ee40:	00000000 	nop
  41ee44:	2739ed94 	addiu	t9,t9,-4716
  41ee48:	0320f809 	jalr	t9
  41ee4c:	00000000 	nop
  41ee50:	8e480014 	lw	t0,20(s2)
  41ee54:	26310001 	addiu	s1,s1,1
  41ee58:	8fbc0020 	lw	gp,32(sp)
  41ee5c:	0228082a 	slt	at,s1,t0
  41ee60:	1420fff2 	bnez	at,41ee2c <editCB+0xd08>
  41ee64:	26100004 	addiu	s0,s0,4
  41ee68:	8fbf0024 	lw	ra,36(sp)
  41ee6c:	8fb00014 	lw	s0,20(sp)
  41ee70:	8fb10018 	lw	s1,24(sp)
  41ee74:	8fb2001c 	lw	s2,28(sp)
  41ee78:	03e00008 	jr	ra
  41ee7c:	27bd0028 	addiu	sp,sp,40
