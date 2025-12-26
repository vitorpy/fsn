# Function: FUN_0043aef8
# Address: 0x0043aef8 - 0x0043b104
# Size: 0x20c (524 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043aef8 <FAMDebugLevel+0x2d8>:
  43aef8:	3c1c0fbe 	lui	gp,0xfbe
  43aefc:	279c2c38 	addiu	gp,gp,11320
  43af00:	0399e021 	addu	gp,gp,t9
  43af04:	27bdffd0 	addiu	sp,sp,-48
  43af08:	afb00014 	sw	s0,20(sp)
  43af0c:	8f90806c 	lw	s0,-32660(gp)
  43af10:	afbf001c 	sw	ra,28(sp)
  43af14:	26109e40 	addiu	s0,s0,-25024
  43af18:	8e080000 	lw	t0,0(s0)
  43af1c:	afbc0018 	sw	gp,24(sp)
  43af20:	afa40030 	sw	a0,48(sp)
  43af24:	afa50034 	sw	a1,52(sp)
  43af28:	1900001b 	blez	t0,43af98 <FAMDebugLevel+0x378>
  43af2c:	00001825 	move	v1,zero
  43af30:	8f82806c 	lw	v0,-32660(gp)
  43af34:	00003025 	move	a2,zero
  43af38:	8c427414 	lw	v0,29716(v0)
  43af3c:	2407ffff 	li	a3,-1
  43af40:	8c4e0000 	lw	t6,0(v0)
  43af44:	00000000 	nop
  43af48:	14ee000e 	bne	a3,t6,43af84 <FAMDebugLevel+0x364>
  43af4c:	00000000 	nop
  43af50:	8faf0030 	lw	t7,48(sp)
  43af54:	8f99806c 	lw	t9,-32660(gp)
  43af58:	ac4f0000 	sw	t7,0(v0)
  43af5c:	8f397410 	lw	t9,29712(t9)
  43af60:	8fb80034 	lw	t8,52(sp)
  43af64:	8f8b806c 	lw	t3,-32660(gp)
  43af68:	03265021 	addu	t2,t9,a2
  43af6c:	ad580000 	sw	t8,0(t2)
  43af70:	8d6b7418 	lw	t3,29720(t3)
  43af74:	00000000 	nop
  43af78:	01636021 	addu	t4,t3,v1
  43af7c:	1000005d 	b	43b0f4 <FAMDebugLevel+0x4d4>
  43af80:	a1800000 	sb	zero,0(t4)
  43af84:	24630001 	addiu	v1,v1,1
  43af88:	0068082a 	slt	at,v1,t0
  43af8c:	24c60004 	addiu	a2,a2,4
  43af90:	1420ffeb 	bnez	at,43af40 <FAMDebugLevel+0x320>
  43af94:	24420004 	addiu	v0,v0,4
  43af98:	8f89806c 	lw	t1,-32660(gp)
  43af9c:	3c013ff8 	lui	at,0x3ff8
  43afa0:	25299e44 	addiu	t1,t1,-25020
  43afa4:	8d220000 	lw	v0,0(t1)
  43afa8:	44814800 	mtc1	at,$f9
  43afac:	44822000 	mtc1	v0,$f4
  43afb0:	44804000 	mtc1	zero,$f8
  43afb4:	468021a1 	cvt.d.w	$f6,$f4
  43afb8:	01026821 	addu	t5,t0,v0
  43afbc:	8f84806c 	lw	a0,-32660(gp)
  43afc0:	46283282 	mul.d	$f10,$f6,$f8
  43afc4:	ae0d0000 	sw	t5,0(s0)
  43afc8:	00033080 	sll	a2,v1,0x2
  43afcc:	afa60024 	sw	a2,36(sp)
  43afd0:	000d2880 	sll	a1,t5,0x2
  43afd4:	444ef800 	cfc1	t6,c1_fcsr
  43afd8:	afa3002c 	sw	v1,44(sp)
  43afdc:	35c10003 	ori	at,t6,0x3
  43afe0:	38210002 	xori	at,at,0x2
  43afe4:	44c1f800 	ctc1	at,c1_fcsr
  43afe8:	00000000 	nop
  43afec:	46205424 	cvt.w.d	$f16,$f10
  43aff0:	e5300000 	swc1	$f16,0(t1)
  43aff4:	8f99818c 	lw	t9,-32372(gp)
  43aff8:	8c847410 	lw	a0,29712(a0)
  43affc:	44cef800 	ctc1	t6,c1_fcsr
  43b000:	0320f809 	jalr	t9
  43b004:	00000000 	nop
  43b008:	8fbc0018 	lw	gp,24(sp)
  43b00c:	00000000 	nop
  43b010:	8f81806c 	lw	at,-32660(gp)
  43b014:	8f88806c 	lw	t0,-32660(gp)
  43b018:	ac227410 	sw	v0,29712(at)
  43b01c:	8e050000 	lw	a1,0(s0)
  43b020:	25087414 	addiu	t0,t0,29716
  43b024:	0005c880 	sll	t9,a1,0x2
  43b028:	03202825 	move	a1,t9
  43b02c:	8f99818c 	lw	t9,-32372(gp)
  43b030:	8d040000 	lw	a0,0(t0)
  43b034:	0320f809 	jalr	t9
  43b038:	00000000 	nop
  43b03c:	8fbc0018 	lw	gp,24(sp)
  43b040:	8e050000 	lw	a1,0(s0)
  43b044:	8f88806c 	lw	t0,-32660(gp)
  43b048:	8f84806c 	lw	a0,-32660(gp)
  43b04c:	25087414 	addiu	t0,t0,29716
  43b050:	ad020000 	sw	v0,0(t0)
  43b054:	8f99818c 	lw	t9,-32372(gp)
  43b058:	0005c080 	sll	t8,a1,0x2
  43b05c:	8c847418 	lw	a0,29720(a0)
  43b060:	0320f809 	jalr	t9
  43b064:	03002825 	move	a1,t8
  43b068:	8fbc0018 	lw	gp,24(sp)
  43b06c:	8fa60024 	lw	a2,36(sp)
  43b070:	8f88806c 	lw	t0,-32660(gp)
  43b074:	8f84806c 	lw	a0,-32660(gp)
  43b078:	25087414 	addiu	t0,t0,29716
  43b07c:	8d0b0000 	lw	t3,0(t0)
  43b080:	8faa0030 	lw	t2,48(sp)
  43b084:	24847418 	addiu	a0,a0,29720
  43b088:	8fa3002c 	lw	v1,44(sp)
  43b08c:	8f8e806c 	lw	t6,-32660(gp)
  43b090:	ac820000 	sw	v0,0(a0)
  43b094:	01666021 	addu	t4,t3,a2
  43b098:	ad8a0000 	sw	t2,0(t4)
  43b09c:	8dce7410 	lw	t6,29712(t6)
  43b0a0:	8fad0034 	lw	t5,52(sp)
  43b0a4:	01c67821 	addu	t7,t6,a2
  43b0a8:	aded0000 	sw	t5,0(t7)
  43b0ac:	8c990000 	lw	t9,0(a0)
  43b0b0:	2407ffff 	li	a3,-1
  43b0b4:	0323c021 	addu	t8,t9,v1
  43b0b8:	a3000000 	sb	zero,0(t8)
  43b0bc:	8e0b0000 	lw	t3,0(s0)
  43b0c0:	24630001 	addiu	v1,v1,1
  43b0c4:	006b082a 	slt	at,v1,t3
  43b0c8:	1020000a 	beqz	at,43b0f4 <FAMDebugLevel+0x4d4>
  43b0cc:	24c60004 	addiu	a2,a2,4
  43b0d0:	8d0a0000 	lw	t2,0(t0)
  43b0d4:	24630001 	addiu	v1,v1,1
  43b0d8:	01466021 	addu	t4,t2,a2
  43b0dc:	ad870000 	sw	a3,0(t4)
  43b0e0:	8e0e0000 	lw	t6,0(s0)
  43b0e4:	24c60004 	addiu	a2,a2,4
  43b0e8:	006e082a 	slt	at,v1,t6
  43b0ec:	1420fff8 	bnez	at,43b0d0 <FAMDebugLevel+0x4b0>
  43b0f0:	00000000 	nop
  43b0f4:	8fbf001c 	lw	ra,28(sp)
  43b0f8:	8fb00014 	lw	s0,20(sp)
  43b0fc:	03e00008 	jr	ra
  43b100:	27bd0030 	addiu	sp,sp,48
