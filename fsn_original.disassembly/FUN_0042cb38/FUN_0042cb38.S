# Function: FUN_0042cb38
# Address: 0x0042cb38 - 0x0042cbb8
# Size: 0x80 (128 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042cb38 <showPreferencePanel+0x1150>:
  42cb38:	3c1c0fbf 	lui	gp,0xfbf
  42cb3c:	279c0ff8 	addiu	gp,gp,4088
  42cb40:	0399e021 	addu	gp,gp,t9
  42cb44:	27bdffe0 	addiu	sp,sp,-32
  42cb48:	afbf001c 	sw	ra,28(sp)
  42cb4c:	afbc0018 	sw	gp,24(sp)
  42cb50:	afa40020 	sw	a0,32(sp)
  42cb54:	8caf0014 	lw	t7,20(a1)
  42cb58:	8cce0008 	lw	t6,8(a2)
  42cb5c:	8f99806c 	lw	t9,-32660(gp)
  42cb60:	448e2000 	mtc1	t6,$f4
  42cb64:	000fc080 	sll	t8,t7,0x2
  42cb68:	273994f0 	addiu	t9,t9,-27408
  42cb6c:	03194021 	addu	t0,t8,t9
  42cb70:	468021a1 	cvt.d.w	$f6,$f4
  42cb74:	c5080000 	lwc1	$f8,0(t0)
  42cb78:	8ca90004 	lw	t1,4(a1)
  42cb7c:	460042a1 	cvt.d.s	$f10,$f8
  42cb80:	00000000 	nop
  42cb84:	462a3403 	div.d	$f16,$f6,$f10
  42cb88:	8f998020 	lw	t9,-32736(gp)
  42cb8c:	00000000 	nop
  42cb90:	2739c970 	addiu	t9,t9,-13968
  42cb94:	462084a0 	cvt.s.d	$f18,$f16
  42cb98:	e5320000 	swc1	$f18,0(t1)
  42cb9c:	8ca40008 	lw	a0,8(a1)
  42cba0:	0320f809 	jalr	t9
  42cba4:	00000000 	nop
  42cba8:	8fbf001c 	lw	ra,28(sp)
  42cbac:	8fbc0018 	lw	gp,24(sp)
  42cbb0:	03e00008 	jr	ra
  42cbb4:	27bd0020 	addiu	sp,sp,32
