# Function: FUN_0040d15c
# Address: 0x0040d15c - 0x0040d2cc
# Size: 0x170 (368 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040d15c <reset_eye+0x84>:
  40d15c:	3c1c0fc1 	lui	gp,0xfc1
  40d160:	279c09d4 	addiu	gp,gp,2516
  40d164:	0399e021 	addu	gp,gp,t9
  40d168:	27bdffc0 	addiu	sp,sp,-64
  40d16c:	8f99854c 	lw	t9,-31412(gp)
  40d170:	afbf003c 	sw	ra,60(sp)
  40d174:	afbc0038 	sw	gp,56(sp)
  40d178:	afa40040 	sw	a0,64(sp)
  40d17c:	afa50044 	sw	a1,68(sp)
  40d180:	0320f809 	jalr	t9
  40d184:	afa60048 	sw	a2,72(sp)
  40d188:	8fbc0038 	lw	gp,56(sp)
  40d18c:	00000000 	nop
  40d190:	8f82897c 	lw	v0,-30340(gp)
  40d194:	00000000 	nop
  40d198:	8c420000 	lw	v0,0(v0)
  40d19c:	00000000 	nop
  40d1a0:	8c43003c 	lw	v1,60(v0)
  40d1a4:	00000000 	nop
  40d1a8:	10600023 	beqz	v1,40d238 <reset_eye+0x160>
  40d1ac:	00000000 	nop
  40d1b0:	c4440020 	lwc1	$f4,32(v0)
  40d1b4:	c4500014 	lwc1	$f16,20(v0)
  40d1b8:	46002021 	cvt.d.s	$f0,$f4
  40d1bc:	460084a1 	cvt.d.s	$f18,$f16
  40d1c0:	46209102 	mul.d	$f4,$f18,$f0
  40d1c4:	c4460008 	lwc1	$f6,8(v0)
  40d1c8:	c4480000 	lwc1	$f8,0(v0)
  40d1cc:	460030a1 	cvt.d.s	$f2,$f6
  40d1d0:	c4520018 	lwc1	$f18,24(v0)
  40d1d4:	46222182 	mul.d	$f6,$f4,$f2
  40d1d8:	460042a1 	cvt.d.s	$f10,$f8
  40d1dc:	46009121 	cvt.d.s	$f4,$f18
  40d1e0:	c4480004 	lwc1	$f8,4(v0)
  40d1e4:	8f848a24 	lw	a0,-30172(gp)
  40d1e8:	46265301 	sub.d	$f12,$f10,$f6
  40d1ec:	8f998558 	lw	t9,-31400(gp)
  40d1f0:	46202282 	mul.d	$f10,$f4,$f0
  40d1f4:	46004421 	cvt.d.s	$f16,$f8
  40d1f8:	c488004c 	lwc1	$f8,76(a0)
  40d1fc:	8c8e0048 	lw	t6,72(a0)
  40d200:	afa00028 	sw	zero,40(sp)
  40d204:	46225182 	mul.d	$f6,$f10,$f2
  40d208:	460044a1 	cvt.d.s	$f18,$f8
  40d20c:	e7b20014 	swc1	$f18,20(sp)
  40d210:	e7b30010 	swc1	$f19,16(sp)
  40d214:	afa00024 	sw	zero,36(sp)
  40d218:	46268381 	sub.d	$f14,$f16,$f6
  40d21c:	afa30020 	sw	v1,32(sp)
  40d220:	afa00018 	sw	zero,24(sp)
  40d224:	0320f809 	jalr	t9
  40d228:	afae001c 	sw	t6,28(sp)
  40d22c:	8fbc0038 	lw	gp,56(sp)
  40d230:	10000023 	b	40d2c0 <reset_eye+0x1e8>
  40d234:	8fbf003c 	lw	ra,60(sp)
  40d238:	c4440020 	lwc1	$f4,32(v0)
  40d23c:	c4480014 	lwc1	$f8,20(v0)
  40d240:	46002021 	cvt.d.s	$f0,$f4
  40d244:	460044a1 	cvt.d.s	$f18,$f8
  40d248:	46209102 	mul.d	$f4,$f18,$f0
  40d24c:	c44a0008 	lwc1	$f10,8(v0)
  40d250:	c4500000 	lwc1	$f16,0(v0)
  40d254:	460050a1 	cvt.d.s	$f2,$f10
  40d258:	c4520018 	lwc1	$f18,24(v0)
  40d25c:	46222282 	mul.d	$f10,$f4,$f2
  40d260:	460081a1 	cvt.d.s	$f6,$f16
  40d264:	46009121 	cvt.d.s	$f4,$f18
  40d268:	c4500004 	lwc1	$f16,4(v0)
  40d26c:	8f848a24 	lw	a0,-30172(gp)
  40d270:	462a3301 	sub.d	$f12,$f6,$f10
  40d274:	8f998558 	lw	t9,-31400(gp)
  40d278:	46202182 	mul.d	$f6,$f4,$f0
  40d27c:	46008221 	cvt.d.s	$f8,$f16
  40d280:	c4900044 	lwc1	$f16,68(a0)
  40d284:	8c8f0048 	lw	t7,72(a0)
  40d288:	afa00028 	sw	zero,40(sp)
  40d28c:	46223282 	mul.d	$f10,$f6,$f2
  40d290:	460084a1 	cvt.d.s	$f18,$f16
  40d294:	e7b20014 	swc1	$f18,20(sp)
  40d298:	e7b30010 	swc1	$f19,16(sp)
  40d29c:	afa00024 	sw	zero,36(sp)
  40d2a0:	462a4381 	sub.d	$f14,$f8,$f10
  40d2a4:	afa30020 	sw	v1,32(sp)
  40d2a8:	afa00018 	sw	zero,24(sp)
  40d2ac:	0320f809 	jalr	t9
  40d2b0:	afaf001c 	sw	t7,28(sp)
  40d2b4:	8fbc0038 	lw	gp,56(sp)
  40d2b8:	00000000 	nop
  40d2bc:	8fbf003c 	lw	ra,60(sp)
  40d2c0:	27bd0040 	addiu	sp,sp,64
  40d2c4:	03e00008 	jr	ra
  40d2c8:	00000000 	nop
