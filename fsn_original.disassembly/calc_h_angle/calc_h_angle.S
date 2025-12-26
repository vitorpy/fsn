# Function: calc_h_angle
# Address: 0x0040bfe0 - 0x0040c0c0
# Size: 0xe0 (224 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040bfe0 <calc_h_angle>:
  40bfe0:	3c1c0fc1 	lui	gp,0xfc1
  40bfe4:	279c1b50 	addiu	gp,gp,6992
  40bfe8:	0399e021 	addu	gp,gp,t9
  40bfec:	8f8e897c 	lw	t6,-30340(gp)
  40bff0:	27bdffd8 	addiu	sp,sp,-40
  40bff4:	8dce0000 	lw	t6,0(t6)
  40bff8:	afbf001c 	sw	ra,28(sp)
  40bffc:	afbc0018 	sw	gp,24(sp)
  40c000:	85cf000c 	lh	t7,12(t6)
  40c004:	8f81805c 	lw	at,-32676(gp)
  40c008:	448f2000 	mtc1	t7,$f4
  40c00c:	c429a718 	lwc1	$f9,-22760(at)
  40c010:	468021a1 	cvt.d.w	$f6,$f4
  40c014:	c428a71c 	lwc1	$f8,-22756(at)
  40c018:	8f81805c 	lw	at,-32676(gp)
  40c01c:	46283283 	div.d	$f10,$f6,$f8
  40c020:	c431a720 	lwc1	$f17,-22752(at)
  40c024:	c430a724 	lwc1	$f16,-22748(at)
  40c028:	8f99835c 	lw	t9,-31908(gp)
  40c02c:	46305482 	mul.d	$f18,$f10,$f16
  40c030:	46209320 	cvt.s.d	$f12,$f18
  40c034:	0320f809 	jalr	t9
  40c038:	e7ac0024 	swc1	$f12,36(sp)
  40c03c:	8fbc0018 	lw	gp,24(sp)
  40c040:	00000000 	nop
  40c044:	8f98897c 	lw	t8,-30340(gp)
  40c048:	00000000 	nop
  40c04c:	8f180000 	lw	t8,0(t8)
  40c050:	00000000 	nop
  40c054:	e7000014 	swc1	$f0,20(t8)
  40c058:	8f998360 	lw	t9,-31904(gp)
  40c05c:	c7ac0024 	lwc1	$f12,36(sp)
  40c060:	0320f809 	jalr	t9
  40c064:	00000000 	nop
  40c068:	8fbc0018 	lw	gp,24(sp)
  40c06c:	00000000 	nop
  40c070:	8f99897c 	lw	t9,-30340(gp)
  40c074:	00000000 	nop
  40c078:	8f390000 	lw	t9,0(t9)
  40c07c:	00000000 	nop
  40c080:	e7200018 	swc1	$f0,24(t9)
  40c084:	8f998370 	lw	t9,-31888(gp)
  40c088:	c7ac0024 	lwc1	$f12,36(sp)
  40c08c:	0320f809 	jalr	t9
  40c090:	00000000 	nop
  40c094:	8fbc0018 	lw	gp,24(sp)
  40c098:	00000000 	nop
  40c09c:	8f88897c 	lw	t0,-30340(gp)
  40c0a0:	00000000 	nop
  40c0a4:	8d080000 	lw	t0,0(t0)
  40c0a8:	00000000 	nop
  40c0ac:	e500001c 	swc1	$f0,28(t0)
  40c0b0:	8fbf001c 	lw	ra,28(sp)
  40c0b4:	27bd0028 	addiu	sp,sp,40
  40c0b8:	03e00008 	jr	ra
  40c0bc:	00000000 	nop
