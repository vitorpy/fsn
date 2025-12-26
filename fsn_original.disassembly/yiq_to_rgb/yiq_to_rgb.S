# Function: yiq_to_rgb
# Address: 0x00438e68 - 0x00438f34
# Size: 0xcc (204 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438e68 <yiq_to_rgb>:
  438e68:	3c1c0fbe 	lui	gp,0xfbe
  438e6c:	279c4cc8 	addiu	gp,gp,19656
  438e70:	0399e021 	addu	gp,gp,t9
  438e74:	8f81805c 	lw	at,-32676(gp)
  438e78:	c7a90010 	lwc1	$f9,16(sp)
  438e7c:	c7a80014 	lwc1	$f8,20(sp)
  438e80:	46206120 	cvt.s.d	$f4,$f12
  438e84:	c4335a88 	lwc1	$f19,23176(at)
  438e88:	462071a0 	cvt.s.d	$f6,$f14
  438e8c:	c4325a8c 	lwc1	$f18,23180(at)
  438e90:	8f81805c 	lw	at,-32676(gp)
  438e94:	462042a0 	cvt.s.d	$f10,$f8
  438e98:	c4285a94 	lwc1	$f8,23188(at)
  438e9c:	460030a1 	cvt.d.s	$f2,$f6
  438ea0:	46002021 	cvt.d.s	$f0,$f4
  438ea4:	46229102 	mul.d	$f4,$f18,$f2
  438ea8:	c4295a90 	lwc1	$f9,23184(at)
  438eac:	46005421 	cvt.d.s	$f16,$f10
  438eb0:	8fae0018 	lw	t6,24(sp)
  438eb4:	8f81805c 	lw	at,-32676(gp)
  438eb8:	46304282 	mul.d	$f10,$f8,$f16
  438ebc:	46240180 	add.d	$f6,$f0,$f4
  438ec0:	462a3480 	add.d	$f18,$f6,$f10
  438ec4:	46209120 	cvt.s.d	$f4,$f18
  438ec8:	e5c40000 	swc1	$f4,0(t6)
  438ecc:	c4285a9c 	lwc1	$f8,23196(at)
  438ed0:	c4295a98 	lwc1	$f9,23192(at)
  438ed4:	8f81805c 	lw	at,-32676(gp)
  438ed8:	46224182 	mul.d	$f6,$f8,$f2
  438edc:	c4335aa0 	lwc1	$f19,23200(at)
  438ee0:	c4325aa4 	lwc1	$f18,23204(at)
  438ee4:	8faf001c 	lw	t7,28(sp)
  438ee8:	8f81805c 	lw	at,-32676(gp)
  438eec:	46309102 	mul.d	$f4,$f18,$f16
  438ef0:	46260280 	add.d	$f10,$f0,$f6
  438ef4:	46245200 	add.d	$f8,$f10,$f4
  438ef8:	462041a0 	cvt.s.d	$f6,$f8
  438efc:	e5e60000 	swc1	$f6,0(t7)
  438f00:	c4325aac 	lwc1	$f18,23212(at)
  438f04:	c4335aa8 	lwc1	$f19,23208(at)
  438f08:	8f81805c 	lw	at,-32676(gp)
  438f0c:	46229282 	mul.d	$f10,$f18,$f2
  438f10:	c4295ab0 	lwc1	$f9,23216(at)
  438f14:	c4285ab4 	lwc1	$f8,23220(at)
  438f18:	8fb80020 	lw	t8,32(sp)
  438f1c:	46304182 	mul.d	$f6,$f8,$f16
  438f20:	462a0100 	add.d	$f4,$f0,$f10
  438f24:	46262480 	add.d	$f18,$f4,$f6
  438f28:	462092a0 	cvt.s.d	$f10,$f18
  438f2c:	03e00008 	jr	ra
  438f30:	e70a0000 	swc1	$f10,0(t8)
