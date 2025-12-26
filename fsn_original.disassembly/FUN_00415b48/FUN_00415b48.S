# Function: FUN_00415b48
# Address: 0x00415b48 - 0x00415d24
# Size: 0x1dc (476 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00415b48 <rescanDatabase+0x44c>:
  415b48:	3c1c0fc0 	lui	gp,0xfc0
  415b4c:	279c7fe8 	addiu	gp,gp,32744
  415b50:	0399e021 	addu	gp,gp,t9
  415b54:	8f83806c 	lw	v1,-32660(gp)
  415b58:	8f9982cc 	lw	t9,-32052(gp)
  415b5c:	27bdffd0 	addiu	sp,sp,-48
  415b60:	24636690 	addiu	v1,v1,26256
  415b64:	afbf001c 	sw	ra,28(sp)
  415b68:	8c670000 	lw	a3,0(v1)
  415b6c:	afbc0018 	sw	gp,24(sp)
  415b70:	27a40028 	addiu	a0,sp,40
  415b74:	24050001 	li	a1,1
  415b78:	0320f809 	jalr	t9
  415b7c:	24060006 	li	a2,6
  415b80:	8fbc0018 	lw	gp,24(sp)
  415b84:	24010006 	li	at,6
  415b88:	8f83806c 	lw	v1,-32660(gp)
  415b8c:	14410053 	bne	v0,at,415cdc <rescanDatabase+0x5e0>
  415b90:	24636690 	addiu	v1,v1,26256
  415b94:	8f85805c 	lw	a1,-32676(gp)
  415b98:	8f9980f0 	lw	t9,-32528(gp)
  415b9c:	27a40028 	addiu	a0,sp,40
  415ba0:	24060006 	li	a2,6
  415ba4:	0320f809 	jalr	t9
  415ba8:	24a5a954 	addiu	a1,a1,-22188
  415bac:	8fbc0018 	lw	gp,24(sp)
  415bb0:	00000000 	nop
  415bb4:	8f83806c 	lw	v1,-32660(gp)
  415bb8:	14400048 	bnez	v0,415cdc <rescanDatabase+0x5e0>
  415bbc:	24636690 	addiu	v1,v1,26256
  415bc0:	8f8e809c 	lw	t6,-32612(gp)
  415bc4:	00000000 	nop
  415bc8:	8dce0000 	lw	t6,0(t6)
  415bcc:	00000000 	nop
  415bd0:	11c0000c 	beqz	t6,415c04 <rescanDatabase+0x508>
  415bd4:	00000000 	nop
  415bd8:	8f9982c8 	lw	t9,-32056(gp)
  415bdc:	8c640000 	lw	a0,0(v1)
  415be0:	0320f809 	jalr	t9
  415be4:	00000000 	nop
  415be8:	8fbc0018 	lw	gp,24(sp)
  415bec:	00000000 	nop
  415bf0:	8f84806c 	lw	a0,-32660(gp)
  415bf4:	00000000 	nop
  415bf8:	248466cc 	addiu	a0,a0,26316
  415bfc:	1000001d 	b	415c74 <rescanDatabase+0x578>
  415c00:	ac820000 	sw	v0,0(a0)
  415c04:	8c640000 	lw	a0,0(v1)
  415c08:	00000000 	nop
  415c0c:	8c8f0000 	lw	t7,0(a0)
  415c10:	00000000 	nop
  415c14:	25f8ffff 	addiu	t8,t7,-1
  415c18:	ac980000 	sw	t8,0(a0)
  415c1c:	8c640000 	lw	a0,0(v1)
  415c20:	00000000 	nop
  415c24:	8c990000 	lw	t9,0(a0)
  415c28:	00000000 	nop
  415c2c:	07210008 	bgez	t9,415c50 <rescanDatabase+0x554>
  415c30:	00000000 	nop
  415c34:	8f9982d8 	lw	t9,-32040(gp)
  415c38:	00000000 	nop
  415c3c:	0320f809 	jalr	t9
  415c40:	00000000 	nop
  415c44:	8fbc0018 	lw	gp,24(sp)
  415c48:	10000006 	b	415c64 <rescanDatabase+0x568>
  415c4c:	00401825 	move	v1,v0
  415c50:	8c820004 	lw	v0,4(a0)
  415c54:	00000000 	nop
  415c58:	90430000 	lbu	v1,0(v0)
  415c5c:	24480001 	addiu	t0,v0,1
  415c60:	ac880004 	sw	t0,4(a0)
  415c64:	8f84806c 	lw	a0,-32660(gp)
  415c68:	00000000 	nop
  415c6c:	248466cc 	addiu	a0,a0,26316
  415c70:	ac830000 	sw	v1,0(a0)
  415c74:	8c860000 	lw	a2,0(a0)
  415c78:	00000000 	nop
  415c7c:	28c10003 	slti	at,a2,3
  415c80:	10200003 	beqz	at,415c90 <rescanDatabase+0x594>
  415c84:	00000000 	nop
  415c88:	04c1001e 	bgez	a2,415d04 <rescanDatabase+0x608>
  415c8c:	00000000 	nop
  415c90:	8f848098 	lw	a0,-32616(gp)
  415c94:	8f85805c 	lw	a1,-32676(gp)
  415c98:	8f9983f8 	lw	t9,-31752(gp)
  415c9c:	24840020 	addiu	a0,a0,32
  415ca0:	0320f809 	jalr	t9
  415ca4:	24a5a95c 	addiu	a1,a1,-22180
  415ca8:	8fbc0018 	lw	gp,24(sp)
  415cac:	24040001 	li	a0,1
  415cb0:	8f9983a0 	lw	t9,-31840(gp)
  415cb4:	00000000 	nop
  415cb8:	0320f809 	jalr	t9
  415cbc:	00000000 	nop
  415cc0:	8fbc0018 	lw	gp,24(sp)
  415cc4:	00000000 	nop
  415cc8:	8f86806c 	lw	a2,-32660(gp)
  415ccc:	00000000 	nop
  415cd0:	8cc666cc 	lw	a2,26316(a2)
  415cd4:	1000000b 	b	415d04 <rescanDatabase+0x608>
  415cd8:	00000000 	nop
  415cdc:	8f9982e8 	lw	t9,-32024(gp)
  415ce0:	8c640000 	lw	a0,0(v1)
  415ce4:	0320f809 	jalr	t9
  415ce8:	00000000 	nop
  415cec:	8fbc0018 	lw	gp,24(sp)
  415cf0:	00003025 	move	a2,zero
  415cf4:	8f84806c 	lw	a0,-32660(gp)
  415cf8:	00000000 	nop
  415cfc:	248466cc 	addiu	a0,a0,26316
  415d00:	ac800000 	sw	zero,0(a0)
  415d04:	8f8a8930 	lw	t2,-30416(gp)
  415d08:	8f818a54 	lw	at,-30124(gp)
  415d0c:	8fbf001c 	lw	ra,28(sp)
  415d10:	00064940 	sll	t1,a2,0x5
  415d14:	012a5821 	addu	t3,t1,t2
  415d18:	27bd0030 	addiu	sp,sp,48
  415d1c:	03e00008 	jr	ra
  415d20:	ac2b0000 	sw	t3,0(at)
