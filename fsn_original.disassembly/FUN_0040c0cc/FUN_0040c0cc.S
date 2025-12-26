# Function: FUN_0040c0cc
# Address: 0x0040c0cc - 0x0040c1a0
# Size: 0xd4 (212 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040c0cc <calc_v_angle+0xc>:
  40c0cc:	8f8e897c 	lw	t6,-30340(gp)
  40c0d0:	27bdffd8 	addiu	sp,sp,-40
  40c0d4:	8dce0000 	lw	t6,0(t6)
  40c0d8:	afbf001c 	sw	ra,28(sp)
  40c0dc:	afbc0018 	sw	gp,24(sp)
  40c0e0:	85cf000e 	lh	t7,14(t6)
  40c0e4:	8f81805c 	lw	at,-32676(gp)
  40c0e8:	448f2000 	mtc1	t7,$f4
  40c0ec:	c429a728 	lwc1	$f9,-22744(at)
  40c0f0:	468021a1 	cvt.d.w	$f6,$f4
  40c0f4:	c428a72c 	lwc1	$f8,-22740(at)
  40c0f8:	8f81805c 	lw	at,-32676(gp)
  40c0fc:	46283283 	div.d	$f10,$f6,$f8
  40c100:	c431a730 	lwc1	$f17,-22736(at)
  40c104:	c430a734 	lwc1	$f16,-22732(at)
  40c108:	8f99835c 	lw	t9,-31908(gp)
  40c10c:	46305482 	mul.d	$f18,$f10,$f16
  40c110:	46209320 	cvt.s.d	$f12,$f18
  40c114:	0320f809 	jalr	t9
  40c118:	e7ac0024 	swc1	$f12,36(sp)
  40c11c:	8fbc0018 	lw	gp,24(sp)
  40c120:	00000000 	nop
  40c124:	8f98897c 	lw	t8,-30340(gp)
  40c128:	00000000 	nop
  40c12c:	8f180000 	lw	t8,0(t8)
  40c130:	00000000 	nop
  40c134:	e7000020 	swc1	$f0,32(t8)
  40c138:	8f998360 	lw	t9,-31904(gp)
  40c13c:	c7ac0024 	lwc1	$f12,36(sp)
  40c140:	0320f809 	jalr	t9
  40c144:	00000000 	nop
  40c148:	8fbc0018 	lw	gp,24(sp)
  40c14c:	00000000 	nop
  40c150:	8f99897c 	lw	t9,-30340(gp)
  40c154:	00000000 	nop
  40c158:	8f390000 	lw	t9,0(t9)
  40c15c:	00000000 	nop
  40c160:	e7200024 	swc1	$f0,36(t9)
  40c164:	8f998370 	lw	t9,-31888(gp)
  40c168:	c7ac0024 	lwc1	$f12,36(sp)
  40c16c:	0320f809 	jalr	t9
  40c170:	00000000 	nop
  40c174:	8fbc0018 	lw	gp,24(sp)
  40c178:	00000000 	nop
  40c17c:	8f88897c 	lw	t0,-30340(gp)
  40c180:	00000000 	nop
  40c184:	8d080000 	lw	t0,0(t0)
  40c188:	00000000 	nop
  40c18c:	e5000028 	swc1	$f0,40(t0)
  40c190:	8fbf001c 	lw	ra,28(sp)
  40c194:	27bd0028 	addiu	sp,sp,40
  40c198:	03e00008 	jr	ra
  40c19c:	00000000 	nop
