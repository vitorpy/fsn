# Function: FUN_004158d4
# Address: 0x004158d4 - 0x00415b48
# Size: 0x274 (628 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004158d4 <rescanDatabase+0x1d8>:
  4158d4:	3c1c0fc1 	lui	gp,0xfc1
  4158d8:	279c825c 	addiu	gp,gp,-32164
  4158dc:	0399e021 	addu	gp,gp,t9
  4158e0:	27bdfeb0 	addiu	sp,sp,-336
  4158e4:	afb1001c 	sw	s1,28(sp)
  4158e8:	00808825 	move	s1,a0
  4158ec:	8f84805c 	lw	a0,-32676(gp)
  4158f0:	8f998568 	lw	t9,-31384(gp)
  4158f4:	afbf0024 	sw	ra,36(sp)
  4158f8:	afbc0020 	sw	gp,32(sp)
  4158fc:	afb00018 	sw	s0,24(sp)
  415900:	00002825 	move	a1,zero
  415904:	0320f809 	jalr	t9
  415908:	2484a8b4 	addiu	a0,a0,-22348
  41590c:	8fbc0020 	lw	gp,32(sp)
  415910:	afa20028 	sw	v0,40(sp)
  415914:	8f998578 	lw	t9,-31368(gp)
  415918:	00000000 	nop
  41591c:	0320f809 	jalr	t9
  415920:	00000000 	nop
  415924:	8fbc0020 	lw	gp,32(sp)
  415928:	02202025 	move	a0,s1
  41592c:	8f998120 	lw	t9,-32480(gp)
  415930:	27a500c8 	addiu	a1,sp,200
  415934:	0320f809 	jalr	t9
  415938:	00000000 	nop
  41593c:	8fbc0020 	lw	gp,32(sp)
  415940:	04410011 	bgez	v0,415988 <rescanDatabase+0x28c>
  415944:	8fae00dc 	lw	t6,220(sp)
  415948:	8f908098 	lw	s0,-32616(gp)
  41594c:	8f85805c 	lw	a1,-32676(gp)
  415950:	8f9983f8 	lw	t9,-31752(gp)
  415954:	02203025 	move	a2,s1
  415958:	26040020 	addiu	a0,s0,32
  41595c:	0320f809 	jalr	t9
  415960:	24a5a8e4 	addiu	a1,a1,-22300
  415964:	8fbc0020 	lw	gp,32(sp)
  415968:	24040001 	li	a0,1
  41596c:	8f9983a0 	lw	t9,-31840(gp)
  415970:	00000000 	nop
  415974:	0320f809 	jalr	t9
  415978:	00000000 	nop
  41597c:	8fbc0020 	lw	gp,32(sp)
  415980:	00000000 	nop
  415984:	8fae00dc 	lw	t6,220(sp)
  415988:	8f908098 	lw	s0,-32616(gp)
  41598c:	24014000 	li	at,16384
  415990:	31cff000 	andi	t7,t6,0xf000
  415994:	11e1000f 	beq	t7,at,4159d4 <rescanDatabase+0x2d8>
  415998:	26100020 	addiu	s0,s0,32
  41599c:	8f85805c 	lw	a1,-32676(gp)
  4159a0:	8f9983f8 	lw	t9,-31752(gp)
  4159a4:	02002025 	move	a0,s0
  4159a8:	02203025 	move	a2,s1
  4159ac:	0320f809 	jalr	t9
  4159b0:	24a5a900 	addiu	a1,a1,-22272
  4159b4:	8fbc0020 	lw	gp,32(sp)
  4159b8:	24040001 	li	a0,1
  4159bc:	8f9983a0 	lw	t9,-31840(gp)
  4159c0:	00000000 	nop
  4159c4:	0320f809 	jalr	t9
  4159c8:	00000000 	nop
  4159cc:	8fbc0020 	lw	gp,32(sp)
  4159d0:	00000000 	nop
  4159d4:	8fb800c8 	lw	t8,200(sp)
  4159d8:	8f81806c 	lw	at,-32660(gp)
  4159dc:	8f99812c 	lw	t9,-32468(gp)
  4159e0:	02202025 	move	a0,s1
  4159e4:	27a5002c 	addiu	a1,sp,44
  4159e8:	0320f809 	jalr	t9
  4159ec:	ac3866b8 	sw	t8,26296(at)
  4159f0:	8fbc0020 	lw	gp,32(sp)
  4159f4:	0441000e 	bgez	v0,415a30 <rescanDatabase+0x334>
  4159f8:	02002025 	move	a0,s0
  4159fc:	8f85805c 	lw	a1,-32676(gp)
  415a00:	8f9983f8 	lw	t9,-31752(gp)
  415a04:	02203025 	move	a2,s1
  415a08:	0320f809 	jalr	t9
  415a0c:	24a5a918 	addiu	a1,a1,-22248
  415a10:	8fbc0020 	lw	gp,32(sp)
  415a14:	24040001 	li	a0,1
  415a18:	8f9983a0 	lw	t9,-31840(gp)
  415a1c:	00000000 	nop
  415a20:	0320f809 	jalr	t9
  415a24:	00000000 	nop
  415a28:	8fbc0020 	lw	gp,32(sp)
  415a2c:	00000000 	nop
  415a30:	8f998134 	lw	t9,-32460(gp)
  415a34:	8f848a4c 	lw	a0,-30132(gp)
  415a38:	0320f809 	jalr	t9
  415a3c:	27a50050 	addiu	a1,sp,80
  415a40:	8fb90060 	lw	t9,96(sp)
  415a44:	8fbc0020 	lw	gp,32(sp)
  415a48:	3c018000 	lui	at,0x8000
  415a4c:	03214024 	and	t0,t9,at
  415a50:	8f998018 	lw	t9,-32744(gp)
  415a54:	8f818a50 	lw	at,-30128(gp)
  415a58:	27391c04 	addiu	t9,t9,7172
  415a5c:	0320f809 	jalr	t9
  415a60:	ac280000 	sw	t0,0(at)
  415a64:	8fbc0020 	lw	gp,32(sp)
  415a68:	02202025 	move	a0,s1
  415a6c:	8f998018 	lw	t9,-32744(gp)
  415a70:	8f90892c 	lw	s0,-30420(gp)
  415a74:	27391d68 	addiu	t9,t9,7528
  415a78:	0320f809 	jalr	t9
  415a7c:	ae020000 	sw	v0,0(s0)
  415a80:	8fbc0020 	lw	gp,32(sp)
  415a84:	8e090000 	lw	t1,0(s0)
  415a88:	02202025 	move	a0,s1
  415a8c:	ad220000 	sw	v0,0(t1)
  415a90:	8f9983e0 	lw	t9,-31776(gp)
  415a94:	00000000 	nop
  415a98:	0320f809 	jalr	t9
  415a9c:	00000000 	nop
  415aa0:	8e0a0000 	lw	t2,0(s0)
  415aa4:	8fbc0020 	lw	gp,32(sp)
  415aa8:	ad420004 	sw	v0,4(t2)
  415aac:	8e0b0000 	lw	t3,0(s0)
  415ab0:	00000000 	nop
  415ab4:	ad60000c 	sw	zero,12(t3)
  415ab8:	8e0c0000 	lw	t4,0(s0)
  415abc:	00000000 	nop
  415ac0:	ad800014 	sw	zero,20(t4)
  415ac4:	8e0d0000 	lw	t5,0(s0)
  415ac8:	00000000 	nop
  415acc:	ada00028 	sw	zero,40(t5)
  415ad0:	8e030000 	lw	v1,0(s0)
  415ad4:	00000000 	nop
  415ad8:	906f0074 	lbu	t7,116(v1)
  415adc:	00000000 	nop
  415ae0:	35f80002 	ori	t8,t7,0x2
  415ae4:	a0780074 	sb	t8,116(v1)
  415ae8:	8f9985bc 	lw	t9,-31300(gp)
  415aec:	8e040000 	lw	a0,0(s0)
  415af0:	0320f809 	jalr	t9
  415af4:	00000000 	nop
  415af8:	8fbc0020 	lw	gp,32(sp)
  415afc:	240507d0 	li	a1,2000
  415b00:	8f84805c 	lw	a0,-32676(gp)
  415b04:	8f998568 	lw	t9,-31384(gp)
  415b08:	2484a938 	addiu	a0,a0,-22216
  415b0c:	0320f809 	jalr	t9
  415b10:	00000000 	nop
  415b14:	8fbc0020 	lw	gp,32(sp)
  415b18:	8fa40028 	lw	a0,40(sp)
  415b1c:	8f998564 	lw	t9,-31388(gp)
  415b20:	00000000 	nop
  415b24:	0320f809 	jalr	t9
  415b28:	00000000 	nop
  415b2c:	8fbf0024 	lw	ra,36(sp)
  415b30:	8e020000 	lw	v0,0(s0)
  415b34:	8fbc0020 	lw	gp,32(sp)
  415b38:	8fb00018 	lw	s0,24(sp)
  415b3c:	8fb1001c 	lw	s1,28(sp)
  415b40:	03e00008 	jr	ra
  415b44:	27bd0150 	addiu	sp,sp,336
