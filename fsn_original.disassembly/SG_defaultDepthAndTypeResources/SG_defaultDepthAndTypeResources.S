# Function: SG_defaultDepthAndTypeResources
# Address: 0x00432b04 - 0x004338ec
# Size: 0xde8 (3560 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00432b04 <SG_defaultDepthAndTypeResources>:
  432b04:	3c1c0fbf 	lui	gp,0xfbf
  432b08:	279cb02c 	addiu	gp,gp,-20436
  432b0c:	0399e021 	addu	gp,gp,t9
  432b10:	27bdff70 	addiu	sp,sp,-144
  432b14:	240effff 	li	t6,-1
  432b18:	afbf002c 	sw	ra,44(sp)
  432b1c:	afbc0028 	sw	gp,40(sp)
  432b20:	afb20024 	sw	s2,36(sp)
  432b24:	afb10020 	sw	s1,32(sp)
  432b28:	afb0001c 	sw	s0,28(sp)
  432b2c:	afae0084 	sw	t6,132(sp)
  432b30:	afa00080 	sw	zero,128(sp)
  432b34:	afa0007c 	sw	zero,124(sp)
  432b38:	afa00078 	sw	zero,120(sp)
  432b3c:	00004025 	move	t0,zero
  432b40:	00001025 	move	v0,zero
  432b44:	00001825 	move	v1,zero
  432b48:	a3a00070 	sb	zero,112(sp)
  432b4c:	14800003 	bnez	a0,432b5c <SG_defaultDepthAndTypeResources+0x58>
  432b50:	a3a0006f 	sb	zero,111(sp)
  432b54:	1000035f 	b	4338d4 <SG_defaultDepthAndTypeResources+0xdd0>
  432b58:	2402fffe 	li	v0,-2
  432b5c:	8faf00a4 	lw	t7,164(sp)
  432b60:	14a00003 	bnez	a1,432b70 <SG_defaultDepthAndTypeResources+0x6c>
  432b64:	27b80080 	addiu	t8,sp,128
  432b68:	8c850084 	lw	a1,132(a0)
  432b6c:	00000000 	nop
  432b70:	14c00003 	bnez	a2,432b80 <SG_defaultDepthAndTypeResources+0x7c>
  432b74:	27ae007c 	addiu	t6,sp,124
  432b78:	24020001 	li	v0,1
  432b7c:	27a60084 	addiu	a2,sp,132
  432b80:	14e00004 	bnez	a3,432b94 <SG_defaultDepthAndTypeResources+0x90>
  432b84:	00000000 	nop
  432b88:	8f87805c 	lw	a3,-32676(gp)
  432b8c:	24080001 	li	t0,1
  432b90:	24e73e50 	addiu	a3,a3,15952
  432b94:	15e00004 	bnez	t7,432ba8 <SG_defaultDepthAndTypeResources+0xa4>
  432b98:	8fb900a0 	lw	t9,160(sp)
  432b9c:	24030001 	li	v1,1
  432ba0:	afb800a4 	sw	t8,164(sp)
  432ba4:	8fb900a0 	lw	t9,160(sp)
  432ba8:	00000000 	nop
  432bac:	17200003 	bnez	t9,432bbc <SG_defaultDepthAndTypeResources+0xb8>
  432bb0:	8faf00a8 	lw	t7,168(sp)
  432bb4:	afae00a0 	sw	t6,160(sp)
  432bb8:	8faf00a8 	lw	t7,168(sp)
  432bbc:	00000000 	nop
  432bc0:	15e00003 	bnez	t7,432bd0 <SG_defaultDepthAndTypeResources+0xcc>
  432bc4:	00000000 	nop
  432bc8:	afa000b0 	sw	zero,176(sp)
  432bcc:	afa000ac 	sw	zero,172(sp)
  432bd0:	8f998020 	lw	t9,-32736(gp)
  432bd4:	a3a20072 	sb	v0,114(sp)
  432bd8:	273925fc 	addiu	t9,t9,9724
  432bdc:	a3a30071 	sb	v1,113(sp)
  432be0:	afa40090 	sw	a0,144(sp)
  432be4:	afa50094 	sw	a1,148(sp)
  432be8:	afa60098 	sw	a2,152(sp)
  432bec:	afa7009c 	sw	a3,156(sp)
  432bf0:	0320f809 	jalr	t9
  432bf4:	a3a80073 	sb	t0,115(sp)
  432bf8:	93b80073 	lbu	t8,115(sp)
  432bfc:	8fbc0028 	lw	gp,40(sp)
  432c00:	17000007 	bnez	t8,432c20 <SG_defaultDepthAndTypeResources+0x11c>
  432c04:	00405025 	move	t2,v0
  432c08:	8fae009c 	lw	t6,156(sp)
  432c0c:	8c590024 	lw	t9,36(v0)
  432c10:	91cf0000 	lbu	t7,0(t6)
  432c14:	00000000 	nop
  432c18:	172f0048 	bne	t9,t7,432d3c <SG_defaultDepthAndTypeResources+0x238>
  432c1c:	8faf009c 	lw	t7,156(sp)
  432c20:	93b80072 	lbu	t8,114(sp)
  432c24:	8fae0098 	lw	t6,152(sp)
  432c28:	1700000a 	bnez	t8,432c54 <SG_defaultDepthAndTypeResources+0x150>
  432c2c:	93b80071 	lbu	t8,113(sp)
  432c30:	8c4f0024 	lw	t7,36(v0)
  432c34:	8dd90000 	lw	t9,0(t6)
  432c38:	000fc080 	sll	t8,t7,0x2
  432c3c:	00587021 	addu	t6,v0,t8
  432c40:	8dcf003c 	lw	t7,60(t6)
  432c44:	00000000 	nop
  432c48:	172f003c 	bne	t9,t7,432d3c <SG_defaultDepthAndTypeResources+0x238>
  432c4c:	8faf009c 	lw	t7,156(sp)
  432c50:	93b80071 	lbu	t8,113(sp)
  432c54:	8fae00a4 	lw	t6,164(sp)
  432c58:	1700000a 	bnez	t8,432c84 <SG_defaultDepthAndTypeResources+0x180>
  432c5c:	8fb00094 	lw	s0,148(sp)
  432c60:	8c4f0024 	lw	t7,36(v0)
  432c64:	8dd90000 	lw	t9,0(t6)
  432c68:	000fc080 	sll	t8,t7,0x2
  432c6c:	00587021 	addu	t6,v0,t8
  432c70:	8dcf0050 	lw	t7,80(t6)
  432c74:	00000000 	nop
  432c78:	172f0030 	bne	t9,t7,432d3c <SG_defaultDepthAndTypeResources+0x238>
  432c7c:	8faf009c 	lw	t7,156(sp)
  432c80:	8fb00094 	lw	s0,148(sp)
  432c84:	8fa20090 	lw	v0,144(sp)
  432c88:	0010c080 	sll	t8,s0,0x2
  432c8c:	8c4e008c 	lw	t6,140(v0)
  432c90:	0310c021 	addu	t8,t8,s0
  432c94:	00188100 	sll	s0,t8,0x4
  432c98:	01d0c821 	addu	t9,t6,s0
  432c9c:	8fa300a0 	lw	v1,160(sp)
  432ca0:	8f2f0024 	lw	t7,36(t9)
  432ca4:	8fb800a4 	lw	t8,164(sp)
  432ca8:	10600003 	beqz	v1,432cb8 <SG_defaultDepthAndTypeResources+0x1b4>
  432cac:	af0f0000 	sw	t7,0(t8)
  432cb0:	240e0002 	li	t6,2
  432cb4:	ac6e0000 	sw	t6,0(v1)
  432cb8:	8fa300b0 	lw	v1,176(sp)
  432cbc:	00000000 	nop
  432cc0:	10600007 	beqz	v1,432ce0 <SG_defaultDepthAndTypeResources+0x1dc>
  432cc4:	00000000 	nop
  432cc8:	8c59008c 	lw	t9,140(v0)
  432ccc:	00000000 	nop
  432cd0:	03307821 	addu	t7,t9,s0
  432cd4:	8df80008 	lw	t8,8(t7)
  432cd8:	00000000 	nop
  432cdc:	ac780000 	sw	t8,0(v1)
  432ce0:	8fa300a8 	lw	v1,168(sp)
  432ce4:	00000000 	nop
  432ce8:	10600007 	beqz	v1,432d08 <SG_defaultDepthAndTypeResources+0x204>
  432cec:	00000000 	nop
  432cf0:	8c4e008c 	lw	t6,140(v0)
  432cf4:	00000000 	nop
  432cf8:	01d0c821 	addu	t9,t6,s0
  432cfc:	8f2f0028 	lw	t7,40(t9)
  432d00:	00000000 	nop
  432d04:	ac6f0000 	sw	t7,0(v1)
  432d08:	8fa300ac 	lw	v1,172(sp)
  432d0c:	00000000 	nop
  432d10:	10600007 	beqz	v1,432d30 <SG_defaultDepthAndTypeResources+0x22c>
  432d14:	00000000 	nop
  432d18:	8c58008c 	lw	t8,140(v0)
  432d1c:	00000000 	nop
  432d20:	03107021 	addu	t6,t8,s0
  432d24:	8dd90030 	lw	t9,48(t6)
  432d28:	00000000 	nop
  432d2c:	ac790000 	sw	t9,0(v1)
  432d30:	100002e8 	b	4338d4 <SG_defaultDepthAndTypeResources+0xdd0>
  432d34:	24020002 	li	v0,2
  432d38:	8faf009c 	lw	t7,156(sp)
  432d3c:	00000000 	nop
  432d40:	91e20000 	lbu	v0,0(t7)
  432d44:	00000000 	nop
  432d48:	1040003a 	beqz	v0,432e34 <SG_defaultDepthAndTypeResources+0x330>
  432d4c:	00000000 	nop
  432d50:	10400038 	beqz	v0,432e34 <SG_defaultDepthAndTypeResources+0x330>
  432d54:	01e08025 	move	s0,t7
  432d58:	304400ff 	andi	a0,v0,0xff
  432d5c:	8f998514 	lw	t9,-31468(gp)
  432d60:	afaa0068 	sw	t2,104(sp)
  432d64:	0320f809 	jalr	t9
  432d68:	00000000 	nop
  432d6c:	8fbc0028 	lw	gp,40(sp)
  432d70:	8faa0068 	lw	t2,104(sp)
  432d74:	14400027 	bnez	v0,432e14 <SG_defaultDepthAndTypeResources+0x310>
  432d78:	00000000 	nop
  432d7c:	8f858a68 	lw	a1,-30104(gp)
  432d80:	8f98805c 	lw	t8,-32676(gp)
  432d84:	8f8e805c 	lw	t6,-32676(gp)
  432d88:	8f998020 	lw	t9,-32736(gp)
  432d8c:	92070000 	lbu	a3,0(s0)
  432d90:	8fa40090 	lw	a0,144(sp)
  432d94:	8fa6009c 	lw	a2,156(sp)
  432d98:	8ca501a8 	lw	a1,424(a1)
  432d9c:	27183e54 	addiu	t8,t8,15956
  432da0:	25ce3e58 	addiu	t6,t6,15960
  432da4:	27392a34 	addiu	t9,t9,10804
  432da8:	afae0014 	sw	t6,20(sp)
  432dac:	afb80010 	sw	t8,16(sp)
  432db0:	0320f809 	jalr	t9
  432db4:	afaa0068 	sw	t2,104(sp)
  432db8:	8fbc0028 	lw	gp,40(sp)
  432dbc:	a2000000 	sb	zero,0(s0)
  432dc0:	8f99805c 	lw	t9,-32676(gp)
  432dc4:	8f858a68 	lw	a1,-30104(gp)
  432dc8:	27393e60 	addiu	t9,t9,15968
  432dcc:	afb90010 	sw	t9,16(sp)
  432dd0:	8f998020 	lw	t9,-32736(gp)
  432dd4:	8f8f805c 	lw	t7,-32676(gp)
  432dd8:	8f87805c 	lw	a3,-32676(gp)
  432ddc:	8fa6009c 	lw	a2,156(sp)
  432de0:	8fa40090 	lw	a0,144(sp)
  432de4:	8ca501ac 	lw	a1,428(a1)
  432de8:	27392a34 	addiu	t9,t9,10804
  432dec:	25ef3e64 	addiu	t7,t7,15972
  432df0:	afaf0014 	sw	t7,20(sp)
  432df4:	0320f809 	jalr	t9
  432df8:	24e73e5c 	addiu	a3,a3,15964
  432dfc:	8fb8009c 	lw	t8,156(sp)
  432e00:	8fbc0028 	lw	gp,40(sp)
  432e04:	8faa0068 	lw	t2,104(sp)
  432e08:	93020000 	lbu	v0,0(t8)
  432e0c:	10000009 	b	432e34 <SG_defaultDepthAndTypeResources+0x330>
  432e10:	00000000 	nop
  432e14:	92040001 	lbu	a0,1(s0)
  432e18:	26100001 	addiu	s0,s0,1
  432e1c:	1480ffcf 	bnez	a0,432d5c <SG_defaultDepthAndTypeResources+0x258>
  432e20:	00000000 	nop
  432e24:	8fae009c 	lw	t6,156(sp)
  432e28:	00000000 	nop
  432e2c:	91c20000 	lbu	v0,0(t6)
  432e30:	00000000 	nop
  432e34:	14400006 	bnez	v0,432e50 <SG_defaultDepthAndTypeResources+0x34c>
  432e38:	8fa5009c 	lw	a1,156(sp)
  432e3c:	8f85805c 	lw	a1,-32676(gp)
  432e40:	00000000 	nop
  432e44:	24a53e68 	addiu	a1,a1,15976
  432e48:	afa5009c 	sw	a1,156(sp)
  432e4c:	8fa5009c 	lw	a1,156(sp)
  432e50:	8f84805c 	lw	a0,-32676(gp)
  432e54:	8f998504 	lw	t9,-31484(gp)
  432e58:	afaa0068 	sw	t2,104(sp)
  432e5c:	00a09025 	move	s2,a1
  432e60:	0320f809 	jalr	t9
  432e64:	24843e70 	addiu	a0,a0,15984
  432e68:	8fbc0028 	lw	gp,40(sp)
  432e6c:	8faa0068 	lw	t2,104(sp)
  432e70:	14400009 	bnez	v0,432e98 <SG_defaultDepthAndTypeResources+0x394>
  432e74:	241f0003 	li	ra,3
  432e78:	8d430024 	lw	v1,36(t2)
  432e7c:	8fb800a0 	lw	t8,160(sp)
  432e80:	0003c880 	sll	t9,v1,0x2
  432e84:	01597821 	addu	t7,t2,t9
  432e88:	8df20064 	lw	s2,100(t7)
  432e8c:	240d0004 	li	t5,4
  432e90:	1000005d 	b	433008 <SG_defaultDepthAndTypeResources+0x504>
  432e94:	af030000 	sw	v1,0(t8)
  432e98:	8f84805c 	lw	a0,-32676(gp)
  432e9c:	8f998504 	lw	t9,-31484(gp)
  432ea0:	8fa5009c 	lw	a1,156(sp)
  432ea4:	afaa0068 	sw	t2,104(sp)
  432ea8:	0320f809 	jalr	t9
  432eac:	24843e78 	addiu	a0,a0,15992
  432eb0:	8fbc0028 	lw	gp,40(sp)
  432eb4:	8faa0068 	lw	t2,104(sp)
  432eb8:	1440001e 	bnez	v0,432f34 <SG_defaultDepthAndTypeResources+0x430>
  432ebc:	24180001 	li	t8,1
  432ec0:	8d430024 	lw	v1,36(t2)
  432ec4:	8faf00a0 	lw	t7,160(sp)
  432ec8:	00037080 	sll	t6,v1,0x2
  432ecc:	014ec821 	addu	t9,t2,t6
  432ed0:	8f320064 	lw	s2,100(t9)
  432ed4:	8f99805c 	lw	t9,-32676(gp)
  432ed8:	ade30000 	sw	v1,0(t7)
  432edc:	27393e90 	addiu	t9,t9,16016
  432ee0:	afb90014 	sw	t9,20(sp)
  432ee4:	8f998020 	lw	t9,-32736(gp)
  432ee8:	8f8e805c 	lw	t6,-32676(gp)
  432eec:	8f858a68 	lw	a1,-30104(gp)
  432ef0:	8f86805c 	lw	a2,-32676(gp)
  432ef4:	8f87805c 	lw	a3,-32676(gp)
  432ef8:	8fa40090 	lw	a0,144(sp)
  432efc:	27392a34 	addiu	t9,t9,10804
  432f00:	25ce3e8c 	addiu	t6,t6,16012
  432f04:	8ca501b0 	lw	a1,432(a1)
  432f08:	a3b8006f 	sb	t8,111(sp)
  432f0c:	afae0010 	sw	t6,16(sp)
  432f10:	afaa0068 	sw	t2,104(sp)
  432f14:	24c63e84 	addiu	a2,a2,16004
  432f18:	0320f809 	jalr	t9
  432f1c:	24e73e88 	addiu	a3,a3,16008
  432f20:	8fbc0028 	lw	gp,40(sp)
  432f24:	8faa0068 	lw	t2,104(sp)
  432f28:	241f0003 	li	ra,3
  432f2c:	10000036 	b	433008 <SG_defaultDepthAndTypeResources+0x504>
  432f30:	240d0004 	li	t5,4
  432f34:	8f84805c 	lw	a0,-32676(gp)
  432f38:	8f998504 	lw	t9,-31484(gp)
  432f3c:	8fa5009c 	lw	a1,156(sp)
  432f40:	afaa0068 	sw	t2,104(sp)
  432f44:	0320f809 	jalr	t9
  432f48:	24843e94 	addiu	a0,a0,16020
  432f4c:	8fbc0028 	lw	gp,40(sp)
  432f50:	8faa0068 	lw	t2,104(sp)
  432f54:	14400006 	bnez	v0,432f70 <SG_defaultDepthAndTypeResources+0x46c>
  432f58:	240f0002 	li	t7,2
  432f5c:	8fb800a0 	lw	t8,160(sp)
  432f60:	241f0003 	li	ra,3
  432f64:	240d0004 	li	t5,4
  432f68:	10000027 	b	433008 <SG_defaultDepthAndTypeResources+0x504>
  432f6c:	af0f0000 	sw	t7,0(t8)
  432f70:	8f84805c 	lw	a0,-32676(gp)
  432f74:	8f998504 	lw	t9,-31484(gp)
  432f78:	8fa5009c 	lw	a1,156(sp)
  432f7c:	afaa0068 	sw	t2,104(sp)
  432f80:	0320f809 	jalr	t9
  432f84:	24843e9c 	addiu	a0,a0,16028
  432f88:	8fbc0028 	lw	gp,40(sp)
  432f8c:	8faa0068 	lw	t2,104(sp)
  432f90:	14400005 	bnez	v0,432fa8 <SG_defaultDepthAndTypeResources+0x4a4>
  432f94:	241f0003 	li	ra,3
  432f98:	8fae00a0 	lw	t6,160(sp)
  432f9c:	240d0004 	li	t5,4
  432fa0:	10000019 	b	433008 <SG_defaultDepthAndTypeResources+0x504>
  432fa4:	addf0000 	sw	ra,0(t6)
  432fa8:	8f84805c 	lw	a0,-32676(gp)
  432fac:	8f998504 	lw	t9,-31484(gp)
  432fb0:	8fa5009c 	lw	a1,156(sp)
  432fb4:	afaa0068 	sw	t2,104(sp)
  432fb8:	0320f809 	jalr	t9
  432fbc:	24843ea4 	addiu	a0,a0,16036
  432fc0:	8fbc0028 	lw	gp,40(sp)
  432fc4:	8faa0068 	lw	t2,104(sp)
  432fc8:	14400006 	bnez	v0,432fe4 <SG_defaultDepthAndTypeResources+0x4e0>
  432fcc:	24190001 	li	t9,1
  432fd0:	8fb900a0 	lw	t9,160(sp)
  432fd4:	240d0004 	li	t5,4
  432fd8:	241f0003 	li	ra,3
  432fdc:	1000000a 	b	433008 <SG_defaultDepthAndTypeResources+0x504>
  432fe0:	af2d0000 	sw	t5,0(t9)
  432fe4:	8d430024 	lw	v1,36(t2)
  432fe8:	8fae00a0 	lw	t6,160(sp)
  432fec:	00037880 	sll	t7,v1,0x2
  432ff0:	014fc021 	addu	t8,t2,t7
  432ff4:	8f120064 	lw	s2,100(t8)
  432ff8:	adc30000 	sw	v1,0(t6)
  432ffc:	a3b9006f 	sb	t9,111(sp)
  433000:	241f0003 	li	ra,3
  433004:	240d0004 	li	t5,4
  433008:	93af0072 	lbu	t7,114(sp)
  43300c:	8fb800a0 	lw	t8,160(sp)
  433010:	11e0000c 	beqz	t7,433044 <SG_defaultDepthAndTypeResources+0x540>
  433014:	00003825 	move	a3,zero
  433018:	8d430024 	lw	v1,36(t2)
  43301c:	8f0e0000 	lw	t6,0(t8)
  433020:	00000000 	nop
  433024:	146e0007 	bne	v1,t6,433044 <SG_defaultDepthAndTypeResources+0x540>
  433028:	00000000 	nop
  43302c:	0003c880 	sll	t9,v1,0x2
  433030:	01597821 	addu	t7,t2,t9
  433034:	8df8003c 	lw	t8,60(t7)
  433038:	8fae0098 	lw	t6,152(sp)
  43303c:	00000000 	nop
  433040:	add80000 	sw	t8,0(t6)
  433044:	8d490018 	lw	t1,24(t2)
  433048:	00003025 	move	a2,zero
  43304c:	19200023 	blez	t1,4330dc <SG_defaultDepthAndTypeResources+0x5d8>
  433050:	00002025 	move	a0,zero
  433054:	8fb900a0 	lw	t9,160(sp)
  433058:	8d450020 	lw	a1,32(t2)
  43305c:	8f280000 	lw	t0,0(t9)
  433060:	240c0001 	li	t4,1
  433064:	240b0028 	li	t3,40
  433068:	8ca30000 	lw	v1,0(a1)
  43306c:	8faf0098 	lw	t7,152(sp)
  433070:	1468000e 	bne	v1,t0,4330ac <SG_defaultDepthAndTypeResources+0x5a8>
  433074:	24010002 	li	at,2
  433078:	8de20000 	lw	v0,0(t7)
  43307c:	00000000 	nop
  433080:	04400016 	bltz	v0,4330dc <SG_defaultDepthAndTypeResources+0x5d8>
  433084:	00000000 	nop
  433088:	008b0019 	multu	a0,t3
  43308c:	8d580014 	lw	t8,20(t2)
  433090:	00007012 	mflo	t6
  433094:	030ec821 	addu	t9,t8,t6
  433098:	8f2f0010 	lw	t7,16(t9)
  43309c:	00000000 	nop
  4330a0:	11e2000e 	beq	t7,v0,4330dc <SG_defaultDepthAndTypeResources+0x5d8>
  4330a4:	00000000 	nop
  4330a8:	24c60001 	addiu	a2,a2,1
  4330ac:	106c0008 	beq	v1,t4,4330d0 <SG_defaultDepthAndTypeResources+0x5cc>
  4330b0:	24840001 	addiu	a0,a0,1
  4330b4:	10610007 	beq	v1,at,4330d4 <SG_defaultDepthAndTypeResources+0x5d0>
  4330b8:	0089082a 	slt	at,a0,t1
  4330bc:	107f0005 	beq	v1,ra,4330d4 <SG_defaultDepthAndTypeResources+0x5d0>
  4330c0:	0089082a 	slt	at,a0,t1
  4330c4:	146d0003 	bne	v1,t5,4330d4 <SG_defaultDepthAndTypeResources+0x5d0>
  4330c8:	0089082a 	slt	at,a0,t1
  4330cc:	24e70001 	addiu	a3,a3,1
  4330d0:	0089082a 	slt	at,a0,t1
  4330d4:	1420ffe4 	bnez	at,433068 <SG_defaultDepthAndTypeResources+0x564>
  4330d8:	24a50004 	addiu	a1,a1,4
  4330dc:	14890033 	bne	a0,t1,4331ac <SG_defaultDepthAndTypeResources+0x6a8>
  4330e0:	240c0001 	li	t4,1
  4330e4:	10c00004 	beqz	a2,4330f8 <SG_defaultDepthAndTypeResources+0x5f4>
  4330e8:	8fa200a0 	lw	v0,160(sp)
  4330ec:	100001f9 	b	4338d4 <SG_defaultDepthAndTypeResources+0xdd0>
  4330f0:	2402fffd 	li	v0,-3
  4330f4:	8fa200a0 	lw	v0,160(sp)
  4330f8:	24040002 	li	a0,2
  4330fc:	8c500000 	lw	s0,0(v0)
  433100:	240f0002 	li	t7,2
  433104:	120c000e 	beq	s0,t4,433140 <SG_defaultDepthAndTypeResources+0x63c>
  433108:	24180001 	li	t8,1
  43310c:	12040011 	beq	s0,a0,433154 <SG_defaultDepthAndTypeResources+0x650>
  433110:	00000000 	nop
  433114:	121f0017 	beq	s0,ra,433174 <SG_defaultDepthAndTypeResources+0x670>
  433118:	24180001 	li	t8,1
  43311c:	120d0020 	beq	s0,t5,4331a0 <SG_defaultDepthAndTypeResources+0x69c>
  433120:	a3b8006f 	sb	t8,111(sp)
  433124:	8d430024 	lw	v1,36(t2)
  433128:	00000000 	nop
  43312c:	00037080 	sll	t6,v1,0x2
  433130:	014ec821 	addu	t9,t2,t6
  433134:	8f320064 	lw	s2,100(t9)
  433138:	1000001c 	b	4331ac <SG_defaultDepthAndTypeResources+0x6a8>
  43313c:	ac430000 	sw	v1,0(v0)
  433140:	8f92805c 	lw	s2,-32676(gp)
  433144:	ac4f0000 	sw	t7,0(v0)
  433148:	a3b8006f 	sb	t8,111(sp)
  43314c:	10000017 	b	4331ac <SG_defaultDepthAndTypeResources+0x6a8>
  433150:	26523eac 	addiu	s2,s2,16044
  433154:	8d430024 	lw	v1,36(t2)
  433158:	240f0001 	li	t7,1
  43315c:	00037080 	sll	t6,v1,0x2
  433160:	014ec821 	addu	t9,t2,t6
  433164:	8f320064 	lw	s2,100(t9)
  433168:	ac430000 	sw	v1,0(v0)
  43316c:	1000000f 	b	4331ac <SG_defaultDepthAndTypeResources+0x6a8>
  433170:	a3af006f 	sb	t7,111(sp)
  433174:	10e00005 	beqz	a3,43318c <SG_defaultDepthAndTypeResources+0x688>
  433178:	24180001 	li	t8,1
  43317c:	8f92805c 	lw	s2,-32676(gp)
  433180:	ac4d0000 	sw	t5,0(v0)
  433184:	10000009 	b	4331ac <SG_defaultDepthAndTypeResources+0x6a8>
  433188:	26523eb4 	addiu	s2,s2,16052
  43318c:	8f92805c 	lw	s2,-32676(gp)
  433190:	ac440000 	sw	a0,0(v0)
  433194:	a3b8006f 	sb	t8,111(sp)
  433198:	10000004 	b	4331ac <SG_defaultDepthAndTypeResources+0x6a8>
  43319c:	26523ebc 	addiu	s2,s2,16060
  4331a0:	8f92805c 	lw	s2,-32676(gp)
  4331a4:	ac440000 	sw	a0,0(v0)
  4331a8:	26523ec4 	addiu	s2,s2,16068
  4331ac:	8fa200a0 	lw	v0,160(sp)
  4331b0:	00000000 	nop
  4331b4:	8c510000 	lw	s1,0(v0)
  4331b8:	00000000 	nop
  4331bc:	93ae0072 	lbu	t6,114(sp)
  4331c0:	8fa40090 	lw	a0,144(sp)
  4331c4:	11c00003 	beqz	t6,4331d4 <SG_defaultDepthAndTypeResources+0x6d0>
  4331c8:	02203825 	move	a3,s1
  4331cc:	10000003 	b	4331dc <SG_defaultDepthAndTypeResources+0x6d8>
  4331d0:	00008025 	move	s0,zero
  4331d4:	8fb00098 	lw	s0,152(sp)
  4331d8:	00000000 	nop
  4331dc:	8fb900a4 	lw	t9,164(sp)
  4331e0:	8fa50094 	lw	a1,148(sp)
  4331e4:	8f2f0000 	lw	t7,0(t9)
  4331e8:	8f998020 	lw	t9,-32736(gp)
  4331ec:	afaa0068 	sw	t2,104(sp)
  4331f0:	27391788 	addiu	t9,t9,6024
  4331f4:	02003025 	move	a2,s0
  4331f8:	0320f809 	jalr	t9
  4331fc:	afaf0010 	sw	t7,16(sp)
  433200:	8fbc0028 	lw	gp,40(sp)
  433204:	8faa0068 	lw	t2,104(sp)
  433208:	240d0004 	li	t5,4
  43320c:	241f0003 	li	ra,3
  433210:	14400077 	bnez	v0,4333f0 <SG_defaultDepthAndTypeResources+0x8ec>
  433214:	afa2008c 	sw	v0,140(sp)
  433218:	2e210005 	sltiu	at,s1,5
  43321c:	10200075 	beqz	at,4333f4 <SG_defaultDepthAndTypeResources+0x8f0>
  433220:	8fb8008c 	lw	t8,140(sp)
  433224:	8f81805c 	lw	at,-32676(gp)
  433228:	0011c080 	sll	t8,s1,0x2
  43322c:	00380821 	addu	at,at,t8
  433230:	8c383f4c 	lw	t8,16204(at)
  433234:	00000000 	nop
  433238:	031cc021 	addu	t8,t8,gp
  43323c:	03000008 	jr	t8
  433240:	00000000 	nop
  433244:	8fae00a4 	lw	t6,164(sp)
  433248:	8f99805c 	lw	t9,-32676(gp)
  43324c:	8dc70000 	lw	a3,0(t6)
  433250:	27393ecc 	addiu	t9,t9,16076
  433254:	afb90010 	sw	t9,16(sp)
  433258:	8f998020 	lw	t9,-32736(gp)
  43325c:	8f858a68 	lw	a1,-30104(gp)
  433260:	8f8f805c 	lw	t7,-32676(gp)
  433264:	8fa40090 	lw	a0,144(sp)
  433268:	8fa6009c 	lw	a2,156(sp)
  43326c:	27392a34 	addiu	t9,t9,10804
  433270:	8ca501b4 	lw	a1,436(a1)
  433274:	25ef3ed0 	addiu	t7,t7,16080
  433278:	afaf0014 	sw	t7,20(sp)
  43327c:	0320f809 	jalr	t9
  433280:	afaa0068 	sw	t2,104(sp)
  433284:	8fbc0028 	lw	gp,40(sp)
  433288:	8fa40090 	lw	a0,144(sp)
  43328c:	8f858a68 	lw	a1,-30104(gp)
  433290:	8f98805c 	lw	t8,-32676(gp)
  433294:	8f8e805c 	lw	t6,-32676(gp)
  433298:	8f998020 	lw	t9,-32736(gp)
  43329c:	8f86805c 	lw	a2,-32676(gp)
  4332a0:	8f87805c 	lw	a3,-32676(gp)
  4332a4:	8ca501b8 	lw	a1,440(a1)
  4332a8:	27183edc 	addiu	t8,t8,16092
  4332ac:	25ce3ee0 	addiu	t6,t6,16096
  4332b0:	27392a34 	addiu	t9,t9,10804
  4332b4:	afae0014 	sw	t6,20(sp)
  4332b8:	afb80010 	sw	t8,16(sp)
  4332bc:	24c63ed4 	addiu	a2,a2,16084
  4332c0:	0320f809 	jalr	t9
  4332c4:	24e73ed8 	addiu	a3,a3,16088
  4332c8:	8fb00094 	lw	s0,148(sp)
  4332cc:	8fa30090 	lw	v1,144(sp)
  4332d0:	0010c880 	sll	t9,s0,0x2
  4332d4:	8c6f008c 	lw	t7,140(v1)
  4332d8:	0330c821 	addu	t9,t9,s0
  4332dc:	0019c900 	sll	t9,t9,0x4
  4332e0:	01f9c021 	addu	t8,t7,t9
  4332e4:	03208025 	move	s0,t9
  4332e8:	8faa0068 	lw	t2,104(sp)
  4332ec:	8fb900a4 	lw	t9,164(sp)
  4332f0:	8f0e0024 	lw	t6,36(t8)
  4332f4:	8fa200a0 	lw	v0,160(sp)
  4332f8:	8fbc0028 	lw	gp,40(sp)
  4332fc:	af2e0000 	sw	t6,0(t9)
  433300:	8d4f0024 	lw	t7,36(t2)
  433304:	00000000 	nop
  433308:	000fc080 	sll	t8,t7,0x2
  43330c:	01587021 	addu	t6,t2,t8
  433310:	8dd9003c 	lw	t9,60(t6)
  433314:	8faf0098 	lw	t7,152(sp)
  433318:	10400003 	beqz	v0,433328 <SG_defaultDepthAndTypeResources+0x824>
  43331c:	adf90000 	sw	t9,0(t7)
  433320:	24180002 	li	t8,2
  433324:	ac580000 	sw	t8,0(v0)
  433328:	8fa200b0 	lw	v0,176(sp)
  43332c:	00000000 	nop
  433330:	10400007 	beqz	v0,433350 <SG_defaultDepthAndTypeResources+0x84c>
  433334:	00000000 	nop
  433338:	8c6e008c 	lw	t6,140(v1)
  43333c:	00000000 	nop
  433340:	01d0c821 	addu	t9,t6,s0
  433344:	8f2f0008 	lw	t7,8(t9)
  433348:	00000000 	nop
  43334c:	ac4f0000 	sw	t7,0(v0)
  433350:	8fa200a8 	lw	v0,168(sp)
  433354:	00000000 	nop
  433358:	10400007 	beqz	v0,433378 <SG_defaultDepthAndTypeResources+0x874>
  43335c:	00000000 	nop
  433360:	8c78008c 	lw	t8,140(v1)
  433364:	00000000 	nop
  433368:	03107021 	addu	t6,t8,s0
  43336c:	8dd90028 	lw	t9,40(t6)
  433370:	00000000 	nop
  433374:	ac590000 	sw	t9,0(v0)
  433378:	8fa200ac 	lw	v0,172(sp)
  43337c:	00000000 	nop
  433380:	10400007 	beqz	v0,4333a0 <SG_defaultDepthAndTypeResources+0x89c>
  433384:	00000000 	nop
  433388:	8c6f008c 	lw	t7,140(v1)
  43338c:	00000000 	nop
  433390:	01f0c021 	addu	t8,t7,s0
  433394:	8f0e0030 	lw	t6,48(t8)
  433398:	00000000 	nop
  43339c:	ac4e0000 	sw	t6,0(v0)
  4333a0:	1000014c 	b	4338d4 <SG_defaultDepthAndTypeResources+0xdd0>
  4333a4:	2402ffff 	li	v0,-1
  4333a8:	8f92805c 	lw	s2,-32676(gp)
  4333ac:	24110002 	li	s1,2
  4333b0:	1000000f 	b	4333f0 <SG_defaultDepthAndTypeResources+0x8ec>
  4333b4:	26523ee4 	addiu	s2,s2,16100
  4333b8:	8d510024 	lw	s1,36(t2)
  4333bc:	00000000 	nop
  4333c0:	0011c880 	sll	t9,s1,0x2
  4333c4:	01597821 	addu	t7,t2,t9
  4333c8:	8df20064 	lw	s2,100(t7)
  4333cc:	10000009 	b	4333f4 <SG_defaultDepthAndTypeResources+0x8f0>
  4333d0:	8fb8008c 	lw	t8,140(sp)
  4333d4:	8f92805c 	lw	s2,-32676(gp)
  4333d8:	01a08825 	move	s1,t5
  4333dc:	10000004 	b	4333f0 <SG_defaultDepthAndTypeResources+0x8ec>
  4333e0:	26523eec 	addiu	s2,s2,16108
  4333e4:	8f92805c 	lw	s2,-32676(gp)
  4333e8:	24110002 	li	s1,2
  4333ec:	26523ef4 	addiu	s2,s2,16116
  4333f0:	8fb8008c 	lw	t8,140(sp)
  4333f4:	00000000 	nop
  4333f8:	1300ff71 	beqz	t8,4331c0 <SG_defaultDepthAndTypeResources+0x6bc>
  4333fc:	93ae0072 	lbu	t6,114(sp)
  433400:	93ae0071 	lbu	t6,113(sp)
  433404:	8fb900a4 	lw	t9,164(sp)
  433408:	15c00008 	bnez	t6,43342c <SG_defaultDepthAndTypeResources+0x928>
  43340c:	93af0073 	lbu	t7,115(sp)
  433410:	8f230000 	lw	v1,0(t9)
  433414:	00000000 	nop
  433418:	10430004 	beq	v0,v1,43342c <SG_defaultDepthAndTypeResources+0x928>
  43341c:	93af0073 	lbu	t7,115(sp)
  433420:	1460000e 	bnez	v1,43345c <SG_defaultDepthAndTypeResources+0x958>
  433424:	93af0071 	lbu	t7,113(sp)
  433428:	93af0073 	lbu	t7,115(sp)
  43342c:	8fb800a0 	lw	t8,160(sp)
  433430:	15e00006 	bnez	t7,43344c <SG_defaultDepthAndTypeResources+0x948>
  433434:	93b9006f 	lbu	t9,111(sp)
  433438:	8f0e0000 	lw	t6,0(t8)
  43343c:	00000000 	nop
  433440:	162e0006 	bne	s1,t6,43345c <SG_defaultDepthAndTypeResources+0x958>
  433444:	93af0071 	lbu	t7,113(sp)
  433448:	93b9006f 	lbu	t9,111(sp)
  43344c:	00000000 	nop
  433450:	1320002c 	beqz	t9,433504 <SG_defaultDepthAndTypeResources+0xa00>
  433454:	8faf008c 	lw	t7,140(sp)
  433458:	93af0071 	lbu	t7,113(sp)
  43345c:	8fb800a0 	lw	t8,160(sp)
  433460:	11e00008 	beqz	t7,433484 <SG_defaultDepthAndTypeResources+0x980>
  433464:	8fb900a4 	lw	t9,164(sp)
  433468:	8f0e0000 	lw	t6,0(t8)
  43346c:	00000000 	nop
  433470:	17ee0004 	bne	ra,t6,433484 <SG_defaultDepthAndTypeResources+0x980>
  433474:	8fb900a4 	lw	t9,164(sp)
  433478:	122d0022 	beq	s1,t5,433504 <SG_defaultDepthAndTypeResources+0xa00>
  43347c:	8faf008c 	lw	t7,140(sp)
  433480:	8fb900a4 	lw	t9,164(sp)
  433484:	8f858a68 	lw	a1,-30104(gp)
  433488:	8f270000 	lw	a3,0(t9)
  43348c:	8f998020 	lw	t9,-32736(gp)
  433490:	8f8f805c 	lw	t7,-32676(gp)
  433494:	8f98805c 	lw	t8,-32676(gp)
  433498:	8fa40090 	lw	a0,144(sp)
  43349c:	8fa6009c 	lw	a2,156(sp)
  4334a0:	8ca501b4 	lw	a1,436(a1)
  4334a4:	27392a34 	addiu	t9,t9,10804
  4334a8:	25ef3efc 	addiu	t7,t7,16124
  4334ac:	27183f00 	addiu	t8,t8,16128
  4334b0:	afb80014 	sw	t8,20(sp)
  4334b4:	0320f809 	jalr	t9
  4334b8:	afaf0010 	sw	t7,16(sp)
  4334bc:	8fbc0028 	lw	gp,40(sp)
  4334c0:	8fa40090 	lw	a0,144(sp)
  4334c4:	8f99805c 	lw	t9,-32676(gp)
  4334c8:	8f858a68 	lw	a1,-30104(gp)
  4334cc:	27393f08 	addiu	t9,t9,16136
  4334d0:	afb90014 	sw	t9,20(sp)
  4334d4:	8f998020 	lw	t9,-32736(gp)
  4334d8:	8f8e805c 	lw	t6,-32676(gp)
  4334dc:	8fa7008c 	lw	a3,140(sp)
  4334e0:	8ca501bc 	lw	a1,444(a1)
  4334e4:	27392a34 	addiu	t9,t9,10804
  4334e8:	25ce3f04 	addiu	t6,t6,16132
  4334ec:	afae0010 	sw	t6,16(sp)
  4334f0:	0320f809 	jalr	t9
  4334f4:	02403025 	move	a2,s2
  4334f8:	8fbc0028 	lw	gp,40(sp)
  4334fc:	00000000 	nop
  433500:	8faf008c 	lw	t7,140(sp)
  433504:	8fb800a4 	lw	t8,164(sp)
  433508:	02203025 	move	a2,s1
  43350c:	af0f0000 	sw	t7,0(t8)
  433510:	8fae00a0 	lw	t6,160(sp)
  433514:	00000000 	nop
  433518:	11c00003 	beqz	t6,433528 <SG_defaultDepthAndTypeResources+0xa24>
  43351c:	93b90072 	lbu	t9,114(sp)
  433520:	add10000 	sw	s1,0(t6)
  433524:	93b90072 	lbu	t9,114(sp)
  433528:	8fa40090 	lw	a0,144(sp)
  43352c:	13200004 	beqz	t9,433540 <SG_defaultDepthAndTypeResources+0xa3c>
  433530:	8fb00098 	lw	s0,152(sp)
  433534:	10000003 	b	433544 <SG_defaultDepthAndTypeResources+0xa40>
  433538:	00008025 	move	s0,zero
  43353c:	8fb00098 	lw	s0,152(sp)
  433540:	00000000 	nop
  433544:	8f998020 	lw	t9,-32736(gp)
  433548:	8fa50094 	lw	a1,148(sp)
  43354c:	8fa7008c 	lw	a3,140(sp)
  433550:	27391630 	addiu	t9,t9,5680
  433554:	0320f809 	jalr	t9
  433558:	afb00010 	sw	s0,16(sp)
  43355c:	8faf0098 	lw	t7,152(sp)
  433560:	8fbc0028 	lw	gp,40(sp)
  433564:	ade20000 	sw	v0,0(t7)
  433568:	8fb800a8 	lw	t8,168(sp)
  43356c:	8fa40090 	lw	a0,144(sp)
  433570:	1300000a 	beqz	t8,43359c <SG_defaultDepthAndTypeResources+0xa98>
  433574:	01e03825 	move	a3,t7
  433578:	8f998020 	lw	t9,-32736(gp)
  43357c:	8fa50094 	lw	a1,148(sp)
  433580:	8fa6008c 	lw	a2,140(sp)
  433584:	27392370 	addiu	t9,t9,9072
  433588:	0320f809 	jalr	t9
  43358c:	afb10010 	sw	s1,16(sp)
  433590:	8fae00a8 	lw	t6,168(sp)
  433594:	8fbc0028 	lw	gp,40(sp)
  433598:	adc20000 	sw	v0,0(t6)
  43359c:	8fb900a8 	lw	t9,168(sp)
  4335a0:	00000000 	nop
  4335a4:	1320002f 	beqz	t9,433664 <SG_defaultDepthAndTypeResources+0xb60>
  4335a8:	00000000 	nop
  4335ac:	8f260000 	lw	a2,0(t9)
  4335b0:	8fb00094 	lw	s0,148(sp)
  4335b4:	04c0002b 	bltz	a2,433664 <SG_defaultDepthAndTypeResources+0xb60>
  4335b8:	0010c080 	sll	t8,s0,0x2
  4335bc:	8faf0090 	lw	t7,144(sp)
  4335c0:	0310c021 	addu	t8,t8,s0
  4335c4:	8dee008c 	lw	t6,140(t7)
  4335c8:	00188100 	sll	s0,t8,0x4
  4335cc:	01d01021 	addu	v0,t6,s0
  4335d0:	8c590028 	lw	t9,40(v0)
  4335d4:	8fb800ac 	lw	t8,172(sp)
  4335d8:	14d90008 	bne	a2,t9,4335fc <SG_defaultDepthAndTypeResources+0xaf8>
  4335dc:	240e0002 	li	t6,2
  4335e0:	13000004 	beqz	t8,4335f4 <SG_defaultDepthAndTypeResources+0xaf0>
  4335e4:	00000000 	nop
  4335e8:	8c4f0030 	lw	t7,48(v0)
  4335ec:	00000000 	nop
  4335f0:	af0f0000 	sw	t7,0(t8)
  4335f4:	1000000c 	b	433628 <SG_defaultDepthAndTypeResources+0xb24>
  4335f8:	afae0078 	sw	t6,120(sp)
  4335fc:	8fb900ac 	lw	t9,172(sp)
  433600:	8fa40090 	lw	a0,144(sp)
  433604:	13200009 	beqz	t9,43362c <SG_defaultDepthAndTypeResources+0xb28>
  433608:	8fb800b0 	lw	t8,176(sp)
  43360c:	8f9987f8 	lw	t9,-30728(gp)
  433610:	8fa50094 	lw	a1,148(sp)
  433614:	0320f809 	jalr	t9
  433618:	00000000 	nop
  43361c:	8faf00ac 	lw	t7,172(sp)
  433620:	8fbc0028 	lw	gp,40(sp)
  433624:	ade20000 	sw	v0,0(t7)
  433628:	8fb800b0 	lw	t8,176(sp)
  43362c:	8fa40090 	lw	a0,144(sp)
  433630:	1300000c 	beqz	t8,433664 <SG_defaultDepthAndTypeResources+0xb60>
  433634:	24060001 	li	a2,1
  433638:	8c99008c 	lw	t9,140(a0)
  43363c:	8fb8008c 	lw	t8,140(sp)
  433640:	03307821 	addu	t7,t9,s0
  433644:	8f998500 	lw	t9,-31488(gp)
  433648:	8de50008 	lw	a1,8(t7)
  43364c:	24070001 	li	a3,1
  433650:	0320f809 	jalr	t9
  433654:	afb80010 	sw	t8,16(sp)
  433658:	8fae00b0 	lw	t6,176(sp)
  43365c:	8fbc0028 	lw	gp,40(sp)
  433660:	adc20000 	sw	v0,0(t6)
  433664:	8fb900a8 	lw	t9,168(sp)
  433668:	00000000 	nop
  43366c:	13200018 	beqz	t9,4336d0 <SG_defaultDepthAndTypeResources+0xbcc>
  433670:	8faf00ac 	lw	t7,172(sp)
  433674:	8f2f0000 	lw	t7,0(t9)
  433678:	8fa40090 	lw	a0,144(sp)
  43367c:	1de00014 	bgtz	t7,4336d0 <SG_defaultDepthAndTypeResources+0xbcc>
  433680:	8faf00ac 	lw	t7,172(sp)
  433684:	8f858a68 	lw	a1,-30104(gp)
  433688:	8f98805c 	lw	t8,-32676(gp)
  43368c:	8f8e805c 	lw	t6,-32676(gp)
  433690:	8f998020 	lw	t9,-32736(gp)
  433694:	8f86805c 	lw	a2,-32676(gp)
  433698:	8f87805c 	lw	a3,-32676(gp)
  43369c:	8ca501c0 	lw	a1,448(a1)
  4336a0:	27183f14 	addiu	t8,t8,16148
  4336a4:	25ce3f18 	addiu	t6,t6,16152
  4336a8:	27392a34 	addiu	t9,t9,10804
  4336ac:	afae0014 	sw	t6,20(sp)
  4336b0:	afb80010 	sw	t8,16(sp)
  4336b4:	24c63f0c 	addiu	a2,a2,16140
  4336b8:	0320f809 	jalr	t9
  4336bc:	24e73f10 	addiu	a3,a3,16144
  4336c0:	24190001 	li	t9,1
  4336c4:	8fbc0028 	lw	gp,40(sp)
  4336c8:	a3b90070 	sb	t9,112(sp)
  4336cc:	8faf00ac 	lw	t7,172(sp)
  4336d0:	00000000 	nop
  4336d4:	11e00019 	beqz	t7,43373c <SG_defaultDepthAndTypeResources+0xc38>
  4336d8:	8fae00b0 	lw	t6,176(sp)
  4336dc:	8df80000 	lw	t8,0(t7)
  4336e0:	8fa40090 	lw	a0,144(sp)
  4336e4:	1f000015 	bgtz	t8,43373c <SG_defaultDepthAndTypeResources+0xc38>
  4336e8:	8fae00b0 	lw	t6,176(sp)
  4336ec:	8f99805c 	lw	t9,-32676(gp)
  4336f0:	8f858a68 	lw	a1,-30104(gp)
  4336f4:	27393f28 	addiu	t9,t9,16168
  4336f8:	afb90014 	sw	t9,20(sp)
  4336fc:	8f998020 	lw	t9,-32736(gp)
  433700:	8f8e805c 	lw	t6,-32676(gp)
  433704:	8f86805c 	lw	a2,-32676(gp)
  433708:	8f87805c 	lw	a3,-32676(gp)
  43370c:	8ca501c4 	lw	a1,452(a1)
  433710:	27392a34 	addiu	t9,t9,10804
  433714:	25ce3f24 	addiu	t6,t6,16164
  433718:	afae0010 	sw	t6,16(sp)
  43371c:	24c63f1c 	addiu	a2,a2,16156
  433720:	0320f809 	jalr	t9
  433724:	24e73f20 	addiu	a3,a3,16160
  433728:	93af0070 	lbu	t7,112(sp)
  43372c:	8fbc0028 	lw	gp,40(sp)
  433730:	25f80001 	addiu	t8,t7,1
  433734:	a3b80070 	sb	t8,112(sp)
  433738:	8fae00b0 	lw	t6,176(sp)
  43373c:	00000000 	nop
  433740:	11c00019 	beqz	t6,4337a8 <SG_defaultDepthAndTypeResources+0xca4>
  433744:	93af0070 	lbu	t7,112(sp)
  433748:	8dd90000 	lw	t9,0(t6)
  43374c:	8fa40090 	lw	a0,144(sp)
  433750:	1f200015 	bgtz	t9,4337a8 <SG_defaultDepthAndTypeResources+0xca4>
  433754:	93af0070 	lbu	t7,112(sp)
  433758:	8f858a68 	lw	a1,-30104(gp)
  43375c:	8f8f805c 	lw	t7,-32676(gp)
  433760:	8f98805c 	lw	t8,-32676(gp)
  433764:	8f998020 	lw	t9,-32736(gp)
  433768:	8f86805c 	lw	a2,-32676(gp)
  43376c:	8f87805c 	lw	a3,-32676(gp)
  433770:	8ca501c8 	lw	a1,456(a1)
  433774:	25ef3f34 	addiu	t7,t7,16180
  433778:	27183f38 	addiu	t8,t8,16184
  43377c:	27392a34 	addiu	t9,t9,10804
  433780:	afb80014 	sw	t8,20(sp)
  433784:	afaf0010 	sw	t7,16(sp)
  433788:	24c63f2c 	addiu	a2,a2,16172
  43378c:	0320f809 	jalr	t9
  433790:	24e73f30 	addiu	a3,a3,16176
  433794:	93ae0070 	lbu	t6,112(sp)
  433798:	8fbc0028 	lw	gp,40(sp)
  43379c:	25d90001 	addiu	t9,t6,1
  4337a0:	a3b90070 	sb	t9,112(sp)
  4337a4:	93af0070 	lbu	t7,112(sp)
  4337a8:	8fb80078 	lw	t8,120(sp)
  4337ac:	11e00044 	beqz	t7,4338c0 <SG_defaultDepthAndTypeResources+0xdbc>
  4337b0:	00000000 	nop
  4337b4:	8fb00094 	lw	s0,148(sp)
  4337b8:	8f858a68 	lw	a1,-30104(gp)
  4337bc:	0010c880 	sll	t9,s0,0x2
  4337c0:	0330c821 	addu	t9,t9,s0
  4337c4:	00198100 	sll	s0,t9,0x4
  4337c8:	8f998020 	lw	t9,-32736(gp)
  4337cc:	8f98805c 	lw	t8,-32676(gp)
  4337d0:	8f8e805c 	lw	t6,-32676(gp)
  4337d4:	8f86805c 	lw	a2,-32676(gp)
  4337d8:	8f87805c 	lw	a3,-32676(gp)
  4337dc:	8fa40090 	lw	a0,144(sp)
  4337e0:	8ca501cc 	lw	a1,460(a1)
  4337e4:	27392a34 	addiu	t9,t9,10804
  4337e8:	27183f44 	addiu	t8,t8,16196
  4337ec:	25ce3f48 	addiu	t6,t6,16200
  4337f0:	afae0014 	sw	t6,20(sp)
  4337f4:	afb80010 	sw	t8,16(sp)
  4337f8:	24c63f3c 	addiu	a2,a2,16188
  4337fc:	0320f809 	jalr	t9
  433800:	24e73f40 	addiu	a3,a3,16192
  433804:	8faf0090 	lw	t7,144(sp)
  433808:	8fbc0028 	lw	gp,40(sp)
  43380c:	8df8008c 	lw	t8,140(t7)
  433810:	8faf00a4 	lw	t7,164(sp)
  433814:	03107021 	addu	t6,t8,s0
  433818:	8dd90024 	lw	t9,36(t6)
  43381c:	240e0002 	li	t6,2
  433820:	adf90000 	sw	t9,0(t7)
  433824:	8fb800a0 	lw	t8,160(sp)
  433828:	00000000 	nop
  43382c:	13000003 	beqz	t8,43383c <SG_defaultDepthAndTypeResources+0xd38>
  433830:	8fb900b0 	lw	t9,176(sp)
  433834:	af0e0000 	sw	t6,0(t8)
  433838:	8fb900b0 	lw	t9,176(sp)
  43383c:	8faf0090 	lw	t7,144(sp)
  433840:	13200008 	beqz	t9,433864 <SG_defaultDepthAndTypeResources+0xd60>
  433844:	8fae00a8 	lw	t6,168(sp)
  433848:	8dee008c 	lw	t6,140(t7)
  43384c:	00000000 	nop
  433850:	01d0c021 	addu	t8,t6,s0
  433854:	8f0f0008 	lw	t7,8(t8)
  433858:	00000000 	nop
  43385c:	af2f0000 	sw	t7,0(t9)
  433860:	8fae00a8 	lw	t6,168(sp)
  433864:	8fb80090 	lw	t8,144(sp)
  433868:	11c00008 	beqz	t6,43388c <SG_defaultDepthAndTypeResources+0xd88>
  43386c:	8faf00ac 	lw	t7,172(sp)
  433870:	8f0f008c 	lw	t7,140(t8)
  433874:	00000000 	nop
  433878:	01f0c821 	addu	t9,t7,s0
  43387c:	8f380028 	lw	t8,40(t9)
  433880:	00000000 	nop
  433884:	add80000 	sw	t8,0(t6)
  433888:	8faf00ac 	lw	t7,172(sp)
  43388c:	00000000 	nop
  433890:	11e00009 	beqz	t7,4338b8 <SG_defaultDepthAndTypeResources+0xdb4>
  433894:	00000000 	nop
  433898:	8fb90090 	lw	t9,144(sp)
  43389c:	00000000 	nop
  4338a0:	8f38008c 	lw	t8,140(t9)
  4338a4:	00000000 	nop
  4338a8:	03107021 	addu	t6,t8,s0
  4338ac:	8dd90030 	lw	t9,48(t6)
  4338b0:	00000000 	nop
  4338b4:	adf90000 	sw	t9,0(t7)
  4338b8:	10000006 	b	4338d4 <SG_defaultDepthAndTypeResources+0xdd0>
  4338bc:	2402ffff 	li	v0,-1
  4338c0:	13000003 	beqz	t8,4338d0 <SG_defaultDepthAndTypeResources+0xdcc>
  4338c4:	24100001 	li	s0,1
  4338c8:	10000001 	b	4338d0 <SG_defaultDepthAndTypeResources+0xdcc>
  4338cc:	03008025 	move	s0,t8
  4338d0:	02001025 	move	v0,s0
  4338d4:	8fbf002c 	lw	ra,44(sp)
  4338d8:	8fb0001c 	lw	s0,28(sp)
  4338dc:	8fb10020 	lw	s1,32(sp)
  4338e0:	8fb20024 	lw	s2,36(sp)
  4338e4:	03e00008 	jr	ra
  4338e8:	27bd0090 	addiu	sp,sp,144
