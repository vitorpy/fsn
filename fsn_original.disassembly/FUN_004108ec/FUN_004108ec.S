# Function: FUN_004108ec
# Address: 0x004108ec - 0x00410b7c
# Size: 0x290 (656 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004108ec <shrinkDueToZoom+0x40>:
  4108ec:	3c1c0fc1 	lui	gp,0xfc1
  4108f0:	279cd244 	addiu	gp,gp,-11708
  4108f4:	0399e021 	addu	gp,gp,t9
  4108f8:	27bdffa0 	addiu	sp,sp,-96
  4108fc:	8f998778 	lw	t9,-30856(gp)
  410900:	afbf003c 	sw	ra,60(sp)
  410904:	afa50064 	sw	a1,100(sp)
  410908:	afbc0038 	sw	gp,56(sp)
  41090c:	afa60068 	sw	a2,104(sp)
  410910:	afa7006c 	sw	a3,108(sp)
  410914:	0320f809 	jalr	t9
  410918:	00002825 	move	a1,zero
  41091c:	8fbc0038 	lw	gp,56(sp)
  410920:	00000000 	nop
  410924:	8f99851c 	lw	t9,-31460(gp)
  410928:	00000000 	nop
  41092c:	0320f809 	jalr	t9
  410930:	00000000 	nop
  410934:	8fbc0038 	lw	gp,56(sp)
  410938:	00000000 	nop
  41093c:	8f99854c 	lw	t9,-31412(gp)
  410940:	00000000 	nop
  410944:	0320f809 	jalr	t9
  410948:	00000000 	nop
  41094c:	8fbc0038 	lw	gp,56(sp)
  410950:	8fa30064 	lw	v1,100(sp)
  410954:	8f8f806c 	lw	t7,-32660(gp)
  410958:	8c6e001c 	lw	t6,28(v1)
  41095c:	8def6624 	lw	t7,26148(t7)
  410960:	27a4005c 	addiu	a0,sp,92
  410964:	01cfc023 	subu	t8,t6,t7
  410968:	2f01012c 	sltiu	at,t8,300
  41096c:	1020000c 	beqz	at,4109a0 <shrinkDueToZoom+0xf4>
  410970:	27a50058 	addiu	a1,sp,88
  410974:	8c640030 	lw	a0,48(v1)
  410978:	00000000 	nop
  41097c:	30990008 	andi	t9,a0,0x8
  410980:	0019202b 	sltu	a0,zero,t9
  410984:	8f998654 	lw	t9,-31148(gp)
  410988:	00000000 	nop
  41098c:	0320f809 	jalr	t9
  410990:	00000000 	nop
  410994:	8fbc0038 	lw	gp,56(sp)
  410998:	10000072 	b	410b64 <shrinkDueToZoom+0x2b8>
  41099c:	8fa80064 	lw	t0,100(sp)
  4109a0:	8f9986e4 	lw	t9,-31004(gp)
  4109a4:	27a90050 	addiu	t1,sp,80
  4109a8:	27aa004c 	addiu	t2,sp,76
  4109ac:	27ab004b 	addiu	t3,sp,75
  4109b0:	27ac004a 	addiu	t4,sp,74
  4109b4:	afac001c 	sw	t4,28(sp)
  4109b8:	afab0018 	sw	t3,24(sp)
  4109bc:	afaa0014 	sw	t2,20(sp)
  4109c0:	afa90010 	sw	t1,16(sp)
  4109c4:	27a60054 	addiu	a2,sp,84
  4109c8:	0320f809 	jalr	t9
  4109cc:	27a70052 	addiu	a3,sp,82
  4109d0:	8fbc0038 	lw	gp,56(sp)
  4109d4:	1040005c 	beqz	v0,410b48 <shrinkDueToZoom+0x29c>
  4109d8:	00000000 	nop
  4109dc:	93ad004a 	lbu	t5,74(sp)
  4109e0:	00000000 	nop
  4109e4:	15a00007 	bnez	t5,410a04 <shrinkDueToZoom+0x158>
  4109e8:	93af004b 	lbu	t7,75(sp)
  4109ec:	8f8e897c 	lw	t6,-30340(gp)
  4109f0:	00000000 	nop
  4109f4:	8dce0000 	lw	t6,0(t6)
  4109f8:	00000000 	nop
  4109fc:	a1c00c50 	sb	zero,3152(t6)
  410a00:	93af004b 	lbu	t7,75(sp)
  410a04:	00000000 	nop
  410a08:	11e00008 	beqz	t7,410a2c <shrinkDueToZoom+0x180>
  410a0c:	00000000 	nop
  410a10:	8f99855c 	lw	t9,-31396(gp)
  410a14:	8fa4004c 	lw	a0,76(sp)
  410a18:	0320f809 	jalr	t9
  410a1c:	00000000 	nop
  410a20:	8fbc0038 	lw	gp,56(sp)
  410a24:	1000004f 	b	410b64 <shrinkDueToZoom+0x2b8>
  410a28:	8fa80064 	lw	t0,100(sp)
  410a2c:	8f98897c 	lw	t8,-30340(gp)
  410a30:	8fb9004c 	lw	t9,76(sp)
  410a34:	8f180000 	lw	t8,0(t8)
  410a38:	c7a4005c 	lwc1	$f4,92(sp)
  410a3c:	8f02003c 	lw	v0,60(t8)
  410a40:	93ab004a 	lbu	t3,74(sp)
  410a44:	13220015 	beq	t9,v0,410a9c <shrinkDueToZoom+0x1f0>
  410a48:	00000000 	nop
  410a4c:	c7a80054 	lwc1	$f8,84(sp)
  410a50:	afb90028 	sw	t9,40(sp)
  410a54:	8f998558 	lw	t9,-31400(gp)
  410a58:	c7a60058 	lwc1	$f6,88(sp)
  410a5c:	87a80050 	lh	t0,80(sp)
  410a60:	87a90052 	lh	t1,82(sp)
  410a64:	8f8a855c 	lw	t2,-31396(gp)
  410a68:	460042a1 	cvt.d.s	$f10,$f8
  410a6c:	e7aa0014 	swc1	$f10,20(sp)
  410a70:	e7ab0010 	swc1	$f11,16(sp)
  410a74:	46002321 	cvt.d.s	$f12,$f4
  410a78:	afa20020 	sw	v0,32(sp)
  410a7c:	460033a1 	cvt.d.s	$f14,$f6
  410a80:	afa80018 	sw	t0,24(sp)
  410a84:	afa9001c 	sw	t1,28(sp)
  410a88:	0320f809 	jalr	t9
  410a8c:	afaa0024 	sw	t2,36(sp)
  410a90:	8fbc0038 	lw	gp,56(sp)
  410a94:	10000033 	b	410b64 <shrinkDueToZoom+0x2b8>
  410a98:	8fa80064 	lw	t0,100(sp)
  410a9c:	11600016 	beqz	t3,410af8 <shrinkDueToZoom+0x24c>
  410aa0:	00000000 	nop
  410aa4:	c7a40054 	lwc1	$f4,84(sp)
  410aa8:	c7b0005c 	lwc1	$f16,92(sp)
  410aac:	c7b20058 	lwc1	$f18,88(sp)
  410ab0:	87ac0050 	lh	t4,80(sp)
  410ab4:	87ad0052 	lh	t5,82(sp)
  410ab8:	8f8e8560 	lw	t6,-31392(gp)
  410abc:	8f998558 	lw	t9,-31400(gp)
  410ac0:	460021a1 	cvt.d.s	$f6,$f4
  410ac4:	e7a60014 	swc1	$f6,20(sp)
  410ac8:	e7a70010 	swc1	$f7,16(sp)
  410acc:	afa20020 	sw	v0,32(sp)
  410ad0:	afa00028 	sw	zero,40(sp)
  410ad4:	46008321 	cvt.d.s	$f12,$f16
  410ad8:	460093a1 	cvt.d.s	$f14,$f18
  410adc:	afac0018 	sw	t4,24(sp)
  410ae0:	afad001c 	sw	t5,28(sp)
  410ae4:	0320f809 	jalr	t9
  410ae8:	afae0024 	sw	t6,36(sp)
  410aec:	8fbc0038 	lw	gp,56(sp)
  410af0:	1000001c 	b	410b64 <shrinkDueToZoom+0x2b8>
  410af4:	8fa80064 	lw	t0,100(sp)
  410af8:	c7b00054 	lwc1	$f16,84(sp)
  410afc:	c7a8005c 	lwc1	$f8,92(sp)
  410b00:	c7aa0058 	lwc1	$f10,88(sp)
  410b04:	87af0050 	lh	t7,80(sp)
  410b08:	87b80052 	lh	t8,82(sp)
  410b0c:	8f998558 	lw	t9,-31400(gp)
  410b10:	460084a1 	cvt.d.s	$f18,$f16
  410b14:	e7b20014 	swc1	$f18,20(sp)
  410b18:	e7b30010 	swc1	$f19,16(sp)
  410b1c:	afa20020 	sw	v0,32(sp)
  410b20:	afa00024 	sw	zero,36(sp)
  410b24:	afa00028 	sw	zero,40(sp)
  410b28:	46004321 	cvt.d.s	$f12,$f8
  410b2c:	460053a1 	cvt.d.s	$f14,$f10
  410b30:	afaf0018 	sw	t7,24(sp)
  410b34:	0320f809 	jalr	t9
  410b38:	afb8001c 	sw	t8,28(sp)
  410b3c:	8fbc0038 	lw	gp,56(sp)
  410b40:	10000008 	b	410b64 <shrinkDueToZoom+0x2b8>
  410b44:	8fa80064 	lw	t0,100(sp)
  410b48:	8f998534 	lw	t9,-31436(gp)
  410b4c:	00000000 	nop
  410b50:	0320f809 	jalr	t9
  410b54:	00000000 	nop
  410b58:	8fbc0038 	lw	gp,56(sp)
  410b5c:	00000000 	nop
  410b60:	8fa80064 	lw	t0,100(sp)
  410b64:	8f81806c 	lw	at,-32660(gp)
  410b68:	8fbf003c 	lw	ra,60(sp)
  410b6c:	8d09001c 	lw	t1,28(t0)
  410b70:	27bd0060 	addiu	sp,sp,96
  410b74:	03e00008 	jr	ra
  410b78:	ac296624 	sw	t1,26148(at)
