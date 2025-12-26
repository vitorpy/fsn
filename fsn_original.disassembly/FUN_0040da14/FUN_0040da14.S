# Function: FUN_0040da14
# Address: 0x0040da14 - 0x0040da94
# Size: 0x80 (128 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040da14 <setScales+0x21c>:
  40da14:	3c1c0fc1 	lui	gp,0xfc1
  40da18:	279c011c 	addiu	gp,gp,284
  40da1c:	0399e021 	addu	gp,gp,t9
  40da20:	27bdffe0 	addiu	sp,sp,-32
  40da24:	afbf001c 	sw	ra,28(sp)
  40da28:	afbc0018 	sw	gp,24(sp)
  40da2c:	afa40020 	sw	a0,32(sp)
  40da30:	afa50024 	sw	a1,36(sp)
  40da34:	8cce0008 	lw	t6,8(a2)
  40da38:	3c014024 	lui	at,0x4024
  40da3c:	448e2000 	mtc1	t6,$f4
  40da40:	44815800 	mtc1	at,$f11
  40da44:	468021a0 	cvt.s.w	$f6,$f4
  40da48:	44805000 	mtc1	zero,$f10
  40da4c:	8f8f897c 	lw	t7,-30340(gp)
  40da50:	46003221 	cvt.d.s	$f8,$f6
  40da54:	00000000 	nop
  40da58:	462a4403 	div.d	$f16,$f8,$f10
  40da5c:	8def0000 	lw	t7,0(t7)
  40da60:	462080a0 	cvt.s.d	$f2,$f16
  40da64:	46001021 	cvt.d.s	$f0,$f2
  40da68:	46200482 	mul.d	$f18,$f0,$f0
  40da6c:	46209120 	cvt.s.d	$f4,$f18
  40da70:	e5e40008 	swc1	$f4,8(t7)
  40da74:	8f998534 	lw	t9,-31436(gp)
  40da78:	00000000 	nop
  40da7c:	0320f809 	jalr	t9
  40da80:	00000000 	nop
  40da84:	8fbf001c 	lw	ra,28(sp)
  40da88:	8fbc0018 	lw	gp,24(sp)
  40da8c:	03e00008 	jr	ra
  40da90:	27bd0020 	addiu	sp,sp,32
