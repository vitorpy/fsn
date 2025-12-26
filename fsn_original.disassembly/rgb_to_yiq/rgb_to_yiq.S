# Function: rgb_to_yiq
# Address: 0x004395ec - 0x004396ec
# Size: 0x100 (256 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004395ec <rgb_to_yiq>:
  4395ec:	3c1c0fbe 	lui	gp,0xfbe
  4395f0:	279c4544 	addiu	gp,gp,17732
  4395f4:	0399e021 	addu	gp,gp,t9
  4395f8:	8f81805c 	lw	at,-32676(gp)
  4395fc:	46206120 	cvt.s.d	$f4,$f12
  439600:	c4335ae0 	lwc1	$f19,23264(at)
  439604:	c4325ae4 	lwc1	$f18,23268(at)
  439608:	8f81805c 	lw	at,-32676(gp)
  43960c:	462071a0 	cvt.s.d	$f6,$f14
  439610:	c7a90010 	lwc1	$f9,16(sp)
  439614:	460030a1 	cvt.d.s	$f2,$f6
  439618:	46002021 	cvt.d.s	$f0,$f4
  43961c:	46320102 	mul.d	$f4,$f0,$f18
  439620:	c7a80014 	lwc1	$f8,20(sp)
  439624:	c4265aec 	lwc1	$f6,23276(at)
  439628:	c4275ae8 	lwc1	$f7,23272(at)
  43962c:	8f81805c 	lw	at,-32676(gp)
  439630:	462042a0 	cvt.s.d	$f10,$f8
  439634:	c4335af0 	lwc1	$f19,23280(at)
  439638:	46223202 	mul.d	$f8,$f6,$f2
  43963c:	c4325af4 	lwc1	$f18,23284(at)
  439640:	46005421 	cvt.d.s	$f16,$f10
  439644:	8fae0018 	lw	t6,24(sp)
  439648:	8f81805c 	lw	at,-32676(gp)
  43964c:	46309182 	mul.d	$f6,$f18,$f16
  439650:	46282280 	add.d	$f10,$f4,$f8
  439654:	46265100 	add.d	$f4,$f10,$f6
  439658:	46202220 	cvt.s.d	$f8,$f4
  43965c:	e5c80000 	swc1	$f8,0(t6)
  439660:	c4325afc 	lwc1	$f18,23292(at)
  439664:	c4335af8 	lwc1	$f19,23288(at)
  439668:	8f81805c 	lw	at,-32676(gp)
  43966c:	46320282 	mul.d	$f10,$f0,$f18
  439670:	c4275b00 	lwc1	$f7,23296(at)
  439674:	c4265b04 	lwc1	$f6,23300(at)
  439678:	8f81805c 	lw	at,-32676(gp)
  43967c:	8faf001c 	lw	t7,28(sp)
  439680:	46223102 	mul.d	$f4,$f6,$f2
  439684:	c4335b08 	lwc1	$f19,23304(at)
  439688:	c4325b0c 	lwc1	$f18,23308(at)
  43968c:	8f81805c 	lw	at,-32676(gp)
  439690:	46309182 	mul.d	$f6,$f18,$f16
  439694:	46245201 	sub.d	$f8,$f10,$f4
  439698:	46264281 	sub.d	$f10,$f8,$f6
  43969c:	46205120 	cvt.s.d	$f4,$f10
  4396a0:	e5e40000 	swc1	$f4,0(t7)
  4396a4:	c4325b14 	lwc1	$f18,23316(at)
  4396a8:	c4335b10 	lwc1	$f19,23312(at)
  4396ac:	8f81805c 	lw	at,-32676(gp)
  4396b0:	46320202 	mul.d	$f8,$f0,$f18
  4396b4:	c4275b18 	lwc1	$f7,23320(at)
  4396b8:	c4265b1c 	lwc1	$f6,23324(at)
  4396bc:	8f81805c 	lw	at,-32676(gp)
  4396c0:	8fb80020 	lw	t8,32(sp)
  4396c4:	46223282 	mul.d	$f10,$f6,$f2
  4396c8:	c4335b20 	lwc1	$f19,23328(at)
  4396cc:	c4325b24 	lwc1	$f18,23332(at)
  4396d0:	00000000 	nop
  4396d4:	46309182 	mul.d	$f6,$f18,$f16
  4396d8:	462a4101 	sub.d	$f4,$f8,$f10
  4396dc:	46262200 	add.d	$f8,$f4,$f6
  4396e0:	462042a0 	cvt.s.d	$f10,$f8
  4396e4:	03e00008 	jr	ra
  4396e8:	e70a0000 	swc1	$f10,0(t8)
