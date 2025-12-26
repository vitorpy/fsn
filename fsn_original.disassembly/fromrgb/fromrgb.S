# Function: fromrgb
# Address: 0x004398e0 - 0x00439974
# Size: 0x94 (148 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004398e0 <fromrgb>:
  4398e0:	3c1c0fbe 	lui	gp,0xfbe
  4398e4:	279c4250 	addiu	gp,gp,16976
  4398e8:	0399e021 	addu	gp,gp,t9
  4398ec:	27bdffc8 	addiu	sp,sp,-56
  4398f0:	c7b10048 	lwc1	$f17,72(sp)
  4398f4:	c7b0004c 	lwc1	$f16,76(sp)
  4398f8:	e7ad0038 	swc1	$f13,56(sp)
  4398fc:	e7ac003c 	swc1	$f12,60(sp)
  439900:	c7a4003c 	lwc1	$f4,60(sp)
  439904:	c7a50038 	lwc1	$f5,56(sp)
  439908:	8f99806c 	lw	t9,-32660(gp)
  43990c:	e7af0040 	swc1	$f15,64(sp)
  439910:	e7ae0044 	swc1	$f14,68(sp)
  439914:	c7a80044 	lwc1	$f8,68(sp)
  439918:	c7a90040 	lwc1	$f9,64(sp)
  43991c:	462084a0 	cvt.s.d	$f18,$f16
  439920:	8fae0050 	lw	t6,80(sp)
  439924:	8faf0054 	lw	t7,84(sp)
  439928:	8fb80058 	lw	t8,88(sp)
  43992c:	462021a0 	cvt.s.d	$f6,$f4
  439930:	8f399e34 	lw	t9,-25036(t9)
  439934:	462042a0 	cvt.s.d	$f10,$f8
  439938:	afbf0034 	sw	ra,52(sp)
  43993c:	46009121 	cvt.d.s	$f4,$f18
  439940:	afbc0030 	sw	gp,48(sp)
  439944:	e7a40014 	swc1	$f4,20(sp)
  439948:	e7a50010 	swc1	$f5,16(sp)
  43994c:	460053a1 	cvt.d.s	$f14,$f10
  439950:	46003321 	cvt.d.s	$f12,$f6
  439954:	afae0018 	sw	t6,24(sp)
  439958:	afaf001c 	sw	t7,28(sp)
  43995c:	0320f809 	jalr	t9
  439960:	afb80020 	sw	t8,32(sp)
  439964:	8fbf0034 	lw	ra,52(sp)
  439968:	8fbc0030 	lw	gp,48(sp)
  43996c:	03e00008 	jr	ra
  439970:	27bd0038 	addiu	sp,sp,56
