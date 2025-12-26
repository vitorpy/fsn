# Function: FUN_00416ac4
# Address: 0x00416ac4 - 0x00416c64
# Size: 0x1a0 (416 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00416ac4 <rescanDatabase+0x13c8>:
  416ac4:	3c1c0fc0 	lui	gp,0xfc0
  416ac8:	279c706c 	addiu	gp,gp,28780
  416acc:	0399e021 	addu	gp,gp,t9
  416ad0:	27bdffa0 	addiu	sp,sp,-96
  416ad4:	afa40060 	sw	a0,96(sp)
  416ad8:	27b90040 	addiu	t9,sp,64
  416adc:	8f84806c 	lw	a0,-32660(gp)
  416ae0:	afb9001c 	sw	t9,28(sp)
  416ae4:	8f9982a8 	lw	t9,-32088(gp)
  416ae8:	8f85805c 	lw	a1,-32676(gp)
  416aec:	afbf002c 	sw	ra,44(sp)
  416af0:	8fa70060 	lw	a3,96(sp)
  416af4:	27ae004c 	addiu	t6,sp,76
  416af8:	27af0054 	addiu	t7,sp,84
  416afc:	27b80050 	addiu	t8,sp,80
  416b00:	8c846690 	lw	a0,26256(a0)
  416b04:	afbc0028 	sw	gp,40(sp)
  416b08:	afb80018 	sw	t8,24(sp)
  416b0c:	afaf0014 	sw	t7,20(sp)
  416b10:	afae0010 	sw	t6,16(sp)
  416b14:	27a60058 	addiu	a2,sp,88
  416b18:	0320f809 	jalr	t9
  416b1c:	24a5abdc 	addiu	a1,a1,-21540
  416b20:	8fbc0028 	lw	gp,40(sp)
  416b24:	24010005 	li	at,5
  416b28:	10410006 	beq	v0,at,416b44 <rescanDatabase+0x1448>
  416b2c:	00403025 	move	a2,v0
  416b30:	24010006 	li	at,6
  416b34:	10410015 	beq	v0,at,416b8c <rescanDatabase+0x1490>
  416b38:	8fa8004c 	lw	t0,76(sp)
  416b3c:	10000003 	b	416b4c <rescanDatabase+0x1450>
  416b40:	00000000 	nop
  416b44:	10000010 	b	416b88 <rescanDatabase+0x148c>
  416b48:	a3a00040 	sb	zero,64(sp)
  416b4c:	8f848098 	lw	a0,-32616(gp)
  416b50:	8f85805c 	lw	a1,-32676(gp)
  416b54:	8f9983f8 	lw	t9,-31752(gp)
  416b58:	8fa70060 	lw	a3,96(sp)
  416b5c:	24840020 	addiu	a0,a0,32
  416b60:	0320f809 	jalr	t9
  416b64:	24a5abf4 	addiu	a1,a1,-21516
  416b68:	8fbc0028 	lw	gp,40(sp)
  416b6c:	24040001 	li	a0,1
  416b70:	8f9983a0 	lw	t9,-31840(gp)
  416b74:	00000000 	nop
  416b78:	0320f809 	jalr	t9
  416b7c:	00000000 	nop
  416b80:	8fbc0028 	lw	gp,40(sp)
  416b84:	00000000 	nop
  416b88:	8fa8004c 	lw	t0,76(sp)
  416b8c:	8f81806c 	lw	at,-32660(gp)
  416b90:	8f9983e0 	lw	t9,-31776(gp)
  416b94:	8fa40060 	lw	a0,96(sp)
  416b98:	0320f809 	jalr	t9
  416b9c:	ac2866c0 	sw	t0,26304(at)
  416ba0:	8fbc0028 	lw	gp,40(sp)
  416ba4:	8fa90050 	lw	t1,80(sp)
  416ba8:	8f81806c 	lw	at,-32660(gp)
  416bac:	8faa0054 	lw	t2,84(sp)
  416bb0:	a42266c4 	sh	v0,26308(at)
  416bb4:	8f81806c 	lw	at,-32660(gp)
  416bb8:	8fab0058 	lw	t3,88(sp)
  416bbc:	a42966c6 	sh	t1,26310(at)
  416bc0:	8f81806c 	lw	at,-32660(gp)
  416bc4:	93ad0040 	lbu	t5,64(sp)
  416bc8:	a42a66c8 	sh	t2,26312(at)
  416bcc:	8f81806c 	lw	at,-32660(gp)
  416bd0:	27ac0040 	addiu	t4,sp,64
  416bd4:	a02b66ca 	sb	t3,26314(at)
  416bd8:	8f81806c 	lw	at,-32660(gp)
  416bdc:	01802025 	move	a0,t4
  416be0:	11a0001b 	beqz	t5,416c50 <rescanDatabase+0x1554>
  416be4:	a02066cb 	sb	zero,26315(at)
  416be8:	91820000 	lbu	v0,0(t4)
  416bec:	24060070 	li	a2,112
  416bf0:	2405006d 	li	a1,109
  416bf4:	10450005 	beq	v0,a1,416c0c <rescanDatabase+0x1510>
  416bf8:	00000000 	nop
  416bfc:	1046000a 	beq	v0,a2,416c28 <rescanDatabase+0x152c>
  416c00:	00000000 	nop
  416c04:	1000000f 	b	416c44 <rescanDatabase+0x1548>
  416c08:	90820001 	lbu	v0,1(a0)
  416c0c:	8f8e806c 	lw	t6,-32660(gp)
  416c10:	8f81806c 	lw	at,-32660(gp)
  416c14:	91ce66cb 	lbu	t6,26315(t6)
  416c18:	00000000 	nop
  416c1c:	35cf0002 	ori	t7,t6,0x2
  416c20:	10000007 	b	416c40 <rescanDatabase+0x1544>
  416c24:	a02f66cb 	sb	t7,26315(at)
  416c28:	8f98806c 	lw	t8,-32660(gp)
  416c2c:	8f81806c 	lw	at,-32660(gp)
  416c30:	931866cb 	lbu	t8,26315(t8)
  416c34:	00000000 	nop
  416c38:	37190001 	ori	t9,t8,0x1
  416c3c:	a03966cb 	sb	t9,26315(at)
  416c40:	90820001 	lbu	v0,1(a0)
  416c44:	24840001 	addiu	a0,a0,1
  416c48:	1440ffea 	bnez	v0,416bf4 <rescanDatabase+0x14f8>
  416c4c:	00000000 	nop
  416c50:	8f82806c 	lw	v0,-32660(gp)
  416c54:	8fbf002c 	lw	ra,44(sp)
  416c58:	27bd0060 	addiu	sp,sp,96
  416c5c:	03e00008 	jr	ra
  416c60:	244266c0 	addiu	v0,v0,26304
