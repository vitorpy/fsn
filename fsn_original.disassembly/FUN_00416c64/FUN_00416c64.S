# Function: FUN_00416c64
# Address: 0x00416c64 - 0x00416da8
# Size: 0x144 (324 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00416c64 <rescanDatabase+0x1568>:
  416c64:	3c1c0fc0 	lui	gp,0xfc0
  416c68:	279c6ecc 	addiu	gp,gp,28364
  416c6c:	0399e021 	addu	gp,gp,t9
  416c70:	27bdffb8 	addiu	sp,sp,-72
  416c74:	afa5004c 	sw	a1,76(sp)
  416c78:	8fb9004c 	lw	t9,76(sp)
  416c7c:	afa40048 	sw	a0,72(sp)
  416c80:	8f84806c 	lw	a0,-32660(gp)
  416c84:	afb9001c 	sw	t9,28(sp)
  416c88:	8f9982a8 	lw	t9,-32088(gp)
  416c8c:	8f85805c 	lw	a1,-32676(gp)
  416c90:	afbf002c 	sw	ra,44(sp)
  416c94:	8fa70048 	lw	a3,72(sp)
  416c98:	27ae003c 	addiu	t6,sp,60
  416c9c:	27af0038 	addiu	t7,sp,56
  416ca0:	27b80034 	addiu	t8,sp,52
  416ca4:	8c846690 	lw	a0,26256(a0)
  416ca8:	afbc0028 	sw	gp,40(sp)
  416cac:	afb80018 	sw	t8,24(sp)
  416cb0:	afaf0014 	sw	t7,20(sp)
  416cb4:	afae0010 	sw	t6,16(sp)
  416cb8:	27a60040 	addiu	a2,sp,64
  416cbc:	0320f809 	jalr	t9
  416cc0:	24a5ac20 	addiu	a1,a1,-21472
  416cc4:	8fbc0028 	lw	gp,40(sp)
  416cc8:	24010005 	li	at,5
  416ccc:	10410006 	beq	v0,at,416ce8 <rescanDatabase+0x15ec>
  416cd0:	00403025 	move	a2,v0
  416cd4:	24010006 	li	at,6
  416cd8:	10410016 	beq	v0,at,416d34 <rescanDatabase+0x1638>
  416cdc:	8fa90038 	lw	t1,56(sp)
  416ce0:	10000004 	b	416cf4 <rescanDatabase+0x15f8>
  416ce4:	00000000 	nop
  416ce8:	8fa8004c 	lw	t0,76(sp)
  416cec:	10000010 	b	416d30 <rescanDatabase+0x1634>
  416cf0:	a1000000 	sb	zero,0(t0)
  416cf4:	8f848098 	lw	a0,-32616(gp)
  416cf8:	8f85805c 	lw	a1,-32676(gp)
  416cfc:	8f9983f8 	lw	t9,-31752(gp)
  416d00:	8fa70048 	lw	a3,72(sp)
  416d04:	24840020 	addiu	a0,a0,32
  416d08:	0320f809 	jalr	t9
  416d0c:	24a5ac38 	addiu	a1,a1,-21448
  416d10:	8fbc0028 	lw	gp,40(sp)
  416d14:	24040001 	li	a0,1
  416d18:	8f9983a0 	lw	t9,-31840(gp)
  416d1c:	00000000 	nop
  416d20:	0320f809 	jalr	t9
  416d24:	00000000 	nop
  416d28:	8fbc0028 	lw	gp,40(sp)
  416d2c:	00000000 	nop
  416d30:	8fa90038 	lw	t1,56(sp)
  416d34:	8f81806c 	lw	at,-32660(gp)
  416d38:	8faa0034 	lw	t2,52(sp)
  416d3c:	ac2966d0 	sw	t1,26320(at)
  416d40:	8f81806c 	lw	at,-32660(gp)
  416d44:	8fab003c 	lw	t3,60(sp)
  416d48:	ac2a66d4 	sw	t2,26324(at)
  416d4c:	8f81806c 	lw	at,-32660(gp)
  416d50:	8f9983e0 	lw	t9,-31776(gp)
  416d54:	8fa40048 	lw	a0,72(sp)
  416d58:	0320f809 	jalr	t9
  416d5c:	ac2b66d8 	sw	t3,26328(at)
  416d60:	8fbc0028 	lw	gp,40(sp)
  416d64:	8fa4004c 	lw	a0,76(sp)
  416d68:	8f81806c 	lw	at,-32660(gp)
  416d6c:	8f9983e0 	lw	t9,-31776(gp)
  416d70:	a42266dc 	sh	v0,26332(at)
  416d74:	0320f809 	jalr	t9
  416d78:	00000000 	nop
  416d7c:	8fbc0028 	lw	gp,40(sp)
  416d80:	8fac0040 	lw	t4,64(sp)
  416d84:	8f81806c 	lw	at,-32660(gp)
  416d88:	8fbf002c 	lw	ra,44(sp)
  416d8c:	a42266de 	sh	v0,26334(at)
  416d90:	8f81806c 	lw	at,-32660(gp)
  416d94:	8f82806c 	lw	v0,-32660(gp)
  416d98:	27bd0048 	addiu	sp,sp,72
  416d9c:	a02c66e0 	sb	t4,26336(at)
  416da0:	03e00008 	jr	ra
  416da4:	244266d0 	addiu	v0,v0,26320
