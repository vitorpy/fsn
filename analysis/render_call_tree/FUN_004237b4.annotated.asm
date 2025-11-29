# Disassembly of FUN_004237b4
# Address: 0x004237b4
# End: 0x00423b30
# Size: 0x37c (892 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004237b4 <draw_file_pointers+0xc>:
  4237b4:	27bdffd8 	addiu	sp,sp,-40
  4237b8:	afbf001c 	sw	ra,28(sp)
  4237bc:	afbc0018 	sw	gp,24(sp)
  4237c0:	afa5002c 	sw	a1,44(sp)
  4237c4:	8c820010 	lw	v0,16(a0)
  4237c8:	8f88806c 	lw	t0,-32660(gp)  # DAT_10010000
  4237cc:	00057880 	sll	t7,a1,0x2
  4237d0:	0006c880 	sll	t9,a2,0x2
  4237d4:	004fc021 	addu	t8,v0,t7
  4237d8:	00595021 	addu	t2,v0,t9
  4237dc:	8f090000 	lw	t1,0(t8)
  4237e0:	8d430000 	lw	v1,0(t2)
  4237e4:	25086c60 	addiu	t0,t0,27744
  4237e8:	ad090000 	sw	t1,0(t0)
  4237ec:	ad030004 	sw	v1,4(t0)
  4237f0:	8f9981e4 	lw	t9,-32284(gp)
  4237f4:	00062400 	sll	a0,a2,0x10
  4237f8:	00045c03 	sra	t3,a0,0x10
  4237fc:	01602025 	move	a0,t3
  423800:	afa90024 	sw	t1,36(sp)
  423804:	0320f809 	jalr	t9
  423808:	afa30020 	sw	v1,32(sp)
  42380c:	8fbc0018 	lw	gp,24(sp)
  423810:	00000000 	nop
  423814:	8f9984b8 	lw	t9,-31560(gp)  # pushmatrix
  423818:	00000000 	nop
  42381c:	0320f809 	jalr	t9  # call pushmatrix
  423820:	00000000 	nop
  423824:	8fbc0018 	lw	gp,24(sp)
  423828:	8fa30024 	lw	v1,36(sp)
  42382c:	8f828a24 	lw	v0,-30172(gp)  # fsn_resources
  423830:	c4640014 	lwc1	$f4,20(v1)
  423834:	c4480070 	lwc1	$f8,112(v0)
  423838:	c4520074 	lwc1	$f18,116(v0)
  42383c:	460021a1 	cvt.d.s	$f6,$f4
  423840:	460042a1 	cvt.d.s	$f10,$f8
  423844:	462a3400 	add.d	$f16,$f6,$f10
  423848:	8f9984a0 	lw	t9,-31584(gp)  # translate
  42384c:	46009121 	cvt.d.s	$f4,$f18
  423850:	46248200 	add.d	$f8,$f16,$f4
  423854:	c46e0018 	lwc1	$f14,24(v1)
  423858:	46204320 	cvt.s.d	$f12,$f8
  42385c:	0320f809 	jalr	t9  # call translate
  423860:	24060000 	li	a2,0
  423864:	8fbc0018 	lw	gp,24(sp)
  423868:	3c063f80 	lui	a2,0x3f80  # 1.0f
  42386c:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  423870:	8f998494 	lw	t9,-31596(gp)  # scale
  423874:	c42c0070 	lwc1	$f12,112(at)
  423878:	0320f809 	jalr	t9  # call scale
  42387c:	46006386 	mov.s	$f14,$f12
  423880:	8fac0020 	lw	t4,32(sp)
  423884:	8fbc0018 	lw	gp,24(sp)
  423888:	8d820028 	lw	v0,40(t4)
  42388c:	00000000 	nop
  423890:	000270c0 	sll	t6,v0,0x3
  423894:	05c1000a 	bgez	t6,4238c0 <draw_file_pointers+0x118>
  423898:	00000000 	nop
  42389c:	8f998978 	lw	t9,-30344(gp)  # dcolorBoxes
  4238a0:	00027f42 	srl	t7,v0,0x1d
  4238a4:	000fc080 	sll	t8,t7,0x2
  4238a8:	03195021 	addu	t2,t8,t9
  4238ac:	8d4b0000 	lw	t3,0(t2)
  4238b0:	00000000 	nop
  4238b4:	8d640010 	lw	a0,16(t3)
  4238b8:	10000009 	b	4238e0 <draw_file_pointers+0x138>
  4238bc:	00000000 	nop
  4238c0:	8f8e8978 	lw	t6,-30344(gp)  # dcolorBoxes
  4238c4:	00026742 	srl	t4,v0,0x1d
  4238c8:	000c6880 	sll	t5,t4,0x2
  4238cc:	01ae7821 	addu	t7,t5,t6
  4238d0:	8df80000 	lw	t8,0(t7)
  4238d4:	00000000 	nop
  4238d8:	8f040000 	lw	a0,0(t8)
  4238dc:	00000000 	nop
  4238e0:	8f998464 	lw	t9,-31644(gp)  # cpack
  4238e4:	00000000 	nop
  4238e8:	0320f809 	jalr	t9  # call cpack
  4238ec:	00000000 	nop
  4238f0:	8fbc0018 	lw	gp,24(sp)
  4238f4:	00000000 	nop
  4238f8:	8f9982a0 	lw	t9,-32096(gp)
  4238fc:	00000000 	nop
  423900:	0320f809 	jalr	t9
  423904:	00000000 	nop
  423908:	8fbc0018 	lw	gp,24(sp)
  42390c:	00000000 	nop
  423910:	8f848068 	lw	a0,-32664(gp)  # small
  423914:	8f9981f8 	lw	t9,-32264(gp)
  423918:	24846f10 	addiu	a0,a0,28432
  42391c:	0320f809 	jalr	t9
  423920:	00000000 	nop
  423924:	8fbc0018 	lw	gp,24(sp)
  423928:	00000000 	nop
  42392c:	8f848068 	lw	a0,-32664(gp)  # small
  423930:	8f9981f8 	lw	t9,-32264(gp)
  423934:	24846f18 	addiu	a0,a0,28440
  423938:	0320f809 	jalr	t9
  42393c:	00000000 	nop
  423940:	8fbc0018 	lw	gp,24(sp)
  423944:	00000000 	nop
  423948:	8f848068 	lw	a0,-32664(gp)  # small
  42394c:	8f9981f8 	lw	t9,-32264(gp)
  423950:	24846f20 	addiu	a0,a0,28448
  423954:	0320f809 	jalr	t9
  423958:	00000000 	nop
  42395c:	8fbc0018 	lw	gp,24(sp)
  423960:	00000000 	nop
  423964:	8f998278 	lw	t9,-32136(gp)
  423968:	00000000 	nop
  42396c:	0320f809 	jalr	t9
  423970:	00000000 	nop
  423974:	8fbc0018 	lw	gp,24(sp)
  423978:	00000000 	nop
  42397c:	8f9984d8 	lw	t9,-31528(gp)  # popmatrix
  423980:	00000000 	nop
  423984:	0320f809 	jalr	t9  # call popmatrix
  423988:	00000000 	nop
  42398c:	8fbc0018 	lw	gp,24(sp)
  423990:	87a4002e 	lh	a0,46(sp)
  423994:	8f9981e4 	lw	t9,-32284(gp)
  423998:	00000000 	nop
  42399c:	0320f809 	jalr	t9
  4239a0:	00000000 	nop
  4239a4:	8fbc0018 	lw	gp,24(sp)
  4239a8:	00000000 	nop
  4239ac:	8f9984b8 	lw	t9,-31560(gp)  # pushmatrix
  4239b0:	00000000 	nop
  4239b4:	0320f809 	jalr	t9  # call pushmatrix
  4239b8:	00000000 	nop
  4239bc:	8fbc0018 	lw	gp,24(sp)
  4239c0:	8fb90020 	lw	t9,32(sp)
  4239c4:	8f828a24 	lw	v0,-30172(gp)  # fsn_resources
  4239c8:	c7280014 	lwc1	$f8,20(t9)
  4239cc:	c4460070 	lwc1	$f6,112(v0)
  4239d0:	c4520074 	lwc1	$f18,116(v0)
  4239d4:	460032a1 	cvt.d.s	$f10,$f6
  4239d8:	46009421 	cvt.d.s	$f16,$f18
  4239dc:	46305100 	add.d	$f4,$f10,$f16
  4239e0:	c72e0018 	lwc1	$f14,24(t9)
  4239e4:	8f9984a0 	lw	t9,-31584(gp)  # translate
  4239e8:	460041a1 	cvt.d.s	$f6,$f8
  4239ec:	46243481 	sub.d	$f18,$f6,$f4
  4239f0:	24060000 	li	a2,0
  4239f4:	0320f809 	jalr	t9  # call translate
  4239f8:	46209320 	cvt.s.d	$f12,$f18
  4239fc:	8fbc0018 	lw	gp,24(sp)
  423a00:	3c063f80 	lui	a2,0x3f80  # 1.0f
  423a04:	8f818a24 	lw	at,-30172(gp)  # fsn_resources
  423a08:	8f998494 	lw	t9,-31596(gp)  # scale
  423a0c:	c42c0070 	lwc1	$f12,112(at)
  423a10:	0320f809 	jalr	t9  # call scale
  423a14:	46006386 	mov.s	$f14,$f12
  423a18:	8faa0024 	lw	t2,36(sp)
  423a1c:	8fbc0018 	lw	gp,24(sp)
  423a20:	8d420028 	lw	v0,40(t2)
  423a24:	00000000 	nop
  423a28:	000260c0 	sll	t4,v0,0x3
  423a2c:	0581000a 	bgez	t4,423a58 <draw_file_pointers+0x2b0>
  423a30:	00025742 	srl	t2,v0,0x1d
  423a34:	8f8f8978 	lw	t7,-30344(gp)  # dcolorBoxes
  423a38:	00026f42 	srl	t5,v0,0x1d
  423a3c:	000d7080 	sll	t6,t5,0x2
  423a40:	01cfc021 	addu	t8,t6,t7
  423a44:	8f190000 	lw	t9,0(t8)
  423a48:	00000000 	nop
  423a4c:	8f240010 	lw	a0,16(t9)
  423a50:	10000008 	b	423a74 <draw_file_pointers+0x2cc>
  423a54:	00000000 	nop
  423a58:	8f8c8978 	lw	t4,-30344(gp)  # dcolorBoxes
  423a5c:	000a5880 	sll	t3,t2,0x2
  423a60:	016c6821 	addu	t5,t3,t4
  423a64:	8dae0000 	lw	t6,0(t5)
  423a68:	00000000 	nop
  423a6c:	8dc40000 	lw	a0,0(t6)
  423a70:	00000000 	nop
  423a74:	8f998464 	lw	t9,-31644(gp)  # cpack
  423a78:	00000000 	nop
  423a7c:	0320f809 	jalr	t9  # call cpack
  423a80:	00000000 	nop
  423a84:	8fbc0018 	lw	gp,24(sp)
  423a88:	00000000 	nop
  423a8c:	8f9982a0 	lw	t9,-32096(gp)
  423a90:	00000000 	nop
  423a94:	0320f809 	jalr	t9
  423a98:	00000000 	nop
  423a9c:	8fbc0018 	lw	gp,24(sp)
  423aa0:	00000000 	nop
  423aa4:	8f848068 	lw	a0,-32664(gp)  # small
  423aa8:	8f9981f8 	lw	t9,-32264(gp)
  423aac:	24846f28 	addiu	a0,a0,28456
  423ab0:	0320f809 	jalr	t9
  423ab4:	00000000 	nop
  423ab8:	8fbc0018 	lw	gp,24(sp)
  423abc:	00000000 	nop
  423ac0:	8f848068 	lw	a0,-32664(gp)  # small
  423ac4:	8f9981f8 	lw	t9,-32264(gp)
  423ac8:	24846f30 	addiu	a0,a0,28464
  423acc:	0320f809 	jalr	t9
  423ad0:	00000000 	nop
  423ad4:	8fbc0018 	lw	gp,24(sp)
  423ad8:	00000000 	nop
  423adc:	8f848068 	lw	a0,-32664(gp)  # small
  423ae0:	8f9981f8 	lw	t9,-32264(gp)
  423ae4:	24846f38 	addiu	a0,a0,28472
  423ae8:	0320f809 	jalr	t9
  423aec:	00000000 	nop
  423af0:	8fbc0018 	lw	gp,24(sp)
  423af4:	00000000 	nop
  423af8:	8f998278 	lw	t9,-32136(gp)
  423afc:	00000000 	nop
  423b00:	0320f809 	jalr	t9
  423b04:	00000000 	nop
  423b08:	8fbc0018 	lw	gp,24(sp)
  423b0c:	00000000 	nop
  423b10:	8f9984d8 	lw	t9,-31528(gp)  # popmatrix
  423b14:	00000000 	nop
  423b18:	0320f809 	jalr	t9  # call popmatrix
  423b1c:	00000000 	nop
  423b20:	8fbf001c 	lw	ra,28(sp)
  423b24:	8fbc0018 	lw	gp,24(sp)
  423b28:	03e00008 	jr	ra
  423b2c:	27bd0028 	addiu	sp,sp,40


======================================================================
ANALYSIS SUMMARY: FUN_004237b4
======================================================================

FUNCTION CALLS:
----------------------------------------
  cpack (2x)
  popmatrix (2x)
  pushmatrix (2x)
  scale (2x)
  translate (2x)

IRISGL CALLS (with addresses):
----------------------------------------
  0x0042381c: pushmatrix
  0x0042385c: translate
  0x00423878: scale
  0x004238e8: cpack
  0x00423984: popmatrix
  0x004239b4: pushmatrix
  0x004239f4: translate
  0x00423a10: scale
  0x00423a7c: cpack
  0x00423b18: popmatrix

FLOAT CONSTANTS LOADED:
----------------------------------------
  0x3f800000 = 1.0f

GP SYMBOL REFERENCES:
----------------------------------------
  DAT_10010000
  cpack
  dcolorBoxes
  fsn_resources
  popmatrix
  pushmatrix
  scale
  small
  translate

======================================================================