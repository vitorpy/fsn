# Function: FUN_004138e8
# Address: 0x004138e8 - 0x004143d0
# Size: 0xae8 (2792 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004138e8 <findDirByFullName+0x254>:
  4138e8:	3c1c0fc1 	lui	gp,0xfc1
  4138ec:	279ca248 	addiu	gp,gp,-23992
  4138f0:	0399e021 	addu	gp,gp,t9
  4138f4:	27bdfe68 	addiu	sp,sp,-408
  4138f8:	8f998578 	lw	t9,-31368(gp)
  4138fc:	afbf003c 	sw	ra,60(sp)
  413900:	afb40024 	sw	s4,36(sp)
  413904:	afb2001c 	sw	s2,28(sp)
  413908:	00809025 	move	s2,a0
  41390c:	00c0a025 	move	s4,a2
  413910:	afbe0038 	sw	s8,56(sp)
  413914:	afbc0034 	sw	gp,52(sp)
  413918:	afb70030 	sw	s7,48(sp)
  41391c:	afb6002c 	sw	s6,44(sp)
  413920:	afb50028 	sw	s5,40(sp)
  413924:	afb30020 	sw	s3,32(sp)
  413928:	afb10018 	sw	s1,24(sp)
  41392c:	afb00014 	sw	s0,20(sp)
  413930:	afa5019c 	sw	a1,412(sp)
  413934:	0320f809 	jalr	t9
  413938:	afa701a4 	sw	a3,420(sp)
  41393c:	8e4e0074 	lw	t6,116(s2)
  413940:	8fbc0034 	lw	gp,52(sp)
  413944:	000ec340 	sll	t8,t6,0xd
  413948:	07010003 	bgez	t8,413958 <findDirByFullName+0x2c4>
  41394c:	00000000 	nop
  413950:	10000293 	b	4143a0 <findDirByFullName+0xd0c>
  413954:	00001025 	move	v0,zero
  413958:	92490075 	lbu	t1,117(s2)
  41395c:	92590074 	lbu	t9,116(s2)
  413960:	312bff7f 	andi	t3,t1,0xff7f
  413964:	a24b0075 	sb	t3,117(s2)
  413968:	316c00bf 	andi	t4,t3,0xbf
  41396c:	3328fffe 	andi	t0,t9,0xfffe
  413970:	a2480074 	sb	t0,116(s2)
  413974:	a24c0075 	sb	t4,117(s2)
  413978:	8f998134 	lw	t9,-32460(gp)
  41397c:	8e450000 	lw	a1,0(s2)
  413980:	0320f809 	jalr	t9
  413984:	02802025 	move	a0,s4
  413988:	8fbc0034 	lw	gp,52(sp)
  41398c:	8fa5019c 	lw	a1,412(sp)
  413990:	8f84805c 	lw	a0,-32676(gp)
  413994:	8f99856c 	lw	t9,-31380(gp)
  413998:	00003025 	move	a2,zero
  41399c:	0320f809 	jalr	t9
  4139a0:	2484a750 	addiu	a0,a0,-22704
  4139a4:	afa20054 	sw	v0,84(sp)
  4139a8:	8e4e0004 	lw	t6,4(s2)
  4139ac:	8fbc0034 	lw	gp,52(sp)
  4139b0:	240d002f 	li	t5,47
  4139b4:	028e7821 	addu	t7,s4,t6
  4139b8:	a1ed0000 	sb	t5,0(t7)
  4139bc:	8e580004 	lw	t8,4(s2)
  4139c0:	27a50108 	addiu	a1,sp,264
  4139c4:	0298c821 	addu	t9,s4,t8
  4139c8:	a3200001 	sb	zero,1(t9)
  4139cc:	8e480004 	lw	t0,4(s2)
  4139d0:	8f998120 	lw	t9,-32480(gp)
  4139d4:	8fa4019c 	lw	a0,412(sp)
  4139d8:	0288a021 	addu	s4,s4,t0
  4139dc:	0320f809 	jalr	t9
  4139e0:	26940001 	addiu	s4,s4,1
  4139e4:	8fbc0034 	lw	gp,52(sp)
  4139e8:	0441000d 	bgez	v0,413a20 <findDirByFullName+0x38c>
  4139ec:	8fac011c 	lw	t4,284(sp)
  4139f0:	924a0074 	lbu	t2,116(s2)
  4139f4:	00000000 	nop
  4139f8:	354b0004 	ori	t3,t2,0x4
  4139fc:	a24b0074 	sb	t3,116(s2)
  413a00:	8f998564 	lw	t9,-31388(gp)
  413a04:	8fa40054 	lw	a0,84(sp)
  413a08:	0320f809 	jalr	t9
  413a0c:	00000000 	nop
  413a10:	8fbc0034 	lw	gp,52(sp)
  413a14:	10000262 	b	4143a0 <findDirByFullName+0xd0c>
  413a18:	24020001 	li	v0,1
  413a1c:	8fac011c 	lw	t4,284(sp)
  413a20:	8f90806c 	lw	s0,-32660(gp)
  413a24:	ae4c0008 	sw	t4,8(s2)
  413a28:	261066b8 	addiu	s0,s0,26296
  413a2c:	8e0d0000 	lw	t5,0(s0)
  413a30:	8fae0108 	lw	t6,264(sp)
  413a34:	00000000 	nop
  413a38:	11cd0031 	beq	t6,t5,413b00 <findDirByFullName+0x46c>
  413a3c:	00000000 	nop
  413a40:	8f99812c 	lw	t9,-32468(gp)
  413a44:	8fa4019c 	lw	a0,412(sp)
  413a48:	0320f809 	jalr	t9
  413a4c:	27a5006c 	addiu	a1,sp,108
  413a50:	8fbc0034 	lw	gp,52(sp)
  413a54:	0441000c 	bgez	v0,413a88 <findDirByFullName+0x3f4>
  413a58:	3c018000 	lui	at,0x8000
  413a5c:	92580074 	lbu	t8,116(s2)
  413a60:	00000000 	nop
  413a64:	37190004 	ori	t9,t8,0x4
  413a68:	a2590074 	sb	t9,116(s2)
  413a6c:	8f998564 	lw	t9,-31388(gp)
  413a70:	8fa40054 	lw	a0,84(sp)
  413a74:	0320f809 	jalr	t9
  413a78:	00000000 	nop
  413a7c:	8fbc0034 	lw	gp,52(sp)
  413a80:	10000247 	b	4143a0 <findDirByFullName+0xd0c>
  413a84:	24020001 	li	v0,1
  413a88:	8f888a50 	lw	t0,-30128(gp)
  413a8c:	8fa900a0 	lw	t1,160(sp)
  413a90:	8d080000 	lw	t0,0(t0)
  413a94:	01215024 	and	t2,t1,at
  413a98:	150a0008 	bne	t0,t2,413abc <findDirByFullName+0x428>
  413a9c:	00000000 	nop
  413aa0:	8f9980cc 	lw	t9,-32564(gp)
  413aa4:	8f858a4c 	lw	a1,-30132(gp)
  413aa8:	0320f809 	jalr	t9
  413aac:	27a40090 	addiu	a0,sp,144
  413ab0:	8fbc0034 	lw	gp,52(sp)
  413ab4:	10400010 	beqz	v0,413af8 <findDirByFullName+0x464>
  413ab8:	8fab0108 	lw	t3,264(sp)
  413abc:	8f998564 	lw	t9,-31388(gp)
  413ac0:	8fa40054 	lw	a0,84(sp)
  413ac4:	0320f809 	jalr	t9
  413ac8:	00000000 	nop
  413acc:	8fbc0034 	lw	gp,52(sp)
  413ad0:	02402025 	move	a0,s2
  413ad4:	8f998018 	lw	t9,-32744(gp)
  413ad8:	00000000 	nop
  413adc:	27393824 	addiu	t9,t9,14372
  413ae0:	0320f809 	jalr	t9
  413ae4:	00000000 	nop
  413ae8:	8fbc0034 	lw	gp,52(sp)
  413aec:	1000022d 	b	4143a4 <findDirByFullName+0xd10>
  413af0:	8fbf003c 	lw	ra,60(sp)
  413af4:	8fab0108 	lw	t3,264(sp)
  413af8:	00000000 	nop
  413afc:	ae0b0000 	sw	t3,0(s0)
  413b00:	8f998118 	lw	t9,-32488(gp)
  413b04:	8fa4019c 	lw	a0,412(sp)
  413b08:	0320f809 	jalr	t9
  413b0c:	00000000 	nop
  413b10:	8fbc0034 	lw	gp,52(sp)
  413b14:	1440000f 	bnez	v0,413b54 <findDirByFullName+0x4c0>
  413b18:	00402025 	move	a0,v0
  413b1c:	8f998564 	lw	t9,-31388(gp)
  413b20:	8fa40054 	lw	a0,84(sp)
  413b24:	0320f809 	jalr	t9
  413b28:	00000000 	nop
  413b2c:	8fbc0034 	lw	gp,52(sp)
  413b30:	02402025 	move	a0,s2
  413b34:	8f998018 	lw	t9,-32744(gp)
  413b38:	00000000 	nop
  413b3c:	27393824 	addiu	t9,t9,14372
  413b40:	0320f809 	jalr	t9
  413b44:	00000000 	nop
  413b48:	8fbc0034 	lw	gp,52(sp)
  413b4c:	10000215 	b	4143a4 <findDirByFullName+0xd10>
  413b50:	8fbf003c 	lw	ra,60(sp)
  413b54:	8e46000c 	lw	a2,12(s2)
  413b58:	00009825 	move	s3,zero
  413b5c:	18c00019 	blez	a2,413bc4 <findDirByFullName+0x530>
  413b60:	00001825 	move	v1,zero
  413b64:	8e4c0010 	lw	t4,16(s2)
  413b68:	26730001 	addiu	s3,s3,1
  413b6c:	01837021 	addu	t6,t4,v1
  413b70:	8dc20000 	lw	v0,0(t6)
  413b74:	00000000 	nop
  413b78:	904d0029 	lbu	t5,41(v0)
  413b7c:	00000000 	nop
  413b80:	31afff7f 	andi	t7,t5,0xff7f
  413b84:	a04f0029 	sb	t7,41(v0)
  413b88:	8e580010 	lw	t8,16(s2)
  413b8c:	00000000 	nop
  413b90:	0303c821 	addu	t9,t8,v1
  413b94:	8f220000 	lw	v0,0(t9)
  413b98:	24630004 	addiu	v1,v1,4
  413b9c:	90490028 	lbu	t1,40(v0)
  413ba0:	00000000 	nop
  413ba4:	3128fffd 	andi	t0,t1,0xfffd
  413ba8:	a0480028 	sb	t0,40(v0)
  413bac:	8e46000c 	lw	a2,12(s2)
  413bb0:	00000000 	nop
  413bb4:	0266082a 	slt	at,s3,a2
  413bb8:	1420ffea 	bnez	at,413b64 <findDirByFullName+0x4d0>
  413bbc:	00000000 	nop
  413bc0:	00009825 	move	s3,zero
  413bc4:	8e450014 	lw	a1,20(s2)
  413bc8:	00001825 	move	v1,zero
  413bcc:	18a0001a 	blez	a1,413c38 <findDirByFullName+0x5a4>
  413bd0:	00000000 	nop
  413bd4:	8e4a0018 	lw	t2,24(s2)
  413bd8:	26730001 	addiu	s3,s3,1
  413bdc:	01435821 	addu	t3,t2,v1
  413be0:	8d620000 	lw	v0,0(t3)
  413be4:	00000000 	nop
  413be8:	904c0074 	lbu	t4,116(v0)
  413bec:	00000000 	nop
  413bf0:	318efffd 	andi	t6,t4,0xfffd
  413bf4:	a04e0074 	sb	t6,116(v0)
  413bf8:	8e4d0018 	lw	t5,24(s2)
  413bfc:	00000000 	nop
  413c00:	01a37821 	addu	t7,t5,v1
  413c04:	8de20000 	lw	v0,0(t7)
  413c08:	24630004 	addiu	v1,v1,4
  413c0c:	90580074 	lbu	t8,116(v0)
  413c10:	00000000 	nop
  413c14:	3319fff7 	andi	t9,t8,0xfff7
  413c18:	a0590074 	sb	t9,116(v0)
  413c1c:	8e450014 	lw	a1,20(s2)
  413c20:	00000000 	nop
  413c24:	0265082a 	slt	at,s3,a1
  413c28:	1420ffea 	bnez	at,413bd4 <findDirByFullName+0x540>
  413c2c:	00000000 	nop
  413c30:	8e46000c 	lw	a2,12(s2)
  413c34:	00009825 	move	s3,zero
  413c38:	8f9980e4 	lw	t9,-32540(gp)
  413c3c:	00c0a825 	move	s5,a2
  413c40:	00a0f025 	move	s8,a1
  413c44:	0320f809 	jalr	t9
  413c48:	afa40194 	sw	a0,404(sp)
  413c4c:	8fbc0034 	lw	gp,52(sp)
  413c50:	1040015b 	beqz	v0,4141c0 <findDirByFullName+0xb2c>
  413c54:	00408825 	move	s1,v0
  413c58:	8f978068 	lw	s7,-32664(gp)
  413c5c:	8f968068 	lw	s6,-32664(gp)
  413c60:	26f7018c 	addiu	s7,s7,396
  413c64:	26d60184 	addiu	s6,s6,388
  413c68:	3263000f 	andi	v1,s3,0xf
  413c6c:	2c690001 	sltiu	t1,v1,1
  413c70:	11200007 	beqz	t1,413c90 <findDirByFullName+0x5fc>
  413c74:	26730001 	addiu	s3,s3,1
  413c78:	8f998578 	lw	t9,-31368(gp)
  413c7c:	00000000 	nop
  413c80:	0320f809 	jalr	t9
  413c84:	00000000 	nop
  413c88:	8fbc0034 	lw	gp,52(sp)
  413c8c:	00000000 	nop
  413c90:	8e280000 	lw	t0,0(s1)
  413c94:	2630000a 	addiu	s0,s1,10
  413c98:	11000141 	beqz	t0,4141a0 <findDirByFullName+0xb0c>
  413c9c:	00000000 	nop
  413ca0:	8f85805c 	lw	a1,-32676(gp)
  413ca4:	8f9980cc 	lw	t9,-32564(gp)
  413ca8:	02002025 	move	a0,s0
  413cac:	0320f809 	jalr	t9
  413cb0:	24a5a75c 	addiu	a1,a1,-22692
  413cb4:	8fbc0034 	lw	gp,52(sp)
  413cb8:	10400139 	beqz	v0,4141a0 <findDirByFullName+0xb0c>
  413cbc:	00000000 	nop
  413cc0:	8f85805c 	lw	a1,-32676(gp)
  413cc4:	8f9980cc 	lw	t9,-32564(gp)
  413cc8:	02002025 	move	a0,s0
  413ccc:	0320f809 	jalr	t9
  413cd0:	24a5a760 	addiu	a1,a1,-22688
  413cd4:	8fbc0034 	lw	gp,52(sp)
  413cd8:	10400131 	beqz	v0,4141a0 <findDirByFullName+0xb0c>
  413cdc:	02802025 	move	a0,s4
  413ce0:	8f9980dc 	lw	t9,-32548(gp)
  413ce4:	96260008 	lhu	a2,8(s1)
  413ce8:	0320f809 	jalr	t9
  413cec:	02002825 	move	a1,s0
  413cf0:	962a0008 	lhu	t2,8(s1)
  413cf4:	8fbc0034 	lw	gp,52(sp)
  413cf8:	028a5821 	addu	t3,s4,t2
  413cfc:	a1600000 	sb	zero,0(t3)
  413d00:	8f998120 	lw	t9,-32480(gp)
  413d04:	8fa4019c 	lw	a0,412(sp)
  413d08:	0320f809 	jalr	t9
  413d0c:	27a50108 	addiu	a1,sp,264
  413d10:	8fbc0034 	lw	gp,52(sp)
  413d14:	04400122 	bltz	v0,4141a0 <findDirByFullName+0xb0c>
  413d18:	00000000 	nop
  413d1c:	8fac011c 	lw	t4,284(sp)
  413d20:	24014000 	li	at,16384
  413d24:	318ef000 	andi	t6,t4,0xf000
  413d28:	11c100c0 	beq	t6,at,41402c <findDirByFullName+0x998>
  413d2c:	00000000 	nop
  413d30:	8f9985a4 	lw	t9,-31324(gp)
  413d34:	02402025 	move	a0,s2
  413d38:	0320f809 	jalr	t9
  413d3c:	02802825 	move	a1,s4
  413d40:	8fbc0034 	lw	gp,52(sp)
  413d44:	10400054 	beqz	v0,413e98 <findDirByFullName+0x804>
  413d48:	00408025 	move	s0,v0
  413d4c:	8fad011c 	lw	t5,284(sp)
  413d50:	8c4f0008 	lw	t7,8(v0)
  413d54:	8fb80138 	lw	t8,312(sp)
  413d58:	15af000d 	bne	t5,t7,413d90 <findDirByFullName+0x6fc>
  413d5c:	02402025 	move	a0,s2
  413d60:	8c59000c 	lw	t9,12(v0)
  413d64:	8fa90148 	lw	t1,328(sp)
  413d68:	17190009 	bne	t8,t9,413d90 <findDirByFullName+0x6fc>
  413d6c:	00000000 	nop
  413d70:	8c480010 	lw	t0,16(v0)
  413d74:	00000000 	nop
  413d78:	15280005 	bne	t1,t0,413d90 <findDirByFullName+0x6fc>
  413d7c:	00000000 	nop
  413d80:	8c4a0020 	lw	t2,32(v0)
  413d84:	00000000 	nop
  413d88:	1540003e 	bnez	t2,413e84 <findDirByFullName+0x7f0>
  413d8c:	00000000 	nop
  413d90:	8e4b001c 	lw	t3,28(s2)
  413d94:	8fac0138 	lw	t4,312(sp)
  413d98:	8e0d000c 	lw	t5,12(s0)
  413d9c:	8f998018 	lw	t9,-32744(gp)
  413da0:	016c7021 	addu	t6,t3,t4
  413da4:	01cd7823 	subu	t7,t6,t5
  413da8:	273918b0 	addiu	t9,t9,6320
  413dac:	0320f809 	jalr	t9
  413db0:	ae4f001c 	sw	t7,28(s2)
  413db4:	8fbc0034 	lw	gp,52(sp)
  413db8:	e6400024 	swc1	$f0,36(s2)
  413dbc:	8fb8011c 	lw	t8,284(sp)
  413dc0:	00000000 	nop
  413dc4:	ae180008 	sw	t8,8(s0)
  413dc8:	8fb90138 	lw	t9,312(sp)
  413dcc:	00000000 	nop
  413dd0:	ae19000c 	sw	t9,12(s0)
  413dd4:	8fa90148 	lw	t1,328(sp)
  413dd8:	00000000 	nop
  413ddc:	ae090010 	sw	t1,16(s0)
  413de0:	8f998818 	lw	t9,-30696(gp)
  413de4:	8fa4019c 	lw	a0,412(sp)
  413de8:	0320f809 	jalr	t9
  413dec:	00000000 	nop
  413df0:	8fbc0034 	lw	gp,52(sp)
  413df4:	ae020020 	sw	v0,32(s0)
  413df8:	8ec80000 	lw	t0,0(s6)
  413dfc:	8e03000c 	lw	v1,12(s0)
  413e00:	00000000 	nop
  413e04:	0103082a 	slt	at,t0,v1
  413e08:	10200006 	beqz	at,413e24 <findDirByFullName+0x790>
  413e0c:	00000000 	nop
  413e10:	aec30000 	sw	v1,0(s6)
  413e14:	924b0074 	lbu	t3,116(s2)
  413e18:	00000000 	nop
  413e1c:	356c0001 	ori	t4,t3,0x1
  413e20:	a24c0074 	sb	t4,116(s2)
  413e24:	8e42001c 	lw	v0,28(s2)
  413e28:	8eee0000 	lw	t6,0(s7)
  413e2c:	00000000 	nop
  413e30:	01c2082a 	slt	at,t6,v0
  413e34:	10200006 	beqz	at,413e50 <findDirByFullName+0x7bc>
  413e38:	00000000 	nop
  413e3c:	aee20000 	sw	v0,0(s7)
  413e40:	924f0074 	lbu	t7,116(s2)
  413e44:	00000000 	nop
  413e48:	35f80001 	ori	t8,t7,0x1
  413e4c:	a2580074 	sb	t8,116(s2)
  413e50:	8f99858c 	lw	t9,-31348(gp)
  413e54:	02002025 	move	a0,s0
  413e58:	0320f809 	jalr	t9
  413e5c:	00000000 	nop
  413e60:	c600001c 	lwc1	$f0,28(s0)
  413e64:	c6440054 	lwc1	$f4,84(s2)
  413e68:	46000221 	cvt.d.s	$f8,$f0
  413e6c:	460021a1 	cvt.d.s	$f6,$f4
  413e70:	4628303c 	c.lt.d	$f6,$f8
  413e74:	8fbc0034 	lw	gp,52(sp)
  413e78:	45000002 	bc1f	413e84 <findDirByFullName+0x7f0>
  413e7c:	00000000 	nop
  413e80:	e6400054 	swc1	$f0,84(s2)
  413e84:	92090029 	lbu	t1,41(s0)
  413e88:	00000000 	nop
  413e8c:	35280080 	ori	t0,t1,0x80
  413e90:	100000c3 	b	4141a0 <findDirByFullName+0xb0c>
  413e94:	a2080029 	sb	t0,41(s0)
  413e98:	8f998018 	lw	t9,-32744(gp)
  413e9c:	00158880 	sll	s1,s5,0x2
  413ea0:	27391b84 	addiu	t9,t9,7044
  413ea4:	0320f809 	jalr	t9
  413ea8:	00000000 	nop
  413eac:	8fbc0034 	lw	gp,52(sp)
  413eb0:	16a00008 	bnez	s5,413ed4 <findDirByFullName+0x840>
  413eb4:	00408025 	move	s0,v0
  413eb8:	8f9983b8 	lw	t9,-31816(gp)
  413ebc:	24040004 	li	a0,4
  413ec0:	0320f809 	jalr	t9
  413ec4:	00000000 	nop
  413ec8:	8fbc0034 	lw	gp,52(sp)
  413ecc:	10000007 	b	413eec <findDirByFullName+0x858>
  413ed0:	ae420010 	sw	v0,16(s2)
  413ed4:	8f99818c 	lw	t9,-32372(gp)
  413ed8:	8e440010 	lw	a0,16(s2)
  413edc:	0320f809 	jalr	t9
  413ee0:	26250004 	addiu	a1,s1,4
  413ee4:	8fbc0034 	lw	gp,52(sp)
  413ee8:	ae420010 	sw	v0,16(s2)
  413eec:	8e4a0010 	lw	t2,16(s2)
  413ef0:	26b50001 	addiu	s5,s5,1
  413ef4:	01515821 	addu	t3,t2,s1
  413ef8:	ad700000 	sw	s0,0(t3)
  413efc:	92180029 	lbu	t8,41(s0)
  413f00:	920e0028 	lbu	t6,40(s0)
  413f04:	37190080 	ori	t9,t8,0x80
  413f08:	a2190029 	sb	t9,41(s0)
  413f0c:	8f998018 	lw	t9,-32744(gp)
  413f10:	35cd0002 	ori	t5,t6,0x2
  413f14:	27391d68 	addiu	t9,t9,7528
  413f18:	a20d0028 	sb	t5,40(s0)
  413f1c:	0320f809 	jalr	t9
  413f20:	02802025 	move	a0,s4
  413f24:	8fbc0034 	lw	gp,52(sp)
  413f28:	ae020000 	sw	v0,0(s0)
  413f2c:	8f9983e0 	lw	t9,-31776(gp)
  413f30:	02802025 	move	a0,s4
  413f34:	0320f809 	jalr	t9
  413f38:	00000000 	nop
  413f3c:	8fbc0034 	lw	gp,52(sp)
  413f40:	ae020004 	sw	v0,4(s0)
  413f44:	8fa9011c 	lw	t1,284(sp)
  413f48:	00000000 	nop
  413f4c:	ae090008 	sw	t1,8(s0)
  413f50:	8f998818 	lw	t9,-30696(gp)
  413f54:	8fa4019c 	lw	a0,412(sp)
  413f58:	0320f809 	jalr	t9
  413f5c:	00000000 	nop
  413f60:	8fbc0034 	lw	gp,52(sp)
  413f64:	ae020020 	sw	v0,32(s0)
  413f68:	8e48001c 	lw	t0,28(s2)
  413f6c:	8faa0138 	lw	t2,312(sp)
  413f70:	8e0c000c 	lw	t4,12(s0)
  413f74:	8f998018 	lw	t9,-32744(gp)
  413f78:	010a5821 	addu	t3,t0,t2
  413f7c:	016c7023 	subu	t6,t3,t4
  413f80:	273918b0 	addiu	t9,t9,6320
  413f84:	ae4e001c 	sw	t6,28(s2)
  413f88:	0320f809 	jalr	t9
  413f8c:	02402025 	move	a0,s2
  413f90:	8fbc0034 	lw	gp,52(sp)
  413f94:	e6400024 	swc1	$f0,36(s2)
  413f98:	8fad0138 	lw	t5,312(sp)
  413f9c:	00000000 	nop
  413fa0:	ae0d000c 	sw	t5,12(s0)
  413fa4:	8ecf0000 	lw	t7,0(s6)
  413fa8:	00000000 	nop
  413fac:	01ed082a 	slt	at,t7,t5
  413fb0:	10200002 	beqz	at,413fbc <findDirByFullName+0x928>
  413fb4:	00000000 	nop
  413fb8:	aecd0000 	sw	t5,0(s6)
  413fbc:	8e42001c 	lw	v0,28(s2)
  413fc0:	8ef80000 	lw	t8,0(s7)
  413fc4:	00000000 	nop
  413fc8:	0302082a 	slt	at,t8,v0
  413fcc:	10200003 	beqz	at,413fdc <findDirByFullName+0x948>
  413fd0:	8fb90148 	lw	t9,328(sp)
  413fd4:	aee20000 	sw	v0,0(s7)
  413fd8:	8fb90148 	lw	t9,328(sp)
  413fdc:	02002025 	move	a0,s0
  413fe0:	ae190010 	sw	t9,16(s0)
  413fe4:	8f99858c 	lw	t9,-31348(gp)
  413fe8:	00000000 	nop
  413fec:	0320f809 	jalr	t9
  413ff0:	00000000 	nop
  413ff4:	c600001c 	lwc1	$f0,28(s0)
  413ff8:	c64a0054 	lwc1	$f10,84(s2)
  413ffc:	460004a1 	cvt.d.s	$f18,$f0
  414000:	46005421 	cvt.d.s	$f16,$f10
  414004:	4632803c 	c.lt.d	$f16,$f18
  414008:	8fbc0034 	lw	gp,52(sp)
  41400c:	45000002 	bc1f	414018 <findDirByFullName+0x984>
  414010:	00000000 	nop
  414014:	e6400054 	swc1	$f0,84(s2)
  414018:	92480074 	lbu	t0,116(s2)
  41401c:	00000000 	nop
  414020:	350a0001 	ori	t2,t0,0x1
  414024:	1000005e 	b	4141a0 <findDirByFullName+0xb0c>
  414028:	a24a0074 	sb	t2,116(s2)
  41402c:	8f9985a8 	lw	t9,-31320(gp)
  414030:	02402025 	move	a0,s2
  414034:	0320f809 	jalr	t9
  414038:	02802825 	move	a1,s4
  41403c:	8fbc0034 	lw	gp,52(sp)
  414040:	10400008 	beqz	v0,414064 <findDirByFullName+0x9d0>
  414044:	00000000 	nop
  414048:	904c0074 	lbu	t4,116(v0)
  41404c:	00000000 	nop
  414050:	358d0002 	ori	t5,t4,0x2
  414054:	a04d0074 	sb	t5,116(v0)
  414058:	31af00f7 	andi	t7,t5,0xf7
  41405c:	10000050 	b	4141a0 <findDirByFullName+0xb0c>
  414060:	a04f0074 	sb	t7,116(v0)
  414064:	8f998018 	lw	t9,-32744(gp)
  414068:	001e8880 	sll	s1,s8,0x2
  41406c:	27391c04 	addiu	t9,t9,7172
  414070:	0320f809 	jalr	t9
  414074:	00000000 	nop
  414078:	8fbc0034 	lw	gp,52(sp)
  41407c:	17c00008 	bnez	s8,4140a0 <findDirByFullName+0xa0c>
  414080:	00408025 	move	s0,v0
  414084:	8f9983b8 	lw	t9,-31816(gp)
  414088:	24040004 	li	a0,4
  41408c:	0320f809 	jalr	t9
  414090:	00000000 	nop
  414094:	8fbc0034 	lw	gp,52(sp)
  414098:	10000007 	b	4140b8 <findDirByFullName+0xa24>
  41409c:	ae420018 	sw	v0,24(s2)
  4140a0:	8f99818c 	lw	t9,-32372(gp)
  4140a4:	8e440018 	lw	a0,24(s2)
  4140a8:	0320f809 	jalr	t9
  4140ac:	26250004 	addiu	a1,s1,4
  4140b0:	8fbc0034 	lw	gp,52(sp)
  4140b4:	ae420018 	sw	v0,24(s2)
  4140b8:	8e580018 	lw	t8,24(s2)
  4140bc:	27de0001 	addiu	s8,s8,1
  4140c0:	0311c821 	addu	t9,t8,s1
  4140c4:	af300000 	sw	s0,0(t9)
  4140c8:	92080074 	lbu	t0,116(s0)
  4140cc:	8f998018 	lw	t9,-32744(gp)
  4140d0:	350c0008 	ori	t4,t0,0x8
  4140d4:	a20c0074 	sb	t4,116(s0)
  4140d8:	358e0002 	ori	t6,t4,0x2
  4140dc:	27391d68 	addiu	t9,t9,7528
  4140e0:	a20e0074 	sb	t6,116(s0)
  4140e4:	0320f809 	jalr	t9
  4140e8:	02802025 	move	a0,s4
  4140ec:	8fbc0034 	lw	gp,52(sp)
  4140f0:	ae020000 	sw	v0,0(s0)
  4140f4:	8f9983e0 	lw	t9,-31776(gp)
  4140f8:	02802025 	move	a0,s4
  4140fc:	0320f809 	jalr	t9
  414100:	00000000 	nop
  414104:	8fbc0034 	lw	gp,52(sp)
  414108:	ae020004 	sw	v0,4(s0)
  41410c:	8fad011c 	lw	t5,284(sp)
  414110:	8f838a24 	lw	v1,-30172(gp)
  414114:	ae00000c 	sw	zero,12(s0)
  414118:	ae000014 	sw	zero,20(s0)
  41411c:	ae120028 	sw	s2,40(s0)
  414120:	ae0d0008 	sw	t5,8(s0)
  414124:	90630003 	lbu	v1,3(v1)
  414128:	00000000 	nop
  41412c:	0003782b 	sltu	t7,zero,v1
  414130:	11e00006 	beqz	t7,41414c <findDirByFullName+0xab8>
  414134:	01e01825 	move	v1,t7
  414138:	8e430074 	lw	v1,116(s2)
  41413c:	00000000 	nop
  414140:	0003c2c0 	sll	t8,v1,0xb
  414144:	0018cfc2 	srl	t9,t8,0x1f
  414148:	0019182b 	sltu	v1,zero,t9
  41414c:	920c0075 	lbu	t4,117(s0)
  414150:	00035100 	sll	t2,v1,0x4
  414154:	314b0010 	andi	t3,t2,0x10
  414158:	318effef 	andi	t6,t4,0xffef
  41415c:	016e6825 	or	t5,t3,t6
  414160:	a20d0075 	sb	t5,117(s0)
  414164:	8e0f0074 	lw	t7,116(s0)
  414168:	00000000 	nop
  41416c:	000fcac0 	sll	t9,t7,0xb
  414170:	07210007 	bgez	t9,414190 <findDirByFullName+0xafc>
  414174:	00000000 	nop
  414178:	8f998714 	lw	t9,-30956(gp)
  41417c:	02002025 	move	a0,s0
  414180:	0320f809 	jalr	t9
  414184:	00000000 	nop
  414188:	8fbc0034 	lw	gp,52(sp)
  41418c:	00000000 	nop
  414190:	92480075 	lbu	t0,117(s2)
  414194:	00000000 	nop
  414198:	350a0080 	ori	t2,t0,0x80
  41419c:	a24a0075 	sb	t2,117(s2)
  4141a0:	8f9980e4 	lw	t9,-32540(gp)
  4141a4:	8fa40194 	lw	a0,404(sp)
  4141a8:	0320f809 	jalr	t9
  4141ac:	00000000 	nop
  4141b0:	8fbc0034 	lw	gp,52(sp)
  4141b4:	1440feac 	bnez	v0,413c68 <findDirByFullName+0x5d4>
  4141b8:	00408825 	move	s1,v0
  4141bc:	00009825 	move	s3,zero
  4141c0:	8f9980d8 	lw	t9,-32552(gp)
  4141c4:	8fa40194 	lw	a0,404(sp)
  4141c8:	0320f809 	jalr	t9
  4141cc:	00000000 	nop
  4141d0:	8fbc0034 	lw	gp,52(sp)
  4141d4:	00000000 	nop
  4141d8:	8f998578 	lw	t9,-31368(gp)
  4141dc:	00000000 	nop
  4141e0:	0320f809 	jalr	t9
  4141e4:	00000000 	nop
  4141e8:	8fbc0034 	lw	gp,52(sp)
  4141ec:	ae55000c 	sw	s5,12(s2)
  4141f0:	1aa00018 	blez	s5,414254 <findDirByFullName+0xbc0>
  4141f4:	ae5e0014 	sw	s8,20(s2)
  4141f8:	00001825 	move	v1,zero
  4141fc:	8e4c0010 	lw	t4,16(s2)
  414200:	00000000 	nop
  414204:	01835821 	addu	t3,t4,v1
  414208:	8d700000 	lw	s0,0(t3)
  41420c:	00000000 	nop
  414210:	820d0029 	lb	t5,41(s0)
  414214:	00000000 	nop
  414218:	05a00009 	bltz	t5,414240 <findDirByFullName+0xbac>
  41421c:	00000000 	nop
  414220:	92180028 	lbu	t8,40(s0)
  414224:	00000000 	nop
  414228:	37190001 	ori	t9,t8,0x1
  41422c:	a2190028 	sb	t9,40(s0)
  414230:	92480074 	lbu	t0,116(s2)
  414234:	00000000 	nop
  414238:	350a0001 	ori	t2,t0,0x1
  41423c:	a24a0074 	sb	t2,116(s2)
  414240:	8e4c000c 	lw	t4,12(s2)
  414244:	26730001 	addiu	s3,s3,1
  414248:	026c082a 	slt	at,s3,t4
  41424c:	1420ffeb 	bnez	at,4141fc <findDirByFullName+0xb68>
  414250:	24630004 	addiu	v1,v1,4
  414254:	8e450014 	lw	a1,20(s2)
  414258:	93a701a7 	lbu	a3,423(sp)
  41425c:	18a00034 	blez	a1,414330 <findDirByFullName+0xc9c>
  414260:	00001825 	move	v1,zero
  414264:	8e4b0018 	lw	t3,24(s2)
  414268:	00000000 	nop
  41426c:	01637021 	addu	t6,t3,v1
  414270:	8dd00000 	lw	s0,0(t6)
  414274:	00000000 	nop
  414278:	8e020074 	lw	v0,116(s0)
  41427c:	00000000 	nop
  414280:	00027980 	sll	t7,v0,0x6
  414284:	05e1001d 	bgez	t7,4142fc <findDirByFullName+0xc68>
  414288:	00000000 	nop
  41428c:	14e00003 	bnez	a3,41429c <findDirByFullName+0xc08>
  414290:	0002c900 	sll	t9,v0,0x4
  414294:	07210017 	bgez	t9,4142f4 <findDirByFullName+0xc60>
  414298:	00000000 	nop
  41429c:	8f998018 	lw	t9,-32744(gp)
  4142a0:	8fa5019c 	lw	a1,412(sp)
  4142a4:	273938e8 	addiu	t9,t9,14568
  4142a8:	02002025 	move	a0,s0
  4142ac:	02803025 	move	a2,s4
  4142b0:	0320f809 	jalr	t9
  4142b4:	afa30044 	sw	v1,68(sp)
  4142b8:	8e490074 	lw	t1,116(s2)
  4142bc:	924f0075 	lbu	t7,117(s2)
  4142c0:	00094240 	sll	t0,t1,0x9
  4142c4:	000857c2 	srl	t2,t0,0x1f
  4142c8:	01425825 	or	t3,t2,v0
  4142cc:	000b7180 	sll	t6,t3,0x6
  4142d0:	31cd0040 	andi	t5,t6,0x40
  4142d4:	31f8ffbf 	andi	t8,t7,0xffbf
  4142d8:	01b8c825 	or	t9,t5,t8
  4142dc:	8fbc0034 	lw	gp,52(sp)
  4142e0:	8fa30044 	lw	v1,68(sp)
  4142e4:	a2590075 	sb	t9,117(s2)
  4142e8:	93a701a7 	lbu	a3,423(sp)
  4142ec:	8e450014 	lw	a1,20(s2)
  4142f0:	00000000 	nop
  4142f4:	1000000a 	b	414320 <findDirByFullName+0xc8c>
  4142f8:	00051080 	sll	v0,a1,0x2
  4142fc:	92080074 	lbu	t0,116(s0)
  414300:	00000000 	nop
  414304:	350a0004 	ori	t2,t0,0x4
  414308:	a20a0074 	sb	t2,116(s0)
  41430c:	924b0075 	lbu	t3,117(s2)
  414310:	8e450014 	lw	a1,20(s2)
  414314:	356e0080 	ori	t6,t3,0x80
  414318:	a24e0075 	sb	t6,117(s2)
  41431c:	00051080 	sll	v0,a1,0x2
  414320:	24630004 	addiu	v1,v1,4
  414324:	0062082a 	slt	at,v1,v0
  414328:	1420ffce 	bnez	at,414264 <findDirByFullName+0xbd0>
  41432c:	00000000 	nop
  414330:	8f998578 	lw	t9,-31368(gp)
  414334:	00000000 	nop
  414338:	0320f809 	jalr	t9
  41433c:	00000000 	nop
  414340:	8fbc0034 	lw	gp,52(sp)
  414344:	8fa40054 	lw	a0,84(sp)
  414348:	8f998564 	lw	t9,-31388(gp)
  41434c:	00000000 	nop
  414350:	0320f809 	jalr	t9
  414354:	00000000 	nop
  414358:	92430074 	lbu	v1,116(s2)
  41435c:	8fbc0034 	lw	gp,52(sp)
  414360:	306f0001 	andi	t7,v1,0x1
  414364:	000f182b 	sltu	v1,zero,t7
  414368:	1460000d 	bnez	v1,4143a0 <findDirByFullName+0xd0c>
  41436c:	306200ff 	andi	v0,v1,0xff
  414370:	92430075 	lbu	v1,117(s2)
  414374:	00000000 	nop
  414378:	0003c1c2 	srl	t8,v1,0x7
  41437c:	0018c82b 	sltu	t9,zero,t8
  414380:	17200006 	bnez	t9,41439c <findDirByFullName+0xd08>
  414384:	03201825 	move	v1,t9
  414388:	8e430074 	lw	v1,116(s2)
  41438c:	00000000 	nop
  414390:	00034a40 	sll	t1,v1,0x9
  414394:	000947c2 	srl	t0,t1,0x1f
  414398:	0008182b 	sltu	v1,zero,t0
  41439c:	306200ff 	andi	v0,v1,0xff
  4143a0:	8fbf003c 	lw	ra,60(sp)
  4143a4:	8fb00014 	lw	s0,20(sp)
  4143a8:	8fb10018 	lw	s1,24(sp)
  4143ac:	8fb2001c 	lw	s2,28(sp)
  4143b0:	8fb30020 	lw	s3,32(sp)
  4143b4:	8fb40024 	lw	s4,36(sp)
  4143b8:	8fb50028 	lw	s5,40(sp)
  4143bc:	8fb6002c 	lw	s6,44(sp)
  4143c0:	8fb70030 	lw	s7,48(sp)
  4143c4:	8fbe0038 	lw	s8,56(sp)
  4143c8:	03e00008 	jr	ra
  4143cc:	27bd0198 	addiu	sp,sp,408
