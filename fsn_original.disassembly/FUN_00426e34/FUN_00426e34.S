# Function: FUN_00426e34
# Address: 0x00426e34 - 0x00426ee8
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00426e34 <get_warp_entry+0xc>:
  426e34:	c484003c 	lwc1	$f4,60(a0)
  426e38:	3c014000 	lui	at,0x4000
  426e3c:	44810800 	mtc1	at,$f1
  426e40:	44800000 	mtc1	zero,$f0
  426e44:	460021a1 	cvt.d.s	$f6,$f4
  426e48:	00000000 	nop
  426e4c:	46203203 	div.d	$f8,$f6,$f0
  426e50:	8f82897c 	lw	v0,-30340(gp)
  426e54:	8f838a24 	lw	v1,-30172(gp)
  426e58:	8c4e0000 	lw	t6,0(v0)
  426e5c:	c46a0088 	lwc1	$f10,136(v1)
  426e60:	c5c40014 	lwc1	$f4,20(t6)
  426e64:	46005421 	cvt.d.s	$f16,$f10
  426e68:	460021a1 	cvt.d.s	$f6,$f4
  426e6c:	46304480 	add.d	$f18,$f8,$f16
  426e70:	c4880034 	lwc1	$f8,52(a0)
  426e74:	46323282 	mul.d	$f10,$f6,$f18
  426e78:	46004421 	cvt.d.s	$f16,$f8
  426e7c:	462a8101 	sub.d	$f4,$f16,$f10
  426e80:	462021a0 	cvt.s.d	$f6,$f4
  426e84:	e4a60000 	swc1	$f6,0(a1)
  426e88:	c492003c 	lwc1	$f18,60(a0)
  426e8c:	8c4f0000 	lw	t7,0(v0)
  426e90:	46009221 	cvt.d.s	$f8,$f18
  426e94:	00000000 	nop
  426e98:	46204403 	div.d	$f16,$f8,$f0
  426e9c:	c46a0088 	lwc1	$f10,136(v1)
  426ea0:	c5f20018 	lwc1	$f18,24(t7)
  426ea4:	46005121 	cvt.d.s	$f4,$f10
  426ea8:	46009221 	cvt.d.s	$f8,$f18
  426eac:	46248180 	add.d	$f6,$f16,$f4
  426eb0:	c4900038 	lwc1	$f16,56(a0)
  426eb4:	46264282 	mul.d	$f10,$f8,$f6
  426eb8:	46008121 	cvt.d.s	$f4,$f16
  426ebc:	462a2481 	sub.d	$f18,$f4,$f10
  426ec0:	46209220 	cvt.s.d	$f8,$f18
  426ec4:	e4c80000 	swc1	$f8,0(a2)
  426ec8:	c4840024 	lwc1	$f4,36(a0)
  426ecc:	c4660084 	lwc1	$f6,132(v1)
  426ed0:	460022a1 	cvt.d.s	$f10,$f4
  426ed4:	46003421 	cvt.d.s	$f16,$f6
  426ed8:	462a8480 	add.d	$f18,$f16,$f10
  426edc:	46209220 	cvt.s.d	$f8,$f18
  426ee0:	03e00008 	jr	ra
  426ee4:	e4e80000 	swc1	$f8,0(a3)
