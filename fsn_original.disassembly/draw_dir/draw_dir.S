# Function: draw_dir
# Address: 0x00418f44 - 0x0041919c
# Size: 0x258 (600 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00418f44 <draw_dir>:
  418f44:	3c1c0fc0 	lui	gp,0xfc0
  418f48:	279c4bec 	addiu	gp,gp,19436
  418f4c:	0399e021 	addu	gp,gp,t9
  418f50:	27bdffe0 	addiu	sp,sp,-32
  418f54:	afbf001c 	sw	ra,28(sp)
  418f58:	afbc0018 	sw	gp,24(sp)
  418f5c:	afb00014 	sw	s0,20(sp)
  418f60:	afa60028 	sw	a2,40(sp)
  418f64:	afa7002c 	sw	a3,44(sp)
  418f68:	8c8e0074 	lw	t6,116(a0)
  418f6c:	00808025 	move	s0,a0
  418f70:	000ec0c0 	sll	t8,t6,0x3
  418f74:	07010086 	bgez	t8,419190 <draw_dir+0x24c>
  418f78:	8fbf001c 	lw	ra,28(sp)
  418f7c:	8f9981e4 	lw	t9,-32284(gp)
  418f80:	8484005e 	lh	a0,94(a0)
  418f84:	0320f809 	jalr	t9
  418f88:	00000000 	nop
  418f8c:	8fbc0018 	lw	gp,24(sp)
  418f90:	00000000 	nop
  418f94:	8f9984b8 	lw	t9,-31560(gp)
  418f98:	00000000 	nop
  418f9c:	0320f809 	jalr	t9
  418fa0:	00000000 	nop
  418fa4:	8fbc0018 	lw	gp,24(sp)
  418fa8:	44807000 	mtc1	zero,$f14
  418fac:	c7a50028 	lwc1	$f5,40(sp)
  418fb0:	c7a4002c 	lwc1	$f4,44(sp)
  418fb4:	8f9984a0 	lw	t9,-31584(gp)
  418fb8:	44067000 	mfc1	a2,$f14
  418fbc:	0320f809 	jalr	t9
  418fc0:	46202320 	cvt.s.d	$f12,$f4
  418fc4:	8e190074 	lw	t9,116(s0)
  418fc8:	8fbc0018 	lw	gp,24(sp)
  418fcc:	00194b40 	sll	t1,t9,0xd
  418fd0:	05210006 	bgez	t1,418fec <draw_dir+0xa8>
  418fd4:	00000000 	nop
  418fd8:	8f848a24 	lw	a0,-30172(gp)
  418fdc:	00000000 	nop
  418fe0:	8c840168 	lw	a0,360(a0)
  418fe4:	10000005 	b	418ffc <draw_dir+0xb8>
  418fe8:	00000000 	nop
  418fec:	8f848a24 	lw	a0,-30172(gp)
  418ff0:	00000000 	nop
  418ff4:	8c84016c 	lw	a0,364(a0)
  418ff8:	00000000 	nop
  418ffc:	8f998464 	lw	t9,-31644(gp)
  419000:	00000000 	nop
  419004:	0320f809 	jalr	t9
  419008:	00000000 	nop
  41900c:	8fbc0018 	lw	gp,24(sp)
  419010:	00000000 	nop
  419014:	8f9984b8 	lw	t9,-31560(gp)
  419018:	00000000 	nop
  41901c:	0320f809 	jalr	t9
  419020:	00000000 	nop
  419024:	8fbc0018 	lw	gp,24(sp)
  419028:	2404fc7c 	li	a0,-900
  41902c:	8f998498 	lw	t9,-31592(gp)
  419030:	2405007a 	li	a1,122
  419034:	0320f809 	jalr	t9
  419038:	00000000 	nop
  41903c:	8fbc0018 	lw	gp,24(sp)
  419040:	24060000 	li	a2,0
  419044:	8f81805c 	lw	at,-32676(gp)
  419048:	8f9984a0 	lw	t9,-31584(gp)
  41904c:	c42caefc 	lwc1	$f12,-20740(at)
  419050:	8f81805c 	lw	at,-32676(gp)
  419054:	00000000 	nop
  419058:	c42eaf00 	lwc1	$f14,-20736(at)
  41905c:	0320f809 	jalr	t9
  419060:	00000000 	nop
  419064:	93aa0033 	lbu	t2,51(sp)
  419068:	8fbc0018 	lw	gp,24(sp)
  41906c:	11400018 	beqz	t2,4190d0 <draw_dir+0x18c>
  419070:	00000000 	nop
  419074:	8f81805c 	lw	at,-32676(gp)
  419078:	8e0b0004 	lw	t3,4(s0)
  41907c:	c42caf04 	lwc1	$f12,-20732(at)
  419080:	8f81805c 	lw	at,-32676(gp)
  419084:	448b3000 	mtc1	t3,$f6
  419088:	c42baf08 	lwc1	$f11,-20728(at)
  41908c:	46803221 	cvt.d.w	$f8,$f6
  419090:	c42aaf0c 	lwc1	$f10,-20724(at)
  419094:	8f81805c 	lw	at,-32676(gp)
  419098:	462a4402 	mul.d	$f16,$f8,$f10
  41909c:	c433af10 	lwc1	$f19,-20720(at)
  4190a0:	c432af14 	lwc1	$f18,-20716(at)
  4190a4:	8f9981e0 	lw	t9,-32288(gp)
  4190a8:	3c073e7a 	lui	a3,0x3e7a
  4190ac:	46328100 	add.d	$f4,$f16,$f18
  4190b0:	34e7e148 	ori	a3,a3,0xe148
  4190b4:	462021a0 	cvt.s.d	$f6,$f4
  4190b8:	44063000 	mfc1	a2,$f6
  4190bc:	0320f809 	jalr	t9
  4190c0:	46006386 	mov.s	$f14,$f12
  4190c4:	8fbc0018 	lw	gp,24(sp)
  4190c8:	10000024 	b	41915c <draw_dir+0x218>
  4190cc:	00000000 	nop
  4190d0:	8f81805c 	lw	at,-32676(gp)
  4190d4:	8e0c0004 	lw	t4,4(s0)
  4190d8:	c42caf18 	lwc1	$f12,-20712(at)
  4190dc:	8f81805c 	lw	at,-32676(gp)
  4190e0:	448c4000 	mtc1	t4,$f8
  4190e4:	c431af20 	lwc1	$f17,-20704(at)
  4190e8:	468042a1 	cvt.d.w	$f10,$f8
  4190ec:	c430af24 	lwc1	$f16,-20700(at)
  4190f0:	8f81805c 	lw	at,-32676(gp)
  4190f4:	46305482 	mul.d	$f18,$f10,$f16
  4190f8:	c425af28 	lwc1	$f5,-20696(at)
  4190fc:	c424af2c 	lwc1	$f4,-20692(at)
  419100:	8f998210 	lw	t9,-32240(gp)
  419104:	3c073e7a 	lui	a3,0x3e7a
  419108:	46249180 	add.d	$f6,$f18,$f4
  41910c:	34e7e148 	ori	a3,a3,0xe148
  419110:	46203220 	cvt.s.d	$f8,$f6
  419114:	44064000 	mfc1	a2,$f8
  419118:	0320f809 	jalr	t9
  41911c:	46006386 	mov.s	$f14,$f12
  419120:	8fbc0018 	lw	gp,24(sp)
  419124:	24060000 	li	a2,0
  419128:	8f81805c 	lw	at,-32676(gp)
  41912c:	8f998494 	lw	t9,-31596(gp)
  419130:	c42caf30 	lwc1	$f12,-20688(at)
  419134:	0320f809 	jalr	t9
  419138:	46006386 	mov.s	$f14,$f12
  41913c:	8fbc0018 	lw	gp,24(sp)
  419140:	8e040000 	lw	a0,0(s0)
  419144:	8f9985f8 	lw	t9,-31240(gp)
  419148:	00000000 	nop
  41914c:	0320f809 	jalr	t9
  419150:	00000000 	nop
  419154:	8fbc0018 	lw	gp,24(sp)
  419158:	00000000 	nop
  41915c:	8f9984d8 	lw	t9,-31528(gp)
  419160:	00000000 	nop
  419164:	0320f809 	jalr	t9
  419168:	00000000 	nop
  41916c:	8fbc0018 	lw	gp,24(sp)
  419170:	00000000 	nop
  419174:	8f9984d8 	lw	t9,-31528(gp)
  419178:	00000000 	nop
  41917c:	0320f809 	jalr	t9
  419180:	00000000 	nop
  419184:	8fbc0018 	lw	gp,24(sp)
  419188:	00000000 	nop
  41918c:	8fbf001c 	lw	ra,28(sp)
  419190:	8fb00014 	lw	s0,20(sp)
  419194:	03e00008 	jr	ra
  419198:	27bd0020 	addiu	sp,sp,32
