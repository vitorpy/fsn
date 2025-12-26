# Function: FUN_00416da8
# Address: 0x00416da8 - 0x00416fec
# Size: 0x244 (580 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00416da8 <rescanDatabase+0x16ac>:
  416da8:	3c1c0fc0 	lui	gp,0xfc0
  416dac:	279c6d88 	addiu	gp,gp,28040
  416db0:	0399e021 	addu	gp,gp,t9
  416db4:	8f8e809c 	lw	t6,-32612(gp)
  416db8:	27bdffc0 	addiu	sp,sp,-64
  416dbc:	8dce0000 	lw	t6,0(t6)
  416dc0:	afbf001c 	sw	ra,28(sp)
  416dc4:	afbc0018 	sw	gp,24(sp)
  416dc8:	11c00009 	beqz	t6,416df0 <rescanDatabase+0x16f4>
  416dcc:	afa40040 	sw	a0,64(sp)
  416dd0:	8f84806c 	lw	a0,-32660(gp)
  416dd4:	8f9982c8 	lw	t9,-32056(gp)
  416dd8:	8c846690 	lw	a0,26256(a0)
  416ddc:	0320f809 	jalr	t9
  416de0:	00000000 	nop
  416de4:	8fbc0018 	lw	gp,24(sp)
  416de8:	1000001e 	b	416e64 <rescanDatabase+0x1768>
  416dec:	00401825 	move	v1,v0
  416df0:	8f84806c 	lw	a0,-32660(gp)
  416df4:	00000000 	nop
  416df8:	8c846690 	lw	a0,26256(a0)
  416dfc:	00000000 	nop
  416e00:	8c8f0000 	lw	t7,0(a0)
  416e04:	00000000 	nop
  416e08:	25f8ffff 	addiu	t8,t7,-1
  416e0c:	ac980000 	sw	t8,0(a0)
  416e10:	8f84806c 	lw	a0,-32660(gp)
  416e14:	00000000 	nop
  416e18:	8c846690 	lw	a0,26256(a0)
  416e1c:	00000000 	nop
  416e20:	8c990000 	lw	t9,0(a0)
  416e24:	00000000 	nop
  416e28:	07210008 	bgez	t9,416e4c <rescanDatabase+0x1750>
  416e2c:	00000000 	nop
  416e30:	8f9982d8 	lw	t9,-32040(gp)
  416e34:	00000000 	nop
  416e38:	0320f809 	jalr	t9
  416e3c:	00000000 	nop
  416e40:	8fbc0018 	lw	gp,24(sp)
  416e44:	10000006 	b	416e60 <rescanDatabase+0x1764>
  416e48:	00402825 	move	a1,v0
  416e4c:	8c820004 	lw	v0,4(a0)
  416e50:	00000000 	nop
  416e54:	90450000 	lbu	a1,0(v0)
  416e58:	24480001 	addiu	t0,v0,1
  416e5c:	ac880004 	sw	t0,4(a0)
  416e60:	00a01825 	move	v1,a1
  416e64:	24010002 	li	at,2
  416e68:	1061000f 	beq	v1,at,416ea8 <rescanDatabase+0x17ac>
  416e6c:	00000000 	nop
  416e70:	8f848098 	lw	a0,-32616(gp)
  416e74:	8f85805c 	lw	a1,-32676(gp)
  416e78:	8f9983f8 	lw	t9,-31752(gp)
  416e7c:	24840020 	addiu	a0,a0,32
  416e80:	0320f809 	jalr	t9
  416e84:	24a5ac68 	addiu	a1,a1,-21400
  416e88:	8fbc0018 	lw	gp,24(sp)
  416e8c:	24040001 	li	a0,1
  416e90:	8f9983a0 	lw	t9,-31840(gp)
  416e94:	00000000 	nop
  416e98:	0320f809 	jalr	t9
  416e9c:	00000000 	nop
  416ea0:	8fbc0018 	lw	gp,24(sp)
  416ea4:	00000000 	nop
  416ea8:	8f87806c 	lw	a3,-32660(gp)
  416eac:	8f9982cc 	lw	t9,-32052(gp)
  416eb0:	8ce76690 	lw	a3,26256(a3)
  416eb4:	27a40034 	addiu	a0,sp,52
  416eb8:	2405000a 	li	a1,10
  416ebc:	0320f809 	jalr	t9
  416ec0:	24060001 	li	a2,1
  416ec4:	8fbc0018 	lw	gp,24(sp)
  416ec8:	24010001 	li	at,1
  416ecc:	10410010 	beq	v0,at,416f10 <rescanDatabase+0x1814>
  416ed0:	97a90034 	lhu	t1,52(sp)
  416ed4:	8f848098 	lw	a0,-32616(gp)
  416ed8:	8f85805c 	lw	a1,-32676(gp)
  416edc:	8f9983f8 	lw	t9,-31752(gp)
  416ee0:	24840020 	addiu	a0,a0,32
  416ee4:	0320f809 	jalr	t9
  416ee8:	24a5ac94 	addiu	a1,a1,-21356
  416eec:	8fbc0018 	lw	gp,24(sp)
  416ef0:	24040001 	li	a0,1
  416ef4:	8f9983a0 	lw	t9,-31840(gp)
  416ef8:	00000000 	nop
  416efc:	0320f809 	jalr	t9
  416f00:	00000000 	nop
  416f04:	8fbc0018 	lw	gp,24(sp)
  416f08:	00000000 	nop
  416f0c:	97a90034 	lhu	t1,52(sp)
  416f10:	8f81806c 	lw	at,-32660(gp)
  416f14:	97a60036 	lhu	a2,54(sp)
  416f18:	ac2966e8 	sw	t1,26344(at)
  416f1c:	8f81806c 	lw	at,-32660(gp)
  416f20:	97aa0038 	lhu	t2,56(sp)
  416f24:	a42666ec 	sh	a2,26348(at)
  416f28:	8f81806c 	lw	at,-32660(gp)
  416f2c:	97ab003a 	lhu	t3,58(sp)
  416f30:	a42a66ee 	sh	t2,26350(at)
  416f34:	8f81806c 	lw	at,-32660(gp)
  416f38:	93ac003c 	lbu	t4,60(sp)
  416f3c:	a42b66f0 	sh	t3,26352(at)
  416f40:	8f81806c 	lw	at,-32660(gp)
  416f44:	8f87806c 	lw	a3,-32660(gp)
  416f48:	a02c66f2 	sb	t4,26354(at)
  416f4c:	8f81806c 	lw	at,-32660(gp)
  416f50:	93ad003d 	lbu	t5,61(sp)
  416f54:	8f9982cc 	lw	t9,-32052(gp)
  416f58:	8fa40040 	lw	a0,64(sp)
  416f5c:	8ce76690 	lw	a3,26256(a3)
  416f60:	24050001 	li	a1,1
  416f64:	0320f809 	jalr	t9
  416f68:	a02d66f3 	sb	t5,26355(at)
  416f6c:	8fbc0018 	lw	gp,24(sp)
  416f70:	00000000 	nop
  416f74:	8f8e806c 	lw	t6,-32660(gp)
  416f78:	00000000 	nop
  416f7c:	95ce66ec 	lhu	t6,26348(t6)
  416f80:	00000000 	nop
  416f84:	104e000f 	beq	v0,t6,416fc4 <rescanDatabase+0x18c8>
  416f88:	00000000 	nop
  416f8c:	8f848098 	lw	a0,-32616(gp)
  416f90:	8f85805c 	lw	a1,-32676(gp)
  416f94:	8f9983f8 	lw	t9,-31752(gp)
  416f98:	24840020 	addiu	a0,a0,32
  416f9c:	0320f809 	jalr	t9
  416fa0:	24a5acc0 	addiu	a1,a1,-21312
  416fa4:	8fbc0018 	lw	gp,24(sp)
  416fa8:	24040001 	li	a0,1
  416fac:	8f9983a0 	lw	t9,-31840(gp)
  416fb0:	00000000 	nop
  416fb4:	0320f809 	jalr	t9
  416fb8:	00000000 	nop
  416fbc:	8fbc0018 	lw	gp,24(sp)
  416fc0:	00000000 	nop
  416fc4:	8f98806c 	lw	t8,-32660(gp)
  416fc8:	8faf0040 	lw	t7,64(sp)
  416fcc:	971866ec 	lhu	t8,26348(t8)
  416fd0:	8f82806c 	lw	v0,-32660(gp)
  416fd4:	01f8c821 	addu	t9,t7,t8
  416fd8:	a3200000 	sb	zero,0(t9)
  416fdc:	8fbf001c 	lw	ra,28(sp)
  416fe0:	27bd0040 	addiu	sp,sp,64
  416fe4:	03e00008 	jr	ra
  416fe8:	244266e8 	addiu	v0,v0,26344
