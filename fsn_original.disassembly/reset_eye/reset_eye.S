# Function: reset_eye
# Address: 0x0040d0d8 - 0x0040d15c
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040d0d8 <reset_eye>:
  40d0d8:	3c1c0fc1 	lui	gp,0xfc1
  40d0dc:	279c0a58 	addiu	gp,gp,2648
  40d0e0:	0399e021 	addu	gp,gp,t9
  40d0e4:	27bdffc0 	addiu	sp,sp,-64
  40d0e8:	8f99854c 	lw	t9,-31412(gp)
  40d0ec:	afbf003c 	sw	ra,60(sp)
  40d0f0:	afbc0038 	sw	gp,56(sp)
  40d0f4:	afa40040 	sw	a0,64(sp)
  40d0f8:	afa50044 	sw	a1,68(sp)
  40d0fc:	0320f809 	jalr	t9
  40d100:	afa60048 	sw	a2,72(sp)
  40d104:	8fbc0038 	lw	gp,56(sp)
  40d108:	afa00018 	sw	zero,24(sp)
  40d10c:	8f828a24 	lw	v0,-30172(gp)
  40d110:	8f998558 	lw	t9,-31400(gp)
  40d114:	c4480020 	lwc1	$f8,32(v0)
  40d118:	c4440018 	lwc1	$f4,24(v0)
  40d11c:	c446001c 	lwc1	$f6,28(v0)
  40d120:	8c4e0028 	lw	t6,40(v0)
  40d124:	460042a1 	cvt.d.s	$f10,$f8
  40d128:	e7aa0014 	swc1	$f10,20(sp)
  40d12c:	e7ab0010 	swc1	$f11,16(sp)
  40d130:	afa00020 	sw	zero,32(sp)
  40d134:	afa00024 	sw	zero,36(sp)
  40d138:	afa00028 	sw	zero,40(sp)
  40d13c:	46002321 	cvt.d.s	$f12,$f4
  40d140:	460033a1 	cvt.d.s	$f14,$f6
  40d144:	0320f809 	jalr	t9
  40d148:	afae001c 	sw	t6,28(sp)
  40d14c:	8fbf003c 	lw	ra,60(sp)
  40d150:	8fbc0038 	lw	gp,56(sp)
  40d154:	03e00008 	jr	ra
  40d158:	27bd0040 	addiu	sp,sp,64
