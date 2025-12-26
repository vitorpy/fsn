# Function: SG_getMaxDepth
# Address: 0x00431a0c - 0x00431b28
# Size: 0x11c (284 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00431a0c <SG_getMaxDepth>:
  431a0c:	3c1c0fbf 	lui	gp,0xfbf
  431a10:	279cc124 	addiu	gp,gp,-16092
  431a14:	0399e021 	addu	gp,gp,t9
  431a18:	27bdffd0 	addiu	sp,sp,-48
  431a1c:	afb00014 	sw	s0,20(sp)
  431a20:	00e08025 	move	s0,a3
  431a24:	afbf001c 	sw	ra,28(sp)
  431a28:	afbc0018 	sw	gp,24(sp)
  431a2c:	14800003 	bnez	a0,431a3c <SG_getMaxDepth+0x30>
  431a30:	00004025 	move	t0,zero
  431a34:	10000038 	b	431b18 <SG_getMaxDepth+0x10c>
  431a38:	2402fffe 	li	v0,-2
  431a3c:	14a00003 	bnez	a1,431a4c <SG_getMaxDepth+0x40>
  431a40:	00000000 	nop
  431a44:	8c850084 	lw	a1,132(a0)
  431a48:	00000000 	nop
  431a4c:	8f998020 	lw	t9,-32736(gp)
  431a50:	afa60038 	sw	a2,56(sp)
  431a54:	273925fc 	addiu	t9,t9,9724
  431a58:	0320f809 	jalr	t9
  431a5c:	afa80024 	sw	t0,36(sp)
  431a60:	8fbc0018 	lw	gp,24(sp)
  431a64:	8fa60038 	lw	a2,56(sp)
  431a68:	8fa80024 	lw	t0,36(sp)
  431a6c:	16000003 	bnez	s0,431a7c <SG_getMaxDepth+0x70>
  431a70:	00402025 	move	a0,v0
  431a74:	8c500024 	lw	s0,36(v0)
  431a78:	00000000 	nop
  431a7c:	8c4e0018 	lw	t6,24(v0)
  431a80:	00001825 	move	v1,zero
  431a84:	19c00023 	blez	t6,431b14 <SG_getMaxDepth+0x108>
  431a88:	00000000 	nop
  431a8c:	8c870018 	lw	a3,24(a0)
  431a90:	24050028 	li	a1,40
  431a94:	10c0000a 	beqz	a2,431ac0 <SG_getMaxDepth+0xb4>
  431a98:	00000000 	nop
  431a9c:	00650019 	multu	v1,a1
  431aa0:	8c4f0014 	lw	t7,20(v0)
  431aa4:	8cca0000 	lw	t2,0(a2)
  431aa8:	0000c012 	mflo	t8
  431aac:	01f8c821 	addu	t9,t7,t8
  431ab0:	8f290010 	lw	t1,16(t9)
  431ab4:	00000000 	nop
  431ab8:	152a0012 	bne	t1,t2,431b04 <SG_getMaxDepth+0xf8>
  431abc:	00000000 	nop
  431ac0:	8c4b0020 	lw	t3,32(v0)
  431ac4:	00036080 	sll	t4,v1,0x2
  431ac8:	016c6821 	addu	t5,t3,t4
  431acc:	8dae0000 	lw	t6,0(t5)
  431ad0:	00000000 	nop
  431ad4:	160e000b 	bne	s0,t6,431b04 <SG_getMaxDepth+0xf8>
  431ad8:	00000000 	nop
  431adc:	00650019 	multu	v1,a1
  431ae0:	8c4f0014 	lw	t7,20(v0)
  431ae4:	0000c012 	mflo	t8
  431ae8:	01f8c821 	addu	t9,t7,t8
  431aec:	8f24000c 	lw	a0,12(t9)
  431af0:	00000000 	nop
  431af4:	0104082a 	slt	at,t0,a0
  431af8:	10200002 	beqz	at,431b04 <SG_getMaxDepth+0xf8>
  431afc:	00000000 	nop
  431b00:	00804025 	move	t0,a0
  431b04:	24630001 	addiu	v1,v1,1
  431b08:	0067082a 	slt	at,v1,a3
  431b0c:	1420ffe1 	bnez	at,431a94 <SG_getMaxDepth+0x88>
  431b10:	00000000 	nop
  431b14:	01001025 	move	v0,t0
  431b18:	8fbf001c 	lw	ra,28(sp)
  431b1c:	8fb00014 	lw	s0,20(sp)
  431b20:	03e00008 	jr	ra
  431b24:	27bd0030 	addiu	sp,sp,48
