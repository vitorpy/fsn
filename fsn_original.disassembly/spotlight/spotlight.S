# Function: spotlight
# Address: 0x00427a30 - 0x00427d44
# Size: 0x314 (788 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00427a30 <spotlight>:
  427a30:	3c1c0fbf 	lui	gp,0xfbf
  427a34:	279c6100 	addiu	gp,gp,24832
  427a38:	0399e021 	addu	gp,gp,t9
  427a3c:	27bdffb0 	addiu	sp,sp,-80
  427a40:	c7a90060 	lwc1	$f9,96(sp)
  427a44:	c7a80064 	lwc1	$f8,100(sp)
  427a48:	46206120 	cvt.s.d	$f4,$f12
  427a4c:	c7b10068 	lwc1	$f17,104(sp)
  427a50:	c7b0006c 	lwc1	$f16,108(sp)
  427a54:	c7b30080 	lwc1	$f19,128(sp)
  427a58:	c7b20084 	lwc1	$f18,132(sp)
  427a5c:	462042a0 	cvt.s.d	$f10,$f8
  427a60:	e7a40044 	swc1	$f4,68(sp)
  427a64:	462071a0 	cvt.s.d	$f6,$f14
  427a68:	e7aa004c 	swc1	$f10,76(sp)
  427a6c:	46328101 	sub.d	$f4,$f16,$f18
  427a70:	e7a60048 	swc1	$f6,72(sp)
  427a74:	462021a0 	cvt.s.d	$f6,$f4
  427a78:	c7a80074 	lwc1	$f8,116(sp)
  427a7c:	c7a90070 	lwc1	$f9,112(sp)
  427a80:	c7aa007c 	lwc1	$f10,124(sp)
  427a84:	c7ab0078 	lwc1	$f11,120(sp)
  427a88:	46328100 	add.d	$f4,$f16,$f18
  427a8c:	93ae008b 	lbu	t6,139(sp)
  427a90:	462040a0 	cvt.s.d	$f2,$f8
  427a94:	e7a60038 	swc1	$f6,56(sp)
  427a98:	46205020 	cvt.s.d	$f0,$f10
  427a9c:	afbf001c 	sw	ra,28(sp)
  427aa0:	462021a0 	cvt.s.d	$f6,$f4
  427aa4:	afbc0018 	sw	gp,24(sp)
  427aa8:	e7a2003c 	swc1	$f2,60(sp)
  427aac:	e7a00040 	swc1	$f0,64(sp)
  427ab0:	e7a6002c 	swc1	$f6,44(sp)
  427ab4:	e7a20030 	swc1	$f2,48(sp)
  427ab8:	11c00020 	beqz	t6,427b3c <spotlight+0x10c>
  427abc:	e7a00034 	swc1	$f0,52(sp)
  427ac0:	8f998484 	lw	t9,-31612(gp)
  427ac4:	00000000 	nop
  427ac8:	0320f809 	jalr	t9
  427acc:	00000000 	nop
  427ad0:	8fbc0018 	lw	gp,24(sp)
  427ad4:	27a40038 	addiu	a0,sp,56
  427ad8:	8f998240 	lw	t9,-32192(gp)
  427adc:	00000000 	nop
  427ae0:	0320f809 	jalr	t9
  427ae4:	00000000 	nop
  427ae8:	8fbc0018 	lw	gp,24(sp)
  427aec:	27a40044 	addiu	a0,sp,68
  427af0:	8f998240 	lw	t9,-32192(gp)
  427af4:	00000000 	nop
  427af8:	0320f809 	jalr	t9
  427afc:	00000000 	nop
  427b00:	8fbc0018 	lw	gp,24(sp)
  427b04:	27a4002c 	addiu	a0,sp,44
  427b08:	8f998240 	lw	t9,-32192(gp)
  427b0c:	00000000 	nop
  427b10:	0320f809 	jalr	t9
  427b14:	00000000 	nop
  427b18:	8fbc0018 	lw	gp,24(sp)
  427b1c:	00000000 	nop
  427b20:	8f99846c 	lw	t9,-31636(gp)
  427b24:	00000000 	nop
  427b28:	0320f809 	jalr	t9
  427b2c:	00000000 	nop
  427b30:	8fbc0018 	lw	gp,24(sp)
  427b34:	10000080 	b	427d38 <spotlight+0x308>
  427b38:	8fbf001c 	lw	ra,28(sp)
  427b3c:	8f998464 	lw	t9,-31644(gp)
  427b40:	8fa4008c 	lw	a0,140(sp)
  427b44:	0320f809 	jalr	t9
  427b48:	e7a20028 	swc1	$f2,40(sp)
  427b4c:	8fbc0018 	lw	gp,24(sp)
  427b50:	00000000 	nop
  427b54:	8f9984b8 	lw	t9,-31560(gp)
  427b58:	00000000 	nop
  427b5c:	0320f809 	jalr	t9
  427b60:	00000000 	nop
  427b64:	8fbc0018 	lw	gp,24(sp)
  427b68:	c7a90078 	lwc1	$f9,120(sp)
  427b6c:	8f81805c 	lw	at,-32676(gp)
  427b70:	c7a8007c 	lwc1	$f8,124(sp)
  427b74:	c42bbb88 	lwc1	$f11,-17528(at)
  427b78:	c42abb8c 	lwc1	$f10,-17524(at)
  427b7c:	44806000 	mtc1	zero,$f12
  427b80:	462a4400 	add.d	$f16,$f8,$f10
  427b84:	8f9984a0 	lw	t9,-31584(gp)
  427b88:	462084a0 	cvt.s.d	$f18,$f16
  427b8c:	44069000 	mfc1	a2,$f18
  427b90:	0320f809 	jalr	t9
  427b94:	46006386 	mov.s	$f14,$f12
  427b98:	c7a70080 	lwc1	$f7,128(sp)
  427b9c:	c7a60084 	lwc1	$f6,132(sp)
  427ba0:	8fbc0018 	lw	gp,24(sp)
  427ba4:	46203220 	cvt.s.d	$f8,$f6
  427ba8:	c7a50068 	lwc1	$f5,104(sp)
  427bac:	c7a4006c 	lwc1	$f4,108(sp)
  427bb0:	8f998298 	lw	t9,-32104(gp)
  427bb4:	44064000 	mfc1	a2,$f8
  427bb8:	c7ae0028 	lwc1	$f14,40(sp)
  427bbc:	0320f809 	jalr	t9
  427bc0:	46202320 	cvt.s.d	$f12,$f4
  427bc4:	8fbc0018 	lw	gp,24(sp)
  427bc8:	00000000 	nop
  427bcc:	8f9984d8 	lw	t9,-31528(gp)
  427bd0:	00000000 	nop
  427bd4:	0320f809 	jalr	t9
  427bd8:	00000000 	nop
  427bdc:	8fbc0018 	lw	gp,24(sp)
  427be0:	24040001 	li	a0,1
  427be4:	8f99829c 	lw	t9,-32100(gp)
  427be8:	00000000 	nop
  427bec:	0320f809 	jalr	t9
  427bf0:	00000000 	nop
  427bf4:	8fbc0018 	lw	gp,24(sp)
  427bf8:	00000000 	nop
  427bfc:	8f998484 	lw	t9,-31612(gp)
  427c00:	00000000 	nop
  427c04:	0320f809 	jalr	t9
  427c08:	00000000 	nop
  427c0c:	8fbc0018 	lw	gp,24(sp)
  427c10:	27a40038 	addiu	a0,sp,56
  427c14:	8f998240 	lw	t9,-32192(gp)
  427c18:	00000000 	nop
  427c1c:	0320f809 	jalr	t9
  427c20:	00000000 	nop
  427c24:	8fbc0018 	lw	gp,24(sp)
  427c28:	27a40044 	addiu	a0,sp,68
  427c2c:	8f998240 	lw	t9,-32192(gp)
  427c30:	00000000 	nop
  427c34:	0320f809 	jalr	t9
  427c38:	00000000 	nop
  427c3c:	8fbc0018 	lw	gp,24(sp)
  427c40:	27a4002c 	addiu	a0,sp,44
  427c44:	8f998240 	lw	t9,-32192(gp)
  427c48:	00000000 	nop
  427c4c:	0320f809 	jalr	t9
  427c50:	00000000 	nop
  427c54:	8fbc0018 	lw	gp,24(sp)
  427c58:	00000000 	nop
  427c5c:	8f99846c 	lw	t9,-31636(gp)
  427c60:	00000000 	nop
  427c64:	0320f809 	jalr	t9
  427c68:	00000000 	nop
  427c6c:	8fbc0018 	lw	gp,24(sp)
  427c70:	00002025 	move	a0,zero
  427c74:	8f99829c 	lw	t9,-32100(gp)
  427c78:	00000000 	nop
  427c7c:	0320f809 	jalr	t9
  427c80:	00000000 	nop
  427c84:	8fbc0018 	lw	gp,24(sp)
  427c88:	24040001 	li	a0,1
  427c8c:	8f9982e4 	lw	t9,-32028(gp)
  427c90:	00000000 	nop
  427c94:	0320f809 	jalr	t9
  427c98:	00000000 	nop
  427c9c:	8fbc0018 	lw	gp,24(sp)
  427ca0:	00000000 	nop
  427ca4:	8f99823c 	lw	t9,-32196(gp)
  427ca8:	00000000 	nop
  427cac:	0320f809 	jalr	t9
  427cb0:	00000000 	nop
  427cb4:	8fbc0018 	lw	gp,24(sp)
  427cb8:	27a40038 	addiu	a0,sp,56
  427cbc:	8f998240 	lw	t9,-32192(gp)
  427cc0:	00000000 	nop
  427cc4:	0320f809 	jalr	t9
  427cc8:	00000000 	nop
  427ccc:	8fbc0018 	lw	gp,24(sp)
  427cd0:	27a40044 	addiu	a0,sp,68
  427cd4:	8f998240 	lw	t9,-32192(gp)
  427cd8:	00000000 	nop
  427cdc:	0320f809 	jalr	t9
  427ce0:	00000000 	nop
  427ce4:	8fbc0018 	lw	gp,24(sp)
  427ce8:	27a4002c 	addiu	a0,sp,44
  427cec:	8f998240 	lw	t9,-32192(gp)
  427cf0:	00000000 	nop
  427cf4:	0320f809 	jalr	t9
  427cf8:	00000000 	nop
  427cfc:	8fbc0018 	lw	gp,24(sp)
  427d00:	00000000 	nop
  427d04:	8f998244 	lw	t9,-32188(gp)
  427d08:	00000000 	nop
  427d0c:	0320f809 	jalr	t9
  427d10:	00000000 	nop
  427d14:	8fbc0018 	lw	gp,24(sp)
  427d18:	00002025 	move	a0,zero
  427d1c:	8f9982e4 	lw	t9,-32028(gp)
  427d20:	00000000 	nop
  427d24:	0320f809 	jalr	t9
  427d28:	00000000 	nop
  427d2c:	8fbc0018 	lw	gp,24(sp)
  427d30:	00000000 	nop
  427d34:	8fbf001c 	lw	ra,28(sp)
  427d38:	27bd0050 	addiu	sp,sp,80
  427d3c:	03e00008 	jr	ra
  427d40:	00000000 	nop
