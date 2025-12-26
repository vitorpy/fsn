# Function: displayHourglass
# Address: 0x0042fb78 - 0x0042fd44
# Size: 0x1cc (460 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042fb78 <displayHourglass>:
  42fb78:	3c1c0fbf 	lui	gp,0xfbf
  42fb7c:	279cdfb8 	addiu	gp,gp,-8264
  42fb80:	0399e021 	addu	gp,gp,t9
  42fb84:	8f8e806c 	lw	t6,-32660(gp)
  42fb88:	27bdffa0 	addiu	sp,sp,-96
  42fb8c:	8dce9630 	lw	t6,-27088(t6)
  42fb90:	afb1002c 	sw	s1,44(sp)
  42fb94:	00808825 	move	s1,a0
  42fb98:	afbf0034 	sw	ra,52(sp)
  42fb9c:	afbc0030 	sw	gp,48(sp)
  42fba0:	15c00057 	bnez	t6,42fd00 <displayHourglass+0x188>
  42fba4:	afb00028 	sw	s0,40(sp)
  42fba8:	8f998368 	lw	t9,-31896(gp)
  42fbac:	00000000 	nop
  42fbb0:	0320f809 	jalr	t9
  42fbb4:	00000000 	nop
  42fbb8:	8fbc0030 	lw	gp,48(sp)
  42fbbc:	240f0020 	li	t7,32
  42fbc0:	8f908a04 	lw	s0,-30204(gp)
  42fbc4:	8f86806c 	lw	a2,-32660(gp)
  42fbc8:	8f998450 	lw	t9,-31664(gp)
  42fbcc:	8e040000 	lw	a0,0(s0)
  42fbd0:	afaf0010 	sw	t7,16(sp)
  42fbd4:	00402825 	move	a1,v0
  42fbd8:	24070020 	li	a3,32
  42fbdc:	0320f809 	jalr	t9
  42fbe0:	24c69530 	addiu	a2,a2,-27344
  42fbe4:	8fbc0030 	lw	gp,48(sp)
  42fbe8:	afa2005c 	sw	v0,92(sp)
  42fbec:	8f998368 	lw	t9,-31896(gp)
  42fbf0:	02202025 	move	a0,s1
  42fbf4:	0320f809 	jalr	t9
  42fbf8:	00000000 	nop
  42fbfc:	8fbc0030 	lw	gp,48(sp)
  42fc00:	8e040000 	lw	a0,0(s0)
  42fc04:	8f86806c 	lw	a2,-32660(gp)
  42fc08:	8f998450 	lw	t9,-31664(gp)
  42fc0c:	24180020 	li	t8,32
  42fc10:	afb80010 	sw	t8,16(sp)
  42fc14:	00402825 	move	a1,v0
  42fc18:	24070020 	li	a3,32
  42fc1c:	0320f809 	jalr	t9
  42fc20:	24c695b0 	addiu	a2,a2,-27216
  42fc24:	8fbc0030 	lw	gp,48(sp)
  42fc28:	afa20058 	sw	v0,88(sp)
  42fc2c:	8f99844c 	lw	t9,-31668(gp)
  42fc30:	02202025 	move	a0,s1
  42fc34:	0320f809 	jalr	t9
  42fc38:	00000000 	nop
  42fc3c:	8c590038 	lw	t9,56(v0)
  42fc40:	8fbc0030 	lw	gp,48(sp)
  42fc44:	afb90040 	sw	t9,64(sp)
  42fc48:	8f99844c 	lw	t9,-31668(gp)
  42fc4c:	02202025 	move	a0,s1
  42fc50:	0320f809 	jalr	t9
  42fc54:	00000000 	nop
  42fc58:	8fbc0030 	lw	gp,48(sp)
  42fc5c:	8c480034 	lw	t0,52(v0)
  42fc60:	8f99844c 	lw	t9,-31668(gp)
  42fc64:	02202025 	move	a0,s1
  42fc68:	0320f809 	jalr	t9
  42fc6c:	afa8004c 	sw	t0,76(sp)
  42fc70:	8fbc0030 	lw	gp,48(sp)
  42fc74:	8e040000 	lw	a0,0(s0)
  42fc78:	8f99848c 	lw	t9,-31604(gp)
  42fc7c:	8c450030 	lw	a1,48(v0)
  42fc80:	27a60040 	addiu	a2,sp,64
  42fc84:	0320f809 	jalr	t9
  42fc88:	24070002 	li	a3,2
  42fc8c:	8fbc0030 	lw	gp,48(sp)
  42fc90:	8e040000 	lw	a0,0(s0)
  42fc94:	8f99847c 	lw	t9,-31620(gp)
  42fc98:	8fa5005c 	lw	a1,92(sp)
  42fc9c:	8fa60058 	lw	a2,88(sp)
  42fca0:	27a9004c 	addiu	t1,sp,76
  42fca4:	240a000f 	li	t2,15
  42fca8:	240b000f 	li	t3,15
  42fcac:	afab0018 	sw	t3,24(sp)
  42fcb0:	afaa0014 	sw	t2,20(sp)
  42fcb4:	afa90010 	sw	t1,16(sp)
  42fcb8:	0320f809 	jalr	t9
  42fcbc:	27a70040 	addiu	a3,sp,64
  42fcc0:	8fbc0030 	lw	gp,48(sp)
  42fcc4:	8fa5005c 	lw	a1,92(sp)
  42fcc8:	8f81806c 	lw	at,-32660(gp)
  42fccc:	8f998474 	lw	t9,-31628(gp)
  42fcd0:	ac229630 	sw	v0,-27088(at)
  42fcd4:	8e040000 	lw	a0,0(s0)
  42fcd8:	0320f809 	jalr	t9
  42fcdc:	00000000 	nop
  42fce0:	8fbc0030 	lw	gp,48(sp)
  42fce4:	8e040000 	lw	a0,0(s0)
  42fce8:	8f998474 	lw	t9,-31628(gp)
  42fcec:	8fa50058 	lw	a1,88(sp)
  42fcf0:	0320f809 	jalr	t9
  42fcf4:	00000000 	nop
  42fcf8:	8fbc0030 	lw	gp,48(sp)
  42fcfc:	00000000 	nop
  42fd00:	8f998368 	lw	t9,-31896(gp)
  42fd04:	8f908a04 	lw	s0,-30204(gp)
  42fd08:	0320f809 	jalr	t9
  42fd0c:	02202025 	move	a0,s1
  42fd10:	8fbc0030 	lw	gp,48(sp)
  42fd14:	8e040000 	lw	a0,0(s0)
  42fd18:	8f86806c 	lw	a2,-32660(gp)
  42fd1c:	8f998470 	lw	t9,-31632(gp)
  42fd20:	8cc69630 	lw	a2,-27088(a2)
  42fd24:	0320f809 	jalr	t9
  42fd28:	00402825 	move	a1,v0
  42fd2c:	8fbf0034 	lw	ra,52(sp)
  42fd30:	8fbc0030 	lw	gp,48(sp)
  42fd34:	8fb00028 	lw	s0,40(sp)
  42fd38:	8fb1002c 	lw	s1,44(sp)
  42fd3c:	03e00008 	jr	ra
  42fd40:	27bd0060 	addiu	sp,sp,96
