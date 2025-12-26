# Function: setColors__19FileIconInterpreterFiN21
# Address: 0x004359f4 - 0x00435a1c
# Size: 0x28 (40 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004359f4 <setColors__19FileIconInterpreterFiN21>:
  4359f4:	44852000 	mtc1	a1,$f4
  4359f8:	44864000 	mtc1	a2,$f8
  4359fc:	44878000 	mtc1	a3,$f16
  435a00:	468021a0 	cvt.s.w	$f6,$f4
  435a04:	468042a0 	cvt.s.w	$f10,$f8
  435a08:	e4860014 	swc1	$f6,20(a0)
  435a0c:	468084a0 	cvt.s.w	$f18,$f16
  435a10:	e48a0018 	swc1	$f10,24(a0)
  435a14:	03e00008 	jr	ra
  435a18:	e492001c 	swc1	$f18,28(a0)
