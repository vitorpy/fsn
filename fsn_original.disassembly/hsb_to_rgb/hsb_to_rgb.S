# Function: hsb_to_rgb
# Address: 0x00438dd8 - 0x00438e68
# Size: 0x90 (144 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438dd8 <hsb_to_rgb>:
  438dd8:	3c1c0fbe 	lui	gp,0xfbe
  438ddc:	279c4d58 	addiu	gp,gp,19800
  438de0:	0399e021 	addu	gp,gp,t9
  438de4:	27bdffc8 	addiu	sp,sp,-56
  438de8:	c7b10048 	lwc1	$f17,72(sp)
  438dec:	c7b0004c 	lwc1	$f16,76(sp)
  438df0:	e7ad0038 	swc1	$f13,56(sp)
  438df4:	e7ac003c 	swc1	$f12,60(sp)
  438df8:	c7a4003c 	lwc1	$f4,60(sp)
  438dfc:	c7a50038 	lwc1	$f5,56(sp)
  438e00:	e7af0040 	swc1	$f15,64(sp)
  438e04:	e7ae0044 	swc1	$f14,68(sp)
  438e08:	c7a80044 	lwc1	$f8,68(sp)
  438e0c:	c7a90040 	lwc1	$f9,64(sp)
  438e10:	462084a0 	cvt.s.d	$f18,$f16
  438e14:	8fae0050 	lw	t6,80(sp)
  438e18:	8faf0054 	lw	t7,84(sp)
  438e1c:	8fb80058 	lw	t8,88(sp)
  438e20:	8f9988bc 	lw	t9,-30532(gp)
  438e24:	462021a0 	cvt.s.d	$f6,$f4
  438e28:	afbf0034 	sw	ra,52(sp)
  438e2c:	462042a0 	cvt.s.d	$f10,$f8
  438e30:	afbc0030 	sw	gp,48(sp)
  438e34:	46009121 	cvt.d.s	$f4,$f18
  438e38:	e7a40014 	swc1	$f4,20(sp)
  438e3c:	e7a50010 	swc1	$f5,16(sp)
  438e40:	460053a1 	cvt.d.s	$f14,$f10
  438e44:	46003321 	cvt.d.s	$f12,$f6
  438e48:	afae0018 	sw	t6,24(sp)
  438e4c:	afaf001c 	sw	t7,28(sp)
  438e50:	0320f809 	jalr	t9
  438e54:	afb80020 	sw	t8,32(sp)
  438e58:	8fbf0034 	lw	ra,52(sp)
  438e5c:	8fbc0030 	lw	gp,48(sp)
  438e60:	03e00008 	jr	ra
  438e64:	27bd0038 	addiu	sp,sp,56
