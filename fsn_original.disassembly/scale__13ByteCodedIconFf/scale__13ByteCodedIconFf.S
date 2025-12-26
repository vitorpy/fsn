# Function: scale__13ByteCodedIconFf
# Address: 0x004353a0 - 0x00435438
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004353a0 <scale__13ByteCodedIconFf>:
  4353a0:	44856000 	mtc1	a1,$f12
  4353a4:	c4840020 	lwc1	$f4,32(a0)
  4353a8:	c4880024 	lwc1	$f8,36(a0)
  4353ac:	460c2182 	mul.s	$f6,$f4,$f12
  4353b0:	c4900028 	lwc1	$f16,40(a0)
  4353b4:	c484002c 	lwc1	$f4,44(a0)
  4353b8:	460c4282 	mul.s	$f10,$f8,$f12
  4353bc:	e4860020 	swc1	$f6,32(a0)
  4353c0:	c4880030 	lwc1	$f8,48(a0)
  4353c4:	460c8482 	mul.s	$f18,$f16,$f12
  4353c8:	e48a0024 	swc1	$f10,36(a0)
  4353cc:	c4900034 	lwc1	$f16,52(a0)
  4353d0:	460c2182 	mul.s	$f6,$f4,$f12
  4353d4:	e4920028 	swc1	$f18,40(a0)
  4353d8:	c4840038 	lwc1	$f4,56(a0)
  4353dc:	460c4282 	mul.s	$f10,$f8,$f12
  4353e0:	e486002c 	swc1	$f6,44(a0)
  4353e4:	c488003c 	lwc1	$f8,60(a0)
  4353e8:	460c8482 	mul.s	$f18,$f16,$f12
  4353ec:	e48a0030 	swc1	$f10,48(a0)
  4353f0:	c4900040 	lwc1	$f16,64(a0)
  4353f4:	460c2182 	mul.s	$f6,$f4,$f12
  4353f8:	e4920034 	swc1	$f18,52(a0)
  4353fc:	c4840044 	lwc1	$f4,68(a0)
  435400:	460c4282 	mul.s	$f10,$f8,$f12
  435404:	e4860038 	swc1	$f6,56(a0)
  435408:	c4880048 	lwc1	$f8,72(a0)
  43540c:	460c8482 	mul.s	$f18,$f16,$f12
  435410:	e48a003c 	swc1	$f10,60(a0)
  435414:	c490004c 	lwc1	$f16,76(a0)
  435418:	460c2182 	mul.s	$f6,$f4,$f12
  43541c:	e4920040 	swc1	$f18,64(a0)
  435420:	460c4282 	mul.s	$f10,$f8,$f12
  435424:	e4860044 	swc1	$f6,68(a0)
  435428:	460c8482 	mul.s	$f18,$f16,$f12
  43542c:	e48a0048 	swc1	$f10,72(a0)
  435430:	03e00008 	jr	ra
  435434:	e492004c 	swc1	$f18,76(a0)
