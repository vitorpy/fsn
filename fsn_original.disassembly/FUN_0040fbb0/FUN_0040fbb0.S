# Function: FUN_0040fbb0
# Address: 0x0040fbb0 - 0x0040ff58
# Size: 0x3a8 (936 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040fbb0 <activeWorkProc+0x9cc>:
  40fbb0:	3c1c0fc1 	lui	gp,0xfc1
  40fbb4:	279cdf80 	addiu	gp,gp,-8320
  40fbb8:	0399e021 	addu	gp,gp,t9
  40fbbc:	27bdffb0 	addiu	sp,sp,-80
  40fbc0:	8f9984d4 	lw	t9,-31532(gp)
  40fbc4:	afb00018 	sw	s0,24(sp)
  40fbc8:	00808025 	move	s0,a0
  40fbcc:	afbf0024 	sw	ra,36(sp)
  40fbd0:	afbc0020 	sw	gp,32(sp)
  40fbd4:	afb1001c 	sw	s1,28(sp)
  40fbd8:	27a40044 	addiu	a0,sp,68
  40fbdc:	0320f809 	jalr	t9
  40fbe0:	00002825 	move	a1,zero
  40fbe4:	8fb90044 	lw	t9,68(sp)
  40fbe8:	8e080020 	lw	t0,32(s0)
  40fbec:	8fbc0020 	lw	gp,32(sp)
  40fbf0:	03284823 	subu	t1,t9,t0
  40fbf4:	00095100 	sll	t2,t1,0x4
  40fbf8:	01495023 	subu	t2,t2,t1
  40fbfc:	8f85897c 	lw	a1,-30340(gp)
  40fc00:	000a5080 	sll	t2,t2,0x2
  40fc04:	8fae0048 	lw	t6,72(sp)
  40fc08:	8e0f0024 	lw	t7,36(s0)
  40fc0c:	01495021 	addu	t2,t2,t1
  40fc10:	8cab0000 	lw	t3,0(a1)
  40fc14:	000a5140 	sll	t2,t2,0x5
  40fc18:	01495021 	addu	t2,t2,t1
  40fc1c:	01cfc023 	subu	t8,t6,t7
  40fc20:	8f868a24 	lw	a2,-30172(gp)
  40fc24:	8d620c4c 	lw	v0,3148(t3)
  40fc28:	000a50c0 	sll	t2,t2,0x3
  40fc2c:	01495021 	addu	t2,t2,t1
  40fc30:	8ccc005c 	lw	t4,92(a2)
  40fc34:	000a5180 	sll	t2,t2,0x6
  40fc38:	030a1821 	addu	v1,t8,t2
  40fc3c:	01836823 	subu	t5,t4,v1
  40fc40:	04410003 	bgez	v0,40fc50 <activeWorkProc+0xa6c>
  40fc44:	00027043 	sra	t6,v0,0x1
  40fc48:	24410001 	addiu	at,v0,1
  40fc4c:	00017043 	sra	t6,at,0x1
  40fc50:	01ae7821 	addu	t7,t5,t6
  40fc54:	01e2001a 	div	zero,t7,v0
  40fc58:	8e040028 	lw	a0,40(s0)
  40fc5c:	14400002 	bnez	v0,40fc68 <activeWorkProc+0xa84>
  40fc60:	00000000 	nop
  40fc64:	0007000d 	break	0x7
  40fc68:	2401ffff 	li	at,-1
  40fc6c:	14410004 	bne	v0,at,40fc80 <activeWorkProc+0xa9c>
  40fc70:	3c018000 	lui	at,0x8000
  40fc74:	15e10002 	bne	t7,at,40fc80 <activeWorkProc+0xa9c>
  40fc78:	00000000 	nop
  40fc7c:	0006000d 	break	0x6
  40fc80:	2499ffff 	addiu	t9,a0,-1
  40fc84:	00008812 	mflo	s1
  40fc88:	0224082a 	slt	at,s1,a0
  40fc8c:	10200002 	beqz	at,40fc98 <activeWorkProc+0xab4>
  40fc90:	00000000 	nop
  40fc94:	00808825 	move	s1,a0
  40fc98:	1e200002 	bgtz	s1,40fca4 <activeWorkProc+0xac0>
  40fc9c:	ae190028 	sw	t9,40(s0)
  40fca0:	24110001 	li	s1,1
  40fca4:	9208001e 	lbu	t0,30(s0)
  40fca8:	00000000 	nop
  40fcac:	11000032 	beqz	t0,40fd78 <activeWorkProc+0xb94>
  40fcb0:	00000000 	nop
  40fcb4:	8ca90000 	lw	t1,0(a1)
  40fcb8:	44913000 	mtc1	s1,$f6
  40fcbc:	c6080004 	lwc1	$f8,4(s0)
  40fcc0:	c5240004 	lwc1	$f4,4(t1)
  40fcc4:	468030a1 	cvt.d.w	$f2,$f6
  40fcc8:	8f99849c 	lw	t9,-31588(gp)
  40fccc:	c4cc0104 	lwc1	$f12,260(a2)
  40fcd0:	460042a1 	cvt.d.s	$f10,$f8
  40fcd4:	46002021 	cvt.d.s	$f0,$f4
  40fcd8:	46205101 	sub.d	$f4,$f10,$f0
  40fcdc:	c4ca0108 	lwc1	$f10,264(a2)
  40fce0:	46222183 	div.d	$f6,$f4,$f2
  40fce4:	46005121 	cvt.d.s	$f4,$f10
  40fce8:	e7a20034 	swc1	$f2,52(sp)
  40fcec:	e7a30030 	swc1	$f3,48(sp)
  40fcf0:	46260200 	add.d	$f8,$f0,$f6
  40fcf4:	462044a0 	cvt.s.d	$f18,$f8
  40fcf8:	46009421 	cvt.d.s	$f16,$f18
  40fcfc:	00000000 	nop
  40fd00:	46248183 	div.d	$f6,$f16,$f4
  40fd04:	e7b0002c 	swc1	$f16,44(sp)
  40fd08:	e7b10028 	swc1	$f17,40(sp)
  40fd0c:	e7b2003c 	swc1	$f18,60(sp)
  40fd10:	0320f809 	jalr	t9
  40fd14:	462033a0 	cvt.s.d	$f14,$f6
  40fd18:	c6080014 	lwc1	$f8,20(s0)
  40fd1c:	c6040010 	lwc1	$f4,16(s0)
  40fd20:	c7b10028 	lwc1	$f17,40(sp)
  40fd24:	c7b0002c 	lwc1	$f16,44(sp)
  40fd28:	460042a1 	cvt.d.s	$f10,$f8
  40fd2c:	460021a1 	cvt.d.s	$f6,$f4
  40fd30:	46303201 	sub.d	$f8,$f6,$f16
  40fd34:	8fbc0020 	lw	gp,32(sp)
  40fd38:	46285102 	mul.d	$f4,$f10,$f8
  40fd3c:	460001a1 	cvt.d.s	$f6,$f0
  40fd40:	c608000c 	lwc1	$f8,12(s0)
  40fd44:	8f85897c 	lw	a1,-30340(gp)
  40fd48:	c7b2003c 	lwc1	$f18,60(sp)
  40fd4c:	46262283 	div.d	$f10,$f4,$f6
  40fd50:	46004121 	cvt.d.s	$f4,$f8
  40fd54:	8cb80000 	lw	t8,0(a1)
  40fd58:	c7a30030 	lwc1	$f3,48(sp)
  40fd5c:	c7a20034 	lwc1	$f2,52(sp)
  40fd60:	462a2181 	sub.d	$f6,$f4,$f10
  40fd64:	46203220 	cvt.s.d	$f8,$f6
  40fd68:	e7080000 	swc1	$f8,0(t8)
  40fd6c:	8caa0000 	lw	t2,0(a1)
  40fd70:	10000019 	b	40fdd8 <activeWorkProc+0xbf4>
  40fd74:	e5520004 	swc1	$f18,4(t2)
  40fd78:	8ca20000 	lw	v0,0(a1)
  40fd7c:	44915000 	mtc1	s1,$f10
  40fd80:	c6060000 	lwc1	$f6,0(s0)
  40fd84:	c4440000 	lwc1	$f4,0(v0)
  40fd88:	468050a1 	cvt.d.w	$f2,$f10
  40fd8c:	46003221 	cvt.d.s	$f8,$f6
  40fd90:	46002321 	cvt.d.s	$f12,$f4
  40fd94:	462c4101 	sub.d	$f4,$f8,$f12
  40fd98:	00000000 	nop
  40fd9c:	46222283 	div.d	$f10,$f4,$f2
  40fda0:	462a6180 	add.d	$f6,$f12,$f10
  40fda4:	46203220 	cvt.s.d	$f8,$f6
  40fda8:	e4480000 	swc1	$f8,0(v0)
  40fdac:	8ca20000 	lw	v0,0(a1)
  40fdb0:	c60a0004 	lwc1	$f10,4(s0)
  40fdb4:	c4440004 	lwc1	$f4,4(v0)
  40fdb8:	460051a1 	cvt.d.s	$f6,$f10
  40fdbc:	46002021 	cvt.d.s	$f0,$f4
  40fdc0:	46203201 	sub.d	$f8,$f6,$f0
  40fdc4:	00000000 	nop
  40fdc8:	46224103 	div.d	$f4,$f8,$f2
  40fdcc:	46240280 	add.d	$f10,$f0,$f4
  40fdd0:	462051a0 	cvt.s.d	$f6,$f10
  40fdd4:	e4460004 	swc1	$f6,4(v0)
  40fdd8:	8ca20000 	lw	v0,0(a1)
  40fddc:	c6040008 	lwc1	$f4,8(s0)
  40fde0:	c4480008 	lwc1	$f8,8(v0)
  40fde4:	460022a1 	cvt.d.s	$f10,$f4
  40fde8:	46004021 	cvt.d.s	$f0,$f8
  40fdec:	46205181 	sub.d	$f6,$f10,$f0
  40fdf0:	00000000 	nop
  40fdf4:	46223203 	div.d	$f8,$f6,$f2
  40fdf8:	46280100 	add.d	$f4,$f0,$f8
  40fdfc:	462022a0 	cvt.s.d	$f10,$f4
  40fe00:	e44a0008 	swc1	$f10,8(v0)
  40fe04:	920b001c 	lbu	t3,28(s0)
  40fe08:	00000000 	nop
  40fe0c:	1160001b 	beqz	t3,40fe7c <activeWorkProc+0xc98>
  40fe10:	00000000 	nop
  40fe14:	8ca20000 	lw	v0,0(a1)
  40fe18:	860c0018 	lh	t4,24(s0)
  40fe1c:	8443000c 	lh	v1,12(v0)
  40fe20:	00000000 	nop
  40fe24:	01836823 	subu	t5,t4,v1
  40fe28:	01b1001a 	div	zero,t5,s1
  40fe2c:	16200002 	bnez	s1,40fe38 <activeWorkProc+0xc54>
  40fe30:	00000000 	nop
  40fe34:	0007000d 	break	0x7
  40fe38:	2401ffff 	li	at,-1
  40fe3c:	16210004 	bne	s1,at,40fe50 <activeWorkProc+0xc6c>
  40fe40:	3c018000 	lui	at,0x8000
  40fe44:	15a10002 	bne	t5,at,40fe50 <activeWorkProc+0xc6c>
  40fe48:	00000000 	nop
  40fe4c:	0006000d 	break	0x6
  40fe50:	00007012 	mflo	t6
  40fe54:	006e7821 	addu	t7,v1,t6
  40fe58:	a44f000c 	sh	t7,12(v0)
  40fe5c:	8f998528 	lw	t9,-31448(gp)
  40fe60:	00000000 	nop
  40fe64:	0320f809 	jalr	t9
  40fe68:	00000000 	nop
  40fe6c:	8fbc0020 	lw	gp,32(sp)
  40fe70:	00000000 	nop
  40fe74:	8f85897c 	lw	a1,-30340(gp)
  40fe78:	00000000 	nop
  40fe7c:	9219001d 	lbu	t9,29(s0)
  40fe80:	00000000 	nop
  40fe84:	13200019 	beqz	t9,40feec <activeWorkProc+0xd08>
  40fe88:	00000000 	nop
  40fe8c:	8ca20000 	lw	v0,0(a1)
  40fe90:	8608001a 	lh	t0,26(s0)
  40fe94:	8443000e 	lh	v1,14(v0)
  40fe98:	00000000 	nop
  40fe9c:	01034823 	subu	t1,t0,v1
  40fea0:	0131001a 	div	zero,t1,s1
  40fea4:	16200002 	bnez	s1,40feb0 <activeWorkProc+0xccc>
  40fea8:	00000000 	nop
  40feac:	0007000d 	break	0x7
  40feb0:	2401ffff 	li	at,-1
  40feb4:	16210004 	bne	s1,at,40fec8 <activeWorkProc+0xce4>
  40feb8:	3c018000 	lui	at,0x8000
  40febc:	15210002 	bne	t1,at,40fec8 <activeWorkProc+0xce4>
  40fec0:	00000000 	nop
  40fec4:	0006000d 	break	0x6
  40fec8:	0000c012 	mflo	t8
  40fecc:	00785021 	addu	t2,v1,t8
  40fed0:	a44a000e 	sh	t2,14(v0)
  40fed4:	8f99852c 	lw	t9,-31444(gp)
  40fed8:	00000000 	nop
  40fedc:	0320f809 	jalr	t9
  40fee0:	00000000 	nop
  40fee4:	8fbc0020 	lw	gp,32(sp)
  40fee8:	00000000 	nop
  40feec:	8f998534 	lw	t9,-31436(gp)
  40fef0:	00000000 	nop
  40fef4:	0320f809 	jalr	t9
  40fef8:	00000000 	nop
  40fefc:	8fbc0020 	lw	gp,32(sp)
  40ff00:	24010001 	li	at,1
  40ff04:	1621000f 	bne	s1,at,40ff44 <activeWorkProc+0xd60>
  40ff08:	00001025 	move	v0,zero
  40ff0c:	8f818068 	lw	at,-32664(gp)
  40ff10:	00000000 	nop
  40ff14:	ac200154 	sw	zero,340(at)
  40ff18:	8e02002c 	lw	v0,44(s0)
  40ff1c:	00000000 	nop
  40ff20:	10400006 	beqz	v0,40ff3c <activeWorkProc+0xd58>
  40ff24:	00000000 	nop
  40ff28:	8e040030 	lw	a0,48(s0)
  40ff2c:	0040f809 	jalr	v0
  40ff30:	0040c825 	move	t9,v0
  40ff34:	8fbc0020 	lw	gp,32(sp)
  40ff38:	00000000 	nop
  40ff3c:	10000001 	b	40ff44 <activeWorkProc+0xd60>
  40ff40:	24020001 	li	v0,1
  40ff44:	8fbf0024 	lw	ra,36(sp)
  40ff48:	8fb00018 	lw	s0,24(sp)
  40ff4c:	8fb1001c 	lw	s1,28(sp)
  40ff50:	03e00008 	jr	ra
  40ff54:	27bd0050 	addiu	sp,sp,80
