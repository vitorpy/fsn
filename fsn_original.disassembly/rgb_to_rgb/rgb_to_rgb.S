# Function: rgb_to_rgb
# Address: 0x00438f34 - 0x00438f68
# Size: 0x34 (52 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438f34 <rgb_to_rgb>:
  438f34:	46206120 	cvt.s.d	$f4,$f12
  438f38:	8fae0018 	lw	t6,24(sp)
  438f3c:	462071a0 	cvt.s.d	$f6,$f14
  438f40:	e5c40000 	swc1	$f4,0(t6)
  438f44:	8faf001c 	lw	t7,28(sp)
  438f48:	00000000 	nop
  438f4c:	e5e60000 	swc1	$f6,0(t7)
  438f50:	c7a80014 	lwc1	$f8,20(sp)
  438f54:	c7a90010 	lwc1	$f9,16(sp)
  438f58:	8fb80020 	lw	t8,32(sp)
  438f5c:	462042a0 	cvt.s.d	$f10,$f8
  438f60:	03e00008 	jr	ra
  438f64:	e70a0000 	swc1	$f10,0(t8)
