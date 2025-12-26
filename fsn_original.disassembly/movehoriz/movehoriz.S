# Function: movehoriz
# Address: 0x0040cf90 - 0x0040d0a0
# Size: 0x110 (272 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040cf90 <movehoriz>:
  40cf90:	3c1c0fc1 	lui	gp,0xfc1
  40cf94:	279c0ba0 	addiu	gp,gp,2976
  40cf98:	0399e021 	addu	gp,gp,t9
  40cf9c:	27bdffe0 	addiu	sp,sp,-32
  40cfa0:	8f8e897c 	lw	t6,-30340(gp)
  40cfa4:	8f828a24 	lw	v0,-30172(gp)
  40cfa8:	8dce0000 	lw	t6,0(t6)
  40cfac:	afbf001c 	sw	ra,28(sp)
  40cfb0:	afbc0018 	sw	gp,24(sp)
  40cfb4:	e7ad0020 	swc1	$f13,32(sp)
  40cfb8:	e7ac0024 	swc1	$f12,36(sp)
  40cfbc:	e7af0028 	swc1	$f15,40(sp)
  40cfc0:	e7ae002c 	swc1	$f14,44(sp)
  40cfc4:	c4480108 	lwc1	$f8,264(v0)
  40cfc8:	c5c40004 	lwc1	$f4,4(t6)
  40cfcc:	460042a1 	cvt.d.s	$f10,$f8
  40cfd0:	460021a1 	cvt.d.s	$f6,$f4
  40cfd4:	00000000 	nop
  40cfd8:	462a3403 	div.d	$f16,$f6,$f10
  40cfdc:	8f99849c 	lw	t9,-31588(gp)
  40cfe0:	c44c0104 	lwc1	$f12,260(v0)
  40cfe4:	0320f809 	jalr	t9
  40cfe8:	462083a0 	cvt.s.d	$f14,$f16
  40cfec:	8fbc0018 	lw	gp,24(sp)
  40cff0:	c7a30020 	lwc1	$f3,32(sp)
  40cff4:	8f83897c 	lw	v1,-30340(gp)
  40cff8:	c7a20024 	lwc1	$f2,36(sp)
  40cffc:	8c620000 	lw	v0,0(v1)
  40d000:	c7ad0028 	lwc1	$f13,40(sp)
  40d004:	c4520014 	lwc1	$f18,20(v0)
  40d008:	c4460018 	lwc1	$f6,24(v0)
  40d00c:	46009121 	cvt.d.s	$f4,$f18
  40d010:	46222202 	mul.d	$f8,$f4,$f2
  40d014:	c7ac002c 	lwc1	$f12,44(sp)
  40d018:	460032a1 	cvt.d.s	$f10,$f6
  40d01c:	46000121 	cvt.d.s	$f4,$f0
  40d020:	462c5402 	mul.d	$f16,$f10,$f12
  40d024:	c44a0000 	lwc1	$f10,0(v0)
  40d028:	46304480 	add.d	$f18,$f8,$f16
  40d02c:	00000000 	nop
  40d030:	46249183 	div.d	$f6,$f18,$f4
  40d034:	46005221 	cvt.d.s	$f8,$f10
  40d038:	46264400 	add.d	$f16,$f8,$f6
  40d03c:	462084a0 	cvt.s.d	$f18,$f16
  40d040:	e4520000 	swc1	$f18,0(v0)
  40d044:	8c620000 	lw	v0,0(v1)
  40d048:	00000000 	nop
  40d04c:	c4440014 	lwc1	$f4,20(v0)
  40d050:	c4500018 	lwc1	$f16,24(v0)
  40d054:	46002287 	neg.s	$f10,$f4
  40d058:	46005221 	cvt.d.s	$f8,$f10
  40d05c:	462c4182 	mul.d	$f6,$f8,$f12
  40d060:	460084a1 	cvt.d.s	$f18,$f16
  40d064:	c4480004 	lwc1	$f8,4(v0)
  40d068:	46229102 	mul.d	$f4,$f18,$f2
  40d06c:	46004421 	cvt.d.s	$f16,$f8
  40d070:	46243280 	add.d	$f10,$f6,$f4
  40d074:	462a8480 	add.d	$f18,$f16,$f10
  40d078:	462091a0 	cvt.s.d	$f6,$f18
  40d07c:	e4460004 	swc1	$f6,4(v0)
  40d080:	8f998534 	lw	t9,-31436(gp)
  40d084:	00000000 	nop
  40d088:	0320f809 	jalr	t9
  40d08c:	00000000 	nop
  40d090:	8fbf001c 	lw	ra,28(sp)
  40d094:	8fbc0018 	lw	gp,24(sp)
  40d098:	03e00008 	jr	ra
  40d09c:	27bd0020 	addiu	sp,sp,32
