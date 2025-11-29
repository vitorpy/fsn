# Disassembly of FUN_00423b3c
# Address: 0x00423b3c
# End: 0x00424250
# Size: 0x714 (1812 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00423b3c <draw_files+0xc>:
  423b3c:	27bdff48 	addiu	sp,sp,-184
  423b40:	8f82897c 	lw	v0,-30340(gp)  # curcontext
  423b44:	afbf0094 	sw	ra,148(sp)
  423b48:	8c420000 	lw	v0,0(v0)
  423b4c:	afbe0090 	sw	s8,144(sp)
  423b50:	afbc008c 	sw	gp,140(sp)
  423b54:	afb70088 	sw	s7,136(sp)
  423b58:	afb60084 	sw	s6,132(sp)
  423b5c:	afb50080 	sw	s5,128(sp)
  423b60:	afb4007c 	sw	s4,124(sp)
  423b64:	afb30078 	sw	s3,120(sp)
  423b68:	afb20074 	sw	s2,116(sp)
  423b6c:	afb10070 	sw	s1,112(sp)
  423b70:	afb0006c 	sw	s0,108(sp)
  423b74:	e7bd0060 	swc1	$f29,96(sp)
  423b78:	e7bc0064 	swc1	$f28,100(sp)
  423b7c:	e7bb0058 	swc1	$f27,88(sp)
  423b80:	e7ba005c 	swc1	$f26,92(sp)
  423b84:	e7b90050 	swc1	$f25,80(sp)
  423b88:	e7b80054 	swc1	$f24,84(sp)
  423b8c:	e7b70048 	swc1	$f23,72(sp)
  423b90:	e7b6004c 	swc1	$f22,76(sp)
  423b94:	e7b50040 	swc1	$f21,64(sp)
  423b98:	e7b40044 	swc1	$f20,68(sp)
  423b9c:	afa500bc 	sw	a1,188(sp)
  423ba0:	afa600c0 	sw	a2,192(sp)
  423ba4:	c4460008 	lwc1	$f6,8(v0)
  423ba8:	c48a0024 	lwc1	$f10,36(a0)
  423bac:	46003221 	cvt.d.s	$f8,$f6
  423bb0:	c4460014 	lwc1	$f6,20(v0)
  423bb4:	c4440020 	lwc1	$f4,32(v0)
  423bb8:	46005421 	cvt.d.s	$f16,$f10
  423bbc:	46304081 	sub.d	$f2,$f8,$f16
  423bc0:	c4520000 	lwc1	$f18,0(v0)
  423bc4:	460032a1 	cvt.d.s	$f10,$f6
  423bc8:	46002021 	cvt.d.s	$f0,$f4
  423bcc:	46205202 	mul.d	$f8,$f10,$f0
  423bd0:	46009121 	cvt.d.s	$f4,$f18
  423bd4:	00808025 	move	s0,a0
  423bd8:	30b600ff 	andi	s6,a1,0xff
  423bdc:	00e0f025 	move	s8,a3
  423be0:	46224402 	mul.d	$f16,$f8,$f2
  423be4:	0000a825 	move	s5,zero
  423be8:	3c014000 	lui	at,0x4000  # 2.0f
  423bec:	46302481 	sub.d	$f18,$f4,$f16
  423bf0:	462091a0 	cvt.s.d	$f6,$f18
  423bf4:	e7a600a0 	swc1	$f6,160(sp)
  423bf8:	c4440018 	lwc1	$f4,24(v0)
  423bfc:	c44a0004 	lwc1	$f10,4(v0)
  423c00:	46002421 	cvt.d.s	$f16,$f4
  423c04:	46208482 	mul.d	$f18,$f16,$f0
  423c08:	46005221 	cvt.d.s	$f8,$f10
  423c0c:	46229182 	mul.d	$f6,$f18,$f2
  423c10:	46264281 	sub.d	$f10,$f8,$f6
  423c14:	46205120 	cvt.s.d	$f4,$f10
  423c18:	e7a4009c 	swc1	$f4,156(sp)
  423c1c:	8c83000c 	lw	v1,12(a0)
  423c20:	00000000 	nop
  423c24:	18600175 	blez	v1,4241fc <draw_files+0x6cc>
  423c28:	8fbf0094 	lw	ra,148(sp)
  423c2c:	4481e800 	mtc1	at,$f29  # $f29 = 2.0f
  423c30:	3c014010 	lui	at,0x4010
  423c34:	4481d800 	mtc1	at,$f27  # $f27 = 2.25f
  423c38:	4480e000 	mtc1	zero,$f28
  423c3c:	4480d000 	mtc1	zero,$f26
  423c40:	4480c800 	mtc1	zero,$f25
  423c44:	4480c000 	mtc1	zero,$f24
  423c48:	8f948a24 	lw	s4,-30172(gp)  # fsn_resources
  423c4c:	0000b825 	move	s7,zero
  423c50:	8e0e0010 	lw	t6,16(s0)
  423c54:	00152400 	sll	a0,s5,0x10
  423c58:	01d77821 	addu	t7,t6,s7
  423c5c:	8df10000 	lw	s1,0(t7)
  423c60:	16c0000a 	bnez	s6,423c8c <draw_files+0x15c>
  423c64:	00045403 	sra	t2,a0,0x10
  423c68:	8e220028 	lw	v0,40(s1)
  423c6c:	8fb800c0 	lw	t8,192(sp)
  423c70:	0002cf42 	srl	t9,v0,0x1d
  423c74:	17190005 	bne	t8,t9,423c8c <draw_files+0x15c>
  423c78:	00024b40 	sll	t1,v0,0xd
  423c7c:	05210003 	bgez	t1,423c8c <draw_files+0x15c>
  423c80:	00000000 	nop
  423c84:	10000158 	b	4241e8 <draw_files+0x6b8>
  423c88:	26b10001 	addiu	s1,s5,1
  423c8c:	c7b000a0 	lwc1	$f16,160(sp)
  423c90:	c7b2009c 	lwc1	$f18,156(sp)
  423c94:	8f998250 	lw	t9,-32176(gp)
  423c98:	2ed30001 	sltiu	s3,s6,1
  423c9c:	02609025 	move	s2,s3
  423ca0:	01402025 	move	a0,t2
  423ca4:	46008521 	cvt.d.s	$f20,$f16
  423ca8:	0320f809 	jalr	t9
  423cac:	460095a1 	cvt.d.s	$f22,$f18
  423cb0:	c6080034 	lwc1	$f8,52(s0)
  423cb4:	c6040058 	lwc1	$f4,88(s0)
  423cb8:	460041a1 	cvt.d.s	$f6,$f8
  423cbc:	4626a281 	sub.d	$f10,$f20,$f6
  423cc0:	c6280014 	lwc1	$f8,20(s1)
  423cc4:	46002421 	cvt.d.s	$f16,$f4
  423cc8:	00000000 	nop
  423ccc:	46305483 	div.d	$f18,$f10,$f16
  423cd0:	460041a1 	cvt.d.s	$f6,$f8
  423cd4:	c60a0038 	lwc1	$f10,56(s0)
  423cd8:	8fbc008c 	lw	gp,140(sp)
  423cdc:	46005421 	cvt.d.s	$f16,$f10
  423ce0:	4630b201 	sub.d	$f8,$f22,$f16
  423ce4:	02002025 	move	a0,s0
  423ce8:	02202825 	move	a1,s1
  423cec:	46269101 	sub.d	$f4,$f18,$f6
  423cf0:	c6320018 	lwc1	$f18,24(s1)
  423cf4:	46202020 	cvt.s.d	$f0,$f4
  423cf8:	460091a1 	cvt.d.s	$f6,$f18
  423cfc:	46264101 	sub.d	$f4,$f8,$f6
  423d00:	46000085 	abs.s	$f2,$f0
  423d04:	46202020 	cvt.s.d	$f0,$f4
  423d08:	16c00006 	bnez	s6,423d24 <draw_files+0x1f4>
  423d0c:	46000005 	abs.s	$f0,$f0
  423d10:	8e2b0028 	lw	t3,40(s1)
  423d14:	00000000 	nop
  423d18:	000b6a40 	sll	t5,t3,0x9
  423d1c:	05a10002 	bgez	t5,423d28 <draw_files+0x1f8>
  423d20:	00000000 	nop
  423d24:	241e001f 	li	s8,31
  423d28:	12600024 	beqz	s3,423dbc <draw_files+0x28c>
  423d2c:	00000000 	nop
  423d30:	8f8e897c 	lw	t6,-30340(gp)  # curcontext
  423d34:	c68a00b0 	lwc1	$f10,176(s4)
  423d38:	c6120024 	lwc1	$f18,36(s0)
  423d3c:	8dce0000 	lw	t6,0(t6)
  423d40:	46005421 	cvt.d.s	$f16,$f10
  423d44:	c5c40008 	lwc1	$f4,8(t6)
  423d48:	46009221 	cvt.d.s	$f8,$f18
  423d4c:	46288180 	add.d	$f6,$f16,$f8
  423d50:	00009025 	move	s2,zero
  423d54:	460022a1 	cvt.d.s	$f10,$f4
  423d58:	4626503c 	c.lt.d	$f10,$f6
  423d5c:	00000000 	nop
  423d60:	45000002 	bc1f	423d6c <draw_files+0x23c>
  423d64:	00000000 	nop
  423d68:	24120001 	li	s2,1
  423d6c:	12400013 	beqz	s2,423dbc <draw_files+0x28c>
  423d70:	00000000 	nop
  423d74:	c69000a8 	lwc1	$f16,168(s4)
  423d78:	460014a1 	cvt.d.s	$f18,$f2
  423d7c:	46008221 	cvt.d.s	$f8,$f16
  423d80:	4628903c 	c.lt.d	$f18,$f8
  423d84:	00009025 	move	s2,zero
  423d88:	45000002 	bc1f	423d94 <draw_files+0x264>
  423d8c:	00000000 	nop
  423d90:	24120001 	li	s2,1
  423d94:	12400009 	beqz	s2,423dbc <draw_files+0x28c>
  423d98:	00000000 	nop
  423d9c:	c68a00ac 	lwc1	$f10,172(s4)
  423da0:	46000121 	cvt.d.s	$f4,$f0
  423da4:	460051a1 	cvt.d.s	$f6,$f10
  423da8:	4626203c 	c.lt.d	$f4,$f6
  423dac:	00009025 	move	s2,zero
  423db0:	45000002 	bc1f	423dbc <draw_files+0x28c>
  423db4:	00000000 	nop
  423db8:	24120001 	li	s2,1
  423dbc:	8f8f897c 	lw	t7,-30340(gp)  # curcontext
  423dc0:	c69000bc 	lwc1	$f16,188(s4)
  423dc4:	c6080024 	lwc1	$f8,36(s0)
  423dc8:	8def0000 	lw	t7,0(t7)
  423dcc:	460084a1 	cvt.d.s	$f18,$f16
  423dd0:	c5e60008 	lwc1	$f6,8(t7)
  423dd4:	460042a1 	cvt.d.s	$f10,$f8
  423dd8:	462a9100 	add.d	$f4,$f18,$f10
  423ddc:	00003825 	move	a3,zero
  423de0:	46003421 	cvt.d.s	$f16,$f6
  423de4:	4624803c 	c.lt.d	$f16,$f4
  423de8:	02403025 	move	a2,s2
  423dec:	45000002 	bc1f	423df8 <draw_files+0x2c8>
  423df0:	00000000 	nop
  423df4:	24070001 	li	a3,1
  423df8:	10e00013 	beqz	a3,423e48 <draw_files+0x318>
  423dfc:	00000000 	nop
  423e00:	c69200b4 	lwc1	$f18,180(s4)
  423e04:	46001221 	cvt.d.s	$f8,$f2
  423e08:	460092a1 	cvt.d.s	$f10,$f18
  423e0c:	462a403c 	c.lt.d	$f8,$f10
  423e10:	00003825 	move	a3,zero
  423e14:	45000002 	bc1f	423e20 <draw_files+0x2f0>
  423e18:	00000000 	nop
  423e1c:	24070001 	li	a3,1
  423e20:	10e00009 	beqz	a3,423e48 <draw_files+0x318>
  423e24:	00000000 	nop
  423e28:	c69000b8 	lwc1	$f16,184(s4)
  423e2c:	460001a1 	cvt.d.s	$f6,$f0
  423e30:	46008121 	cvt.d.s	$f4,$f16
  423e34:	4624303c 	c.lt.d	$f6,$f4
  423e38:	00003825 	move	a3,zero
  423e3c:	45000002 	bc1f	423e48 <draw_files+0x318>
  423e40:	00000000 	nop
  423e44:	24070001 	li	a3,1
  423e48:	12c00003 	beqz	s6,423e58 <draw_files+0x328>
  423e4c:	00000000 	nop
  423e50:	1000001d 	b	423ec8 <draw_files+0x398>
  423e54:	24020004 	li	v0,4
  423e58:	8e380028 	lw	t8,40(s1)
  423e5c:	00000000 	nop
  423e60:	00184240 	sll	t0,t8,0x9
  423e64:	05010003 	bgez	t0,423e74 <draw_files+0x344>
  423e68:	00000000 	nop
  423e6c:	10000015 	b	423ec4 <draw_files+0x394>
  423e70:	24030001 	li	v1,1
  423e74:	c69200f0 	lwc1	$f18,240(s4)
  423e78:	460000a1 	cvt.d.s	$f2,$f0
  423e7c:	46009221 	cvt.d.s	$f8,$f18
  423e80:	4622403c 	c.lt.d	$f8,$f2
  423e84:	00000000 	nop
  423e88:	45000003 	bc1f	423e98 <draw_files+0x368>
  423e8c:	00000000 	nop
  423e90:	1000000b 	b	423ec0 <draw_files+0x390>
  423e94:	24020003 	li	v0,3
  423e98:	c68a00ec 	lwc1	$f10,236(s4)
  423e9c:	00001825 	move	v1,zero
  423ea0:	46005421 	cvt.d.s	$f16,$f10
  423ea4:	4622803c 	c.lt.d	$f16,$f2
  423ea8:	00000000 	nop
  423eac:	45000003 	bc1f	423ebc <draw_files+0x38c>
  423eb0:	00000000 	nop
  423eb4:	10000001 	b	423ebc <draw_files+0x38c>
  423eb8:	24030002 	li	v1,2
  423ebc:	00601025 	move	v0,v1
  423ec0:	00401825 	move	v1,v0
  423ec4:	00601025 	move	v0,v1
  423ec8:	8f9986b8 	lw	t9,-31048(gp)  # FUN_00422f58
  423ecc:	afa20010 	sw	v0,16(sp)
  423ed0:	0320f809 	jalr	t9  # call FUN_00422f58
  423ed4:	afbe0014 	sw	s8,20(sp)
  423ed8:	8e220028 	lw	v0,40(s1)
  423edc:	8fbc008c 	lw	gp,140(sp)
  423ee0:	000250c0 	sll	t2,v0,0x3
  423ee4:	05410072 	bgez	t2,4240b0 <draw_files+0x580>
  423ee8:	00025900 	sll	t3,v0,0x4
  423eec:	8f9984b8 	lw	t9,-31560(gp)  # pushmatrix
  423ef0:	00000000 	nop
  423ef4:	0320f809 	jalr	t9  # call pushmatrix
  423ef8:	00000000 	nop
  423efc:	8fbc008c 	lw	gp,140(sp)
  423f00:	c6060024 	lwc1	$f6,36(s0)
  423f04:	c60c0034 	lwc1	$f12,52(s0)
  423f08:	c60e0038 	lwc1	$f14,56(s0)
  423f0c:	8f9984a0 	lw	t9,-31584(gp)  # translate
  423f10:	46003107 	neg.s	$f4,$f6
  423f14:	44062000 	mfc1	a2,$f4
  423f18:	46006307 	neg.s	$f12,$f12
  423f1c:	0320f809 	jalr	t9  # call translate
  423f20:	46007387 	neg.s	$f14,$f14
  423f24:	8fbc008c 	lw	gp,140(sp)
  423f28:	8e8b0184 	lw	t3,388(s4)
  423f2c:	8f818a38 	lw	at,-30152(gp)  # maxy
  423f30:	8f998708 	lw	t9,-30968(gp)  # FUN_00427a3c
  423f34:	c4320000 	lwc1	$f18,0(at)
  423f38:	8f818a30 	lw	at,-30160(gp)  # maxx
  423f3c:	46009221 	cvt.d.s	$f8,$f18
  423f40:	c42a0000 	lwc1	$f10,0(at)
  423f44:	8f818a2c 	lw	at,-30164(gp)  # minx
  423f48:	46005421 	cvt.d.s	$f16,$f10
  423f4c:	c4260000 	lwc1	$f6,0(at)
  423f50:	463a4382 	mul.d	$f14,$f8,$f26
  423f54:	46003121 	cvt.d.s	$f4,$f6
  423f58:	46248481 	sub.d	$f18,$f16,$f4
  423f5c:	e7b20014 	swc1	$f18,20(sp)
  423f60:	e7b30010 	swc1	$f19,16(sp)
  423f64:	c6260014 	lwc1	$f6,20(s1)
  423f68:	c6080034 	lwc1	$f8,52(s0)
  423f6c:	46003421 	cvt.d.s	$f16,$f6
  423f70:	460042a1 	cvt.d.s	$f10,$f8
  423f74:	46305100 	add.d	$f4,$f10,$f16
  423f78:	e7a4001c 	swc1	$f4,28(sp)
  423f7c:	e7a50018 	swc1	$f5,24(sp)
  423f80:	c6260018 	lwc1	$f6,24(s1)
  423f84:	c6120038 	lwc1	$f18,56(s0)
  423f88:	460032a1 	cvt.d.s	$f10,$f6
  423f8c:	c6860070 	lwc1	$f6,112(s4)
  423f90:	46009221 	cvt.d.s	$f8,$f18
  423f94:	462a4400 	add.d	$f16,$f8,$f10
  423f98:	46003221 	cvt.d.s	$f8,$f6
  423f9c:	00000000 	nop
  423fa0:	463c4283 	div.d	$f10,$f8,$f28
  423fa4:	e7b00024 	swc1	$f16,36(sp)
  423fa8:	e7b10020 	swc1	$f17,32(sp)
  423fac:	c6040024 	lwc1	$f4,36(s0)
  423fb0:	c6900074 	lwc1	$f16,116(s4)
  423fb4:	460024a1 	cvt.d.s	$f18,$f4
  423fb8:	e7b2002c 	swc1	$f18,44(sp)
  423fbc:	e7b30028 	swc1	$f19,40(sp)
  423fc0:	46008121 	cvt.d.s	$f4,$f16
  423fc4:	afb60038 	sw	s6,56(sp)
  423fc8:	4620c306 	mov.d	$f12,$f24
  423fcc:	afab003c 	sw	t3,60(sp)
  423fd0:	46245480 	add.d	$f18,$f10,$f4
  423fd4:	e7b20034 	swc1	$f18,52(sp)
  423fd8:	0320f809 	jalr	t9  # call FUN_00427a3c
  423fdc:	e7b30030 	swc1	$f19,48(sp)
  423fe0:	8fbc008c 	lw	gp,140(sp)
  423fe4:	00000000 	nop
  423fe8:	8f9984d8 	lw	t9,-31528(gp)  # popmatrix
  423fec:	00000000 	nop
  423ff0:	0320f809 	jalr	t9  # call popmatrix
  423ff4:	00000000 	nop
  423ff8:	8fbc008c 	lw	gp,140(sp)
  423ffc:	1aa00013 	blez	s5,42404c <draw_files+0x51c>
  424000:	00000000 	nop
  424004:	8e0c0010 	lw	t4,16(s0)
  424008:	c6260014 	lwc1	$f6,20(s1)
  42400c:	01976821 	addu	t5,t4,s7
  424010:	8daefffc 	lw	t6,-4(t5)
  424014:	46003221 	cvt.d.s	$f8,$f6
  424018:	c5d00014 	lwc1	$f16,20(t6)
  42401c:	02002025 	move	a0,s0
  424020:	460082a1 	cvt.d.s	$f10,$f16
  424024:	462a403c 	c.lt.d	$f8,$f10
  424028:	00000000 	nop
  42402c:	45000007 	bc1f	42404c <draw_files+0x51c>
  424030:	00000000 	nop
  424034:	8f9986bc 	lw	t9,-31044(gp)  # FUN_004237b4
  424038:	26a5ffff 	addiu	a1,s5,-1
  42403c:	0320f809 	jalr	t9  # call FUN_004237b4
  424040:	02a03025 	move	a2,s5
  424044:	8fbc008c 	lw	gp,140(sp)
  424048:	00000000 	nop
  42404c:	8e0f000c 	lw	t7,12(s0)
  424050:	00000000 	nop
  424054:	25f8ffff 	addiu	t8,t7,-1
  424058:	02b8082a 	slt	at,s5,t8
  42405c:	1020005b 	beqz	at,4241cc <draw_files+0x69c>
  424060:	00000000 	nop
  424064:	8e190010 	lw	t9,16(s0)
  424068:	c6260014 	lwc1	$f6,20(s1)
  42406c:	03374021 	addu	t0,t9,s7
  424070:	8d090004 	lw	t1,4(t0)
  424074:	46003421 	cvt.d.s	$f16,$f6
  424078:	c5240014 	lwc1	$f4,20(t1)
  42407c:	02002025 	move	a0,s0
  424080:	460024a1 	cvt.d.s	$f18,$f4
  424084:	4630903c 	c.lt.d	$f18,$f16
  424088:	00000000 	nop
  42408c:	4500004f 	bc1f	4241cc <draw_files+0x69c>
  424090:	00000000 	nop
  424094:	8f9986bc 	lw	t9,-31044(gp)  # FUN_004237b4
  424098:	02a02825 	move	a1,s5
  42409c:	0320f809 	jalr	t9  # call FUN_004237b4
  4240a0:	26a60001 	addiu	a2,s5,1
  4240a4:	8fbc008c 	lw	gp,140(sp)
  4240a8:	10000048 	b	4241cc <draw_files+0x69c>
  4240ac:	00000000 	nop
  4240b0:	05610046 	bgez	t3,4241cc <draw_files+0x69c>
  4240b4:	00000000 	nop
  4240b8:	8f9984b8 	lw	t9,-31560(gp)  # pushmatrix
  4240bc:	00000000 	nop
  4240c0:	0320f809 	jalr	t9  # call pushmatrix
  4240c4:	00000000 	nop
  4240c8:	8fbc008c 	lw	gp,140(sp)
  4240cc:	c6080024 	lwc1	$f8,36(s0)
  4240d0:	c60c0034 	lwc1	$f12,52(s0)
  4240d4:	c60e0038 	lwc1	$f14,56(s0)
  4240d8:	8f9984a0 	lw	t9,-31584(gp)  # translate
  4240dc:	46004287 	neg.s	$f10,$f8
  4240e0:	44065000 	mfc1	a2,$f10
  4240e4:	46006307 	neg.s	$f12,$f12
  4240e8:	0320f809 	jalr	t9  # call translate
  4240ec:	46007387 	neg.s	$f14,$f14
  4240f0:	8fbc008c 	lw	gp,140(sp)
  4240f4:	8e8c0188 	lw	t4,392(s4)
  4240f8:	8f818a38 	lw	at,-30152(gp)  # maxy
  4240fc:	8f998708 	lw	t9,-30968(gp)  # FUN_00427a3c
  424100:	c4240000 	lwc1	$f4,0(at)
  424104:	8f818a30 	lw	at,-30160(gp)  # maxx
  424108:	460021a1 	cvt.d.s	$f6,$f4
  42410c:	c4320000 	lwc1	$f18,0(at)
  424110:	8f818a2c 	lw	at,-30164(gp)  # minx
  424114:	46009421 	cvt.d.s	$f16,$f18
  424118:	c4280000 	lwc1	$f8,0(at)
  42411c:	463a3382 	mul.d	$f14,$f6,$f26
  424120:	460042a1 	cvt.d.s	$f10,$f8
  424124:	462a8101 	sub.d	$f4,$f16,$f10
  424128:	e7a40014 	swc1	$f4,20(sp)
  42412c:	e7a50010 	swc1	$f5,16(sp)
  424130:	c6280014 	lwc1	$f8,20(s1)
  424134:	c6060034 	lwc1	$f6,52(s0)
  424138:	46004421 	cvt.d.s	$f16,$f8
  42413c:	460034a1 	cvt.d.s	$f18,$f6
  424140:	46309280 	add.d	$f10,$f18,$f16
  424144:	e7aa001c 	swc1	$f10,28(sp)
  424148:	e7ab0018 	swc1	$f11,24(sp)
  42414c:	c6280018 	lwc1	$f8,24(s1)
  424150:	c6040038 	lwc1	$f4,56(s0)
  424154:	460044a1 	cvt.d.s	$f18,$f8
  424158:	c6880070 	lwc1	$f8,112(s4)
  42415c:	460021a1 	cvt.d.s	$f6,$f4
  424160:	46323400 	add.d	$f16,$f6,$f18
  424164:	460041a1 	cvt.d.s	$f6,$f8
  424168:	00000000 	nop
  42416c:	463c3483 	div.d	$f18,$f6,$f28
  424170:	e7b00024 	swc1	$f16,36(sp)
  424174:	e7b10020 	swc1	$f17,32(sp)
  424178:	c60a0024 	lwc1	$f10,36(s0)
  42417c:	c6900074 	lwc1	$f16,116(s4)
  424180:	46005121 	cvt.d.s	$f4,$f10
  424184:	e7a4002c 	swc1	$f4,44(sp)
  424188:	e7a50028 	swc1	$f5,40(sp)
  42418c:	460082a1 	cvt.d.s	$f10,$f16
  424190:	afb60038 	sw	s6,56(sp)
  424194:	4620c306 	mov.d	$f12,$f24
  424198:	afac003c 	sw	t4,60(sp)
  42419c:	462a9100 	add.d	$f4,$f18,$f10
  4241a0:	e7a40034 	swc1	$f4,52(sp)
  4241a4:	0320f809 	jalr	t9  # call FUN_00427a3c
  4241a8:	e7a50030 	swc1	$f5,48(sp)
  4241ac:	8fbc008c 	lw	gp,140(sp)
  4241b0:	00000000 	nop
  4241b4:	8f9984d8 	lw	t9,-31528(gp)  # popmatrix
  4241b8:	00000000 	nop
  4241bc:	0320f809 	jalr	t9  # call popmatrix
  4241c0:	00000000 	nop
  4241c4:	8fbc008c 	lw	gp,140(sp)
  4241c8:	00000000 	nop
  4241cc:	8f998218 	lw	t9,-32232(gp)
  4241d0:	26b10001 	addiu	s1,s5,1
  4241d4:	0320f809 	jalr	t9
  4241d8:	00000000 	nop
  4241dc:	8e03000c 	lw	v1,12(s0)
  4241e0:	8fbc008c 	lw	gp,140(sp)
  4241e4:	00000000 	nop
  4241e8:	0223082a 	slt	at,s1,v1
  4241ec:	0220a825 	move	s5,s1
  4241f0:	1420fe97 	bnez	at,423c50 <draw_files+0x120>
  4241f4:	26f70004 	addiu	s7,s7,4
  4241f8:	8fbf0094 	lw	ra,148(sp)
  4241fc:	c7b50040 	lwc1	$f21,64(sp)
  424200:	c7b40044 	lwc1	$f20,68(sp)
  424204:	c7b70048 	lwc1	$f23,72(sp)
  424208:	c7b6004c 	lwc1	$f22,76(sp)
  42420c:	c7b90050 	lwc1	$f25,80(sp)
  424210:	c7b80054 	lwc1	$f24,84(sp)
  424214:	c7bb0058 	lwc1	$f27,88(sp)
  424218:	c7ba005c 	lwc1	$f26,92(sp)
  42421c:	c7bd0060 	lwc1	$f29,96(sp)
  424220:	c7bc0064 	lwc1	$f28,100(sp)
  424224:	8fb0006c 	lw	s0,108(sp)
  424228:	8fb10070 	lw	s1,112(sp)
  42422c:	8fb20074 	lw	s2,116(sp)
  424230:	8fb30078 	lw	s3,120(sp)
  424234:	8fb4007c 	lw	s4,124(sp)
  424238:	8fb50080 	lw	s5,128(sp)
  42423c:	8fb60084 	lw	s6,132(sp)
  424240:	8fb70088 	lw	s7,136(sp)
  424244:	8fbe0090 	lw	s8,144(sp)
  424248:	03e00008 	jr	ra
  42424c:	27bd00b8 	addiu	sp,sp,184


======================================================================
ANALYSIS SUMMARY: FUN_00423b3c
======================================================================

FUNCTION CALLS:
----------------------------------------
  FUN_00422f58
  FUN_004237b4 (2x)
  FUN_00427a3c (2x)
  popmatrix (2x)
  pushmatrix (2x)
  translate (2x)

IRISGL CALLS (with addresses):
----------------------------------------
  0x00423ef4: pushmatrix
  0x00423f1c: translate
  0x00423ff0: popmatrix
  0x004240c0: pushmatrix
  0x004240e8: translate
  0x004241bc: popmatrix

FLOAT CONSTANTS LOADED:
----------------------------------------
  0x40000000 = 2.0f
  0x40100000 = 2.25f

GP SYMBOL REFERENCES:
----------------------------------------
  FUN_00422f58
  FUN_004237b4
  FUN_00427a3c
  curcontext
  fsn_resources
  maxx
  maxy
  minx
  popmatrix
  pushmatrix
  translate

======================================================================