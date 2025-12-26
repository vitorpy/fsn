# Function: torgb
# Address: 0x0043984c - 0x004398e0
# Size: 0x94 (148 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043984c <torgb>:
  43984c:	3c1c0fbe 	lui	gp,0xfbe
  439850:	279c42e4 	addiu	gp,gp,17124
  439854:	0399e021 	addu	gp,gp,t9
  439858:	27bdffc8 	addiu	sp,sp,-56
  43985c:	c7b10048 	lwc1	$f17,72(sp)
  439860:	c7b0004c 	lwc1	$f16,76(sp)
  439864:	e7ad0038 	swc1	$f13,56(sp)
  439868:	e7ac003c 	swc1	$f12,60(sp)
  43986c:	c7a4003c 	lwc1	$f4,60(sp)
  439870:	c7a50038 	lwc1	$f5,56(sp)
  439874:	8f99806c 	lw	t9,-32660(gp)
  439878:	e7af0040 	swc1	$f15,64(sp)
  43987c:	e7ae0044 	swc1	$f14,68(sp)
  439880:	c7a80044 	lwc1	$f8,68(sp)
  439884:	c7a90040 	lwc1	$f9,64(sp)
  439888:	462084a0 	cvt.s.d	$f18,$f16
  43988c:	8fae0050 	lw	t6,80(sp)
  439890:	8faf0054 	lw	t7,84(sp)
  439894:	8fb80058 	lw	t8,88(sp)
  439898:	462021a0 	cvt.s.d	$f6,$f4
  43989c:	8f399e30 	lw	t9,-25040(t9)
  4398a0:	462042a0 	cvt.s.d	$f10,$f8
  4398a4:	afbf0034 	sw	ra,52(sp)
  4398a8:	46009121 	cvt.d.s	$f4,$f18
  4398ac:	afbc0030 	sw	gp,48(sp)
  4398b0:	e7a40014 	swc1	$f4,20(sp)
  4398b4:	e7a50010 	swc1	$f5,16(sp)
  4398b8:	460053a1 	cvt.d.s	$f14,$f10
  4398bc:	46003321 	cvt.d.s	$f12,$f6
  4398c0:	afae0018 	sw	t6,24(sp)
  4398c4:	afaf001c 	sw	t7,28(sp)
  4398c8:	0320f809 	jalr	t9
  4398cc:	afb80020 	sw	t8,32(sp)
  4398d0:	8fbf0034 	lw	ra,52(sp)
  4398d4:	8fbc0030 	lw	gp,48(sp)
  4398d8:	03e00008 	jr	ra
  4398dc:	27bd0038 	addiu	sp,sp,56
