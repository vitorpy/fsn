# Function: FUN_00438754
# Address: 0x00438754 - 0x004387ec
# Size: 0x98 (152 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00438754 <cmy_to_rgb+0x6c>:
  438754:	3c1c0fbe 	lui	gp,0xfbe
  438758:	279c53dc 	addiu	gp,gp,21468
  43875c:	0399e021 	addu	gp,gp,t9
  438760:	c7a50010 	lwc1	$f5,16(sp)
  438764:	c7a40014 	lwc1	$f4,20(sp)
  438768:	3c0143b4 	lui	at,0x43b4
  43876c:	44818000 	mtc1	at,$f16
  438770:	46202020 	cvt.s.d	$f0,$f4
  438774:	44803000 	mtc1	zero,$f6
  438778:	4600803c 	c.lt.s	$f16,$f0
  43877c:	46000086 	mov.s	$f2,$f0
  438780:	45000002 	bc1f	43878c <cmy_to_rgb+0xa4>
  438784:	3c014270 	lui	at,0x4270
  438788:	46100081 	sub.s	$f2,$f0,$f16
  43878c:	4606103c 	c.lt.s	$f2,$f6
  438790:	44814000 	mtc1	at,$f8
  438794:	45000002 	bc1f	4387a0 <cmy_to_rgb+0xb8>
  438798:	3c014334 	lui	at,0x4334
  43879c:	46101080 	add.s	$f2,$f2,$f16
  4387a0:	4608103c 	c.lt.s	$f2,$f8
  4387a4:	00000000 	nop
  4387a8:	45000010 	bc1f	4387ec <cmy_to_rgb+0x104>
  4387ac:	00000000 	nop
  4387b0:	3c01404e 	lui	at,0x404e
  4387b4:	44812800 	mtc1	at,$f5
  4387b8:	44802000 	mtc1	zero,$f4
  4387bc:	460012a1 	cvt.d.s	$f10,$f2
  4387c0:	00000000 	nop
  4387c4:	46245183 	div.d	$f6,$f10,$f4
  4387c8:	46206420 	cvt.s.d	$f16,$f12
  4387cc:	46207220 	cvt.s.d	$f8,$f14
  4387d0:	46104281 	sub.s	$f10,$f8,$f16
  4387d4:	46005121 	cvt.d.s	$f4,$f10
  4387d8:	460082a1 	cvt.d.s	$f10,$f16
  4387dc:	46262202 	mul.d	$f8,$f4,$f6
  4387e0:	46285100 	add.d	$f4,$f10,$f8
  4387e4:	03e00008 	jr	ra
  4387e8:	46202020 	cvt.s.d	$f0,$f4
