# Function: FUN_00412994
# Address: 0x00412994 - 0x00412bb4
# Size: 0x220 (544 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00412994 <second_traversal+0xc>:
  412994:	27bdffc0 	addiu	sp,sp,-64
  412998:	afbf003c 	sw	ra,60(sp)
  41299c:	afbc0038 	sw	gp,56(sp)
  4129a0:	afb20034 	sw	s2,52(sp)
  4129a4:	afb10030 	sw	s1,48(sp)
  4129a8:	afb0002c 	sw	s0,44(sp)
  4129ac:	e7b70020 	swc1	$f23,32(sp)
  4129b0:	e7b60024 	swc1	$f22,36(sp)
  4129b4:	e7b50018 	swc1	$f21,24(sp)
  4129b8:	e7b4001c 	swc1	$f20,28(sp)
  4129bc:	c484003c 	lwc1	$f4,60(a0)
  4129c0:	3c014000 	lui	at,0x4000
  4129c4:	44814800 	mtc1	at,$f9
  4129c8:	44804000 	mtc1	zero,$f8
  4129cc:	460021a1 	cvt.d.s	$f6,$f4
  4129d0:	00000000 	nop
  4129d4:	46283283 	div.d	$f10,$f6,$f8
  4129d8:	8f998018 	lw	t9,-32744(gp)
  4129dc:	4487b000 	mtc1	a3,$f22
  4129e0:	4486b800 	mtc1	a2,$f23
  4129e4:	273918b0 	addiu	t9,t9,6320
  4129e8:	00809025 	move	s2,a0
  4129ec:	0320f809 	jalr	t9
  4129f0:	462ab580 	add.d	$f22,$f22,$f10
  4129f4:	8fbc0038 	lw	gp,56(sp)
  4129f8:	4620b420 	cvt.s.d	$f16,$f22
  4129fc:	e6400024 	swc1	$f0,36(s2)
  412a00:	e6500038 	swc1	$f16,56(s2)
  412a04:	c7b20054 	lwc1	$f18,84(sp)
  412a08:	c7b30050 	lwc1	$f19,80(sp)
  412a0c:	c648003c 	lwc1	$f8,60(s2)
  412a10:	3c014000 	lui	at,0x4000
  412a14:	44818800 	mtc1	at,$f17
  412a18:	44808000 	mtc1	zero,$f16
  412a1c:	46209120 	cvt.s.d	$f4,$f18
  412a20:	44803000 	mtc1	zero,$f6
  412a24:	460042a1 	cvt.d.s	$f10,$f8
  412a28:	00000000 	nop
  412a2c:	46305483 	div.d	$f18,$f10,$f16
  412a30:	8f828a24 	lw	v0,-30172(gp)
  412a34:	e6440058 	swc1	$f4,88(s2)
  412a38:	e6460040 	swc1	$f6,64(s2)
  412a3c:	c446007c 	lwc1	$f6,124(v0)
  412a40:	c4500108 	lwc1	$f16,264(v0)
  412a44:	46003221 	cvt.d.s	$f8,$f6
  412a48:	8f99849c 	lw	t9,-31588(gp)
  412a4c:	c44c0104 	lwc1	$f12,260(v0)
  412a50:	46369100 	add.d	$f4,$f18,$f22
  412a54:	46282280 	add.d	$f10,$f4,$f8
  412a58:	462050a0 	cvt.s.d	$f2,$f10
  412a5c:	46001521 	cvt.d.s	$f20,$f2
  412a60:	460084a1 	cvt.d.s	$f18,$f16
  412a64:	00000000 	nop
  412a68:	4632a183 	div.d	$f6,$f20,$f18
  412a6c:	0320f809 	jalr	t9
  412a70:	462033a0 	cvt.s.d	$f14,$f6
  412a74:	3c013ff0 	lui	at,0x3ff0
  412a78:	44812800 	mtc1	at,$f5
  412a7c:	44802000 	mtc1	zero,$f4
  412a80:	46000221 	cvt.d.s	$f8,$f0
  412a84:	00000000 	nop
  412a88:	46282283 	div.d	$f10,$f4,$f8
  412a8c:	8e4e0014 	lw	t6,20(s2)
  412a90:	8fbc0038 	lw	gp,56(sp)
  412a94:	00008025 	move	s0,zero
  412a98:	00008825 	move	s1,zero
  412a9c:	19c00017 	blez	t6,412afc <second_traversal+0x174>
  412aa0:	462050a0 	cvt.s.d	$f2,$f10
  412aa4:	460015a1 	cvt.d.s	$f22,$f2
  412aa8:	8e4f0018 	lw	t7,24(s2)
  412aac:	8f998594 	lw	t9,-31340(gp)
  412ab0:	01f1c021 	addu	t8,t7,s1
  412ab4:	8f040000 	lw	a0,0(t8)
  412ab8:	4406a800 	mfc1	a2,$f21
  412abc:	4407a000 	mfc1	a3,$f20
  412ac0:	e7b60014 	swc1	$f22,20(sp)
  412ac4:	0320f809 	jalr	t9
  412ac8:	e7b70010 	swc1	$f23,16(sp)
  412acc:	c6500040 	lwc1	$f16,64(s2)
  412ad0:	460001a1 	cvt.d.s	$f6,$f0
  412ad4:	460084a1 	cvt.d.s	$f18,$f16
  412ad8:	8e590014 	lw	t9,20(s2)
  412adc:	46269100 	add.d	$f4,$f18,$f6
  412ae0:	26100001 	addiu	s0,s0,1
  412ae4:	46202220 	cvt.s.d	$f8,$f4
  412ae8:	8fbc0038 	lw	gp,56(sp)
  412aec:	0219082a 	slt	at,s0,t9
  412af0:	26310004 	addiu	s1,s1,4
  412af4:	1420ffec 	bnez	at,412aa8 <second_traversal+0x120>
  412af8:	e6480040 	swc1	$f8,64(s2)
  412afc:	8e480004 	lw	t0,4(s2)
  412b00:	8f81805c 	lw	at,-32676(gp)
  412b04:	44885000 	mtc1	t0,$f10
  412b08:	c433ae60 	lwc1	$f19,-20896(at)
  412b0c:	46805421 	cvt.d.w	$f16,$f10
  412b10:	c432ae64 	lwc1	$f18,-20892(at)
  412b14:	c64c003c 	lwc1	$f12,60(s2)
  412b18:	46328182 	mul.d	$f6,$f16,$f18
  412b1c:	46006121 	cvt.d.s	$f4,$f12
  412b20:	46203020 	cvt.s.d	$f0,$f6
  412b24:	460000a1 	cvt.d.s	$f2,$f0
  412b28:	4624103c 	c.lt.d	$f2,$f4
  412b2c:	00000000 	nop
  412b30:	45000002 	bc1f	412b3c <second_traversal+0x1b4>
  412b34:	00000000 	nop
  412b38:	460060a1 	cvt.d.s	$f2,$f12
  412b3c:	8f818a24 	lw	at,-30172(gp)
  412b40:	c6460058 	lwc1	$f6,88(s2)
  412b44:	c4280078 	lwc1	$f8,120(at)
  412b48:	46003121 	cvt.d.s	$f4,$f6
  412b4c:	460042a1 	cvt.d.s	$f10,$f8
  412b50:	462a1400 	add.d	$f16,$f2,$f10
  412b54:	c64c0040 	lwc1	$f12,64(s2)
  412b58:	46208020 	cvt.s.d	$f0,$f16
  412b5c:	e64c0044 	swc1	$f12,68(s2)
  412b60:	460004a1 	cvt.d.s	$f18,$f0
  412b64:	46249202 	mul.d	$f8,$f18,$f4
  412b68:	460062a1 	cvt.d.s	$f10,$f12
  412b6c:	46204020 	cvt.s.d	$f0,$f8
  412b70:	46000421 	cvt.d.s	$f16,$f0
  412b74:	4630503c 	c.lt.d	$f10,$f16
  412b78:	00000000 	nop
  412b7c:	45000003 	bc1f	412b8c <second_traversal+0x204>
  412b80:	8fbf003c 	lw	ra,60(sp)
  412b84:	e6400044 	swc1	$f0,68(s2)
  412b88:	8fbf003c 	lw	ra,60(sp)
  412b8c:	c6400044 	lwc1	$f0,68(s2)
  412b90:	8fb20034 	lw	s2,52(sp)
  412b94:	c7b50018 	lwc1	$f21,24(sp)
  412b98:	c7b4001c 	lwc1	$f20,28(sp)
  412b9c:	c7b70020 	lwc1	$f23,32(sp)
  412ba0:	c7b60024 	lwc1	$f22,36(sp)
  412ba4:	8fb0002c 	lw	s0,44(sp)
  412ba8:	8fb10030 	lw	s1,48(sp)
  412bac:	03e00008 	jr	ra
  412bb0:	27bd0040 	addiu	sp,sp,64
