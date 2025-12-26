# Function: FUN_004308ec
# Address: 0x004308ec - 0x00430b70
# Size: 0x284 (644 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004308ec <usystem+0xb54>:
  4308ec:	3c1c0fbf 	lui	gp,0xfbf
  4308f0:	279cd244 	addiu	gp,gp,-11708
  4308f4:	0399e021 	addu	gp,gp,t9
  4308f8:	8f8389dc 	lw	v1,-30244(gp)
  4308fc:	27bdffe0 	addiu	sp,sp,-32
  430900:	afa50024 	sw	a1,36(sp)
  430904:	8c650000 	lw	a1,0(v1)
  430908:	afbf001c 	sw	ra,28(sp)
  43090c:	afbc0018 	sw	gp,24(sp)
  430910:	afa40020 	sw	a0,32(sp)
  430914:	10a00016 	beqz	a1,430970 <usystem+0xbd8>
  430918:	afa60028 	sw	a2,40(sp)
  43091c:	8cae0024 	lw	t6,36(a1)
  430920:	00000000 	nop
  430924:	ac6e0000 	sw	t6,0(v1)
  430928:	15c0000c 	bnez	t6,43095c <usystem+0xbc4>
  43092c:	01c02825 	move	a1,t6
  430930:	8f8289d8 	lw	v0,-30248(gp)
  430934:	00000000 	nop
  430938:	8c4f0000 	lw	t7,0(v0)
  43093c:	00000000 	nop
  430940:	8df8006c 	lw	t8,108(t7)
  430944:	00000000 	nop
  430948:	13000004 	beqz	t8,43095c <usystem+0xbc4>
  43094c:	ac580000 	sw	t8,0(v0)
  430950:	8f050070 	lw	a1,112(t8)
  430954:	00000000 	nop
  430958:	ac650000 	sw	a1,0(v1)
  43095c:	8f8289d8 	lw	v0,-30248(gp)
  430960:	00000000 	nop
  430964:	8c440000 	lw	a0,0(v0)
  430968:	10000019 	b	4309d0 <usystem+0xc38>
  43096c:	00000000 	nop
  430970:	8f8289d8 	lw	v0,-30248(gp)
  430974:	00000000 	nop
  430978:	8c440000 	lw	a0,0(v0)
  43097c:	00000000 	nop
  430980:	10800009 	beqz	a0,4309a8 <usystem+0xc10>
  430984:	00000000 	nop
  430988:	8c88006c 	lw	t0,108(a0)
  43098c:	00000000 	nop
  430990:	ac480000 	sw	t0,0(v0)
  430994:	1100000e 	beqz	t0,4309d0 <usystem+0xc38>
  430998:	01002025 	move	a0,t0
  43099c:	8d050070 	lw	a1,112(t0)
  4309a0:	1000000b 	b	4309d0 <usystem+0xc38>
  4309a4:	ac650000 	sw	a1,0(v1)
  4309a8:	8f8a8a60 	lw	t2,-30112(gp)
  4309ac:	00000000 	nop
  4309b0:	8d4a0000 	lw	t2,0(t2)
  4309b4:	00000000 	nop
  4309b8:	ac4a0000 	sw	t2,0(v0)
  4309bc:	11400004 	beqz	t2,4309d0 <usystem+0xc38>
  4309c0:	01402025 	move	a0,t2
  4309c4:	8d450070 	lw	a1,112(t2)
  4309c8:	00000000 	nop
  4309cc:	ac650000 	sw	a1,0(v1)
  4309d0:	10800006 	beqz	a0,4309ec <usystem+0xc54>
  4309d4:	00000000 	nop
  4309d8:	8c8c0074 	lw	t4,116(a0)
  4309dc:	00000000 	nop
  4309e0:	000c70c0 	sll	t6,t4,0x3
  4309e4:	05c10008 	bgez	t6,430a08 <usystem+0xc70>
  4309e8:	00000000 	nop
  4309ec:	10a0002b 	beqz	a1,430a9c <usystem+0xd04>
  4309f0:	00000000 	nop
  4309f4:	8caf0028 	lw	t7,40(a1)
  4309f8:	00000000 	nop
  4309fc:	000fc940 	sll	t9,t7,0x5
  430a00:	07200026 	bltz	t9,430a9c <usystem+0xd04>
  430a04:	00000000 	nop
  430a08:	10a0000e 	beqz	a1,430a44 <usystem+0xcac>
  430a0c:	00000000 	nop
  430a10:	8ca80024 	lw	t0,36(a1)
  430a14:	00000000 	nop
  430a18:	ac680000 	sw	t0,0(v1)
  430a1c:	15000011 	bnez	t0,430a64 <usystem+0xccc>
  430a20:	01002825 	move	a1,t0
  430a24:	8c89006c 	lw	t1,108(a0)
  430a28:	00000000 	nop
  430a2c:	ac490000 	sw	t1,0(v0)
  430a30:	1120000c 	beqz	t1,430a64 <usystem+0xccc>
  430a34:	01202025 	move	a0,t1
  430a38:	8d250070 	lw	a1,112(t1)
  430a3c:	10000009 	b	430a64 <usystem+0xccc>
  430a40:	ac650000 	sw	a1,0(v1)
  430a44:	8c8b006c 	lw	t3,108(a0)
  430a48:	00000000 	nop
  430a4c:	ac4b0000 	sw	t3,0(v0)
  430a50:	11600004 	beqz	t3,430a64 <usystem+0xccc>
  430a54:	01602025 	move	a0,t3
  430a58:	8d650070 	lw	a1,112(t3)
  430a5c:	00000000 	nop
  430a60:	ac650000 	sw	a1,0(v1)
  430a64:	10800006 	beqz	a0,430a80 <usystem+0xce8>
  430a68:	00000000 	nop
  430a6c:	8c8d0074 	lw	t5,116(a0)
  430a70:	00000000 	nop
  430a74:	000d78c0 	sll	t7,t5,0x3
  430a78:	05e1ffe3 	bgez	t7,430a08 <usystem+0xc70>
  430a7c:	00000000 	nop
  430a80:	10a00006 	beqz	a1,430a9c <usystem+0xd04>
  430a84:	00000000 	nop
  430a88:	8cb80028 	lw	t8,40(a1)
  430a8c:	00000000 	nop
  430a90:	00184140 	sll	t0,t8,0x5
  430a94:	0501ffdc 	bgez	t0,430a08 <usystem+0xc70>
  430a98:	00000000 	nop
  430a9c:	8f998640 	lw	t9,-31168(gp)
  430aa0:	00000000 	nop
  430aa4:	0320f809 	jalr	t9
  430aa8:	00000000 	nop
  430aac:	8fbc0018 	lw	gp,24(sp)
  430ab0:	00000000 	nop
  430ab4:	8f8289d8 	lw	v0,-30248(gp)
  430ab8:	00000000 	nop
  430abc:	8c440000 	lw	a0,0(v0)
  430ac0:	00000000 	nop
  430ac4:	1080001a 	beqz	a0,430b30 <usystem+0xd98>
  430ac8:	00000000 	nop
  430acc:	8f99863c 	lw	t9,-31172(gp)
  430ad0:	00000000 	nop
  430ad4:	0320f809 	jalr	t9
  430ad8:	00000000 	nop
  430adc:	8fbc0018 	lw	gp,24(sp)
  430ae0:	00000000 	nop
  430ae4:	8f998658 	lw	t9,-31144(gp)
  430ae8:	00000000 	nop
  430aec:	0320f809 	jalr	t9
  430af0:	00000000 	nop
  430af4:	8fbc0018 	lw	gp,24(sp)
  430af8:	00000000 	nop
  430afc:	8f8389dc 	lw	v1,-30244(gp)
  430b00:	00000000 	nop
  430b04:	8c650000 	lw	a1,0(v1)
  430b08:	00000000 	nop
  430b0c:	10a00015 	beqz	a1,430b64 <usystem+0xdcc>
  430b10:	8fbf001c 	lw	ra,28(sp)
  430b14:	8f998644 	lw	t9,-31164(gp)
  430b18:	00a02025 	move	a0,a1
  430b1c:	0320f809 	jalr	t9
  430b20:	00000000 	nop
  430b24:	8fbc0018 	lw	gp,24(sp)
  430b28:	1000000e 	b	430b64 <usystem+0xdcc>
  430b2c:	8fbf001c 	lw	ra,28(sp)
  430b30:	8f998638 	lw	t9,-31176(gp)
  430b34:	00000000 	nop
  430b38:	0320f809 	jalr	t9
  430b3c:	00000000 	nop
  430b40:	8fbc0018 	lw	gp,24(sp)
  430b44:	00000000 	nop
  430b48:	8f998540 	lw	t9,-31424(gp)
  430b4c:	00000000 	nop
  430b50:	0320f809 	jalr	t9
  430b54:	00000000 	nop
  430b58:	8fbc0018 	lw	gp,24(sp)
  430b5c:	00000000 	nop
  430b60:	8fbf001c 	lw	ra,28(sp)
  430b64:	27bd0020 	addiu	sp,sp,32
  430b68:	03e00008 	jr	ra
  430b6c:	00000000 	nop
