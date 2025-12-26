# Function: usystem
# Address: 0x0042fd98 - 0x0042ffd0
# Size: 0x238 (568 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042fd98 <usystem>:
  42fd98:	3c1c0fbf 	lui	gp,0xfbf
  42fd9c:	279cdd98 	addiu	gp,gp,-8808
  42fda0:	0399e021 	addu	gp,gp,t9
  42fda4:	27bdff90 	addiu	sp,sp,-112
  42fda8:	8f998414 	lw	t9,-31724(gp)
  42fdac:	afbf0034 	sw	ra,52(sp)
  42fdb0:	afb20024 	sw	s2,36(sp)
  42fdb4:	00809025 	move	s2,a0
  42fdb8:	afbc0030 	sw	gp,48(sp)
  42fdbc:	afb4002c 	sw	s4,44(sp)
  42fdc0:	afb30028 	sw	s3,40(sp)
  42fdc4:	afb10020 	sw	s1,32(sp)
  42fdc8:	0320f809 	jalr	t9
  42fdcc:	afb0001c 	sw	s0,28(sp)
  42fdd0:	8fbc0030 	lw	gp,48(sp)
  42fdd4:	14400054 	bnez	v0,42ff28 <usystem+0x190>
  42fdd8:	0040a025 	move	s4,v0
  42fddc:	8f998418 	lw	t9,-31720(gp)
  42fde0:	00000000 	nop
  42fde4:	0320f809 	jalr	t9
  42fde8:	00000000 	nop
  42fdec:	8fbc0030 	lw	gp,48(sp)
  42fdf0:	24100003 	li	s0,3
  42fdf4:	24110064 	li	s1,100
  42fdf8:	8f99825c 	lw	t9,-32164(gp)
  42fdfc:	02002025 	move	a0,s0
  42fe00:	0320f809 	jalr	t9
  42fe04:	00000000 	nop
  42fe08:	26100001 	addiu	s0,s0,1
  42fe0c:	8fbc0030 	lw	gp,48(sp)
  42fe10:	1611fff9 	bne	s0,s1,42fdf8 <usystem+0x60>
  42fe14:	00000000 	nop
  42fe18:	8f99825c 	lw	t9,-32164(gp)
  42fe1c:	00002025 	move	a0,zero
  42fe20:	0320f809 	jalr	t9
  42fe24:	00000000 	nop
  42fe28:	8fbc0030 	lw	gp,48(sp)
  42fe2c:	24050002 	li	a1,2
  42fe30:	8f84805c 	lw	a0,-32676(gp)
  42fe34:	8f9981cc 	lw	t9,-32308(gp)
  42fe38:	24843cd0 	addiu	a0,a0,15568
  42fe3c:	0320f809 	jalr	t9
  42fe40:	00000000 	nop
  42fe44:	8fbc0030 	lw	gp,48(sp)
  42fe48:	00408025 	move	s0,v0
  42fe4c:	8f99841c 	lw	t9,-31716(gp)
  42fe50:	00402025 	move	a0,v0
  42fe54:	0320f809 	jalr	t9
  42fe58:	00002825 	move	a1,zero
  42fe5c:	8fbc0030 	lw	gp,48(sp)
  42fe60:	2a010003 	slti	at,s0,3
  42fe64:	14200007 	bnez	at,42fe84 <usystem+0xec>
  42fe68:	00000000 	nop
  42fe6c:	8f99825c 	lw	t9,-32164(gp)
  42fe70:	02002025 	move	a0,s0
  42fe74:	0320f809 	jalr	t9
  42fe78:	00000000 	nop
  42fe7c:	8fbc0030 	lw	gp,48(sp)
  42fe80:	00000000 	nop
  42fe84:	8f998420 	lw	t9,-31712(gp)
  42fe88:	00002025 	move	a0,zero
  42fe8c:	24055471 	li	a1,21617
  42fe90:	0320f809 	jalr	t9
  42fe94:	00003025 	move	a2,zero
  42fe98:	8fbc0030 	lw	gp,48(sp)
  42fe9c:	afa00054 	sw	zero,84(sp)
  42fea0:	8f998410 	lw	t9,-31728(gp)
  42fea4:	afa00058 	sw	zero,88(sp)
  42fea8:	afa0005c 	sw	zero,92(sp)
  42feac:	afa00060 	sw	zero,96(sp)
  42feb0:	00002025 	move	a0,zero
  42feb4:	27a50054 	addiu	a1,sp,84
  42feb8:	0320f809 	jalr	t9
  42febc:	27a60044 	addiu	a2,sp,68
  42fec0:	8fbc0030 	lw	gp,48(sp)
  42fec4:	00002025 	move	a0,zero
  42fec8:	8f99840c 	lw	t9,-31732(gp)
  42fecc:	00000000 	nop
  42fed0:	0320f809 	jalr	t9
  42fed4:	00000000 	nop
  42fed8:	8fbc0030 	lw	gp,48(sp)
  42fedc:	02403825 	move	a3,s2
  42fee0:	8f84806c 	lw	a0,-32660(gp)
  42fee4:	8f85806c 	lw	a1,-32660(gp)
  42fee8:	8f86806c 	lw	a2,-32660(gp)
  42feec:	8f998404 	lw	t9,-31740(gp)
  42fef0:	afa00010 	sw	zero,16(sp)
  42fef4:	24849640 	addiu	a0,a0,-27072
  42fef8:	24a59648 	addiu	a1,a1,-27064
  42fefc:	0320f809 	jalr	t9
  42ff00:	24c6964c 	addiu	a2,a2,-27060
  42ff04:	8fbc0030 	lw	gp,48(sp)
  42ff08:	2404007f 	li	a0,127
  42ff0c:	8f998424 	lw	t9,-31708(gp)
  42ff10:	00000000 	nop
  42ff14:	0320f809 	jalr	t9
  42ff18:	00000000 	nop
  42ff1c:	8fbc0030 	lw	gp,48(sp)
  42ff20:	10000005 	b	42ff38 <usystem+0x1a0>
  42ff24:	00000000 	nop
  42ff28:	04410003 	bgez	v0,42ff38 <usystem+0x1a0>
  42ff2c:	00000000 	nop
  42ff30:	1000001f 	b	42ffb0 <usystem+0x218>
  42ff34:	02801025 	move	v0,s4
  42ff38:	8f998438 	lw	t9,-31688(gp)
  42ff3c:	27b0006c 	addiu	s0,sp,108
  42ff40:	0320f809 	jalr	t9
  42ff44:	02002025 	move	a0,s0
  42ff48:	8fbc0030 	lw	gp,48(sp)
  42ff4c:	10540017 	beq	v0,s4,42ffac <usystem+0x214>
  42ff50:	2411ffff 	li	s1,-1
  42ff54:	14510007 	bne	v0,s1,42ff74 <usystem+0x1dc>
  42ff58:	00000000 	nop
  42ff5c:	8f938090 	lw	s3,-32624(gp)
  42ff60:	24120004 	li	s2,4
  42ff64:	8e6e0000 	lw	t6,0(s3)
  42ff68:	00000000 	nop
  42ff6c:	164e0010 	bne	s2,t6,42ffb0 <usystem+0x218>
  42ff70:	02801025 	move	v0,s4
  42ff74:	8f998438 	lw	t9,-31688(gp)
  42ff78:	8f938090 	lw	s3,-32624(gp)
  42ff7c:	24120004 	li	s2,4
  42ff80:	0320f809 	jalr	t9
  42ff84:	02002025 	move	a0,s0
  42ff88:	8fbc0030 	lw	gp,48(sp)
  42ff8c:	10540007 	beq	v0,s4,42ffac <usystem+0x214>
  42ff90:	00000000 	nop
  42ff94:	1451fff7 	bne	v0,s1,42ff74 <usystem+0x1dc>
  42ff98:	00000000 	nop
  42ff9c:	8e6f0000 	lw	t7,0(s3)
  42ffa0:	00000000 	nop
  42ffa4:	124ffff3 	beq	s2,t7,42ff74 <usystem+0x1dc>
  42ffa8:	00000000 	nop
  42ffac:	02801025 	move	v0,s4
  42ffb0:	8fbf0034 	lw	ra,52(sp)
  42ffb4:	8fb0001c 	lw	s0,28(sp)
  42ffb8:	8fb10020 	lw	s1,32(sp)
  42ffbc:	8fb20024 	lw	s2,36(sp)
  42ffc0:	8fb30028 	lw	s3,40(sp)
  42ffc4:	8fb4002c 	lw	s4,44(sp)
  42ffc8:	03e00008 	jr	ra
  42ffcc:	27bd0070 	addiu	sp,sp,112
