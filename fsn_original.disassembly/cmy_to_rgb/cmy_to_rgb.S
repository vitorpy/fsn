# Function: cmy_to_rgb
# Address: 0x004386e8 - 0x00438754
# Size: 0x6c (108 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004386e8 <cmy_to_rgb>:
  4386e8:	3c1c0fbe 	lui	gp,0xfbe
  4386ec:	279c5448 	addiu	gp,gp,21576
  4386f0:	0399e021 	addu	gp,gp,t9
  4386f4:	46206120 	cvt.s.d	$f4,$f12
  4386f8:	3c013ff0 	lui	at,0x3ff0
  4386fc:	44810800 	mtc1	at,$f1
  438700:	44800000 	mtc1	zero,$f0
  438704:	460021a1 	cvt.d.s	$f6,$f4
  438708:	46207420 	cvt.s.d	$f16,$f14
  43870c:	8fae0018 	lw	t6,24(sp)
  438710:	46260201 	sub.d	$f8,$f0,$f6
  438714:	462042a0 	cvt.s.d	$f10,$f8
  438718:	460084a1 	cvt.d.s	$f18,$f16
  43871c:	46320101 	sub.d	$f4,$f0,$f18
  438720:	e5ca0000 	swc1	$f10,0(t6)
  438724:	8faf001c 	lw	t7,28(sp)
  438728:	462021a0 	cvt.s.d	$f6,$f4
  43872c:	e5e60000 	swc1	$f6,0(t7)
  438730:	c7a80014 	lwc1	$f8,20(sp)
  438734:	c7a90010 	lwc1	$f9,16(sp)
  438738:	8fb80020 	lw	t8,32(sp)
  43873c:	462042a0 	cvt.s.d	$f10,$f8
  438740:	46005421 	cvt.d.s	$f16,$f10
  438744:	46300481 	sub.d	$f18,$f0,$f16
  438748:	46209120 	cvt.s.d	$f4,$f18
  43874c:	03e00008 	jr	ra
  438750:	e7040000 	swc1	$f4,0(t8)
