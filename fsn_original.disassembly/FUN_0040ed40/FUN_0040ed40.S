# Function: FUN_0040ed40
# Address: 0x0040ed40 - 0x0040eef0
# Size: 0x1b0 (432 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040ed40 <setScales+0x1548>:
  40ed40:	3c1c0fc1 	lui	gp,0xfc1
  40ed44:	279cedf0 	addiu	gp,gp,-4624
  40ed48:	0399e021 	addu	gp,gp,t9
  40ed4c:	8f828924 	lw	v0,-30428(gp)
  40ed50:	8f8e80a0 	lw	t6,-32608(gp)
  40ed54:	27bdffd0 	addiu	sp,sp,-48
  40ed58:	8c420000 	lw	v0,0(v0)
  40ed5c:	240f0001 	li	t7,1
  40ed60:	25ce2589 	addiu	t6,t6,9609
  40ed64:	afbf001c 	sw	ra,28(sp)
  40ed68:	afbc0018 	sw	gp,24(sp)
  40ed6c:	afae0024 	sw	t6,36(sp)
  40ed70:	10400009 	beqz	v0,40ed98 <setScales+0x15a0>
  40ed74:	afaf0028 	sw	t7,40(sp)
  40ed78:	24010001 	li	at,1
  40ed7c:	10410016 	beq	v0,at,40edd8 <setScales+0x15e0>
  40ed80:	27a50024 	addiu	a1,sp,36
  40ed84:	24010002 	li	at,2
  40ed88:	1041001b 	beq	v0,at,40edf8 <setScales+0x1600>
  40ed8c:	27a50024 	addiu	a1,sp,36
  40ed90:	10000020 	b	40ee14 <setScales+0x161c>
  40ed94:	00000000 	nop
  40ed98:	8f84806c 	lw	a0,-32660(gp)
  40ed9c:	8f998340 	lw	t9,-31936(gp)
  40eda0:	8c846670 	lw	a0,26224(a0)
  40eda4:	27a50024 	addiu	a1,sp,36
  40eda8:	0320f809 	jalr	t9
  40edac:	24060001 	li	a2,1
  40edb0:	8fbc0018 	lw	gp,24(sp)
  40edb4:	00002825 	move	a1,zero
  40edb8:	8f84806c 	lw	a0,-32660(gp)
  40edbc:	8f998318 	lw	t9,-31976(gp)
  40edc0:	8c84666c 	lw	a0,26220(a0)
  40edc4:	0320f809 	jalr	t9
  40edc8:	00000000 	nop
  40edcc:	8fbc0018 	lw	gp,24(sp)
  40edd0:	10000010 	b	40ee14 <setScales+0x161c>
  40edd4:	00000000 	nop
  40edd8:	8f84806c 	lw	a0,-32660(gp)
  40eddc:	8f998340 	lw	t9,-31936(gp)
  40ede0:	8c846674 	lw	a0,26228(a0)
  40ede4:	0320f809 	jalr	t9
  40ede8:	24060001 	li	a2,1
  40edec:	8fbc0018 	lw	gp,24(sp)
  40edf0:	10000008 	b	40ee14 <setScales+0x161c>
  40edf4:	00000000 	nop
  40edf8:	8f84806c 	lw	a0,-32660(gp)
  40edfc:	8f998340 	lw	t9,-31936(gp)
  40ee00:	8c846678 	lw	a0,26232(a0)
  40ee04:	0320f809 	jalr	t9
  40ee08:	24060001 	li	a2,1
  40ee0c:	8fbc0018 	lw	gp,24(sp)
  40ee10:	00000000 	nop
  40ee14:	8f828928 	lw	v0,-30424(gp)
  40ee18:	24010001 	li	at,1
  40ee1c:	8c420000 	lw	v0,0(v0)
  40ee20:	27a50024 	addiu	a1,sp,36
  40ee24:	10400008 	beqz	v0,40ee48 <setScales+0x1650>
  40ee28:	00000000 	nop
  40ee2c:	1041000e 	beq	v0,at,40ee68 <setScales+0x1670>
  40ee30:	27a50024 	addiu	a1,sp,36
  40ee34:	24010002 	li	at,2
  40ee38:	10410013 	beq	v0,at,40ee88 <setScales+0x1690>
  40ee3c:	27a50024 	addiu	a1,sp,36
  40ee40:	10000018 	b	40eea4 <setScales+0x16ac>
  40ee44:	00000000 	nop
  40ee48:	8f84806c 	lw	a0,-32660(gp)
  40ee4c:	8f998340 	lw	t9,-31936(gp)
  40ee50:	8c84667c 	lw	a0,26236(a0)
  40ee54:	0320f809 	jalr	t9
  40ee58:	24060001 	li	a2,1
  40ee5c:	8fbc0018 	lw	gp,24(sp)
  40ee60:	10000010 	b	40eea4 <setScales+0x16ac>
  40ee64:	00000000 	nop
  40ee68:	8f84806c 	lw	a0,-32660(gp)
  40ee6c:	8f998340 	lw	t9,-31936(gp)
  40ee70:	8c846680 	lw	a0,26240(a0)
  40ee74:	0320f809 	jalr	t9
  40ee78:	24060001 	li	a2,1
  40ee7c:	8fbc0018 	lw	gp,24(sp)
  40ee80:	10000008 	b	40eea4 <setScales+0x16ac>
  40ee84:	00000000 	nop
  40ee88:	8f84806c 	lw	a0,-32660(gp)
  40ee8c:	8f998340 	lw	t9,-31936(gp)
  40ee90:	8c846684 	lw	a0,26244(a0)
  40ee94:	0320f809 	jalr	t9
  40ee98:	24060001 	li	a2,1
  40ee9c:	8fbc0018 	lw	gp,24(sp)
  40eea0:	00000000 	nop
  40eea4:	8f988980 	lw	t8,-30336(gp)
  40eea8:	27a50024 	addiu	a1,sp,36
  40eeac:	8f180000 	lw	t8,0(t8)
  40eeb0:	00000000 	nop
  40eeb4:	93190c51 	lbu	t9,3153(t8)
  40eeb8:	00000000 	nop
  40eebc:	13200009 	beqz	t9,40eee4 <setScales+0x16ec>
  40eec0:	8fbf001c 	lw	ra,28(sp)
  40eec4:	8f84806c 	lw	a0,-32660(gp)
  40eec8:	8f998340 	lw	t9,-31936(gp)
  40eecc:	8c846668 	lw	a0,26216(a0)
  40eed0:	0320f809 	jalr	t9
  40eed4:	24060001 	li	a2,1
  40eed8:	8fbc0018 	lw	gp,24(sp)
  40eedc:	00000000 	nop
  40eee0:	8fbf001c 	lw	ra,28(sp)
  40eee4:	27bd0030 	addiu	sp,sp,48
  40eee8:	03e00008 	jr	ra
  40eeec:	00000000 	nop
