# Function: setState__19FileIconInterpreterFiN41
# Address: 0x0043599c - 0x004359f4
# Size: 0x58 (88 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043599c <setState__19FileIconInterpreterFiN41>:
  43599c:	44852000 	mtc1	a1,$f4
  4359a0:	44864000 	mtc1	a2,$f8
  4359a4:	44878000 	mtc1	a3,$f16
  4359a8:	468021a0 	cvt.s.w	$f6,$f4
  4359ac:	468042a0 	cvt.s.w	$f10,$f8
  4359b0:	e4860000 	swc1	$f6,0(a0)
  4359b4:	468084a0 	cvt.s.w	$f18,$f16
  4359b8:	e48a0004 	swc1	$f10,4(a0)
  4359bc:	e4920008 	swc1	$f18,8(a0)
  4359c0:	8fae0010 	lw	t6,16(sp)
  4359c4:	00000000 	nop
  4359c8:	448e2000 	mtc1	t6,$f4
  4359cc:	00000000 	nop
  4359d0:	468021a0 	cvt.s.w	$f6,$f4
  4359d4:	e486000c 	swc1	$f6,12(a0)
  4359d8:	8faf0014 	lw	t7,20(sp)
  4359dc:	00000000 	nop
  4359e0:	448f4000 	mtc1	t7,$f8
  4359e4:	00000000 	nop
  4359e8:	468042a0 	cvt.s.w	$f10,$f8
  4359ec:	03e00008 	jr	ra
  4359f0:	e48a0010 	swc1	$f10,16(a0)
