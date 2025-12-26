# Function: rgb_to_hsb
# Address: 0x0043955c - 0x004395ec
# Size: 0x90 (144 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043955c <rgb_to_hsb>:
  43955c:	3c1c0fbe 	lui	gp,0xfbe
  439560:	279c45d4 	addiu	gp,gp,17876
  439564:	0399e021 	addu	gp,gp,t9
  439568:	27bdffc8 	addiu	sp,sp,-56
  43956c:	c7b10048 	lwc1	$f17,72(sp)
  439570:	c7b0004c 	lwc1	$f16,76(sp)
  439574:	e7ad0038 	swc1	$f13,56(sp)
  439578:	e7ac003c 	swc1	$f12,60(sp)
  43957c:	c7a4003c 	lwc1	$f4,60(sp)
  439580:	c7a50038 	lwc1	$f5,56(sp)
  439584:	e7af0040 	swc1	$f15,64(sp)
  439588:	e7ae0044 	swc1	$f14,68(sp)
  43958c:	c7a80044 	lwc1	$f8,68(sp)
  439590:	c7a90040 	lwc1	$f9,64(sp)
  439594:	462084a0 	cvt.s.d	$f18,$f16
  439598:	8fae0050 	lw	t6,80(sp)
  43959c:	8faf0054 	lw	t7,84(sp)
  4395a0:	8fb80058 	lw	t8,88(sp)
  4395a4:	8f9988d0 	lw	t9,-30512(gp)
  4395a8:	462021a0 	cvt.s.d	$f6,$f4
  4395ac:	afbf0034 	sw	ra,52(sp)
  4395b0:	462042a0 	cvt.s.d	$f10,$f8
  4395b4:	afbc0030 	sw	gp,48(sp)
  4395b8:	46009121 	cvt.d.s	$f4,$f18
  4395bc:	e7a40014 	swc1	$f4,20(sp)
  4395c0:	e7a50010 	swc1	$f5,16(sp)
  4395c4:	460053a1 	cvt.d.s	$f14,$f10
  4395c8:	46003321 	cvt.d.s	$f12,$f6
  4395cc:	afae0018 	sw	t6,24(sp)
  4395d0:	afaf001c 	sw	t7,28(sp)
  4395d4:	0320f809 	jalr	t9
  4395d8:	afb80020 	sw	t8,32(sp)
  4395dc:	8fbf0034 	lw	ra,52(sp)
  4395e0:	8fbc0030 	lw	gp,48(sp)
  4395e4:	03e00008 	jr	ra
  4395e8:	27bd0038 	addiu	sp,sp,56
