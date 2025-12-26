# Function: FUN_0042ccac
# Address: 0x0042ccac - 0x0042cf60
# Size: 0x2b4 (692 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042ccac <hidePreferencePanel+0x58>:
  42ccac:	3c1c0fbf 	lui	gp,0xfbf
  42ccb0:	279c0e84 	addiu	gp,gp,3716
  42ccb4:	0399e021 	addu	gp,gp,t9
  42ccb8:	27bdffb0 	addiu	sp,sp,-80
  42ccbc:	8f82806c 	lw	v0,-32660(gp)
  42ccc0:	afb00018 	sw	s0,24(sp)
  42ccc4:	afbf002c 	sw	ra,44(sp)
  42ccc8:	afbc0028 	sw	gp,40(sp)
  42cccc:	afb30024 	sw	s3,36(sp)
  42ccd0:	afb20020 	sw	s2,32(sp)
  42ccd4:	afb1001c 	sw	s1,28(sp)
  42ccd8:	afa40050 	sw	a0,80(sp)
  42ccdc:	afa50054 	sw	a1,84(sp)
  42cce0:	afa60058 	sw	a2,88(sp)
  42cce4:	24508950 	addiu	s0,v0,-30384
  42cce8:	8e0e0000 	lw	t6,0(s0)
  42ccec:	00000000 	nop
  42ccf0:	11c0001b 	beqz	t6,42cd60 <hidePreferencePanel+0x10c>
  42ccf4:	00000000 	nop
  42ccf8:	8f9180a0 	lw	s1,-32608(gp)
  42ccfc:	27b20038 	addiu	s2,sp,56
  42cd00:	26312589 	addiu	s1,s1,9609
  42cd04:	8e030004 	lw	v1,4(s0)
  42cd08:	9202000c 	lbu	v0,12(s0)
  42cd0c:	906f0000 	lbu	t7,0(v1)
  42cd10:	00000000 	nop
  42cd14:	104f000e 	beq	v0,t7,42cd50 <hidePreferencePanel+0xfc>
  42cd18:	00000000 	nop
  42cd1c:	a0620000 	sb	v0,0(v1)
  42cd20:	afb10038 	sw	s1,56(sp)
  42cd24:	8e180004 	lw	t8,4(s0)
  42cd28:	02402825 	move	a1,s2
  42cd2c:	93190000 	lbu	t9,0(t8)
  42cd30:	24060001 	li	a2,1
  42cd34:	afb9003c 	sw	t9,60(sp)
  42cd38:	8f998340 	lw	t9,-31936(gp)
  42cd3c:	8e040010 	lw	a0,16(s0)
  42cd40:	0320f809 	jalr	t9
  42cd44:	00000000 	nop
  42cd48:	8fbc0028 	lw	gp,40(sp)
  42cd4c:	00000000 	nop
  42cd50:	8e080014 	lw	t0,20(s0)
  42cd54:	26100014 	addiu	s0,s0,20
  42cd58:	1500ffea 	bnez	t0,42cd04 <hidePreferencePanel+0xb0>
  42cd5c:	00000000 	nop
  42cd60:	8f82806c 	lw	v0,-32660(gp)
  42cd64:	27b20038 	addiu	s2,sp,56
  42cd68:	245089f0 	addiu	s0,v0,-30224
  42cd6c:	8e090000 	lw	t1,0(s0)
  42cd70:	00000000 	nop
  42cd74:	1120001a 	beqz	t1,42cde0 <hidePreferencePanel+0x18c>
  42cd78:	00000000 	nop
  42cd7c:	8f9380a4 	lw	s3,-32604(gp)
  42cd80:	00000000 	nop
  42cd84:	2673035b 	addiu	s3,s3,859
  42cd88:	8e030004 	lw	v1,4(s0)
  42cd8c:	8e020014 	lw	v0,20(s0)
  42cd90:	8c6a0000 	lw	t2,0(v1)
  42cd94:	00000000 	nop
  42cd98:	104a000d 	beq	v0,t2,42cdd0 <hidePreferencePanel+0x17c>
  42cd9c:	00000000 	nop
  42cda0:	ac620000 	sw	v0,0(v1)
  42cda4:	afb30038 	sw	s3,56(sp)
  42cda8:	8e0b0004 	lw	t3,4(s0)
  42cdac:	8f998340 	lw	t9,-31936(gp)
  42cdb0:	8d6c0000 	lw	t4,0(t3)
  42cdb4:	02402825 	move	a1,s2
  42cdb8:	afac003c 	sw	t4,60(sp)
  42cdbc:	8e040018 	lw	a0,24(s0)
  42cdc0:	0320f809 	jalr	t9
  42cdc4:	24060001 	li	a2,1
  42cdc8:	8fbc0028 	lw	gp,40(sp)
  42cdcc:	00000000 	nop
  42cdd0:	8e0d001c 	lw	t5,28(s0)
  42cdd4:	2610001c 	addiu	s0,s0,28
  42cdd8:	15a0ffeb 	bnez	t5,42cd88 <hidePreferencePanel+0x134>
  42cddc:	00000000 	nop
  42cde0:	8f82806c 	lw	v0,-32660(gp)
  42cde4:	8f9380a4 	lw	s3,-32604(gp)
  42cde8:	24508b5c 	addiu	s0,v0,-29860
  42cdec:	8e0e0000 	lw	t6,0(s0)
  42cdf0:	2673035b 	addiu	s3,s3,859
  42cdf4:	11c0002d 	beqz	t6,42ceac <hidePreferencePanel+0x258>
  42cdf8:	00000000 	nop
  42cdfc:	8f91806c 	lw	s1,-32660(gp)
  42ce00:	00000000 	nop
  42ce04:	263194f0 	addiu	s1,s1,-27408
  42ce08:	8e020004 	lw	v0,4(s0)
  42ce0c:	c6000018 	lwc1	$f0,24(s0)
  42ce10:	c4460000 	lwc1	$f6,0(v0)
  42ce14:	46000121 	cvt.d.s	$f4,$f0
  42ce18:	46003221 	cvt.d.s	$f8,$f6
  42ce1c:	46282032 	c.eq.d	$f4,$f8
  42ce20:	00000000 	nop
  42ce24:	4501001d 	bc1t	42ce9c <hidePreferencePanel+0x248>
  42ce28:	00000000 	nop
  42ce2c:	e4400000 	swc1	$f0,0(v0)
  42ce30:	afb30038 	sw	s3,56(sp)
  42ce34:	8e0f0014 	lw	t7,20(s0)
  42ce38:	8e080004 	lw	t0,4(s0)
  42ce3c:	000fc080 	sll	t8,t7,0x2
  42ce40:	0238c821 	addu	t9,s1,t8
  42ce44:	c72a0000 	lwc1	$f10,0(t9)
  42ce48:	c5120000 	lwc1	$f18,0(t0)
  42ce4c:	46005421 	cvt.d.s	$f16,$f10
  42ce50:	460091a1 	cvt.d.s	$f6,$f18
  42ce54:	46268102 	mul.d	$f4,$f16,$f6
  42ce58:	8f998340 	lw	t9,-31936(gp)
  42ce5c:	02402825 	move	a1,s2
  42ce60:	24060001 	li	a2,1
  42ce64:	4449f800 	cfc1	t1,c1_fcsr
  42ce68:	00000000 	nop
  42ce6c:	35210003 	ori	at,t1,0x3
  42ce70:	38210002 	xori	at,at,0x2
  42ce74:	44c1f800 	ctc1	at,c1_fcsr
  42ce78:	00000000 	nop
  42ce7c:	46202224 	cvt.w.d	$f8,$f4
  42ce80:	e7a8003c 	swc1	$f8,60(sp)
  42ce84:	8e04001c 	lw	a0,28(s0)
  42ce88:	44c9f800 	ctc1	t1,c1_fcsr
  42ce8c:	0320f809 	jalr	t9
  42ce90:	00000000 	nop
  42ce94:	8fbc0028 	lw	gp,40(sp)
  42ce98:	00000000 	nop
  42ce9c:	8e0a0020 	lw	t2,32(s0)
  42cea0:	26100020 	addiu	s0,s0,32
  42cea4:	1540ffd8 	bnez	t2,42ce08 <hidePreferencePanel+0x1b4>
  42cea8:	00000000 	nop
  42ceac:	8f83806c 	lw	v1,-32660(gp)
  42ceb0:	00000000 	nop
  42ceb4:	2462935c 	addiu	v0,v1,-27812
  42ceb8:	8c4b0000 	lw	t3,0(v0)
  42cebc:	00000000 	nop
  42cec0:	1160000c 	beqz	t3,42cef4 <hidePreferencePanel+0x2a0>
  42cec4:	00000000 	nop
  42cec8:	8c440004 	lw	a0,4(v0)
  42cecc:	8c430008 	lw	v1,8(v0)
  42ced0:	8c8c0000 	lw	t4,0(a0)
  42ced4:	00000000 	nop
  42ced8:	106c0002 	beq	v1,t4,42cee4 <hidePreferencePanel+0x290>
  42cedc:	00000000 	nop
  42cee0:	ac830000 	sw	v1,0(a0)
  42cee4:	8c4d0010 	lw	t5,16(v0)
  42cee8:	24420010 	addiu	v0,v0,16
  42ceec:	15a0fff6 	bnez	t5,42cec8 <hidePreferencePanel+0x274>
  42cef0:	00000000 	nop
  42cef4:	8f998020 	lw	t9,-32736(gp)
  42cef8:	00000000 	nop
  42cefc:	2739d618 	addiu	t9,t9,-10728
  42cf00:	0320f809 	jalr	t9
  42cf04:	00000000 	nop
  42cf08:	8fbc0028 	lw	gp,40(sp)
  42cf0c:	00000000 	nop
  42cf10:	8f998020 	lw	t9,-32736(gp)
  42cf14:	00000000 	nop
  42cf18:	2739d6f0 	addiu	t9,t9,-10512
  42cf1c:	0320f809 	jalr	t9
  42cf20:	00000000 	nop
  42cf24:	8fbc0028 	lw	gp,40(sp)
  42cf28:	2404ffff 	li	a0,-1
  42cf2c:	8f998020 	lw	t9,-32736(gp)
  42cf30:	00000000 	nop
  42cf34:	2739c970 	addiu	t9,t9,-13968
  42cf38:	0320f809 	jalr	t9
  42cf3c:	00000000 	nop
  42cf40:	8fbf002c 	lw	ra,44(sp)
  42cf44:	8fbc0028 	lw	gp,40(sp)
  42cf48:	8fb00018 	lw	s0,24(sp)
  42cf4c:	8fb1001c 	lw	s1,28(sp)
  42cf50:	8fb20020 	lw	s2,32(sp)
  42cf54:	8fb30024 	lw	s3,36(sp)
  42cf58:	03e00008 	jr	ra
  42cf5c:	27bd0050 	addiu	sp,sp,80
