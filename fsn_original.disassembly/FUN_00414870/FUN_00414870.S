# Function: FUN_00414870
# Address: 0x00414870 - 0x00414be4
# Size: 0x374 (884 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00414870 <findDirByFullName+0x11dc>:
  414870:	3c1c0fc1 	lui	gp,0xfc1
  414874:	279c92c0 	addiu	gp,gp,-27968
  414878:	0399e021 	addu	gp,gp,t9
  41487c:	27bdff90 	addiu	sp,sp,-112
  414880:	8f998578 	lw	t9,-31368(gp)
  414884:	afbf0034 	sw	ra,52(sp)
  414888:	afb5002c 	sw	s5,44(sp)
  41488c:	afb40028 	sw	s4,40(sp)
  414890:	afb1001c 	sw	s1,28(sp)
  414894:	00808825 	move	s1,a0
  414898:	00a0a025 	move	s4,a1
  41489c:	00c0a825 	move	s5,a2
  4148a0:	afbc0030 	sw	gp,48(sp)
  4148a4:	afb30024 	sw	s3,36(sp)
  4148a8:	afb20020 	sw	s2,32(sp)
  4148ac:	0320f809 	jalr	t9
  4148b0:	afb00018 	sw	s0,24(sp)
  4148b4:	8fbc0030 	lw	gp,48(sp)
  4148b8:	00000000 	nop
  4148bc:	8f8e809c 	lw	t6,-32612(gp)
  4148c0:	00000000 	nop
  4148c4:	8dce0000 	lw	t6,0(t6)
  4148c8:	00000000 	nop
  4148cc:	11c00008 	beqz	t6,4148f0 <findDirByFullName+0x125c>
  4148d0:	00000000 	nop
  4148d4:	8f998284 	lw	t9,-32124(gp)
  4148d8:	24040002 	li	a0,2
  4148dc:	0320f809 	jalr	t9
  4148e0:	02202825 	move	a1,s1
  4148e4:	8fbc0030 	lw	gp,48(sp)
  4148e8:	10000015 	b	414940 <findDirByFullName+0x12ac>
  4148ec:	8e8c0008 	lw	t4,8(s4)
  4148f0:	8e2f0000 	lw	t7,0(s1)
  4148f4:	00000000 	nop
  4148f8:	25f8ffff 	addiu	t8,t7,-1
  4148fc:	07010008 	bgez	t8,414920 <findDirByFullName+0x128c>
  414900:	ae380000 	sw	t8,0(s1)
  414904:	8f998288 	lw	t9,-32120(gp)
  414908:	24040002 	li	a0,2
  41490c:	0320f809 	jalr	t9
  414910:	02202825 	move	a1,s1
  414914:	8fbc0030 	lw	gp,48(sp)
  414918:	10000009 	b	414940 <findDirByFullName+0x12ac>
  41491c:	8e8c0008 	lw	t4,8(s4)
  414920:	8e290004 	lw	t1,4(s1)
  414924:	24080002 	li	t0,2
  414928:	a1280000 	sb	t0,0(t1)
  41492c:	8e2a0004 	lw	t2,4(s1)
  414930:	00000000 	nop
  414934:	254b0001 	addiu	t3,t2,1
  414938:	ae2b0004 	sw	t3,4(s1)
  41493c:	8e8c0008 	lw	t4,8(s4)
  414940:	24080002 	li	t0,2
  414944:	afac005c 	sw	t4,92(sp)
  414948:	8e8d0004 	lw	t5,4(s4)
  41494c:	27a4005c 	addiu	a0,sp,92
  414950:	a7ad0060 	sh	t5,96(sp)
  414954:	8e8e0014 	lw	t6,20(s4)
  414958:	2405000c 	li	a1,12
  41495c:	a7ae0062 	sh	t6,98(sp)
  414960:	8e8f000c 	lw	t7,12(s4)
  414964:	a3b50066 	sb	s5,102(sp)
  414968:	a3a00067 	sb	zero,103(sp)
  41496c:	a7af0064 	sh	t7,100(sp)
  414970:	8e820074 	lw	v0,116(s4)
  414974:	00000000 	nop
  414978:	0002cac0 	sll	t9,v0,0xb
  41497c:	07210005 	bgez	t9,414994 <findDirByFullName+0x1300>
  414980:	00025340 	sll	t2,v0,0xd
  414984:	a3a80067 	sb	t0,103(sp)
  414988:	8e820074 	lw	v0,116(s4)
  41498c:	00000000 	nop
  414990:	00025340 	sll	t2,v0,0xd
  414994:	05410005 	bgez	t2,4149ac <findDirByFullName+0x1318>
  414998:	00000000 	nop
  41499c:	93ab0067 	lbu	t3,103(sp)
  4149a0:	00000000 	nop
  4149a4:	356c0001 	ori	t4,t3,0x1
  4149a8:	a3ac0067 	sb	t4,103(sp)
  4149ac:	8f99828c 	lw	t9,-32116(gp)
  4149b0:	24060001 	li	a2,1
  4149b4:	0320f809 	jalr	t9
  4149b8:	02203825 	move	a3,s1
  4149bc:	8fbc0030 	lw	gp,48(sp)
  4149c0:	8e840000 	lw	a0,0(s4)
  4149c4:	8f99828c 	lw	t9,-32116(gp)
  4149c8:	8e860004 	lw	a2,4(s4)
  4149cc:	24050001 	li	a1,1
  4149d0:	0320f809 	jalr	t9
  4149d4:	02203825 	move	a3,s1
  4149d8:	26b50001 	addiu	s5,s5,1
  4149dc:	a3b50058 	sb	s5,88(sp)
  4149e0:	8e8d000c 	lw	t5,12(s4)
  4149e4:	8fbc0030 	lw	gp,48(sp)
  4149e8:	19a00063 	blez	t5,414b78 <findDirByFullName+0x14e4>
  4149ec:	00009025 	move	s2,zero
  4149f0:	00009825 	move	s3,zero
  4149f4:	8f8e809c 	lw	t6,-32612(gp)
  4149f8:	00000000 	nop
  4149fc:	8dce0000 	lw	t6,0(t6)
  414a00:	00000000 	nop
  414a04:	11c00008 	beqz	t6,414a28 <findDirByFullName+0x1394>
  414a08:	00000000 	nop
  414a0c:	8f998284 	lw	t9,-32124(gp)
  414a10:	24040003 	li	a0,3
  414a14:	0320f809 	jalr	t9
  414a18:	02202825 	move	a1,s1
  414a1c:	8fbc0030 	lw	gp,48(sp)
  414a20:	10000015 	b	414a78 <findDirByFullName+0x13e4>
  414a24:	8e8c0010 	lw	t4,16(s4)
  414a28:	8e2f0000 	lw	t7,0(s1)
  414a2c:	00000000 	nop
  414a30:	25f8ffff 	addiu	t8,t7,-1
  414a34:	07010008 	bgez	t8,414a58 <findDirByFullName+0x13c4>
  414a38:	ae380000 	sw	t8,0(s1)
  414a3c:	8f998288 	lw	t9,-32120(gp)
  414a40:	24040003 	li	a0,3
  414a44:	0320f809 	jalr	t9
  414a48:	02202825 	move	a1,s1
  414a4c:	8fbc0030 	lw	gp,48(sp)
  414a50:	10000009 	b	414a78 <findDirByFullName+0x13e4>
  414a54:	8e8c0010 	lw	t4,16(s4)
  414a58:	8e290004 	lw	t1,4(s1)
  414a5c:	24080003 	li	t0,3
  414a60:	a1280000 	sb	t0,0(t1)
  414a64:	8e2a0004 	lw	t2,4(s1)
  414a68:	00000000 	nop
  414a6c:	254b0001 	addiu	t3,t2,1
  414a70:	ae2b0004 	sw	t3,4(s1)
  414a74:	8e8c0010 	lw	t4,16(s4)
  414a78:	00000000 	nop
  414a7c:	01936821 	addu	t5,t4,s3
  414a80:	8db00000 	lw	s0,0(t5)
  414a84:	00000000 	nop
  414a88:	8e0e000c 	lw	t6,12(s0)
  414a8c:	00000000 	nop
  414a90:	afae0048 	sw	t6,72(sp)
  414a94:	8e0f0010 	lw	t7,16(s0)
  414a98:	00000000 	nop
  414a9c:	afaf004c 	sw	t7,76(sp)
  414aa0:	8e180008 	lw	t8,8(s0)
  414aa4:	00000000 	nop
  414aa8:	afb80050 	sw	t8,80(sp)
  414aac:	8e190004 	lw	t9,4(s0)
  414ab0:	00000000 	nop
  414ab4:	a7b90054 	sh	t9,84(sp)
  414ab8:	8e040020 	lw	a0,32(s0)
  414abc:	00000000 	nop
  414ac0:	1080000e 	beqz	a0,414afc <findDirByFullName+0x1468>
  414ac4:	00000000 	nop
  414ac8:	8f998820 	lw	t9,-30688(gp)
  414acc:	00000000 	nop
  414ad0:	0320f809 	jalr	t9
  414ad4:	00000000 	nop
  414ad8:	8fbc0030 	lw	gp,48(sp)
  414adc:	afa20044 	sw	v0,68(sp)
  414ae0:	8f9983e0 	lw	t9,-31776(gp)
  414ae4:	00402025 	move	a0,v0
  414ae8:	0320f809 	jalr	t9
  414aec:	00000000 	nop
  414af0:	8fbc0030 	lw	gp,48(sp)
  414af4:	10000002 	b	414b00 <findDirByFullName+0x146c>
  414af8:	a7a20056 	sh	v0,86(sp)
  414afc:	a7a00056 	sh	zero,86(sp)
  414b00:	8f99828c 	lw	t9,-32116(gp)
  414b04:	27a40048 	addiu	a0,sp,72
  414b08:	24050014 	li	a1,20
  414b0c:	24060001 	li	a2,1
  414b10:	0320f809 	jalr	t9
  414b14:	02203825 	move	a3,s1
  414b18:	8fbc0030 	lw	gp,48(sp)
  414b1c:	8e040000 	lw	a0,0(s0)
  414b20:	8f99828c 	lw	t9,-32116(gp)
  414b24:	8e060004 	lw	a2,4(s0)
  414b28:	24050001 	li	a1,1
  414b2c:	0320f809 	jalr	t9
  414b30:	02203825 	move	a3,s1
  414b34:	8e080020 	lw	t0,32(s0)
  414b38:	8fbc0030 	lw	gp,48(sp)
  414b3c:	11000008 	beqz	t0,414b60 <findDirByFullName+0x14cc>
  414b40:	24050001 	li	a1,1
  414b44:	8f99828c 	lw	t9,-32116(gp)
  414b48:	8fa40044 	lw	a0,68(sp)
  414b4c:	97a60056 	lhu	a2,86(sp)
  414b50:	0320f809 	jalr	t9
  414b54:	02203825 	move	a3,s1
  414b58:	8fbc0030 	lw	gp,48(sp)
  414b5c:	00000000 	nop
  414b60:	8e89000c 	lw	t1,12(s4)
  414b64:	26520001 	addiu	s2,s2,1
  414b68:	0249082a 	slt	at,s2,t1
  414b6c:	1420ffa1 	bnez	at,4149f4 <findDirByFullName+0x1360>
  414b70:	26730004 	addiu	s3,s3,4
  414b74:	00009025 	move	s2,zero
  414b78:	8e8a0014 	lw	t2,20(s4)
  414b7c:	00009825 	move	s3,zero
  414b80:	19400010 	blez	t2,414bc4 <findDirByFullName+0x1530>
  414b84:	8fbf0034 	lw	ra,52(sp)
  414b88:	8e8b0018 	lw	t3,24(s4)
  414b8c:	8f998018 	lw	t9,-32744(gp)
  414b90:	01736021 	addu	t4,t3,s3
  414b94:	8d850000 	lw	a1,0(t4)
  414b98:	27394870 	addiu	t9,t9,18544
  414b9c:	02202025 	move	a0,s1
  414ba0:	0320f809 	jalr	t9
  414ba4:	02a03025 	move	a2,s5
  414ba8:	8e8d0014 	lw	t5,20(s4)
  414bac:	26520001 	addiu	s2,s2,1
  414bb0:	8fbc0030 	lw	gp,48(sp)
  414bb4:	024d082a 	slt	at,s2,t5
  414bb8:	1420fff3 	bnez	at,414b88 <findDirByFullName+0x14f4>
  414bbc:	26730004 	addiu	s3,s3,4
  414bc0:	8fbf0034 	lw	ra,52(sp)
  414bc4:	8fb00018 	lw	s0,24(sp)
  414bc8:	8fb1001c 	lw	s1,28(sp)
  414bcc:	8fb20020 	lw	s2,32(sp)
  414bd0:	8fb30024 	lw	s3,36(sp)
  414bd4:	8fb40028 	lw	s4,40(sp)
  414bd8:	8fb5002c 	lw	s5,44(sp)
  414bdc:	03e00008 	jr	ra
  414be0:	27bd0070 	addiu	sp,sp,112
