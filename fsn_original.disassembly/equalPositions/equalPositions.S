# Function: equalPositions
# Address: 0x0042e87c - 0x0042e9a8
# Size: 0x12c (300 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042e87c <equalPositions>:
  42e87c:	c4a40008 	lwc1	$f4,8(a1)
  42e880:	c4880008 	lwc1	$f8,8(a0)
  42e884:	460021a1 	cvt.d.s	$f6,$f4
  42e888:	460042a1 	cvt.d.s	$f10,$f8
  42e88c:	462a3032 	c.eq.d	$f6,$f10
  42e890:	00001825 	move	v1,zero
  42e894:	45000002 	bc1f	42e8a0 <equalPositions+0x24>
  42e898:	00000000 	nop
  42e89c:	24030001 	li	v1,1
  42e8a0:	1060003f 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e8a4:	00000000 	nop
  42e8a8:	c4b0000c 	lwc1	$f16,12(a1)
  42e8ac:	c484000c 	lwc1	$f4,12(a0)
  42e8b0:	460084a1 	cvt.d.s	$f18,$f16
  42e8b4:	46002221 	cvt.d.s	$f8,$f4
  42e8b8:	46289032 	c.eq.d	$f18,$f8
  42e8bc:	00001825 	move	v1,zero
  42e8c0:	45000002 	bc1f	42e8cc <equalPositions+0x50>
  42e8c4:	00000000 	nop
  42e8c8:	24030001 	li	v1,1
  42e8cc:	10600034 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e8d0:	00000000 	nop
  42e8d4:	c4a60010 	lwc1	$f6,16(a1)
  42e8d8:	c4900010 	lwc1	$f16,16(a0)
  42e8dc:	460032a1 	cvt.d.s	$f10,$f6
  42e8e0:	46008121 	cvt.d.s	$f4,$f16
  42e8e4:	46245032 	c.eq.d	$f10,$f4
  42e8e8:	00001825 	move	v1,zero
  42e8ec:	45000002 	bc1f	42e8f8 <equalPositions+0x7c>
  42e8f0:	00000000 	nop
  42e8f4:	24030001 	li	v1,1
  42e8f8:	10600029 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e8fc:	00000000 	nop
  42e900:	84ae0002 	lh	t6,2(a1)
  42e904:	848f0002 	lh	t7,2(a0)
  42e908:	00000000 	nop
  42e90c:	01cf1826 	xor	v1,t6,t7
  42e910:	2c630001 	sltiu	v1,v1,1
  42e914:	10600022 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e918:	00000000 	nop
  42e91c:	84b80000 	lh	t8,0(a1)
  42e920:	84990000 	lh	t9,0(a0)
  42e924:	00000000 	nop
  42e928:	03191826 	xor	v1,t8,t9
  42e92c:	2c630001 	sltiu	v1,v1,1
  42e930:	1060001b 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e934:	00000000 	nop
  42e938:	8ca80004 	lw	t0,4(a1)
  42e93c:	8c890004 	lw	t1,4(a0)
  42e940:	00000000 	nop
  42e944:	01091826 	xor	v1,t0,t1
  42e948:	2c630001 	sltiu	v1,v1,1
  42e94c:	10600014 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e950:	00000000 	nop
  42e954:	8caa0014 	lw	t2,20(a1)
  42e958:	8c8b0014 	lw	t3,20(a0)
  42e95c:	00000000 	nop
  42e960:	014b1826 	xor	v1,t2,t3
  42e964:	2c630001 	sltiu	v1,v1,1
  42e968:	1060000d 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e96c:	00000000 	nop
  42e970:	8cac0024 	lw	t4,36(a1)
  42e974:	8c8d0024 	lw	t5,36(a0)
  42e978:	00000000 	nop
  42e97c:	018d1826 	xor	v1,t4,t5
  42e980:	2c630001 	sltiu	v1,v1,1
  42e984:	10600006 	beqz	v1,42e9a0 <equalPositions+0x124>
  42e988:	00000000 	nop
  42e98c:	90ae0034 	lbu	t6,52(a1)
  42e990:	908f0034 	lbu	t7,52(a0)
  42e994:	00000000 	nop
  42e998:	01cf1826 	xor	v1,t6,t7
  42e99c:	2c630001 	sltiu	v1,v1,1
  42e9a0:	03e00008 	jr	ra
  42e9a4:	306200ff 	andi	v0,v1,0xff
