# Function: FUN_0042cf60
# Address: 0x0042cf60 - 0x0042d28c
# Size: 0x32c (812 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042cf60 <hidePreferencePanel+0x30c>:
  42cf60:	3c1c0fbf 	lui	gp,0xfbf
  42cf64:	279c0bd0 	addiu	gp,gp,3024
  42cf68:	0399e021 	addu	gp,gp,t9
  42cf6c:	27bdffb8 	addiu	sp,sp,-72
  42cf70:	afa40048 	sw	a0,72(sp)
  42cf74:	8f84806c 	lw	a0,-32660(gp)
  42cf78:	8f998204 	lw	t9,-32252(gp)
  42cf7c:	afbf002c 	sw	ra,44(sp)
  42cf80:	afb20024 	sw	s2,36(sp)
  42cf84:	8c846e48 	lw	a0,28232(a0)
  42cf88:	30b200ff 	andi	s2,a1,0xff
  42cf8c:	afbc0028 	sw	gp,40(sp)
  42cf90:	afb10020 	sw	s1,32(sp)
  42cf94:	afb0001c 	sw	s0,28(sp)
  42cf98:	afa5004c 	sw	a1,76(sp)
  42cf9c:	0320f809 	jalr	t9
  42cfa0:	afa60050 	sw	a2,80(sp)
  42cfa4:	8fbc0028 	lw	gp,40(sp)
  42cfa8:	1040000e 	beqz	v0,42cfe4 <hidePreferencePanel+0x390>
  42cfac:	00408025 	move	s0,v0
  42cfb0:	8f85805c 	lw	a1,-32676(gp)
  42cfb4:	8f998264 	lw	t9,-32156(gp)
  42cfb8:	00402025 	move	a0,v0
  42cfbc:	0320f809 	jalr	t9
  42cfc0:	24a53a78 	addiu	a1,a1,14968
  42cfc4:	8fbc0028 	lw	gp,40(sp)
  42cfc8:	00408825 	move	s1,v0
  42cfcc:	8f998174 	lw	t9,-32396(gp)
  42cfd0:	02002025 	move	a0,s0
  42cfd4:	0320f809 	jalr	t9
  42cfd8:	00000000 	nop
  42cfdc:	8fbc0028 	lw	gp,40(sp)
  42cfe0:	afb10030 	sw	s1,48(sp)
  42cfe4:	8fb10030 	lw	s1,48(sp)
  42cfe8:	00000000 	nop
  42cfec:	16200009 	bnez	s1,42d014 <hidePreferencePanel+0x3c0>
  42cff0:	00000000 	nop
  42cff4:	8f84805c 	lw	a0,-32676(gp)
  42cff8:	8f998570 	lw	t9,-31376(gp)
  42cffc:	24843a7c 	addiu	a0,a0,14972
  42d000:	0320f809 	jalr	t9
  42d004:	00000000 	nop
  42d008:	8fbc0028 	lw	gp,40(sp)
  42d00c:	1000009a 	b	42d278 <hidePreferencePanel+0x624>
  42d010:	8fbf002c 	lw	ra,44(sp)
  42d014:	8f82806c 	lw	v0,-32660(gp)
  42d018:	00000000 	nop
  42d01c:	24508950 	addiu	s0,v0,-30384
  42d020:	8e0e0000 	lw	t6,0(s0)
  42d024:	00000000 	nop
  42d028:	11c00023 	beqz	t6,42d0b8 <hidePreferencePanel+0x464>
  42d02c:	00000000 	nop
  42d030:	16400007 	bnez	s2,42d050 <hidePreferencePanel+0x3fc>
  42d034:	00000000 	nop
  42d038:	8e180004 	lw	t8,4(s0)
  42d03c:	920f000c 	lbu	t7,12(s0)
  42d040:	93190000 	lbu	t9,0(t8)
  42d044:	00000000 	nop
  42d048:	11f90017 	beq	t7,t9,42d0a8 <hidePreferencePanel+0x454>
  42d04c:	00000000 	nop
  42d050:	8e080004 	lw	t0,4(s0)
  42d054:	8e060000 	lw	a2,0(s0)
  42d058:	91090000 	lbu	t1,0(t0)
  42d05c:	00000000 	nop
  42d060:	11200004 	beqz	t1,42d074 <hidePreferencePanel+0x420>
  42d064:	00000000 	nop
  42d068:	8f87805c 	lw	a3,-32676(gp)
  42d06c:	10000004 	b	42d080 <hidePreferencePanel+0x42c>
  42d070:	24e73aa4 	addiu	a3,a3,15012
  42d074:	8f87805c 	lw	a3,-32676(gp)
  42d078:	00000000 	nop
  42d07c:	24e73aac 	addiu	a3,a3,15020
  42d080:	8f85805c 	lw	a1,-32676(gp)
  42d084:	8f9983f8 	lw	t9,-31752(gp)
  42d088:	02202025 	move	a0,s1
  42d08c:	0320f809 	jalr	t9
  42d090:	24a53a98 	addiu	a1,a1,15000
  42d094:	8e0a0004 	lw	t2,4(s0)
  42d098:	8fbc0028 	lw	gp,40(sp)
  42d09c:	914b0000 	lbu	t3,0(t2)
  42d0a0:	00000000 	nop
  42d0a4:	a20b000c 	sb	t3,12(s0)
  42d0a8:	8e0c0014 	lw	t4,20(s0)
  42d0ac:	26100014 	addiu	s0,s0,20
  42d0b0:	1580ffdf 	bnez	t4,42d030 <hidePreferencePanel+0x3dc>
  42d0b4:	00000000 	nop
  42d0b8:	8f82806c 	lw	v0,-32660(gp)
  42d0bc:	00000000 	nop
  42d0c0:	245089f0 	addiu	s0,v0,-30224
  42d0c4:	8e0d0000 	lw	t5,0(s0)
  42d0c8:	00000000 	nop
  42d0cc:	11a00019 	beqz	t5,42d134 <hidePreferencePanel+0x4e0>
  42d0d0:	00000000 	nop
  42d0d4:	16400007 	bnez	s2,42d0f4 <hidePreferencePanel+0x4a0>
  42d0d8:	02202025 	move	a0,s1
  42d0dc:	8e180004 	lw	t8,4(s0)
  42d0e0:	8e0e0014 	lw	t6,20(s0)
  42d0e4:	8f0f0000 	lw	t7,0(t8)
  42d0e8:	00000000 	nop
  42d0ec:	11cf000d 	beq	t6,t7,42d124 <hidePreferencePanel+0x4d0>
  42d0f0:	00000000 	nop
  42d0f4:	8e190004 	lw	t9,4(s0)
  42d0f8:	8f85805c 	lw	a1,-32676(gp)
  42d0fc:	8f270000 	lw	a3,0(t9)
  42d100:	8f9983f8 	lw	t9,-31752(gp)
  42d104:	8e060000 	lw	a2,0(s0)
  42d108:	0320f809 	jalr	t9
  42d10c:	24a53ab4 	addiu	a1,a1,15028
  42d110:	8e080004 	lw	t0,4(s0)
  42d114:	8fbc0028 	lw	gp,40(sp)
  42d118:	8d090000 	lw	t1,0(t0)
  42d11c:	00000000 	nop
  42d120:	ae090014 	sw	t1,20(s0)
  42d124:	8e0a001c 	lw	t2,28(s0)
  42d128:	2610001c 	addiu	s0,s0,28
  42d12c:	1540ffe9 	bnez	t2,42d0d4 <hidePreferencePanel+0x480>
  42d130:	00000000 	nop
  42d134:	8f82806c 	lw	v0,-32660(gp)
  42d138:	00000000 	nop
  42d13c:	24508b5c 	addiu	s0,v0,-29860
  42d140:	8e0b0000 	lw	t3,0(s0)
  42d144:	00000000 	nop
  42d148:	1160001e 	beqz	t3,42d1c4 <hidePreferencePanel+0x570>
  42d14c:	00000000 	nop
  42d150:	1640000a 	bnez	s2,42d17c <hidePreferencePanel+0x528>
  42d154:	02202025 	move	a0,s1
  42d158:	8e0c0004 	lw	t4,4(s0)
  42d15c:	c6040018 	lwc1	$f4,24(s0)
  42d160:	c5800000 	lwc1	$f0,0(t4)
  42d164:	460021a1 	cvt.d.s	$f6,$f4
  42d168:	46000221 	cvt.d.s	$f8,$f0
  42d16c:	46283032 	c.eq.d	$f6,$f8
  42d170:	00000000 	nop
  42d174:	4501000f 	bc1t	42d1b4 <hidePreferencePanel+0x560>
  42d178:	00000000 	nop
  42d17c:	8e0d0004 	lw	t5,4(s0)
  42d180:	8f85805c 	lw	a1,-32676(gp)
  42d184:	c5aa0000 	lwc1	$f10,0(t5)
  42d188:	8f9983f8 	lw	t9,-31752(gp)
  42d18c:	8e060000 	lw	a2,0(s0)
  42d190:	46005421 	cvt.d.s	$f16,$f10
  42d194:	e7b00014 	swc1	$f16,20(sp)
  42d198:	e7b10010 	swc1	$f17,16(sp)
  42d19c:	0320f809 	jalr	t9
  42d1a0:	24a53ac0 	addiu	a1,a1,15040
  42d1a4:	8e180004 	lw	t8,4(s0)
  42d1a8:	8fbc0028 	lw	gp,40(sp)
  42d1ac:	c7000000 	lwc1	$f0,0(t8)
  42d1b0:	00000000 	nop
  42d1b4:	8e0e0020 	lw	t6,32(s0)
  42d1b8:	26100020 	addiu	s0,s0,32
  42d1bc:	15c0ffe4 	bnez	t6,42d150 <hidePreferencePanel+0x4fc>
  42d1c0:	e600fff8 	swc1	$f0,-8(s0)
  42d1c4:	8f82806c 	lw	v0,-32660(gp)
  42d1c8:	00000000 	nop
  42d1cc:	2450935c 	addiu	s0,v0,-27812
  42d1d0:	8e0f0000 	lw	t7,0(s0)
  42d1d4:	00000000 	nop
  42d1d8:	11e00020 	beqz	t7,42d25c <hidePreferencePanel+0x608>
  42d1dc:	00000000 	nop
  42d1e0:	16400007 	bnez	s2,42d200 <hidePreferencePanel+0x5ac>
  42d1e4:	02202025 	move	a0,s1
  42d1e8:	8e080004 	lw	t0,4(s0)
  42d1ec:	8e190008 	lw	t9,8(s0)
  42d1f0:	8d090000 	lw	t1,0(t0)
  42d1f4:	00000000 	nop
  42d1f8:	13290014 	beq	t9,t1,42d24c <hidePreferencePanel+0x5f8>
  42d1fc:	00000000 	nop
  42d200:	8e0a0004 	lw	t2,4(s0)
  42d204:	8f85805c 	lw	a1,-32676(gp)
  42d208:	8d420000 	lw	v0,0(t2)
  42d20c:	8f9983f8 	lw	t9,-31752(gp)
  42d210:	8e060000 	lw	a2,0(s0)
  42d214:	00025a03 	sra	t3,v0,0x8
  42d218:	00026c03 	sra	t5,v0,0x10
  42d21c:	31b800ff 	andi	t8,t5,0xff
  42d220:	316c00ff 	andi	t4,t3,0xff
  42d224:	afac0010 	sw	t4,16(sp)
  42d228:	afb80014 	sw	t8,20(sp)
  42d22c:	24a53acc 	addiu	a1,a1,15052
  42d230:	0320f809 	jalr	t9
  42d234:	304700ff 	andi	a3,v0,0xff
  42d238:	8e0e0004 	lw	t6,4(s0)
  42d23c:	8fbc0028 	lw	gp,40(sp)
  42d240:	8dcf0000 	lw	t7,0(t6)
  42d244:	00000000 	nop
  42d248:	ae0f0008 	sw	t7,8(s0)
  42d24c:	8e080010 	lw	t0,16(s0)
  42d250:	26100010 	addiu	s0,s0,16
  42d254:	1500ffe2 	bnez	t0,42d1e0 <hidePreferencePanel+0x58c>
  42d258:	00000000 	nop
  42d25c:	8f998270 	lw	t9,-32144(gp)
  42d260:	02202025 	move	a0,s1
  42d264:	0320f809 	jalr	t9
  42d268:	00000000 	nop
  42d26c:	8fbc0028 	lw	gp,40(sp)
  42d270:	00000000 	nop
  42d274:	8fbf002c 	lw	ra,44(sp)
  42d278:	8fb0001c 	lw	s0,28(sp)
  42d27c:	8fb10020 	lw	s1,32(sp)
  42d280:	8fb20024 	lw	s2,36(sp)
  42d284:	03e00008 	jr	ra
  42d288:	27bd0048 	addiu	sp,sp,72
