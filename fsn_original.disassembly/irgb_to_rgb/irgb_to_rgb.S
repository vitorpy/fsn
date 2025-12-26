# Function: irgb_to_rgb
# Address: 0x00438688 - 0x004386e8
# Size: 0x60 (96 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438688 <irgb_to_rgb>:
  438688:	3c1c0fbe 	lui	gp,0xfbe
  43868c:	279c54a8 	addiu	gp,gp,21672
  438690:	0399e021 	addu	gp,gp,t9
  438694:	8f81805c 	lw	at,-32676(gp)
  438698:	44842000 	mtc1	a0,$f4
  43869c:	c4215a58 	lwc1	$f1,23128(at)
  4386a0:	468021a1 	cvt.d.w	$f6,$f4
  4386a4:	c4205a5c 	lwc1	$f0,23132(at)
  4386a8:	44858000 	mtc1	a1,$f16
  4386ac:	46203203 	div.d	$f8,$f6,$f0
  4386b0:	468084a1 	cvt.d.w	$f18,$f16
  4386b4:	462042a0 	cvt.s.d	$f10,$f8
  4386b8:	44864000 	mtc1	a2,$f8
  4386bc:	46209103 	div.d	$f4,$f18,$f0
  4386c0:	e4ea0000 	swc1	$f10,0(a3)
  4386c4:	468042a1 	cvt.d.w	$f10,$f8
  4386c8:	8fae0010 	lw	t6,16(sp)
  4386cc:	46205403 	div.d	$f16,$f10,$f0
  4386d0:	462021a0 	cvt.s.d	$f6,$f4
  4386d4:	e5c60000 	swc1	$f6,0(t6)
  4386d8:	8faf0014 	lw	t7,20(sp)
  4386dc:	462084a0 	cvt.s.d	$f18,$f16
  4386e0:	03e00008 	jr	ra
  4386e4:	e5f20000 	swc1	$f18,0(t7)
