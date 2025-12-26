# Function: FUN_0042d9f8
# Address: 0x0042d9f8 - 0x0042dc50
# Size: 0x258 (600 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042d9f8 <hidePreferencePanel+0xda4>:
  42d9f8:	3c1c0fbf 	lui	gp,0xfbf
  42d9fc:	279c0138 	addiu	gp,gp,312
  42da00:	0399e021 	addu	gp,gp,t9
  42da04:	27bdff90 	addiu	sp,sp,-112
  42da08:	afa40070 	sw	a0,112(sp)
  42da0c:	8f8e80a4 	lw	t6,-32604(gp)
  42da10:	8f84806c 	lw	a0,-32660(gp)
  42da14:	8f998364 	lw	t9,-31900(gp)
  42da18:	afbf0034 	sw	ra,52(sp)
  42da1c:	afa50074 	sw	a1,116(sp)
  42da20:	afa60078 	sw	a2,120(sp)
  42da24:	27af006c 	addiu	t7,sp,108
  42da28:	25ce035b 	addiu	t6,t6,859
  42da2c:	8c846e3c 	lw	a0,28220(a0)
  42da30:	afbc0030 	sw	gp,48(sp)
  42da34:	afae0038 	sw	t6,56(sp)
  42da38:	afaf003c 	sw	t7,60(sp)
  42da3c:	24060001 	li	a2,1
  42da40:	0320f809 	jalr	t9
  42da44:	27a50038 	addiu	a1,sp,56
  42da48:	8fbc0030 	lw	gp,48(sp)
  42da4c:	27b90068 	addiu	t9,sp,104
  42da50:	8f9880a4 	lw	t8,-32604(gp)
  42da54:	8f84806c 	lw	a0,-32660(gp)
  42da58:	afb9003c 	sw	t9,60(sp)
  42da5c:	8f998364 	lw	t9,-31900(gp)
  42da60:	2718035b 	addiu	t8,t8,859
  42da64:	8c846e40 	lw	a0,28224(a0)
  42da68:	afb80038 	sw	t8,56(sp)
  42da6c:	27a50038 	addiu	a1,sp,56
  42da70:	0320f809 	jalr	t9
  42da74:	24060001 	li	a2,1
  42da78:	8fbc0030 	lw	gp,48(sp)
  42da7c:	27a90064 	addiu	t1,sp,100
  42da80:	8f8880a4 	lw	t0,-32604(gp)
  42da84:	8f84806c 	lw	a0,-32660(gp)
  42da88:	8f998364 	lw	t9,-31900(gp)
  42da8c:	2508035b 	addiu	t0,t0,859
  42da90:	8c846e44 	lw	a0,28228(a0)
  42da94:	afa80038 	sw	t0,56(sp)
  42da98:	afa9003c 	sw	t1,60(sp)
  42da9c:	27a50038 	addiu	a1,sp,56
  42daa0:	0320f809 	jalr	t9
  42daa4:	24060001 	li	a2,1
  42daa8:	8faa006c 	lw	t2,108(sp)
  42daac:	8fbc0030 	lw	gp,48(sp)
  42dab0:	448a2000 	mtc1	t2,$f4
  42dab4:	8f81805c 	lw	at,-32676(gp)
  42dab8:	468021a0 	cvt.s.w	$f6,$f4
  42dabc:	c4213b08 	lwc1	$f1,15112(at)
  42dac0:	c4203b0c 	lwc1	$f0,15116(at)
  42dac4:	46003221 	cvt.d.s	$f8,$f6
  42dac8:	00000000 	nop
  42dacc:	46204283 	div.d	$f10,$f8,$f0
  42dad0:	8fab0068 	lw	t3,104(sp)
  42dad4:	8fac0064 	lw	t4,100(sp)
  42dad8:	448b9000 	mtc1	t3,$f18
  42dadc:	8f9988bc 	lw	t9,-30532(gp)
  42dae0:	46809120 	cvt.s.w	$f4,$f18
  42dae4:	27ad0048 	addiu	t5,sp,72
  42dae8:	27ae0044 	addiu	t6,sp,68
  42daec:	460021a1 	cvt.d.s	$f6,$f4
  42daf0:	27af0040 	addiu	t7,sp,64
  42daf4:	afaf0020 	sw	t7,32(sp)
  42daf8:	afae001c 	sw	t6,28(sp)
  42dafc:	afad0018 	sw	t5,24(sp)
  42db00:	46205420 	cvt.s.d	$f16,$f10
  42db04:	46008321 	cvt.d.s	$f12,$f16
  42db08:	448c8000 	mtc1	t4,$f16
  42db0c:	46203203 	div.d	$f8,$f6,$f0
  42db10:	468084a0 	cvt.s.w	$f18,$f16
  42db14:	46009121 	cvt.d.s	$f4,$f18
  42db18:	00000000 	nop
  42db1c:	46202183 	div.d	$f6,$f4,$f0
  42db20:	462042a0 	cvt.s.d	$f10,$f8
  42db24:	460053a1 	cvt.d.s	$f14,$f10
  42db28:	46203220 	cvt.s.d	$f8,$f6
  42db2c:	460042a1 	cvt.d.s	$f10,$f8
  42db30:	e7aa0014 	swc1	$f10,20(sp)
  42db34:	0320f809 	jalr	t9
  42db38:	e7ab0010 	swc1	$f11,16(sp)
  42db3c:	8fbc0030 	lw	gp,48(sp)
  42db40:	c7b00044 	lwc1	$f16,68(sp)
  42db44:	8f81805c 	lw	at,-32676(gp)
  42db48:	460084a1 	cvt.d.s	$f18,$f16
  42db4c:	c4213b10 	lwc1	$f1,15120(at)
  42db50:	c4203b14 	lwc1	$f0,15124(at)
  42db54:	c7a80048 	lwc1	$f8,72(sp)
  42db58:	46209102 	mul.d	$f4,$f18,$f0
  42db5c:	4458f800 	cfc1	t8,c1_fcsr
  42db60:	00000000 	nop
  42db64:	37010003 	ori	at,t8,0x3
  42db68:	38210002 	xori	at,at,0x2
  42db6c:	44c1f800 	ctc1	at,c1_fcsr
  42db70:	00000000 	nop
  42db74:	462021a4 	cvt.w.d	$f6,$f4
  42db78:	c7a40040 	lwc1	$f4,64(sp)
  42db7c:	44d8f800 	ctc1	t8,c1_fcsr
  42db80:	44193000 	mfc1	t9,$f6
  42db84:	460042a1 	cvt.d.s	$f10,$f8
  42db88:	46205402 	mul.d	$f16,$f10,$f0
  42db8c:	8f98806c 	lw	t8,-32660(gp)
  42db90:	00194200 	sll	t0,t9,0x8
  42db94:	8f1894ec 	lw	t8,-27412(t8)
  42db98:	4449f800 	cfc1	t1,c1_fcsr
  42db9c:	8f190004 	lw	t9,4(t8)
  42dba0:	35210003 	ori	at,t1,0x3
  42dba4:	38210002 	xori	at,at,0x2
  42dba8:	44c1f800 	ctc1	at,c1_fcsr
  42dbac:	00000000 	nop
  42dbb0:	462084a4 	cvt.w.d	$f18,$f16
  42dbb4:	44c9f800 	ctc1	t1,c1_fcsr
  42dbb8:	440a9000 	mfc1	t2,$f18
  42dbbc:	460021a1 	cvt.d.s	$f6,$f4
  42dbc0:	46203202 	mul.d	$f8,$f6,$f0
  42dbc4:	010a5821 	addu	t3,t0,t2
  42dbc8:	444cf800 	cfc1	t4,c1_fcsr
  42dbcc:	00000000 	nop
  42dbd0:	35810003 	ori	at,t4,0x3
  42dbd4:	38210002 	xori	at,at,0x2
  42dbd8:	44c1f800 	ctc1	at,c1_fcsr
  42dbdc:	00000000 	nop
  42dbe0:	462042a4 	cvt.w.d	$f10,$f8
  42dbe4:	440d5000 	mfc1	t5,$f10
  42dbe8:	44ccf800 	ctc1	t4,c1_fcsr
  42dbec:	000d7400 	sll	t6,t5,0x10
  42dbf0:	016e7821 	addu	t7,t3,t6
  42dbf4:	af2f0000 	sw	t7,0(t9)
  42dbf8:	8f998020 	lw	t9,-32736(gp)
  42dbfc:	00000000 	nop
  42dc00:	2739d618 	addiu	t9,t9,-10728
  42dc04:	0320f809 	jalr	t9
  42dc08:	00000000 	nop
  42dc0c:	8fbc0030 	lw	gp,48(sp)
  42dc10:	24040006 	li	a0,6
  42dc14:	8f998020 	lw	t9,-32736(gp)
  42dc18:	00000000 	nop
  42dc1c:	2739c970 	addiu	t9,t9,-13968
  42dc20:	0320f809 	jalr	t9
  42dc24:	00000000 	nop
  42dc28:	8fbc0030 	lw	gp,48(sp)
  42dc2c:	00000000 	nop
  42dc30:	8f998534 	lw	t9,-31436(gp)
  42dc34:	00000000 	nop
  42dc38:	0320f809 	jalr	t9
  42dc3c:	00000000 	nop
  42dc40:	8fbf0034 	lw	ra,52(sp)
  42dc44:	8fbc0030 	lw	gp,48(sp)
  42dc48:	03e00008 	jr	ra
  42dc4c:	27bd0070 	addiu	sp,sp,112
