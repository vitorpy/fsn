# Function: rgb_to_cmy
# Address: 0x00438f68 - 0x00438fd4
# Size: 0x6c (108 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438f68 <rgb_to_cmy>:
  438f68:	3c1c0fbe 	lui	gp,0xfbe
  438f6c:	279c4bc8 	addiu	gp,gp,19400
  438f70:	0399e021 	addu	gp,gp,t9
  438f74:	46206120 	cvt.s.d	$f4,$f12
  438f78:	3c013ff0 	lui	at,0x3ff0
  438f7c:	44810800 	mtc1	at,$f1
  438f80:	44800000 	mtc1	zero,$f0
  438f84:	460021a1 	cvt.d.s	$f6,$f4
  438f88:	46207420 	cvt.s.d	$f16,$f14
  438f8c:	8fae0018 	lw	t6,24(sp)
  438f90:	46260201 	sub.d	$f8,$f0,$f6
  438f94:	462042a0 	cvt.s.d	$f10,$f8
  438f98:	460084a1 	cvt.d.s	$f18,$f16
  438f9c:	46320101 	sub.d	$f4,$f0,$f18
  438fa0:	e5ca0000 	swc1	$f10,0(t6)
  438fa4:	8faf001c 	lw	t7,28(sp)
  438fa8:	462021a0 	cvt.s.d	$f6,$f4
  438fac:	e5e60000 	swc1	$f6,0(t7)
  438fb0:	c7a80014 	lwc1	$f8,20(sp)
  438fb4:	c7a90010 	lwc1	$f9,16(sp)
  438fb8:	8fb80020 	lw	t8,32(sp)
  438fbc:	462042a0 	cvt.s.d	$f10,$f8
  438fc0:	46005421 	cvt.d.s	$f16,$f10
  438fc4:	46300481 	sub.d	$f18,$f0,$f16
  438fc8:	46209120 	cvt.s.d	$f4,$f18
  438fcc:	03e00008 	jr	ra
  438fd0:	e7040000 	swc1	$f4,0(t8)
