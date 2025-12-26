# Function: rgbcomplement
# Address: 0x00439974 - 0x00439a7c
# Size: 0x108 (264 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00439974 <rgbcomplement>:
  439974:	3c1c0fbe 	lui	gp,0xfbe
  439978:	279c41bc 	addiu	gp,gp,16828
  43997c:	0399e021 	addu	gp,gp,t9
  439980:	27bdffa8 	addiu	sp,sp,-88
  439984:	e7ad0058 	swc1	$f13,88(sp)
  439988:	e7ac005c 	swc1	$f12,92(sp)
  43998c:	c7a4005c 	lwc1	$f4,92(sp)
  439990:	c7a50058 	lwc1	$f5,88(sp)
  439994:	c7b30068 	lwc1	$f19,104(sp)
  439998:	c7b2006c 	lwc1	$f18,108(sp)
  43999c:	462021a0 	cvt.s.d	$f6,$f4
  4399a0:	e7af0060 	swc1	$f15,96(sp)
  4399a4:	e7ae0064 	swc1	$f14,100(sp)
  4399a8:	c7a80064 	lwc1	$f8,100(sp)
  4399ac:	c7a90060 	lwc1	$f9,96(sp)
  4399b0:	46209120 	cvt.s.d	$f4,$f18
  4399b4:	8f9988d0 	lw	t9,-30512(gp)
  4399b8:	46003321 	cvt.d.s	$f12,$f6
  4399bc:	462042a0 	cvt.s.d	$f10,$f8
  4399c0:	afbf0034 	sw	ra,52(sp)
  4399c4:	460021a1 	cvt.d.s	$f6,$f4
  4399c8:	27ae0048 	addiu	t6,sp,72
  4399cc:	27af0044 	addiu	t7,sp,68
  4399d0:	27b80040 	addiu	t8,sp,64
  4399d4:	afbc0030 	sw	gp,48(sp)
  4399d8:	afb80020 	sw	t8,32(sp)
  4399dc:	afaf001c 	sw	t7,28(sp)
  4399e0:	afae0018 	sw	t6,24(sp)
  4399e4:	e7a60014 	swc1	$f6,20(sp)
  4399e8:	e7a70010 	swc1	$f7,16(sp)
  4399ec:	0320f809 	jalr	t9
  4399f0:	460053a1 	cvt.d.s	$f14,$f10
  4399f4:	3c013ff0 	lui	at,0x3ff0
  4399f8:	44818800 	mtc1	at,$f17
  4399fc:	c7a20040 	lwc1	$f2,64(sp)
  439a00:	3c013fe0 	lui	at,0x3fe0
  439a04:	44815800 	mtc1	at,$f11
  439a08:	44805000 	mtc1	zero,$f10
  439a0c:	46001221 	cvt.d.s	$f8,$f2
  439a10:	462a4480 	add.d	$f18,$f8,$f10
  439a14:	44808000 	mtc1	zero,$f16
  439a18:	462090a0 	cvt.s.d	$f2,$f18
  439a1c:	8fb90070 	lw	t9,112(sp)
  439a20:	46001021 	cvt.d.s	$f0,$f2
  439a24:	46300101 	sub.d	$f4,$f0,$f16
  439a28:	8fbc0030 	lw	gp,48(sp)
  439a2c:	462020a0 	cvt.s.d	$f2,$f4
  439a30:	afb90018 	sw	t9,24(sp)
  439a34:	c7a80044 	lwc1	$f8,68(sp)
  439a38:	c7a60048 	lwc1	$f6,72(sp)
  439a3c:	8fa80074 	lw	t0,116(sp)
  439a40:	8fa90078 	lw	t1,120(sp)
  439a44:	8f9988bc 	lw	t9,-30532(gp)
  439a48:	460012a1 	cvt.d.s	$f10,$f2
  439a4c:	e7aa0014 	swc1	$f10,20(sp)
  439a50:	e7ab0010 	swc1	$f11,16(sp)
  439a54:	e7a20040 	swc1	$f2,64(sp)
  439a58:	460043a1 	cvt.d.s	$f14,$f8
  439a5c:	46003321 	cvt.d.s	$f12,$f6
  439a60:	afa8001c 	sw	t0,28(sp)
  439a64:	0320f809 	jalr	t9
  439a68:	afa90020 	sw	t1,32(sp)
  439a6c:	8fbf0034 	lw	ra,52(sp)
  439a70:	8fbc0030 	lw	gp,48(sp)
  439a74:	03e00008 	jr	ra
  439a78:	27bd0058 	addiu	sp,sp,88
