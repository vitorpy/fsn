# Function: FUN_00435a28
# Address: 0x00435a28 - 0x00437a24
# Size: 0x1ffc (8188 bytes)
# End detected by: end of scan
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435a28 <run__19FileIconInterpreterFPcPvT1+0xc>:
  435a28:	27bde600 	addiu	sp,sp,-6656
  435a2c:	afb6005c 	sw	s6,92(sp)
  435a30:	e7bc003c 	swc1	$f28,60(sp)
  435a34:	e7ba0034 	swc1	$f26,52(sp)
  435a38:	e7b90028 	swc1	$f25,40(sp)
  435a3c:	e7b8002c 	swc1	$f24,44(sp)
  435a40:	afbf006c 	sw	ra,108(sp)
  435a44:	afbe0068 	sw	s8,104(sp)
  435a48:	afbc0064 	sw	gp,100(sp)
  435a4c:	afb70060 	sw	s7,96(sp)
  435a50:	afb50058 	sw	s5,88(sp)
  435a54:	afb40054 	sw	s4,84(sp)
  435a58:	afb30050 	sw	s3,80(sp)
  435a5c:	afb2004c 	sw	s2,76(sp)
  435a60:	afb10048 	sw	s1,72(sp)
  435a64:	afb00044 	sw	s0,68(sp)
  435a68:	e7bd0038 	swc1	$f29,56(sp)
  435a6c:	e7bb0030 	swc1	$f27,48(sp)
  435a70:	e7b70020 	swc1	$f23,32(sp)
  435a74:	e7b60024 	swc1	$f22,36(sp)
  435a78:	e7b50018 	swc1	$f21,24(sp)
  435a7c:	e7b4001c 	swc1	$f20,28(sp)
  435a80:	afa51a04 	sw	a1,6660(sp)
  435a84:	afa61a08 	sw	a2,6664(sp)
  435a88:	afa71a0c 	sw	a3,6668(sp)
  435a8c:	afa00234 	sw	zero,564(sp)
  435a90:	3c013f80 	lui	at,0x3f80
  435a94:	4481d000 	mtc1	at,$f26
  435a98:	90b00000 	lbu	s0,0(a1)
  435a9c:	4480c000 	mtc1	zero,$f24
  435aa0:	4480c800 	mtc1	zero,$f25
  435aa4:	4480e000 	mtc1	zero,$f28
  435aa8:	8fb60a40 	lw	s6,2624(sp)
  435aac:	0080b825 	move	s7,a0
  435ab0:	00a0a025 	move	s4,a1
  435ab4:	27b20a58 	addiu	s2,sp,2648
  435ab8:	0000a825 	move	s5,zero
  435abc:	27be0230 	addiu	s8,sp,560
  435ac0:	2401001b 	li	at,27
  435ac4:	120100c5 	beq	s0,at,435ddc <run__19FileIconInterpreterFPcPvT1+0x3c0>
  435ac8:	2401001c 	li	at,28
  435acc:	120100d3 	beq	s0,at,435e1c <run__19FileIconInterpreterFPcPvT1+0x400>
  435ad0:	24010010 	li	at,16
  435ad4:	120100e1 	beq	s0,at,435e5c <run__19FileIconInterpreterFPcPvT1+0x440>
  435ad8:	24010011 	li	at,17
  435adc:	120100ef 	beq	s0,at,435e9c <run__19FileIconInterpreterFPcPvT1+0x480>
  435ae0:	24010022 	li	at,34
  435ae4:	120100fc 	beq	s0,at,435ed8 <run__19FileIconInterpreterFPcPvT1+0x4bc>
  435ae8:	24010023 	li	at,35
  435aec:	1201010a 	beq	s0,at,435f18 <run__19FileIconInterpreterFPcPvT1+0x4fc>
  435af0:	2401001f 	li	at,31
  435af4:	12010119 	beq	s0,at,435f5c <run__19FileIconInterpreterFPcPvT1+0x540>
  435af8:	24010020 	li	at,32
  435afc:	12010127 	beq	s0,at,435f9c <run__19FileIconInterpreterFPcPvT1+0x580>
  435b00:	2401002e 	li	at,46
  435b04:	12010136 	beq	s0,at,435fe0 <run__19FileIconInterpreterFPcPvT1+0x5c4>
  435b08:	2401002f 	li	at,47
  435b0c:	12010144 	beq	s0,at,436020 <run__19FileIconInterpreterFPcPvT1+0x604>
  435b10:	24010026 	li	at,38
  435b14:	12010153 	beq	s0,at,436064 <run__19FileIconInterpreterFPcPvT1+0x648>
  435b18:	24010027 	li	at,39
  435b1c:	12010161 	beq	s0,at,4360a4 <run__19FileIconInterpreterFPcPvT1+0x688>
  435b20:	24010036 	li	at,54
  435b24:	12010170 	beq	s0,at,4360e8 <run__19FileIconInterpreterFPcPvT1+0x6cc>
  435b28:	24010037 	li	at,55
  435b2c:	1201017e 	beq	s0,at,436128 <run__19FileIconInterpreterFPcPvT1+0x70c>
  435b30:	2401003f 	li	at,63
  435b34:	1201018c 	beq	s0,at,436168 <run__19FileIconInterpreterFPcPvT1+0x74c>
  435b38:	24010040 	li	at,64
  435b3c:	12010194 	beq	s0,at,436190 <run__19FileIconInterpreterFPcPvT1+0x774>
  435b40:	24010030 	li	at,48
  435b44:	1201019c 	beq	s0,at,4361b8 <run__19FileIconInterpreterFPcPvT1+0x79c>
  435b48:	24010031 	li	at,49
  435b4c:	120101a4 	beq	s0,at,4361e0 <run__19FileIconInterpreterFPcPvT1+0x7c4>
  435b50:	24010058 	li	at,88
  435b54:	120101ac 	beq	s0,at,436208 <run__19FileIconInterpreterFPcPvT1+0x7ec>
  435b58:	24010059 	li	at,89
  435b5c:	120101b5 	beq	s0,at,436234 <run__19FileIconInterpreterFPcPvT1+0x818>
  435b60:	2401004c 	li	at,76
  435b64:	120101bf 	beq	s0,at,436264 <run__19FileIconInterpreterFPcPvT1+0x848>
  435b68:	2401004d 	li	at,77
  435b6c:	120101c8 	beq	s0,at,436290 <run__19FileIconInterpreterFPcPvT1+0x874>
  435b70:	00000000 	nop
  435b74:	24010033 	li	at,51
  435b78:	120101da 	beq	s0,at,4362e4 <run__19FileIconInterpreterFPcPvT1+0x8c8>
  435b7c:	24010034 	li	at,52
  435b80:	120101fa 	beq	s0,at,43636c <run__19FileIconInterpreterFPcPvT1+0x950>
  435b84:	00000000 	nop
  435b88:	24010002 	li	at,2
  435b8c:	1201020c 	beq	s0,at,4363c0 <run__19FileIconInterpreterFPcPvT1+0x9a4>
  435b90:	24010003 	li	at,3
  435b94:	12010221 	beq	s0,at,43641c <run__19FileIconInterpreterFPcPvT1+0xa00>
  435b98:	2401003a 	li	at,58
  435b9c:	12010229 	beq	s0,at,436444 <run__19FileIconInterpreterFPcPvT1+0xa28>
  435ba0:	2401003b 	li	at,59
  435ba4:	1201023e 	beq	s0,at,4364a0 <run__19FileIconInterpreterFPcPvT1+0xa84>
  435ba8:	2401005f 	li	at,95
  435bac:	12010246 	beq	s0,at,4364c8 <run__19FileIconInterpreterFPcPvT1+0xaac>
  435bb0:	24010060 	li	at,96
  435bb4:	1201025b 	beq	s0,at,436524 <run__19FileIconInterpreterFPcPvT1+0xb08>
  435bb8:	24010035 	li	at,53
  435bbc:	12010263 	beq	s0,at,43654c <run__19FileIconInterpreterFPcPvT1+0xb30>
  435bc0:	24010013 	li	at,19
  435bc4:	1201026a 	beq	s0,at,436570 <run__19FileIconInterpreterFPcPvT1+0xb54>
  435bc8:	2401000f 	li	at,15
  435bcc:	12010282 	beq	s0,at,4365d8 <run__19FileIconInterpreterFPcPvT1+0xbbc>
  435bd0:	2401000a 	li	at,10
  435bd4:	1201028e 	beq	s0,at,436610 <run__19FileIconInterpreterFPcPvT1+0xbf4>
  435bd8:	24010041 	li	at,65
  435bdc:	12010290 	beq	s0,at,436620 <run__19FileIconInterpreterFPcPvT1+0xc04>
  435be0:	2401003e 	li	at,62
  435be4:	12010297 	beq	s0,at,436644 <run__19FileIconInterpreterFPcPvT1+0xc28>
  435be8:	2401005d 	li	at,93
  435bec:	12010295 	beq	s0,at,436644 <run__19FileIconInterpreterFPcPvT1+0xc28>
  435bf0:	2401003d 	li	at,61
  435bf4:	120102a4 	beq	s0,at,436688 <run__19FileIconInterpreterFPcPvT1+0xc6c>
  435bf8:	24010014 	li	at,20
  435bfc:	120102c5 	beq	s0,at,436714 <run__19FileIconInterpreterFPcPvT1+0xcf8>
  435c00:	24010015 	li	at,21
  435c04:	120102e1 	beq	s0,at,43678c <run__19FileIconInterpreterFPcPvT1+0xd70>
  435c08:	24010018 	li	at,24
  435c0c:	120102fd 	beq	s0,at,436804 <run__19FileIconInterpreterFPcPvT1+0xde8>
  435c10:	24010019 	li	at,25
  435c14:	12010319 	beq	s0,at,43687c <run__19FileIconInterpreterFPcPvT1+0xe60>
  435c18:	24010017 	li	at,23
  435c1c:	12010335 	beq	s0,at,4368f4 <run__19FileIconInterpreterFPcPvT1+0xed8>
  435c20:	24010007 	li	at,7
  435c24:	12010376 	beq	s0,at,436a00 <run__19FileIconInterpreterFPcPvT1+0xfe4>
  435c28:	24010004 	li	at,4
  435c2c:	120103c2 	beq	s0,at,436b38 <run__19FileIconInterpreterFPcPvT1+0x111c>
  435c30:	24010005 	li	at,5
  435c34:	120103e9 	beq	s0,at,436bdc <run__19FileIconInterpreterFPcPvT1+0x11c0>
  435c38:	2401001a 	li	at,26
  435c3c:	12010410 	beq	s0,at,436c80 <run__19FileIconInterpreterFPcPvT1+0x1264>
  435c40:	00000000 	nop
  435c44:	12000410 	beqz	s0,436c88 <run__19FileIconInterpreterFPcPvT1+0x126c>
  435c48:	24010001 	li	at,1
  435c4c:	12010423 	beq	s0,at,436cdc <run__19FileIconInterpreterFPcPvT1+0x12c0>
  435c50:	24010038 	li	at,56
  435c54:	12010432 	beq	s0,at,436d20 <run__19FileIconInterpreterFPcPvT1+0x1304>
  435c58:	24010039 	li	at,57
  435c5c:	12010445 	beq	s0,at,436d74 <run__19FileIconInterpreterFPcPvT1+0x1358>
  435c60:	24010042 	li	at,66
  435c64:	12010454 	beq	s0,at,436db8 <run__19FileIconInterpreterFPcPvT1+0x139c>
  435c68:	24010043 	li	at,67
  435c6c:	12010456 	beq	s0,at,436dc8 <run__19FileIconInterpreterFPcPvT1+0x13ac>
  435c70:	24010008 	li	at,8
  435c74:	12010458 	beq	s0,at,436dd8 <run__19FileIconInterpreterFPcPvT1+0x13bc>
  435c78:	24010009 	li	at,9
  435c7c:	12010471 	beq	s0,at,436e44 <run__19FileIconInterpreterFPcPvT1+0x1428>
  435c80:	2401000b 	li	at,11
  435c84:	12010487 	beq	s0,at,436ea4 <run__19FileIconInterpreterFPcPvT1+0x1488>
  435c88:	2401000c 	li	at,12
  435c8c:	120104a0 	beq	s0,at,436f10 <run__19FileIconInterpreterFPcPvT1+0x14f4>
  435c90:	2401000d 	li	at,13
  435c94:	120104b6 	beq	s0,at,436f70 <run__19FileIconInterpreterFPcPvT1+0x1554>
  435c98:	24010025 	li	at,37
  435c9c:	120104c7 	beq	s0,at,436fbc <run__19FileIconInterpreterFPcPvT1+0x15a0>
  435ca0:	24010053 	li	at,83
  435ca4:	120104c8 	beq	s0,at,436fc8 <run__19FileIconInterpreterFPcPvT1+0x15ac>
  435ca8:	24010054 	li	at,84
  435cac:	120104da 	beq	s0,at,437018 <run__19FileIconInterpreterFPcPvT1+0x15fc>
  435cb0:	2401002b 	li	at,43
  435cb4:	120104ec 	beq	s0,at,437068 <run__19FileIconInterpreterFPcPvT1+0x164c>
  435cb8:	2401002c 	li	at,44
  435cbc:	12010500 	beq	s0,at,4370c0 <run__19FileIconInterpreterFPcPvT1+0x16a4>
  435cc0:	24010029 	li	at,41
  435cc4:	12010514 	beq	s0,at,437118 <run__19FileIconInterpreterFPcPvT1+0x16fc>
  435cc8:	2401002a 	li	at,42
  435ccc:	12010521 	beq	s0,at,437154 <run__19FileIconInterpreterFPcPvT1+0x1738>
  435cd0:	2401005e 	li	at,94
  435cd4:	12010531 	beq	s0,at,43719c <run__19FileIconInterpreterFPcPvT1+0x1780>
  435cd8:	2401001d 	li	at,29
  435cdc:	12010532 	beq	s0,at,4371a8 <run__19FileIconInterpreterFPcPvT1+0x178c>
  435ce0:	24010048 	li	at,72
  435ce4:	12010533 	beq	s0,at,4371b4 <run__19FileIconInterpreterFPcPvT1+0x1798>
  435ce8:	24010006 	li	at,6
  435cec:	12010534 	beq	s0,at,4371c0 <run__19FileIconInterpreterFPcPvT1+0x17a4>
  435cf0:	24010032 	li	at,50
  435cf4:	12010565 	beq	s0,at,43728c <run__19FileIconInterpreterFPcPvT1+0x1870>
  435cf8:	2401004b 	li	at,75
  435cfc:	12010573 	beq	s0,at,4372cc <run__19FileIconInterpreterFPcPvT1+0x18b0>
  435d00:	24010028 	li	at,40
  435d04:	12010581 	beq	s0,at,43730c <run__19FileIconInterpreterFPcPvT1+0x18f0>
  435d08:	24010057 	li	at,87
  435d0c:	1201058f 	beq	s0,at,43734c <run__19FileIconInterpreterFPcPvT1+0x1930>
  435d10:	2401000e 	li	at,14
  435d14:	120105d5 	beq	s0,at,43746c <run__19FileIconInterpreterFPcPvT1+0x1a50>
  435d18:	2401004a 	li	at,74
  435d1c:	12010611 	beq	s0,at,437564 <run__19FileIconInterpreterFPcPvT1+0x1b48>
  435d20:	2401002d 	li	at,45
  435d24:	12010651 	beq	s0,at,43766c <run__19FileIconInterpreterFPcPvT1+0x1c50>
  435d28:	2401005a 	li	at,90
  435d2c:	12010691 	beq	s0,at,437774 <run__19FileIconInterpreterFPcPvT1+0x1d58>
  435d30:	2401005c 	li	at,92
  435d34:	120106c8 	beq	s0,at,437858 <run__19FileIconInterpreterFPcPvT1+0x1e3c>
  435d38:	2401005b 	li	at,91
  435d3c:	1201070a 	beq	s0,at,437968 <run__19FileIconInterpreterFPcPvT1+0x1f4c>
  435d40:	24010047 	li	at,71
  435d44:	1201074a 	beq	s0,at,437a70 <run__19FileIconInterpreterFPcPvT1+0x2054>
  435d48:	24010016 	li	at,22
  435d4c:	1201076d 	beq	s0,at,437b04 <run__19FileIconInterpreterFPcPvT1+0x20e8>
  435d50:	2401001e 	li	at,30
  435d54:	12010773 	beq	s0,at,437b24 <run__19FileIconInterpreterFPcPvT1+0x2108>
  435d58:	24010055 	li	at,85
  435d5c:	12010774 	beq	s0,at,437b30 <run__19FileIconInterpreterFPcPvT1+0x2114>
  435d60:	24010012 	li	at,18
  435d64:	1201078e 	beq	s0,at,437ba0 <run__19FileIconInterpreterFPcPvT1+0x2184>
  435d68:	24010056 	li	at,86
  435d6c:	120107d0 	beq	s0,at,437cb0 <run__19FileIconInterpreterFPcPvT1+0x2294>
  435d70:	24010021 	li	at,33
  435d74:	12010867 	beq	s0,at,437f14 <run__19FileIconInterpreterFPcPvT1+0x24f8>
  435d78:	24010051 	li	at,81
  435d7c:	12010878 	beq	s0,at,437f60 <run__19FileIconInterpreterFPcPvT1+0x2544>
  435d80:	2401004f 	li	at,79
  435d84:	1201087d 	beq	s0,at,437f7c <run__19FileIconInterpreterFPcPvT1+0x2560>
  435d88:	24010050 	li	at,80
  435d8c:	12010882 	beq	s0,at,437f98 <run__19FileIconInterpreterFPcPvT1+0x257c>
  435d90:	24010052 	li	at,82
  435d94:	12010887 	beq	s0,at,437fb4 <run__19FileIconInterpreterFPcPvT1+0x2598>
  435d98:	2401004e 	li	at,78
  435d9c:	1201088c 	beq	s0,at,437fd0 <run__19FileIconInterpreterFPcPvT1+0x25b4>
  435da0:	24010049 	li	at,73
  435da4:	12010891 	beq	s0,at,437fec <run__19FileIconInterpreterFPcPvT1+0x25d0>
  435da8:	24010024 	li	at,36
  435dac:	12010896 	beq	s0,at,438008 <run__19FileIconInterpreterFPcPvT1+0x25ec>
  435db0:	2401003c 	li	at,60
  435db4:	1201089b 	beq	s0,at,438024 <run__19FileIconInterpreterFPcPvT1+0x2608>
  435db8:	24010044 	li	at,68
  435dbc:	120108a0 	beq	s0,at,438040 <run__19FileIconInterpreterFPcPvT1+0x2624>
  435dc0:	24010045 	li	at,69
  435dc4:	120108ac 	beq	s0,at,438078 <run__19FileIconInterpreterFPcPvT1+0x265c>
  435dc8:	24010046 	li	at,70
  435dcc:	120108b6 	beq	s0,at,4380a8 <run__19FileIconInterpreterFPcPvT1+0x268c>
  435dd0:	2401001b 	li	at,27
  435dd4:	1601ff3d 	bne	s0,at,435acc <run__19FileIconInterpreterFPcPvT1+0xb0>
  435dd8:	2401001c 	li	at,28
  435ddc:	c654fffc 	lwc1	$f20,-4(s2)
  435de0:	c656fff8 	lwc1	$f22,-8(s2)
  435de4:	26940001 	addiu	s4,s4,1
  435de8:	4616a032 	c.eq.s	$f20,$f22
  435dec:	2652fff8 	addiu	s2,s2,-8
  435df0:	45000004 	bc1f	435e04 <run__19FileIconInterpreterFPcPvT1+0x3e8>
  435df4:	02408025 	move	s0,s2
  435df8:	e61a0000 	swc1	$f26,0(s0)
  435dfc:	10000004 	b	435e10 <run__19FileIconInterpreterFPcPvT1+0x3f4>
  435e00:	26520004 	addiu	s2,s2,4
  435e04:	02408025 	move	s0,s2
  435e08:	e61c0000 	swc1	$f28,0(s0)
  435e0c:	26520004 	addiu	s2,s2,4
  435e10:	92900000 	lbu	s0,0(s4)
  435e14:	1000ff2b 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435e18:	2401001b 	li	at,27
  435e1c:	8e56fffc 	lw	s6,-4(s2)
  435e20:	8e53fff8 	lw	s3,-8(s2)
  435e24:	26940001 	addiu	s4,s4,1
  435e28:	16d30006 	bne	s6,s3,435e44 <run__19FileIconInterpreterFPcPvT1+0x428>
  435e2c:	2652fff8 	addiu	s2,s2,-8
  435e30:	02408025 	move	s0,s2
  435e34:	240e0001 	li	t6,1
  435e38:	ae0e0000 	sw	t6,0(s0)
  435e3c:	10000004 	b	435e50 <run__19FileIconInterpreterFPcPvT1+0x434>
  435e40:	26520004 	addiu	s2,s2,4
  435e44:	02408025 	move	s0,s2
  435e48:	ae000000 	sw	zero,0(s0)
  435e4c:	26520004 	addiu	s2,s2,4
  435e50:	92900000 	lbu	s0,0(s4)
  435e54:	1000ff1b 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435e58:	2401001b 	li	at,27
  435e5c:	c654fffc 	lwc1	$f20,-4(s2)
  435e60:	26940001 	addiu	s4,s4,1
  435e64:	4600a121 	cvt.d.s	$f4,$f20
  435e68:	4624c032 	c.eq.d	$f24,$f4
  435e6c:	2652fffc 	addiu	s2,s2,-4
  435e70:	45000004 	bc1f	435e84 <run__19FileIconInterpreterFPcPvT1+0x468>
  435e74:	02408025 	move	s0,s2
  435e78:	e61a0000 	swc1	$f26,0(s0)
  435e7c:	10000004 	b	435e90 <run__19FileIconInterpreterFPcPvT1+0x474>
  435e80:	26520004 	addiu	s2,s2,4
  435e84:	02408025 	move	s0,s2
  435e88:	e61c0000 	swc1	$f28,0(s0)
  435e8c:	26520004 	addiu	s2,s2,4
  435e90:	92900000 	lbu	s0,0(s4)
  435e94:	1000ff0b 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435e98:	2401001b 	li	at,27
  435e9c:	8e56fffc 	lw	s6,-4(s2)
  435ea0:	26940001 	addiu	s4,s4,1
  435ea4:	16c00006 	bnez	s6,435ec0 <run__19FileIconInterpreterFPcPvT1+0x4a4>
  435ea8:	2652fffc 	addiu	s2,s2,-4
  435eac:	02408025 	move	s0,s2
  435eb0:	240f0001 	li	t7,1
  435eb4:	ae0f0000 	sw	t7,0(s0)
  435eb8:	10000004 	b	435ecc <run__19FileIconInterpreterFPcPvT1+0x4b0>
  435ebc:	26520004 	addiu	s2,s2,4
  435ec0:	02408025 	move	s0,s2
  435ec4:	ae000000 	sw	zero,0(s0)
  435ec8:	26520004 	addiu	s2,s2,4
  435ecc:	92900000 	lbu	s0,0(s4)
  435ed0:	1000fefc 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435ed4:	2401001b 	li	at,27
  435ed8:	c656fffc 	lwc1	$f22,-4(s2)
  435edc:	c654fff8 	lwc1	$f20,-8(s2)
  435ee0:	26940001 	addiu	s4,s4,1
  435ee4:	4614b03c 	c.lt.s	$f22,$f20
  435ee8:	2652fff8 	addiu	s2,s2,-8
  435eec:	45000004 	bc1f	435f00 <run__19FileIconInterpreterFPcPvT1+0x4e4>
  435ef0:	02408025 	move	s0,s2
  435ef4:	e61a0000 	swc1	$f26,0(s0)
  435ef8:	10000004 	b	435f0c <run__19FileIconInterpreterFPcPvT1+0x4f0>
  435efc:	26520004 	addiu	s2,s2,4
  435f00:	02408025 	move	s0,s2
  435f04:	e61c0000 	swc1	$f28,0(s0)
  435f08:	26520004 	addiu	s2,s2,4
  435f0c:	92900000 	lbu	s0,0(s4)
  435f10:	1000feec 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435f14:	2401001b 	li	at,27
  435f18:	8e53fffc 	lw	s3,-4(s2)
  435f1c:	8e56fff8 	lw	s6,-8(s2)
  435f20:	26940001 	addiu	s4,s4,1
  435f24:	0276082a 	slt	at,s3,s6
  435f28:	10200006 	beqz	at,435f44 <run__19FileIconInterpreterFPcPvT1+0x528>
  435f2c:	2652fff8 	addiu	s2,s2,-8
  435f30:	02408025 	move	s0,s2
  435f34:	24180001 	li	t8,1
  435f38:	ae180000 	sw	t8,0(s0)
  435f3c:	10000004 	b	435f50 <run__19FileIconInterpreterFPcPvT1+0x534>
  435f40:	26520004 	addiu	s2,s2,4
  435f44:	02408025 	move	s0,s2
  435f48:	ae000000 	sw	zero,0(s0)
  435f4c:	26520004 	addiu	s2,s2,4
  435f50:	92900000 	lbu	s0,0(s4)
  435f54:	1000fedb 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435f58:	2401001b 	li	at,27
  435f5c:	c656fffc 	lwc1	$f22,-4(s2)
  435f60:	c654fff8 	lwc1	$f20,-8(s2)
  435f64:	26940001 	addiu	s4,s4,1
  435f68:	4614b03e 	c.le.s	$f22,$f20
  435f6c:	2652fff8 	addiu	s2,s2,-8
  435f70:	45000004 	bc1f	435f84 <run__19FileIconInterpreterFPcPvT1+0x568>
  435f74:	02408025 	move	s0,s2
  435f78:	e61a0000 	swc1	$f26,0(s0)
  435f7c:	10000004 	b	435f90 <run__19FileIconInterpreterFPcPvT1+0x574>
  435f80:	26520004 	addiu	s2,s2,4
  435f84:	02408025 	move	s0,s2
  435f88:	e61c0000 	swc1	$f28,0(s0)
  435f8c:	26520004 	addiu	s2,s2,4
  435f90:	92900000 	lbu	s0,0(s4)
  435f94:	1000fecb 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435f98:	2401001b 	li	at,27
  435f9c:	8e53fffc 	lw	s3,-4(s2)
  435fa0:	8e56fff8 	lw	s6,-8(s2)
  435fa4:	26940001 	addiu	s4,s4,1
  435fa8:	02d3082a 	slt	at,s6,s3
  435fac:	14200006 	bnez	at,435fc8 <run__19FileIconInterpreterFPcPvT1+0x5ac>
  435fb0:	2652fff8 	addiu	s2,s2,-8
  435fb4:	02408025 	move	s0,s2
  435fb8:	24190001 	li	t9,1
  435fbc:	ae190000 	sw	t9,0(s0)
  435fc0:	10000004 	b	435fd4 <run__19FileIconInterpreterFPcPvT1+0x5b8>
  435fc4:	26520004 	addiu	s2,s2,4
  435fc8:	02408025 	move	s0,s2
  435fcc:	ae000000 	sw	zero,0(s0)
  435fd0:	26520004 	addiu	s2,s2,4
  435fd4:	92900000 	lbu	s0,0(s4)
  435fd8:	1000feba 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  435fdc:	2401001b 	li	at,27
  435fe0:	c656fffc 	lwc1	$f22,-4(s2)
  435fe4:	c654fff8 	lwc1	$f20,-8(s2)
  435fe8:	26940001 	addiu	s4,s4,1
  435fec:	4616a03c 	c.lt.s	$f20,$f22
  435ff0:	2652fff8 	addiu	s2,s2,-8
  435ff4:	45000004 	bc1f	436008 <run__19FileIconInterpreterFPcPvT1+0x5ec>
  435ff8:	02408025 	move	s0,s2
  435ffc:	e61a0000 	swc1	$f26,0(s0)
  436000:	10000004 	b	436014 <run__19FileIconInterpreterFPcPvT1+0x5f8>
  436004:	26520004 	addiu	s2,s2,4
  436008:	02408025 	move	s0,s2
  43600c:	e61c0000 	swc1	$f28,0(s0)
  436010:	26520004 	addiu	s2,s2,4
  436014:	92900000 	lbu	s0,0(s4)
  436018:	1000feaa 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  43601c:	2401001b 	li	at,27
  436020:	8e53fffc 	lw	s3,-4(s2)
  436024:	8e56fff8 	lw	s6,-8(s2)
  436028:	26940001 	addiu	s4,s4,1
  43602c:	02d3082a 	slt	at,s6,s3
  436030:	10200006 	beqz	at,43604c <run__19FileIconInterpreterFPcPvT1+0x630>
  436034:	2652fff8 	addiu	s2,s2,-8
  436038:	02408025 	move	s0,s2
  43603c:	24080001 	li	t0,1
  436040:	ae080000 	sw	t0,0(s0)
  436044:	10000004 	b	436058 <run__19FileIconInterpreterFPcPvT1+0x63c>
  436048:	26520004 	addiu	s2,s2,4
  43604c:	02408025 	move	s0,s2
  436050:	ae000000 	sw	zero,0(s0)
  436054:	26520004 	addiu	s2,s2,4
  436058:	92900000 	lbu	s0,0(s4)
  43605c:	1000fe99 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436060:	2401001b 	li	at,27
  436064:	c656fffc 	lwc1	$f22,-4(s2)
  436068:	c654fff8 	lwc1	$f20,-8(s2)
  43606c:	26940001 	addiu	s4,s4,1
  436070:	4616a03e 	c.le.s	$f20,$f22
  436074:	2652fff8 	addiu	s2,s2,-8
  436078:	45000004 	bc1f	43608c <run__19FileIconInterpreterFPcPvT1+0x670>
  43607c:	02408025 	move	s0,s2
  436080:	e61a0000 	swc1	$f26,0(s0)
  436084:	10000004 	b	436098 <run__19FileIconInterpreterFPcPvT1+0x67c>
  436088:	26520004 	addiu	s2,s2,4
  43608c:	02408025 	move	s0,s2
  436090:	e61c0000 	swc1	$f28,0(s0)
  436094:	26520004 	addiu	s2,s2,4
  436098:	92900000 	lbu	s0,0(s4)
  43609c:	1000fe89 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4360a0:	2401001b 	li	at,27
  4360a4:	8e53fffc 	lw	s3,-4(s2)
  4360a8:	8e56fff8 	lw	s6,-8(s2)
  4360ac:	26940001 	addiu	s4,s4,1
  4360b0:	0276082a 	slt	at,s3,s6
  4360b4:	14200006 	bnez	at,4360d0 <run__19FileIconInterpreterFPcPvT1+0x6b4>
  4360b8:	2652fff8 	addiu	s2,s2,-8
  4360bc:	02408025 	move	s0,s2
  4360c0:	24090001 	li	t1,1
  4360c4:	ae090000 	sw	t1,0(s0)
  4360c8:	10000004 	b	4360dc <run__19FileIconInterpreterFPcPvT1+0x6c0>
  4360cc:	26520004 	addiu	s2,s2,4
  4360d0:	02408025 	move	s0,s2
  4360d4:	ae000000 	sw	zero,0(s0)
  4360d8:	26520004 	addiu	s2,s2,4
  4360dc:	92900000 	lbu	s0,0(s4)
  4360e0:	1000fe78 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4360e4:	2401001b 	li	at,27
  4360e8:	c656fffc 	lwc1	$f22,-4(s2)
  4360ec:	c654fff8 	lwc1	$f20,-8(s2)
  4360f0:	26940001 	addiu	s4,s4,1
  4360f4:	4616a032 	c.eq.s	$f20,$f22
  4360f8:	2652fff8 	addiu	s2,s2,-8
  4360fc:	45010004 	bc1t	436110 <run__19FileIconInterpreterFPcPvT1+0x6f4>
  436100:	02408025 	move	s0,s2
  436104:	e61a0000 	swc1	$f26,0(s0)
  436108:	10000004 	b	43611c <run__19FileIconInterpreterFPcPvT1+0x700>
  43610c:	26520004 	addiu	s2,s2,4
  436110:	02408025 	move	s0,s2
  436114:	e61c0000 	swc1	$f28,0(s0)
  436118:	26520004 	addiu	s2,s2,4
  43611c:	92900000 	lbu	s0,0(s4)
  436120:	1000fe68 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436124:	2401001b 	li	at,27
  436128:	8e53fffc 	lw	s3,-4(s2)
  43612c:	8e56fff8 	lw	s6,-8(s2)
  436130:	26940001 	addiu	s4,s4,1
  436134:	12d30006 	beq	s6,s3,436150 <run__19FileIconInterpreterFPcPvT1+0x734>
  436138:	2652fff8 	addiu	s2,s2,-8
  43613c:	02408025 	move	s0,s2
  436140:	240a0001 	li	t2,1
  436144:	ae0a0000 	sw	t2,0(s0)
  436148:	10000004 	b	43615c <run__19FileIconInterpreterFPcPvT1+0x740>
  43614c:	26520004 	addiu	s2,s2,4
  436150:	02408025 	move	s0,s2
  436154:	ae000000 	sw	zero,0(s0)
  436158:	26520004 	addiu	s2,s2,4
  43615c:	92900000 	lbu	s0,0(s4)
  436160:	1000fe58 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436164:	2401001b 	li	at,27
  436168:	c656fffc 	lwc1	$f22,-4(s2)
  43616c:	c654fff8 	lwc1	$f20,-8(s2)
  436170:	2652fff8 	addiu	s2,s2,-8
  436174:	4616a180 	add.s	$f6,$f20,$f22
  436178:	02408025 	move	s0,s2
  43617c:	e6060000 	swc1	$f6,0(s0)
  436180:	92900001 	lbu	s0,1(s4)
  436184:	26940001 	addiu	s4,s4,1
  436188:	1000fe4d 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  43618c:	26520004 	addiu	s2,s2,4
  436190:	8e53fffc 	lw	s3,-4(s2)
  436194:	8e56fff8 	lw	s6,-8(s2)
  436198:	2652fff8 	addiu	s2,s2,-8
  43619c:	02408025 	move	s0,s2
  4361a0:	02d35821 	addu	t3,s6,s3
  4361a4:	ae0b0000 	sw	t3,0(s0)
  4361a8:	92900001 	lbu	s0,1(s4)
  4361ac:	26940001 	addiu	s4,s4,1
  4361b0:	1000fe43 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4361b4:	26520004 	addiu	s2,s2,4
  4361b8:	c656fffc 	lwc1	$f22,-4(s2)
  4361bc:	c654fff8 	lwc1	$f20,-8(s2)
  4361c0:	2652fff8 	addiu	s2,s2,-8
  4361c4:	4616a201 	sub.s	$f8,$f20,$f22
  4361c8:	02408025 	move	s0,s2
  4361cc:	e6080000 	swc1	$f8,0(s0)
  4361d0:	92900001 	lbu	s0,1(s4)
  4361d4:	26940001 	addiu	s4,s4,1
  4361d8:	1000fe39 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4361dc:	26520004 	addiu	s2,s2,4
  4361e0:	8e53fffc 	lw	s3,-4(s2)
  4361e4:	8e56fff8 	lw	s6,-8(s2)
  4361e8:	2652fff8 	addiu	s2,s2,-8
  4361ec:	02408025 	move	s0,s2
  4361f0:	02d36023 	subu	t4,s6,s3
  4361f4:	ae0c0000 	sw	t4,0(s0)
  4361f8:	92900001 	lbu	s0,1(s4)
  4361fc:	26940001 	addiu	s4,s4,1
  436200:	1000fe2f 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  436204:	26520004 	addiu	s2,s2,4
  436208:	c656fffc 	lwc1	$f22,-4(s2)
  43620c:	c654fff8 	lwc1	$f20,-8(s2)
  436210:	2652fff8 	addiu	s2,s2,-8
  436214:	4616a282 	mul.s	$f10,$f20,$f22
  436218:	02408025 	move	s0,s2
  43621c:	26940001 	addiu	s4,s4,1
  436220:	26520004 	addiu	s2,s2,4
  436224:	e60a0000 	swc1	$f10,0(s0)
  436228:	92900000 	lbu	s0,0(s4)
  43622c:	1000fe25 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436230:	2401001b 	li	at,27
  436234:	8e53fffc 	lw	s3,-4(s2)
  436238:	8e56fff8 	lw	s6,-8(s2)
  43623c:	2652fff8 	addiu	s2,s2,-8
  436240:	02d30019 	multu	s6,s3
  436244:	02408025 	move	s0,s2
  436248:	26940001 	addiu	s4,s4,1
  43624c:	26520004 	addiu	s2,s2,4
  436250:	00006812 	mflo	t5
  436254:	ae0d0000 	sw	t5,0(s0)
  436258:	92900000 	lbu	s0,0(s4)
  43625c:	1000fe19 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436260:	2401001b 	li	at,27
  436264:	c656fffc 	lwc1	$f22,-4(s2)
  436268:	c654fff8 	lwc1	$f20,-8(s2)
  43626c:	2652fff8 	addiu	s2,s2,-8
  436270:	4616a403 	div.s	$f16,$f20,$f22
  436274:	02408025 	move	s0,s2
  436278:	26940001 	addiu	s4,s4,1
  43627c:	26520004 	addiu	s2,s2,4
  436280:	e6100000 	swc1	$f16,0(s0)
  436284:	92900000 	lbu	s0,0(s4)
  436288:	1000fe0e 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  43628c:	2401001b 	li	at,27
  436290:	8e53fffc 	lw	s3,-4(s2)
  436294:	8e56fff8 	lw	s6,-8(s2)
  436298:	2652fff8 	addiu	s2,s2,-8
  43629c:	02d3001a 	div	zero,s6,s3
  4362a0:	02408025 	move	s0,s2
  4362a4:	26940001 	addiu	s4,s4,1
  4362a8:	26520004 	addiu	s2,s2,4
  4362ac:	16600002 	bnez	s3,4362b8 <run__19FileIconInterpreterFPcPvT1+0x89c>
  4362b0:	00000000 	nop
  4362b4:	0007000d 	break	0x7
  4362b8:	2401ffff 	li	at,-1
  4362bc:	16610004 	bne	s3,at,4362d0 <run__19FileIconInterpreterFPcPvT1+0x8b4>
  4362c0:	3c018000 	lui	at,0x8000
  4362c4:	16c10002 	bne	s6,at,4362d0 <run__19FileIconInterpreterFPcPvT1+0x8b4>
  4362c8:	00000000 	nop
  4362cc:	0006000d 	break	0x6
  4362d0:	00007012 	mflo	t6
  4362d4:	ae0e0000 	sw	t6,0(s0)
  4362d8:	92900000 	lbu	s0,0(s4)
  4362dc:	1000fdf9 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4362e0:	2401001b 	li	at,27
  4362e4:	c656fffc 	lwc1	$f22,-4(s2)
  4362e8:	8f998884 	lw	t9,-30588(gp)
  4362ec:	2652fff8 	addiu	s2,s2,-8
  4362f0:	c6540000 	lwc1	$f20,0(s2)
  4362f4:	02408025 	move	s0,s2
  4362f8:	26940001 	addiu	s4,s4,1
  4362fc:	26520004 	addiu	s2,s2,4
  436300:	0320f809 	jalr	t9
  436304:	4600b306 	mov.s	$f12,$f22
  436308:	8fbc0064 	lw	gp,100(sp)
  43630c:	00408825 	move	s1,v0
  436310:	8f998884 	lw	t9,-30588(gp)
  436314:	4600a306 	mov.s	$f12,$f20
  436318:	0320f809 	jalr	t9
  43631c:	00000000 	nop
  436320:	0051001a 	div	zero,v0,s1
  436324:	8fbc0064 	lw	gp,100(sp)
  436328:	16200002 	bnez	s1,436334 <run__19FileIconInterpreterFPcPvT1+0x918>
  43632c:	00000000 	nop
  436330:	0007000d 	break	0x7
  436334:	2401ffff 	li	at,-1
  436338:	16210004 	bne	s1,at,43634c <run__19FileIconInterpreterFPcPvT1+0x930>
  43633c:	3c018000 	lui	at,0x8000
  436340:	14410002 	bne	v0,at,43634c <run__19FileIconInterpreterFPcPvT1+0x930>
  436344:	00000000 	nop
  436348:	0006000d 	break	0x6
  43634c:	00007810 	mfhi	t7
  436350:	448f9000 	mtc1	t7,$f18
  436354:	00000000 	nop
  436358:	46809120 	cvt.s.w	$f4,$f18
  43635c:	e6040000 	swc1	$f4,0(s0)
  436360:	92900000 	lbu	s0,0(s4)
  436364:	1000fdd7 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436368:	2401001b 	li	at,27
  43636c:	8e53fffc 	lw	s3,-4(s2)
  436370:	8e56fff8 	lw	s6,-8(s2)
  436374:	2652fff8 	addiu	s2,s2,-8
  436378:	02d3001a 	div	zero,s6,s3
  43637c:	02408025 	move	s0,s2
  436380:	26940001 	addiu	s4,s4,1
  436384:	26520004 	addiu	s2,s2,4
  436388:	16600002 	bnez	s3,436394 <run__19FileIconInterpreterFPcPvT1+0x978>
  43638c:	00000000 	nop
  436390:	0007000d 	break	0x7
  436394:	2401ffff 	li	at,-1
  436398:	16610004 	bne	s3,at,4363ac <run__19FileIconInterpreterFPcPvT1+0x990>
  43639c:	3c018000 	lui	at,0x8000
  4363a0:	16c10002 	bne	s6,at,4363ac <run__19FileIconInterpreterFPcPvT1+0x990>
  4363a4:	00000000 	nop
  4363a8:	0006000d 	break	0x6
  4363ac:	0000c010 	mfhi	t8
  4363b0:	ae180000 	sw	t8,0(s0)
  4363b4:	92900000 	lbu	s0,0(s4)
  4363b8:	1000fdc2 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4363bc:	2401001b 	li	at,27
  4363c0:	c656fffc 	lwc1	$f22,-4(s2)
  4363c4:	8f998884 	lw	t9,-30588(gp)
  4363c8:	2652fff8 	addiu	s2,s2,-8
  4363cc:	c6540000 	lwc1	$f20,0(s2)
  4363d0:	02408025 	move	s0,s2
  4363d4:	26940001 	addiu	s4,s4,1
  4363d8:	26520004 	addiu	s2,s2,4
  4363dc:	0320f809 	jalr	t9
  4363e0:	4600b306 	mov.s	$f12,$f22
  4363e4:	8fbc0064 	lw	gp,100(sp)
  4363e8:	00408825 	move	s1,v0
  4363ec:	8f998884 	lw	t9,-30588(gp)
  4363f0:	4600a306 	mov.s	$f12,$f20
  4363f4:	0320f809 	jalr	t9
  4363f8:	00000000 	nop
  4363fc:	0051c824 	and	t9,v0,s1
  436400:	44993000 	mtc1	t9,$f6
  436404:	8fbc0064 	lw	gp,100(sp)
  436408:	46803220 	cvt.s.w	$f8,$f6
  43640c:	e6080000 	swc1	$f8,0(s0)
  436410:	92900000 	lbu	s0,0(s4)
  436414:	1000fdab 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436418:	2401001b 	li	at,27
  43641c:	8e53fffc 	lw	s3,-4(s2)
  436420:	8e56fff8 	lw	s6,-8(s2)
  436424:	2652fff8 	addiu	s2,s2,-8
  436428:	02408025 	move	s0,s2
  43642c:	02d34024 	and	t0,s6,s3
  436430:	ae080000 	sw	t0,0(s0)
  436434:	92900001 	lbu	s0,1(s4)
  436438:	26940001 	addiu	s4,s4,1
  43643c:	1000fda0 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  436440:	26520004 	addiu	s2,s2,4
  436444:	c656fffc 	lwc1	$f22,-4(s2)
  436448:	8f998884 	lw	t9,-30588(gp)
  43644c:	2652fff8 	addiu	s2,s2,-8
  436450:	c6540000 	lwc1	$f20,0(s2)
  436454:	02408025 	move	s0,s2
  436458:	26940001 	addiu	s4,s4,1
  43645c:	26520004 	addiu	s2,s2,4
  436460:	0320f809 	jalr	t9
  436464:	4600b306 	mov.s	$f12,$f22
  436468:	8fbc0064 	lw	gp,100(sp)
  43646c:	00408825 	move	s1,v0
  436470:	8f998884 	lw	t9,-30588(gp)
  436474:	4600a306 	mov.s	$f12,$f20
  436478:	0320f809 	jalr	t9
  43647c:	00000000 	nop
  436480:	00514825 	or	t1,v0,s1
  436484:	44895000 	mtc1	t1,$f10
  436488:	8fbc0064 	lw	gp,100(sp)
  43648c:	46805420 	cvt.s.w	$f16,$f10
  436490:	e6100000 	swc1	$f16,0(s0)
  436494:	92900000 	lbu	s0,0(s4)
  436498:	1000fd8a 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  43649c:	2401001b 	li	at,27
  4364a0:	8e53fffc 	lw	s3,-4(s2)
  4364a4:	8e56fff8 	lw	s6,-8(s2)
  4364a8:	2652fff8 	addiu	s2,s2,-8
  4364ac:	02408025 	move	s0,s2
  4364b0:	02d35025 	or	t2,s6,s3
  4364b4:	ae0a0000 	sw	t2,0(s0)
  4364b8:	92900001 	lbu	s0,1(s4)
  4364bc:	26940001 	addiu	s4,s4,1
  4364c0:	1000fd7f 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4364c4:	26520004 	addiu	s2,s2,4
  4364c8:	c656fffc 	lwc1	$f22,-4(s2)
  4364cc:	8f998884 	lw	t9,-30588(gp)
  4364d0:	2652fff8 	addiu	s2,s2,-8
  4364d4:	c6540000 	lwc1	$f20,0(s2)
  4364d8:	02408025 	move	s0,s2
  4364dc:	26940001 	addiu	s4,s4,1
  4364e0:	26520004 	addiu	s2,s2,4
  4364e4:	0320f809 	jalr	t9
  4364e8:	4600b306 	mov.s	$f12,$f22
  4364ec:	8fbc0064 	lw	gp,100(sp)
  4364f0:	00408825 	move	s1,v0
  4364f4:	8f998884 	lw	t9,-30588(gp)
  4364f8:	4600a306 	mov.s	$f12,$f20
  4364fc:	0320f809 	jalr	t9
  436500:	00000000 	nop
  436504:	00515826 	xor	t3,v0,s1
  436508:	448b9000 	mtc1	t3,$f18
  43650c:	8fbc0064 	lw	gp,100(sp)
  436510:	46809120 	cvt.s.w	$f4,$f18
  436514:	e6040000 	swc1	$f4,0(s0)
  436518:	92900000 	lbu	s0,0(s4)
  43651c:	1000fd69 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436520:	2401001b 	li	at,27
  436524:	8e53fffc 	lw	s3,-4(s2)
  436528:	8e56fff8 	lw	s6,-8(s2)
  43652c:	2652fff8 	addiu	s2,s2,-8
  436530:	02408025 	move	s0,s2
  436534:	02d36026 	xor	t4,s6,s3
  436538:	ae0c0000 	sw	t4,0(s0)
  43653c:	92900001 	lbu	s0,1(s4)
  436540:	26940001 	addiu	s4,s4,1
  436544:	1000fd5e 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  436548:	26520004 	addiu	s2,s2,4
  43654c:	c646fffc 	lwc1	$f6,-4(s2)
  436550:	26940001 	addiu	s4,s4,1
  436554:	e7a60238 	swc1	$f6,568(sp)
  436558:	c648fff8 	lwc1	$f8,-8(s2)
  43655c:	2652fff8 	addiu	s2,s2,-8
  436560:	e7a8023c 	swc1	$f8,572(sp)
  436564:	92900000 	lbu	s0,0(s4)
  436568:	1000fd55 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  43656c:	0000a825 	move	s5,zero
  436570:	8f998844 	lw	t9,-30652(gp)
  436574:	c654fff8 	lwc1	$f20,-8(s2)
  436578:	c656fffc 	lwc1	$f22,-4(s2)
  43657c:	8fa40234 	lw	a0,564(sp)
  436580:	26940001 	addiu	s4,s4,1
  436584:	2652fff8 	addiu	s2,s2,-8
  436588:	0320f809 	jalr	t9
  43658c:	0000a825 	move	s5,zero
  436590:	8fbc0064 	lw	gp,100(sp)
  436594:	c7ac023c 	lwc1	$f12,572(sp)
  436598:	8f9984bc 	lw	t9,-31556(gp)
  43659c:	c7ae0238 	lwc1	$f14,568(sp)
  4365a0:	0320f809 	jalr	t9
  4365a4:	00000000 	nop
  4365a8:	8fbc0064 	lw	gp,100(sp)
  4365ac:	4600a306 	mov.s	$f12,$f20
  4365b0:	8f9984c4 	lw	t9,-31548(gp)
  4365b4:	4600b386 	mov.s	$f14,$f22
  4365b8:	0320f809 	jalr	t9
  4365bc:	00000000 	nop
  4365c0:	e7b4023c 	swc1	$f20,572(sp)
  4365c4:	e7b60238 	swc1	$f22,568(sp)
  4365c8:	8fbc0064 	lw	gp,100(sp)
  4365cc:	92900000 	lbu	s0,0(s4)
  4365d0:	1000fd3c 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4365d4:	2401001b 	li	at,27
  4365d8:	444df800 	cfc1	t5,c1_fcsr
  4365dc:	c64afffc 	lwc1	$f10,-4(s2)
  4365e0:	35a10003 	ori	at,t5,0x3
  4365e4:	38210002 	xori	at,at,0x2
  4365e8:	44c1f800 	ctc1	at,c1_fcsr
  4365ec:	26940001 	addiu	s4,s4,1
  4365f0:	46005424 	cvt.w.s	$f16,$f10
  4365f4:	2652fffc 	addiu	s2,s2,-4
  4365f8:	440e8000 	mfc1	t6,$f16
  4365fc:	44cdf800 	ctc1	t5,c1_fcsr
  436600:	afae0234 	sw	t6,564(sp)
  436604:	92900000 	lbu	s0,0(s4)
  436608:	1000fd2e 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  43660c:	2401001b 	li	at,27
  436610:	92900001 	lbu	s0,1(s4)
  436614:	26940001 	addiu	s4,s4,1
  436618:	1000fd29 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  43661c:	0000a825 	move	s5,zero
  436620:	c652fffc 	lwc1	$f18,-4(s2)
  436624:	26940001 	addiu	s4,s4,1
  436628:	e7b20248 	swc1	$f18,584(sp)
  43662c:	c644fff8 	lwc1	$f4,-8(s2)
  436630:	2652fff8 	addiu	s2,s2,-8
  436634:	e7a40244 	swc1	$f4,580(sp)
  436638:	92900000 	lbu	s0,0(s4)
  43663c:	1000fd20 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  436640:	24150001 	li	s5,1
  436644:	2aa100ff 	slti	at,s5,255
  436648:	1020000c 	beqz	at,43667c <run__19FileIconInterpreterFPcPvT1+0xc60>
  43664c:	26940001 	addiu	s4,s4,1
  436650:	c646fff8 	lwc1	$f6,-8(s2)
  436654:	001510c0 	sll	v0,s5,0x3
  436658:	27af0244 	addiu	t7,sp,580
  43665c:	004fc021 	addu	t8,v0,t7
  436660:	e7060000 	swc1	$f6,0(t8)
  436664:	c648fffc 	lwc1	$f8,-4(s2)
  436668:	27b90248 	addiu	t9,sp,584
  43666c:	00594021 	addu	t0,v0,t9
  436670:	26b50001 	addiu	s5,s5,1
  436674:	2652fff8 	addiu	s2,s2,-8
  436678:	e5080000 	swc1	$f8,0(t0)
  43667c:	92900000 	lbu	s0,0(s4)
  436680:	1000fd10 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436684:	2401001b 	li	at,27
  436688:	8f998844 	lw	t9,-30652(gp)
  43668c:	8fa40234 	lw	a0,564(sp)
  436690:	26940001 	addiu	s4,s4,1
  436694:	0320f809 	jalr	t9
  436698:	24110001 	li	s1,1
  43669c:	8fbc0064 	lw	gp,100(sp)
  4366a0:	12a00009 	beqz	s5,4366c8 <run__19FileIconInterpreterFPcPvT1+0xcac>
  4366a4:	2aa10002 	slti	at,s5,2
  4366a8:	8f99834c 	lw	t9,-31924(gp)
  4366ac:	c7ac0244 	lwc1	$f12,580(sp)
  4366b0:	c7ae0248 	lwc1	$f14,584(sp)
  4366b4:	0320f809 	jalr	t9
  4366b8:	00000000 	nop
  4366bc:	8fbc0064 	lw	gp,100(sp)
  4366c0:	00000000 	nop
  4366c4:	2aa10002 	slti	at,s5,2
  4366c8:	1420000a 	bnez	at,4366f4 <run__19FileIconInterpreterFPcPvT1+0xcd8>
  4366cc:	27b0024c 	addiu	s0,sp,588
  4366d0:	8f998348 	lw	t9,-31928(gp)
  4366d4:	c60c0000 	lwc1	$f12,0(s0)
  4366d8:	c60e0004 	lwc1	$f14,4(s0)
  4366dc:	0320f809 	jalr	t9
  4366e0:	00000000 	nop
  4366e4:	8fbc0064 	lw	gp,100(sp)
  4366e8:	26310001 	addiu	s1,s1,1
  4366ec:	1635fff8 	bne	s1,s5,4366d0 <run__19FileIconInterpreterFPcPvT1+0xcb4>
  4366f0:	26100008 	addiu	s0,s0,8
  4366f4:	8f998400 	lw	t9,-31744(gp)
  4366f8:	0000a825 	move	s5,zero
  4366fc:	0320f809 	jalr	t9
  436700:	00000000 	nop
  436704:	8fbc0064 	lw	gp,100(sp)
  436708:	92900000 	lbu	s0,0(s4)
  43670c:	1000fced 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436710:	2401001b 	li	at,27
  436714:	8f998844 	lw	t9,-30652(gp)
  436718:	8fa40234 	lw	a0,564(sp)
  43671c:	26940001 	addiu	s4,s4,1
  436720:	0320f809 	jalr	t9
  436724:	00008825 	move	s1,zero
  436728:	8fbc0064 	lw	gp,100(sp)
  43672c:	00000000 	nop
  436730:	8f9982dc 	lw	t9,-32036(gp)
  436734:	00000000 	nop
  436738:	0320f809 	jalr	t9
  43673c:	00000000 	nop
  436740:	8fbc0064 	lw	gp,100(sp)
  436744:	1aa00009 	blez	s5,43676c <run__19FileIconInterpreterFPcPvT1+0xd50>
  436748:	27b00244 	addiu	s0,sp,580
  43674c:	8f9981f8 	lw	t9,-32264(gp)
  436750:	02002025 	move	a0,s0
  436754:	0320f809 	jalr	t9
  436758:	00000000 	nop
  43675c:	8fbc0064 	lw	gp,100(sp)
  436760:	26310001 	addiu	s1,s1,1
  436764:	1635fff9 	bne	s1,s5,43674c <run__19FileIconInterpreterFPcPvT1+0xd30>
  436768:	26100008 	addiu	s0,s0,8
  43676c:	8f9982e0 	lw	t9,-32032(gp)
  436770:	0000a825 	move	s5,zero
  436774:	0320f809 	jalr	t9
  436778:	00000000 	nop
  43677c:	8fbc0064 	lw	gp,100(sp)
  436780:	92900000 	lbu	s0,0(s4)
  436784:	1000fccf 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436788:	2401001b 	li	at,27
  43678c:	8f998844 	lw	t9,-30652(gp)
  436790:	8fa40234 	lw	a0,564(sp)
  436794:	26940001 	addiu	s4,s4,1
  436798:	0320f809 	jalr	t9
  43679c:	00008825 	move	s1,zero
  4367a0:	8fbc0064 	lw	gp,100(sp)
  4367a4:	00000000 	nop
  4367a8:	8f998484 	lw	t9,-31612(gp)
  4367ac:	00000000 	nop
  4367b0:	0320f809 	jalr	t9
  4367b4:	00000000 	nop
  4367b8:	8fbc0064 	lw	gp,100(sp)
  4367bc:	1aa00009 	blez	s5,4367e4 <run__19FileIconInterpreterFPcPvT1+0xdc8>
  4367c0:	27b00244 	addiu	s0,sp,580
  4367c4:	8f9981f8 	lw	t9,-32264(gp)
  4367c8:	02002025 	move	a0,s0
  4367cc:	0320f809 	jalr	t9
  4367d0:	00000000 	nop
  4367d4:	8fbc0064 	lw	gp,100(sp)
  4367d8:	26310001 	addiu	s1,s1,1
  4367dc:	1635fff9 	bne	s1,s5,4367c4 <run__19FileIconInterpreterFPcPvT1+0xda8>
  4367e0:	26100008 	addiu	s0,s0,8
  4367e4:	8f99846c 	lw	t9,-31636(gp)
  4367e8:	0000a825 	move	s5,zero
  4367ec:	0320f809 	jalr	t9
  4367f0:	00000000 	nop
  4367f4:	8fbc0064 	lw	gp,100(sp)
  4367f8:	92900000 	lbu	s0,0(s4)
  4367fc:	1000fcb1 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436800:	2401001b 	li	at,27
  436804:	8f998844 	lw	t9,-30652(gp)
  436808:	8fa40234 	lw	a0,564(sp)
  43680c:	26940001 	addiu	s4,s4,1
  436810:	0320f809 	jalr	t9
  436814:	00008825 	move	s1,zero
  436818:	8fbc0064 	lw	gp,100(sp)
  43681c:	00000000 	nop
  436820:	8f99836c 	lw	t9,-31892(gp)
  436824:	00000000 	nop
  436828:	0320f809 	jalr	t9
  43682c:	00000000 	nop
  436830:	8fbc0064 	lw	gp,100(sp)
  436834:	1aa00009 	blez	s5,43685c <run__19FileIconInterpreterFPcPvT1+0xe40>
  436838:	27b00244 	addiu	s0,sp,580
  43683c:	8f9981f8 	lw	t9,-32264(gp)
  436840:	02002025 	move	a0,s0
  436844:	0320f809 	jalr	t9
  436848:	00000000 	nop
  43684c:	8fbc0064 	lw	gp,100(sp)
  436850:	26310001 	addiu	s1,s1,1
  436854:	1635fff9 	bne	s1,s5,43683c <run__19FileIconInterpreterFPcPvT1+0xe20>
  436858:	26100008 	addiu	s0,s0,8
  43685c:	8f998300 	lw	t9,-32000(gp)
  436860:	0000a825 	move	s5,zero
  436864:	0320f809 	jalr	t9
  436868:	00000000 	nop
  43686c:	8fbc0064 	lw	gp,100(sp)
  436870:	92900000 	lbu	s0,0(s4)
  436874:	1000fc93 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436878:	2401001b 	li	at,27
  43687c:	8f998844 	lw	t9,-30652(gp)
  436880:	8fa40234 	lw	a0,564(sp)
  436884:	26940001 	addiu	s4,s4,1
  436888:	0320f809 	jalr	t9
  43688c:	00008825 	move	s1,zero
  436890:	8fbc0064 	lw	gp,100(sp)
  436894:	00000000 	nop
  436898:	8f99823c 	lw	t9,-32196(gp)
  43689c:	00000000 	nop
  4368a0:	0320f809 	jalr	t9
  4368a4:	00000000 	nop
  4368a8:	8fbc0064 	lw	gp,100(sp)
  4368ac:	1aa00009 	blez	s5,4368d4 <run__19FileIconInterpreterFPcPvT1+0xeb8>
  4368b0:	27b00244 	addiu	s0,sp,580
  4368b4:	8f9981f8 	lw	t9,-32264(gp)
  4368b8:	02002025 	move	a0,s0
  4368bc:	0320f809 	jalr	t9
  4368c0:	00000000 	nop
  4368c4:	8fbc0064 	lw	gp,100(sp)
  4368c8:	26310001 	addiu	s1,s1,1
  4368cc:	1635fff9 	bne	s1,s5,4368b4 <run__19FileIconInterpreterFPcPvT1+0xe98>
  4368d0:	26100008 	addiu	s0,s0,8
  4368d4:	8f998244 	lw	t9,-32188(gp)
  4368d8:	0000a825 	move	s5,zero
  4368dc:	0320f809 	jalr	t9
  4368e0:	00000000 	nop
  4368e4:	8fbc0064 	lw	gp,100(sp)
  4368e8:	92900000 	lbu	s0,0(s4)
  4368ec:	1000fc75 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4368f0:	2401001b 	li	at,27
  4368f4:	4449f800 	cfc1	t1,c1_fcsr
  4368f8:	c64afffc 	lwc1	$f10,-4(s2)
  4368fc:	35210003 	ori	at,t1,0x3
  436900:	38210002 	xori	at,at,0x2
  436904:	44c1f800 	ctc1	at,c1_fcsr
  436908:	8f998844 	lw	t9,-30652(gp)
  43690c:	46005424 	cvt.w.s	$f16,$f10
  436910:	8fa40234 	lw	a0,564(sp)
  436914:	44168000 	mfc1	s6,$f16
  436918:	44c9f800 	ctc1	t1,c1_fcsr
  43691c:	26940001 	addiu	s4,s4,1
  436920:	2652fffc 	addiu	s2,s2,-4
  436924:	0320f809 	jalr	t9
  436928:	00008825 	move	s1,zero
  43692c:	8fbc0064 	lw	gp,100(sp)
  436930:	00000000 	nop
  436934:	8f99823c 	lw	t9,-32196(gp)
  436938:	00000000 	nop
  43693c:	0320f809 	jalr	t9
  436940:	00000000 	nop
  436944:	8fbc0064 	lw	gp,100(sp)
  436948:	1aa0000a 	blez	s5,436974 <run__19FileIconInterpreterFPcPvT1+0xf58>
  43694c:	27b00244 	addiu	s0,sp,580
  436950:	8f9981f8 	lw	t9,-32264(gp)
  436954:	02002025 	move	a0,s0
  436958:	0320f809 	jalr	t9
  43695c:	00000000 	nop
  436960:	8fbc0064 	lw	gp,100(sp)
  436964:	26310001 	addiu	s1,s1,1
  436968:	1635fff9 	bne	s1,s5,436950 <run__19FileIconInterpreterFPcPvT1+0xf34>
  43696c:	26100008 	addiu	s0,s0,8
  436970:	00008825 	move	s1,zero
  436974:	8f998244 	lw	t9,-32188(gp)
  436978:	00000000 	nop
  43697c:	0320f809 	jalr	t9
  436980:	00000000 	nop
  436984:	8fbc0064 	lw	gp,100(sp)
  436988:	02c02025 	move	a0,s6
  43698c:	8f998844 	lw	t9,-30652(gp)
  436990:	00000000 	nop
  436994:	0320f809 	jalr	t9
  436998:	00000000 	nop
  43699c:	8fbc0064 	lw	gp,100(sp)
  4369a0:	00000000 	nop
  4369a4:	8f9982dc 	lw	t9,-32036(gp)
  4369a8:	00000000 	nop
  4369ac:	0320f809 	jalr	t9
  4369b0:	00000000 	nop
  4369b4:	8fbc0064 	lw	gp,100(sp)
  4369b8:	1aa00009 	blez	s5,4369e0 <run__19FileIconInterpreterFPcPvT1+0xfc4>
  4369bc:	27b00244 	addiu	s0,sp,580
  4369c0:	8f9981f8 	lw	t9,-32264(gp)
  4369c4:	02002025 	move	a0,s0
  4369c8:	0320f809 	jalr	t9
  4369cc:	00000000 	nop
  4369d0:	8fbc0064 	lw	gp,100(sp)
  4369d4:	26310001 	addiu	s1,s1,1
  4369d8:	1635fff9 	bne	s1,s5,4369c0 <run__19FileIconInterpreterFPcPvT1+0xfa4>
  4369dc:	26100008 	addiu	s0,s0,8
  4369e0:	8f9982e0 	lw	t9,-32032(gp)
  4369e4:	0000a825 	move	s5,zero
  4369e8:	0320f809 	jalr	t9
  4369ec:	00000000 	nop
  4369f0:	8fbc0064 	lw	gp,100(sp)
  4369f4:	92900000 	lbu	s0,0(s4)
  4369f8:	1000fc32 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4369fc:	2401001b 	li	at,27
  436a00:	444af800 	cfc1	t2,c1_fcsr
  436a04:	2652fffc 	addiu	s2,s2,-4
  436a08:	35410003 	ori	at,t2,0x3
  436a0c:	38210002 	xori	at,at,0x2
  436a10:	44c1f800 	ctc1	at,c1_fcsr
  436a14:	c6520000 	lwc1	$f18,0(s2)
  436a18:	8f998844 	lw	t9,-30652(gp)
  436a1c:	46009124 	cvt.w.s	$f4,$f18
  436a20:	8fa40234 	lw	a0,564(sp)
  436a24:	44162000 	mfc1	s6,$f4
  436a28:	44caf800 	ctc1	t2,c1_fcsr
  436a2c:	26940001 	addiu	s4,s4,1
  436a30:	0320f809 	jalr	t9
  436a34:	24110001 	li	s1,1
  436a38:	8fbc0064 	lw	gp,100(sp)
  436a3c:	12a00009 	beqz	s5,436a64 <run__19FileIconInterpreterFPcPvT1+0x1048>
  436a40:	2aa10002 	slti	at,s5,2
  436a44:	8f99834c 	lw	t9,-31924(gp)
  436a48:	c7ac0244 	lwc1	$f12,580(sp)
  436a4c:	c7ae0248 	lwc1	$f14,584(sp)
  436a50:	0320f809 	jalr	t9
  436a54:	00000000 	nop
  436a58:	8fbc0064 	lw	gp,100(sp)
  436a5c:	00000000 	nop
  436a60:	2aa10002 	slti	at,s5,2
  436a64:	1420000b 	bnez	at,436a94 <run__19FileIconInterpreterFPcPvT1+0x1078>
  436a68:	27b0024c 	addiu	s0,sp,588
  436a6c:	8f998348 	lw	t9,-31928(gp)
  436a70:	c60c0000 	lwc1	$f12,0(s0)
  436a74:	c60e0004 	lwc1	$f14,4(s0)
  436a78:	0320f809 	jalr	t9
  436a7c:	00000000 	nop
  436a80:	8fbc0064 	lw	gp,100(sp)
  436a84:	26310001 	addiu	s1,s1,1
  436a88:	1635fff8 	bne	s1,s5,436a6c <run__19FileIconInterpreterFPcPvT1+0x1050>
  436a8c:	26100008 	addiu	s0,s0,8
  436a90:	24110001 	li	s1,1
  436a94:	8f998400 	lw	t9,-31744(gp)
  436a98:	00000000 	nop
  436a9c:	0320f809 	jalr	t9
  436aa0:	00000000 	nop
  436aa4:	8fbc0064 	lw	gp,100(sp)
  436aa8:	02c02025 	move	a0,s6
  436aac:	8f998844 	lw	t9,-30652(gp)
  436ab0:	00000000 	nop
  436ab4:	0320f809 	jalr	t9
  436ab8:	00000000 	nop
  436abc:	8fbc0064 	lw	gp,100(sp)
  436ac0:	12a00009 	beqz	s5,436ae8 <run__19FileIconInterpreterFPcPvT1+0x10cc>
  436ac4:	2aa10002 	slti	at,s5,2
  436ac8:	8f9984bc 	lw	t9,-31556(gp)
  436acc:	c7ac0244 	lwc1	$f12,580(sp)
  436ad0:	c7ae0248 	lwc1	$f14,584(sp)
  436ad4:	0320f809 	jalr	t9
  436ad8:	00000000 	nop
  436adc:	8fbc0064 	lw	gp,100(sp)
  436ae0:	00000000 	nop
  436ae4:	2aa10002 	slti	at,s5,2
  436ae8:	1420000a 	bnez	at,436b14 <run__19FileIconInterpreterFPcPvT1+0x10f8>
  436aec:	27b0024c 	addiu	s0,sp,588
  436af0:	8f9984c4 	lw	t9,-31548(gp)
  436af4:	c60c0000 	lwc1	$f12,0(s0)
  436af8:	c60e0004 	lwc1	$f14,4(s0)
  436afc:	0320f809 	jalr	t9
  436b00:	00000000 	nop
  436b04:	8fbc0064 	lw	gp,100(sp)
  436b08:	26310001 	addiu	s1,s1,1
  436b0c:	1635fff8 	bne	s1,s5,436af0 <run__19FileIconInterpreterFPcPvT1+0x10d4>
  436b10:	26100008 	addiu	s0,s0,8
  436b14:	8f9984c4 	lw	t9,-31548(gp)
  436b18:	c7ac0244 	lwc1	$f12,580(sp)
  436b1c:	c7ae0248 	lwc1	$f14,584(sp)
  436b20:	0320f809 	jalr	t9
  436b24:	0000a825 	move	s5,zero
  436b28:	8fbc0064 	lw	gp,100(sp)
  436b2c:	92900000 	lbu	s0,0(s4)
  436b30:	1000fbe4 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436b34:	2401001b 	li	at,27
  436b38:	c646fffc 	lwc1	$f6,-4(s2)
  436b3c:	8f998844 	lw	t9,-30652(gp)
  436b40:	e7a60a44 	swc1	$f6,2628(sp)
  436b44:	c648fff8 	lwc1	$f8,-8(s2)
  436b48:	8fa40234 	lw	a0,564(sp)
  436b4c:	e7a80a48 	swc1	$f8,2632(sp)
  436b50:	c64afff4 	lwc1	$f10,-12(s2)
  436b54:	26940001 	addiu	s4,s4,1
  436b58:	e7aa0a4c 	swc1	$f10,2636(sp)
  436b5c:	c656fff0 	lwc1	$f22,-16(s2)
  436b60:	c654ffec 	lwc1	$f20,-20(s2)
  436b64:	0320f809 	jalr	t9
  436b68:	2652ffec 	addiu	s2,s2,-20
  436b6c:	4600a306 	mov.s	$f12,$f20
  436b70:	4600b386 	mov.s	$f14,$f22
  436b74:	444bf800 	cfc1	t3,c1_fcsr
  436b78:	c7b00a48 	lwc1	$f16,2632(sp)
  436b7c:	35610003 	ori	at,t3,0x3
  436b80:	38210002 	xori	at,at,0x2
  436b84:	44c1f800 	ctc1	at,c1_fcsr
  436b88:	c7a40a44 	lwc1	$f4,2628(sp)
  436b8c:	460084a4 	cvt.w.s	$f18,$f16
  436b90:	8fbc0064 	lw	gp,100(sp)
  436b94:	44cbf800 	ctc1	t3,c1_fcsr
  436b98:	8f9982fc 	lw	t9,-32004(gp)
  436b9c:	44079000 	mfc1	a3,$f18
  436ba0:	444cf800 	cfc1	t4,c1_fcsr
  436ba4:	8fa60a4c 	lw	a2,2636(sp)
  436ba8:	35810003 	ori	at,t4,0x3
  436bac:	38210002 	xori	at,at,0x2
  436bb0:	44c1f800 	ctc1	at,c1_fcsr
  436bb4:	00000000 	nop
  436bb8:	460021a4 	cvt.w.s	$f6,$f4
  436bbc:	440d3000 	mfc1	t5,$f6
  436bc0:	44ccf800 	ctc1	t4,c1_fcsr
  436bc4:	0320f809 	jalr	t9
  436bc8:	afad0010 	sw	t5,16(sp)
  436bcc:	8fbc0064 	lw	gp,100(sp)
  436bd0:	92900000 	lbu	s0,0(s4)
  436bd4:	1000fbbb 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436bd8:	2401001b 	li	at,27
  436bdc:	c648fffc 	lwc1	$f8,-4(s2)
  436be0:	8f998844 	lw	t9,-30652(gp)
  436be4:	e7a80a44 	swc1	$f8,2628(sp)
  436be8:	c64afff8 	lwc1	$f10,-8(s2)
  436bec:	8fa40234 	lw	a0,564(sp)
  436bf0:	e7aa0a48 	swc1	$f10,2632(sp)
  436bf4:	c650fff4 	lwc1	$f16,-12(s2)
  436bf8:	26940001 	addiu	s4,s4,1
  436bfc:	e7b00a4c 	swc1	$f16,2636(sp)
  436c00:	c656fff0 	lwc1	$f22,-16(s2)
  436c04:	c654ffec 	lwc1	$f20,-20(s2)
  436c08:	0320f809 	jalr	t9
  436c0c:	2652ffec 	addiu	s2,s2,-20
  436c10:	4600a306 	mov.s	$f12,$f20
  436c14:	4600b386 	mov.s	$f14,$f22
  436c18:	444ef800 	cfc1	t6,c1_fcsr
  436c1c:	c7b20a48 	lwc1	$f18,2632(sp)
  436c20:	35c10003 	ori	at,t6,0x3
  436c24:	38210002 	xori	at,at,0x2
  436c28:	44c1f800 	ctc1	at,c1_fcsr
  436c2c:	c7a60a44 	lwc1	$f6,2628(sp)
  436c30:	46009124 	cvt.w.s	$f4,$f18
  436c34:	8fbc0064 	lw	gp,100(sp)
  436c38:	44cef800 	ctc1	t6,c1_fcsr
  436c3c:	8f9982f8 	lw	t9,-32008(gp)
  436c40:	44072000 	mfc1	a3,$f4
  436c44:	444ff800 	cfc1	t7,c1_fcsr
  436c48:	8fa60a4c 	lw	a2,2636(sp)
  436c4c:	35e10003 	ori	at,t7,0x3
  436c50:	38210002 	xori	at,at,0x2
  436c54:	44c1f800 	ctc1	at,c1_fcsr
  436c58:	00000000 	nop
  436c5c:	46003224 	cvt.w.s	$f8,$f6
  436c60:	44184000 	mfc1	t8,$f8
  436c64:	44cff800 	ctc1	t7,c1_fcsr
  436c68:	0320f809 	jalr	t9
  436c6c:	afb80010 	sw	t8,16(sp)
  436c70:	8fbc0064 	lw	gp,100(sp)
  436c74:	92900000 	lbu	s0,0(s4)
  436c78:	1000fb92 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436c7c:	2401001b 	li	at,27
  436c80:	10000580 	b	438284 <run__19FileIconInterpreterFPcPvT1+0x2868>
  436c84:	24020001 	li	v0,1
  436c88:	c654fff8 	lwc1	$f20,-8(s2)
  436c8c:	c656fffc 	lwc1	$f22,-4(s2)
  436c90:	4600a2a1 	cvt.d.s	$f10,$f20
  436c94:	462ac032 	c.eq.d	$f24,$f10
  436c98:	26940001 	addiu	s4,s4,1
  436c9c:	45010009 	bc1t	436cc4 <run__19FileIconInterpreterFPcPvT1+0x12a8>
  436ca0:	2652fff8 	addiu	s2,s2,-8
  436ca4:	4600b421 	cvt.d.s	$f16,$f22
  436ca8:	4630c032 	c.eq.d	$f24,$f16
  436cac:	00000000 	nop
  436cb0:	45010004 	bc1t	436cc4 <run__19FileIconInterpreterFPcPvT1+0x12a8>
  436cb4:	02408025 	move	s0,s2
  436cb8:	e61a0000 	swc1	$f26,0(s0)
  436cbc:	10000004 	b	436cd0 <run__19FileIconInterpreterFPcPvT1+0x12b4>
  436cc0:	26520004 	addiu	s2,s2,4
  436cc4:	02408025 	move	s0,s2
  436cc8:	e61c0000 	swc1	$f28,0(s0)
  436ccc:	26520004 	addiu	s2,s2,4
  436cd0:	92900000 	lbu	s0,0(s4)
  436cd4:	1000fb7b 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436cd8:	2401001b 	li	at,27
  436cdc:	8e56fff8 	lw	s6,-8(s2)
  436ce0:	8e53fffc 	lw	s3,-4(s2)
  436ce4:	26940001 	addiu	s4,s4,1
  436ce8:	12c00007 	beqz	s6,436d08 <run__19FileIconInterpreterFPcPvT1+0x12ec>
  436cec:	2652fff8 	addiu	s2,s2,-8
  436cf0:	12600005 	beqz	s3,436d08 <run__19FileIconInterpreterFPcPvT1+0x12ec>
  436cf4:	02408025 	move	s0,s2
  436cf8:	24190001 	li	t9,1
  436cfc:	ae190000 	sw	t9,0(s0)
  436d00:	10000004 	b	436d14 <run__19FileIconInterpreterFPcPvT1+0x12f8>
  436d04:	26520004 	addiu	s2,s2,4
  436d08:	02408025 	move	s0,s2
  436d0c:	ae000000 	sw	zero,0(s0)
  436d10:	26520004 	addiu	s2,s2,4
  436d14:	92900000 	lbu	s0,0(s4)
  436d18:	1000fb6a 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436d1c:	2401001b 	li	at,27
  436d20:	c654fff8 	lwc1	$f20,-8(s2)
  436d24:	c656fffc 	lwc1	$f22,-4(s2)
  436d28:	4600a4a1 	cvt.d.s	$f18,$f20
  436d2c:	4632c032 	c.eq.d	$f24,$f18
  436d30:	26940001 	addiu	s4,s4,1
  436d34:	45000005 	bc1f	436d4c <run__19FileIconInterpreterFPcPvT1+0x1330>
  436d38:	2652fff8 	addiu	s2,s2,-8
  436d3c:	4600b121 	cvt.d.s	$f4,$f22
  436d40:	4624c032 	c.eq.d	$f24,$f4
  436d44:	00000000 	nop
  436d48:	45010004 	bc1t	436d5c <run__19FileIconInterpreterFPcPvT1+0x1340>
  436d4c:	02408025 	move	s0,s2
  436d50:	e61a0000 	swc1	$f26,0(s0)
  436d54:	10000004 	b	436d68 <run__19FileIconInterpreterFPcPvT1+0x134c>
  436d58:	26520004 	addiu	s2,s2,4
  436d5c:	02408025 	move	s0,s2
  436d60:	e61c0000 	swc1	$f28,0(s0)
  436d64:	26520004 	addiu	s2,s2,4
  436d68:	92900000 	lbu	s0,0(s4)
  436d6c:	1000fb55 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436d70:	2401001b 	li	at,27
  436d74:	8e56fff8 	lw	s6,-8(s2)
  436d78:	8e53fffc 	lw	s3,-4(s2)
  436d7c:	26940001 	addiu	s4,s4,1
  436d80:	16c00002 	bnez	s6,436d8c <run__19FileIconInterpreterFPcPvT1+0x1370>
  436d84:	2652fff8 	addiu	s2,s2,-8
  436d88:	12600005 	beqz	s3,436da0 <run__19FileIconInterpreterFPcPvT1+0x1384>
  436d8c:	02408025 	move	s0,s2
  436d90:	24080001 	li	t0,1
  436d94:	ae080000 	sw	t0,0(s0)
  436d98:	10000004 	b	436dac <run__19FileIconInterpreterFPcPvT1+0x1390>
  436d9c:	26520004 	addiu	s2,s2,4
  436da0:	02408025 	move	s0,s2
  436da4:	ae000000 	sw	zero,0(s0)
  436da8:	26520004 	addiu	s2,s2,4
  436dac:	92900000 	lbu	s0,0(s4)
  436db0:	1000fb44 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436db4:	2401001b 	li	at,27
  436db8:	92900001 	lbu	s0,1(s4)
  436dbc:	26940001 	addiu	s4,s4,1
  436dc0:	1000fb3f 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  436dc4:	2652fffc 	addiu	s2,s2,-4
  436dc8:	92900001 	lbu	s0,1(s4)
  436dcc:	26940001 	addiu	s4,s4,1
  436dd0:	1000fb3b 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  436dd4:	2652fffc 	addiu	s2,s2,-4
  436dd8:	c646fffc 	lwc1	$f6,-4(s2)
  436ddc:	00000000 	nop
  436de0:	46003221 	cvt.d.s	$f8,$f6
  436de4:	4628c032 	c.eq.d	$f24,$f8
  436de8:	00000000 	nop
  436dec:	45000011 	bc1f	436e34 <run__19FileIconInterpreterFPcPvT1+0x1418>
  436df0:	00000000 	nop
  436df4:	92890001 	lbu	t1,1(s4)
  436df8:	26940001 	addiu	s4,s4,1
  436dfc:	a3c90000 	sb	t1,0(s8)
  436e00:	928a0001 	lbu	t2,1(s4)
  436e04:	00000000 	nop
  436e08:	a3ca0001 	sb	t2,1(s8)
  436e0c:	928b0002 	lbu	t3,2(s4)
  436e10:	00000000 	nop
  436e14:	a3cb0002 	sb	t3,2(s8)
  436e18:	928c0003 	lbu	t4,3(s4)
  436e1c:	00000000 	nop
  436e20:	a3cc0003 	sb	t4,3(s8)
  436e24:	8fae0230 	lw	t6,560(sp)
  436e28:	8fad1a04 	lw	t5,6660(sp)
  436e2c:	10000002 	b	436e38 <run__19FileIconInterpreterFPcPvT1+0x141c>
  436e30:	01aea021 	addu	s4,t5,t6
  436e34:	26940005 	addiu	s4,s4,5
  436e38:	92900000 	lbu	s0,0(s4)
  436e3c:	1000fb21 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436e40:	2401001b 	li	at,27
  436e44:	8e4ffffc 	lw	t7,-4(s2)
  436e48:	00000000 	nop
  436e4c:	15e00011 	bnez	t7,436e94 <run__19FileIconInterpreterFPcPvT1+0x1478>
  436e50:	00000000 	nop
  436e54:	92980001 	lbu	t8,1(s4)
  436e58:	26940001 	addiu	s4,s4,1
  436e5c:	a3d80000 	sb	t8,0(s8)
  436e60:	92990001 	lbu	t9,1(s4)
  436e64:	00000000 	nop
  436e68:	a3d90001 	sb	t9,1(s8)
  436e6c:	92880002 	lbu	t0,2(s4)
  436e70:	00000000 	nop
  436e74:	a3c80002 	sb	t0,2(s8)
  436e78:	92890003 	lbu	t1,3(s4)
  436e7c:	00000000 	nop
  436e80:	a3c90003 	sb	t1,3(s8)
  436e84:	8fab0230 	lw	t3,560(sp)
  436e88:	8faa1a04 	lw	t2,6660(sp)
  436e8c:	10000002 	b	436e98 <run__19FileIconInterpreterFPcPvT1+0x147c>
  436e90:	014ba021 	addu	s4,t2,t3
  436e94:	26940005 	addiu	s4,s4,5
  436e98:	92900000 	lbu	s0,0(s4)
  436e9c:	1000fb09 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436ea0:	2401001b 	li	at,27
  436ea4:	c64afffc 	lwc1	$f10,-4(s2)
  436ea8:	00000000 	nop
  436eac:	46005421 	cvt.d.s	$f16,$f10
  436eb0:	4630c032 	c.eq.d	$f24,$f16
  436eb4:	00000000 	nop
  436eb8:	45010011 	bc1t	436f00 <run__19FileIconInterpreterFPcPvT1+0x14e4>
  436ebc:	00000000 	nop
  436ec0:	928c0001 	lbu	t4,1(s4)
  436ec4:	26940001 	addiu	s4,s4,1
  436ec8:	a3cc0000 	sb	t4,0(s8)
  436ecc:	928d0001 	lbu	t5,1(s4)
  436ed0:	00000000 	nop
  436ed4:	a3cd0001 	sb	t5,1(s8)
  436ed8:	928e0002 	lbu	t6,2(s4)
  436edc:	00000000 	nop
  436ee0:	a3ce0002 	sb	t6,2(s8)
  436ee4:	928f0003 	lbu	t7,3(s4)
  436ee8:	00000000 	nop
  436eec:	a3cf0003 	sb	t7,3(s8)
  436ef0:	8fb90230 	lw	t9,560(sp)
  436ef4:	8fb81a04 	lw	t8,6660(sp)
  436ef8:	10000002 	b	436f04 <run__19FileIconInterpreterFPcPvT1+0x14e8>
  436efc:	0319a021 	addu	s4,t8,t9
  436f00:	26940005 	addiu	s4,s4,5
  436f04:	92900000 	lbu	s0,0(s4)
  436f08:	1000faee 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436f0c:	2401001b 	li	at,27
  436f10:	8e48fffc 	lw	t0,-4(s2)
  436f14:	00000000 	nop
  436f18:	11000011 	beqz	t0,436f60 <run__19FileIconInterpreterFPcPvT1+0x1544>
  436f1c:	00000000 	nop
  436f20:	92890001 	lbu	t1,1(s4)
  436f24:	26940001 	addiu	s4,s4,1
  436f28:	a3c90000 	sb	t1,0(s8)
  436f2c:	928a0001 	lbu	t2,1(s4)
  436f30:	00000000 	nop
  436f34:	a3ca0001 	sb	t2,1(s8)
  436f38:	928b0002 	lbu	t3,2(s4)
  436f3c:	00000000 	nop
  436f40:	a3cb0002 	sb	t3,2(s8)
  436f44:	928c0003 	lbu	t4,3(s4)
  436f48:	00000000 	nop
  436f4c:	a3cc0003 	sb	t4,3(s8)
  436f50:	8fae0230 	lw	t6,560(sp)
  436f54:	8fad1a04 	lw	t5,6660(sp)
  436f58:	10000002 	b	436f64 <run__19FileIconInterpreterFPcPvT1+0x1548>
  436f5c:	01aea021 	addu	s4,t5,t6
  436f60:	26940005 	addiu	s4,s4,5
  436f64:	92900000 	lbu	s0,0(s4)
  436f68:	1000fad6 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436f6c:	2401001b 	li	at,27
  436f70:	928f0001 	lbu	t7,1(s4)
  436f74:	26940001 	addiu	s4,s4,1
  436f78:	a3cf0000 	sb	t7,0(s8)
  436f7c:	92980001 	lbu	t8,1(s4)
  436f80:	00000000 	nop
  436f84:	a3d80001 	sb	t8,1(s8)
  436f88:	92990002 	lbu	t9,2(s4)
  436f8c:	00000000 	nop
  436f90:	a3d90002 	sb	t9,2(s8)
  436f94:	92880003 	lbu	t0,3(s4)
  436f98:	00000000 	nop
  436f9c:	a3c80003 	sb	t0,3(s8)
  436fa0:	8faa0230 	lw	t2,560(sp)
  436fa4:	8fa91a04 	lw	t1,6660(sp)
  436fa8:	00000000 	nop
  436fac:	012aa021 	addu	s4,t1,t2
  436fb0:	92900000 	lbu	s0,0(s4)
  436fb4:	1000fac3 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  436fb8:	2401001b 	li	at,27
  436fbc:	92900001 	lbu	s0,1(s4)
  436fc0:	1000fabf 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  436fc4:	26940001 	addiu	s4,s4,1
  436fc8:	928b0001 	lbu	t3,1(s4)
  436fcc:	26940005 	addiu	s4,s4,5
  436fd0:	a3cb0000 	sb	t3,0(s8)
  436fd4:	928cfffd 	lbu	t4,-3(s4)
  436fd8:	00000000 	nop
  436fdc:	a3cc0001 	sb	t4,1(s8)
  436fe0:	928dfffe 	lbu	t5,-2(s4)
  436fe4:	00000000 	nop
  436fe8:	a3cd0002 	sb	t5,2(s8)
  436fec:	928effff 	lbu	t6,-1(s4)
  436ff0:	00000000 	nop
  436ff4:	a3ce0003 	sb	t6,3(s8)
  436ff8:	8fb80230 	lw	t8,560(sp)
  436ffc:	8faf1a08 	lw	t7,6664(sp)
  437000:	c654fffc 	lwc1	$f20,-4(s2)
  437004:	01f8c821 	addu	t9,t7,t8
  437008:	e7340000 	swc1	$f20,0(t9)
  43700c:	92900000 	lbu	s0,0(s4)
  437010:	1000faac 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437014:	2401001b 	li	at,27
  437018:	92880001 	lbu	t0,1(s4)
  43701c:	26940005 	addiu	s4,s4,5
  437020:	a3c80000 	sb	t0,0(s8)
  437024:	9289fffd 	lbu	t1,-3(s4)
  437028:	00000000 	nop
  43702c:	a3c90001 	sb	t1,1(s8)
  437030:	928afffe 	lbu	t2,-2(s4)
  437034:	00000000 	nop
  437038:	a3ca0002 	sb	t2,2(s8)
  43703c:	928bffff 	lbu	t3,-1(s4)
  437040:	00000000 	nop
  437044:	a3cb0003 	sb	t3,3(s8)
  437048:	8fad0230 	lw	t5,560(sp)
  43704c:	8fac1a08 	lw	t4,6664(sp)
  437050:	8e56fffc 	lw	s6,-4(s2)
  437054:	018d7021 	addu	t6,t4,t5
  437058:	add60000 	sw	s6,0(t6)
  43705c:	92900000 	lbu	s0,0(s4)
  437060:	1000fa98 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437064:	2401001b 	li	at,27
  437068:	928f0001 	lbu	t7,1(s4)
  43706c:	02408025 	move	s0,s2
  437070:	a3cf0000 	sb	t7,0(s8)
  437074:	92980002 	lbu	t8,2(s4)
  437078:	26940005 	addiu	s4,s4,5
  43707c:	a3d80001 	sb	t8,1(s8)
  437080:	9299fffe 	lbu	t9,-2(s4)
  437084:	26520004 	addiu	s2,s2,4
  437088:	a3d90002 	sb	t9,2(s8)
  43708c:	9288ffff 	lbu	t0,-1(s4)
  437090:	00000000 	nop
  437094:	a3c80003 	sb	t0,3(s8)
  437098:	8faa0230 	lw	t2,560(sp)
  43709c:	8fa91a08 	lw	t1,6664(sp)
  4370a0:	00000000 	nop
  4370a4:	012a5821 	addu	t3,t1,t2
  4370a8:	c5740000 	lwc1	$f20,0(t3)
  4370ac:	00000000 	nop
  4370b0:	e6140000 	swc1	$f20,0(s0)
  4370b4:	92900000 	lbu	s0,0(s4)
  4370b8:	1000fa82 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4370bc:	2401001b 	li	at,27
  4370c0:	928c0001 	lbu	t4,1(s4)
  4370c4:	02408025 	move	s0,s2
  4370c8:	a3cc0000 	sb	t4,0(s8)
  4370cc:	928d0002 	lbu	t5,2(s4)
  4370d0:	26940005 	addiu	s4,s4,5
  4370d4:	a3cd0001 	sb	t5,1(s8)
  4370d8:	928efffe 	lbu	t6,-2(s4)
  4370dc:	26520004 	addiu	s2,s2,4
  4370e0:	a3ce0002 	sb	t6,2(s8)
  4370e4:	928fffff 	lbu	t7,-1(s4)
  4370e8:	00000000 	nop
  4370ec:	a3cf0003 	sb	t7,3(s8)
  4370f0:	8fb90230 	lw	t9,560(sp)
  4370f4:	8fb81a08 	lw	t8,6664(sp)
  4370f8:	00000000 	nop
  4370fc:	03194021 	addu	t0,t8,t9
  437100:	8d160000 	lw	s6,0(t0)
  437104:	00000000 	nop
  437108:	ae160000 	sw	s6,0(s0)
  43710c:	92900000 	lbu	s0,0(s4)
  437110:	1000fa6c 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437114:	2401001b 	li	at,27
  437118:	92890001 	lbu	t1,1(s4)
  43711c:	26520004 	addiu	s2,s2,4
  437120:	a249fffc 	sb	t1,-4(s2)
  437124:	928a0002 	lbu	t2,2(s4)
  437128:	26940005 	addiu	s4,s4,5
  43712c:	a24afffd 	sb	t2,-3(s2)
  437130:	928bfffe 	lbu	t3,-2(s4)
  437134:	00000000 	nop
  437138:	a24bfffe 	sb	t3,-2(s2)
  43713c:	928cffff 	lbu	t4,-1(s4)
  437140:	00000000 	nop
  437144:	a24cffff 	sb	t4,-1(s2)
  437148:	92900000 	lbu	s0,0(s4)
  43714c:	1000fa5d 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437150:	2401001b 	li	at,27
  437154:	928d0001 	lbu	t5,1(s4)
  437158:	02408025 	move	s0,s2
  43715c:	a3cd0000 	sb	t5,0(s8)
  437160:	928e0002 	lbu	t6,2(s4)
  437164:	26940005 	addiu	s4,s4,5
  437168:	a3ce0001 	sb	t6,1(s8)
  43716c:	928ffffe 	lbu	t7,-2(s4)
  437170:	26520004 	addiu	s2,s2,4
  437174:	a3cf0002 	sb	t7,2(s8)
  437178:	9298ffff 	lbu	t8,-1(s4)
  43717c:	00000000 	nop
  437180:	a3d80003 	sb	t8,3(s8)
  437184:	8fb60230 	lw	s6,560(sp)
  437188:	00000000 	nop
  43718c:	ae160000 	sw	s6,0(s0)
  437190:	92900000 	lbu	s0,0(s4)
  437194:	1000fa4b 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437198:	2401001b 	li	at,27
  43719c:	92900001 	lbu	s0,1(s4)
  4371a0:	1000fa47 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4371a4:	26940001 	addiu	s4,s4,1
  4371a8:	92900001 	lbu	s0,1(s4)
  4371ac:	1000fa44 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4371b0:	26940001 	addiu	s4,s4,1
  4371b4:	92900001 	lbu	s0,1(s4)
  4371b8:	1000fa41 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4371bc:	26940001 	addiu	s4,s4,1
  4371c0:	8ef90220 	lw	t9,544(s7)
  4371c4:	26940001 	addiu	s4,s4,1
  4371c8:	13200007 	beqz	t9,4371e8 <run__19FileIconInterpreterFPcPvT1+0x17cc>
  4371cc:	00000000 	nop
  4371d0:	8ee80224 	lw	t0,548(s7)
  4371d4:	02408025 	move	s0,s2
  4371d8:	ae080000 	sw	t0,0(s0)
  4371dc:	92900000 	lbu	s0,0(s4)
  4371e0:	1000fa37 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4371e4:	26520004 	addiu	s2,s2,4
  4371e8:	8ee90234 	lw	t1,564(s7)
  4371ec:	00000000 	nop
  4371f0:	15200003 	bnez	t1,437200 <run__19FileIconInterpreterFPcPvT1+0x17e4>
  4371f4:	00000000 	nop
  4371f8:	1000001c 	b	43726c <run__19FileIconInterpreterFPcPvT1+0x1850>
  4371fc:	0000b025 	move	s6,zero
  437200:	8eea02cc 	lw	t2,716(s7)
  437204:	00000000 	nop
  437208:	1d400003 	bgtz	t2,437218 <run__19FileIconInterpreterFPcPvT1+0x17fc>
  43720c:	00000000 	nop
  437210:	10000016 	b	43726c <run__19FileIconInterpreterFPcPvT1+0x1850>
  437214:	0000b025 	move	s6,zero
  437218:	26eb0020 	addiu	t3,s7,32
  43721c:	afab021c 	sw	t3,540(sp)
  437220:	8eed02cc 	lw	t5,716(s7)
  437224:	24160001 	li	s6,1
  437228:	016d1021 	addu	v0,t3,t5
  43722c:	1162000f 	beq	t3,v0,43726c <run__19FileIconInterpreterFPcPvT1+0x1850>
  437230:	01606025 	move	t4,t3
  437234:	8fae021c 	lw	t6,540(sp)
  437238:	2401ff80 	li	at,-128
  43723c:	91cf0000 	lbu	t7,0(t6)
  437240:	00000000 	nop
  437244:	01e1c024 	and	t8,t7,at
  437248:	13000003 	beqz	t8,437258 <run__19FileIconInterpreterFPcPvT1+0x183c>
  43724c:	00000000 	nop
  437250:	10000006 	b	43726c <run__19FileIconInterpreterFPcPvT1+0x1850>
  437254:	0000b025 	move	s6,zero
  437258:	8fb9021c 	lw	t9,540(sp)
  43725c:	00000000 	nop
  437260:	27280001 	addiu	t0,t9,1
  437264:	1502fff3 	bne	t0,v0,437234 <run__19FileIconInterpreterFPcPvT1+0x1818>
  437268:	afa8021c 	sw	t0,540(sp)
  43726c:	24090001 	li	t1,1
  437270:	aee90220 	sw	t1,544(s7)
  437274:	aef60224 	sw	s6,548(s7)
  437278:	02408025 	move	s0,s2
  43727c:	ae160000 	sw	s6,0(s0)
  437280:	92900000 	lbu	s0,0(s4)
  437284:	1000fa0e 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437288:	26520004 	addiu	s2,s2,4
  43728c:	8eea0230 	lw	t2,560(s7)
  437290:	26940001 	addiu	s4,s4,1
  437294:	11400007 	beqz	t2,4372b4 <run__19FileIconInterpreterFPcPvT1+0x1898>
  437298:	02408025 	move	s0,s2
  43729c:	8eeb0258 	lw	t3,600(s7)
  4372a0:	02408025 	move	s0,s2
  4372a4:	26520004 	addiu	s2,s2,4
  4372a8:	10000005 	b	4372c0 <run__19FileIconInterpreterFPcPvT1+0x18a4>
  4372ac:	ae0b0000 	sw	t3,0(s0)
  4372b0:	02408025 	move	s0,s2
  4372b4:	240dffff 	li	t5,-1
  4372b8:	ae0d0000 	sw	t5,0(s0)
  4372bc:	26520004 	addiu	s2,s2,4
  4372c0:	92900000 	lbu	s0,0(s4)
  4372c4:	1000f9ff 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  4372c8:	2401001b 	li	at,27
  4372cc:	8eec0230 	lw	t4,560(s7)
  4372d0:	26940001 	addiu	s4,s4,1
  4372d4:	11800007 	beqz	t4,4372f4 <run__19FileIconInterpreterFPcPvT1+0x18d8>
  4372d8:	02408025 	move	s0,s2
  4372dc:	8eee0274 	lw	t6,628(s7)
  4372e0:	02408025 	move	s0,s2
  4372e4:	26520004 	addiu	s2,s2,4
  4372e8:	10000005 	b	437300 <run__19FileIconInterpreterFPcPvT1+0x18e4>
  4372ec:	ae0e0000 	sw	t6,0(s0)
  4372f0:	02408025 	move	s0,s2
  4372f4:	240fffff 	li	t7,-1
  4372f8:	ae0f0000 	sw	t7,0(s0)
  4372fc:	26520004 	addiu	s2,s2,4
  437300:	92900000 	lbu	s0,0(s4)
  437304:	1000f9ef 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437308:	2401001b 	li	at,27
  43730c:	8ef80230 	lw	t8,560(s7)
  437310:	26940001 	addiu	s4,s4,1
  437314:	13000007 	beqz	t8,437334 <run__19FileIconInterpreterFPcPvT1+0x1918>
  437318:	02408025 	move	s0,s2
  43731c:	8ef9025c 	lw	t9,604(s7)
  437320:	02408025 	move	s0,s2
  437324:	26520004 	addiu	s2,s2,4
  437328:	10000005 	b	437340 <run__19FileIconInterpreterFPcPvT1+0x1924>
  43732c:	ae190000 	sw	t9,0(s0)
  437330:	02408025 	move	s0,s2
  437334:	2408ffff 	li	t0,-1
  437338:	ae080000 	sw	t0,0(s0)
  43733c:	26520004 	addiu	s2,s2,4
  437340:	92900000 	lbu	s0,0(s4)
  437344:	1000f9df 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437348:	2401001b 	li	at,27
  43734c:	8ee90234 	lw	t1,564(s7)
  437350:	26940001 	addiu	s4,s4,1
  437354:	15200006 	bnez	t1,437370 <run__19FileIconInterpreterFPcPvT1+0x1954>
  437358:	02408025 	move	s0,s2
  43735c:	240affff 	li	t2,-1
  437360:	ae0a0000 	sw	t2,0(s0)
  437364:	92900000 	lbu	s0,0(s4)
  437368:	1000f9d5 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  43736c:	26520004 	addiu	s2,s2,4
  437370:	8ee302cc 	lw	v1,716(s7)
  437374:	00000000 	nop
  437378:	28610048 	slti	at,v1,72
  43737c:	1420035d 	bnez	at,4380f4 <run__19FileIconInterpreterFPcPvT1+0x26d8>
  437380:	2861000d 	slti	at,v1,13
  437384:	8f99887c 	lw	t9,-30596(gp)
  437388:	26e40020 	addiu	a0,s7,32
  43738c:	0320f809 	jalr	t9
  437390:	00000000 	nop
  437394:	8fbc0064 	lw	gp,100(sp)
  437398:	24010160 	li	at,352
  43739c:	10410004 	beq	v0,at,4373b0 <run__19FileIconInterpreterFPcPvT1+0x1994>
  4373a0:	00000000 	nop
  4373a4:	8ee302cc 	lw	v1,716(s7)
  4373a8:	10000352 	b	4380f4 <run__19FileIconInterpreterFPcPvT1+0x26d8>
  4373ac:	2861000d 	slti	at,v1,13
  4373b0:	8f99887c 	lw	t9,-30596(gp)
  4373b4:	26e40034 	addiu	a0,s7,52
  4373b8:	0320f809 	jalr	t9
  4373bc:	00000000 	nop
  4373c0:	00565826 	xor	t3,v0,s6
  4373c4:	000b582b 	sltu	t3,zero,t3
  4373c8:	8fbc0064 	lw	gp,100(sp)
  4373cc:	24010108 	li	at,264
  4373d0:	15610008 	bne	t3,at,4373f4 <run__19FileIconInterpreterFPcPvT1+0x19d8>
  4373d4:	2401010b 	li	at,267
  4373d8:	12c10006 	beq	s6,at,4373f4 <run__19FileIconInterpreterFPcPvT1+0x19d8>
  4373dc:	02408025 	move	s0,s2
  4373e0:	240dffff 	li	t5,-1
  4373e4:	ae0d0000 	sw	t5,0(s0)
  4373e8:	92900000 	lbu	s0,0(s4)
  4373ec:	1000f9b4 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  4373f0:	26520004 	addiu	s2,s2,4
  4373f4:	92ec0032 	lbu	t4,50(s7)
  4373f8:	00000000 	nop
  4373fc:	318e0080 	andi	t6,t4,0x80
  437400:	15c00006 	bnez	t6,43741c <run__19FileIconInterpreterFPcPvT1+0x1a00>
  437404:	02408025 	move	s0,s2
  437408:	240fffff 	li	t7,-1
  43740c:	ae0f0000 	sw	t7,0(s0)
  437410:	92900000 	lbu	s0,0(s4)
  437414:	1000f9aa 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437418:	26520004 	addiu	s2,s2,4
  43741c:	8ef80258 	lw	t8,600(s7)
  437420:	00000000 	nop
  437424:	33190049 	andi	t9,t8,0x49
  437428:	17200006 	bnez	t9,437444 <run__19FileIconInterpreterFPcPvT1+0x1a28>
  43742c:	02408025 	move	s0,s2
  437430:	2408ffff 	li	t0,-1
  437434:	ae080000 	sw	t0,0(s0)
  437438:	92900000 	lbu	s0,0(s4)
  43743c:	1000f9a0 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437440:	26520004 	addiu	s2,s2,4
  437444:	8f998880 	lw	t9,-30592(gp)
  437448:	02408025 	move	s0,s2
  43744c:	26520004 	addiu	s2,s2,4
  437450:	0320f809 	jalr	t9
  437454:	26e40064 	addiu	a0,s7,100
  437458:	8fbc0064 	lw	gp,100(sp)
  43745c:	ae020000 	sw	v0,0(s0)
  437460:	92900000 	lbu	s0,0(s4)
  437464:	1000f997 	b	435ac4 <run__19FileIconInterpreterFPcPvT1+0xa8>
  437468:	2401001b 	li	at,27
  43746c:	8e56fffc 	lw	s6,-4(s2)
  437470:	26940001 	addiu	s4,s4,1
  437474:	06c10003 	bgez	s6,437484 <run__19FileIconInterpreterFPcPvT1+0x1a68>
  437478:	2652fffc 	addiu	s2,s2,-4
  43747c:	10000034 	b	437550 <run__19FileIconInterpreterFPcPvT1+0x1b34>
  437480:	2413ffff 	li	s3,-1
  437484:	8ee9023c 	lw	t1,572(s7)
  437488:	00000000 	nop
  43748c:	15200003 	bnez	t1,43749c <run__19FileIconInterpreterFPcPvT1+0x1a80>
  437490:	00000000 	nop
  437494:	1000002e 	b	437550 <run__19FileIconInterpreterFPcPvT1+0x1b34>
  437498:	2413ffff 	li	s3,-1
  43749c:	8eea0234 	lw	t2,564(s7)
  4374a0:	00000000 	nop
  4374a4:	1140001d 	beqz	t2,43751c <run__19FileIconInterpreterFPcPvT1+0x1b00>
  4374a8:	00000000 	nop
  4374ac:	8ee302cc 	lw	v1,716(s7)
  4374b0:	26cb0001 	addiu	t3,s6,1
  4374b4:	006b082b 	sltu	at,v1,t3
  4374b8:	14200006 	bnez	at,4374d4 <run__19FileIconInterpreterFPcPvT1+0x1ab8>
  4374bc:	24010200 	li	at,512
  4374c0:	02f66821 	addu	t5,s7,s6
  4374c4:	91b30020 	lbu	s3,32(t5)
  4374c8:	10000022 	b	437554 <run__19FileIconInterpreterFPcPvT1+0x1b38>
  4374cc:	02408025 	move	s0,s2
  4374d0:	24010200 	li	at,512
  4374d4:	10610003 	beq	v1,at,4374e4 <run__19FileIconInterpreterFPcPvT1+0x1ac8>
  4374d8:	00000000 	nop
  4374dc:	1000001c 	b	437550 <run__19FileIconInterpreterFPcPvT1+0x1b34>
  4374e0:	2413ffff 	li	s3,-1
  4374e4:	8f998888 	lw	t9,-30584(gp)
  4374e8:	8ee40238 	lw	a0,568(s7)
  4374ec:	02c02825 	move	a1,s6
  4374f0:	27a6022f 	addiu	a2,sp,559
  4374f4:	0320f809 	jalr	t9
  4374f8:	24070001 	li	a3,1
  4374fc:	8fbc0064 	lw	gp,100(sp)
  437500:	10400004 	beqz	v0,437514 <run__19FileIconInterpreterFPcPvT1+0x1af8>
  437504:	93b3022f 	lbu	s3,559(sp)
  437508:	10000011 	b	437550 <run__19FileIconInterpreterFPcPvT1+0x1b34>
  43750c:	2413ffff 	li	s3,-1
  437510:	93b3022f 	lbu	s3,559(sp)
  437514:	1000000f 	b	437554 <run__19FileIconInterpreterFPcPvT1+0x1b38>
  437518:	02408025 	move	s0,s2
  43751c:	8f998888 	lw	t9,-30584(gp)
  437520:	8ee40238 	lw	a0,568(s7)
  437524:	02c02825 	move	a1,s6
  437528:	27a6022f 	addiu	a2,sp,559
  43752c:	0320f809 	jalr	t9
  437530:	24070001 	li	a3,1
  437534:	8fbc0064 	lw	gp,100(sp)
  437538:	10400004 	beqz	v0,43754c <run__19FileIconInterpreterFPcPvT1+0x1b30>
  43753c:	93b3022f 	lbu	s3,559(sp)
  437540:	10000003 	b	437550 <run__19FileIconInterpreterFPcPvT1+0x1b34>
  437544:	2413ffff 	li	s3,-1
  437548:	93b3022f 	lbu	s3,559(sp)
  43754c:	00000000 	nop
  437550:	02408025 	move	s0,s2
  437554:	ae130000 	sw	s3,0(s0)
  437558:	92900000 	lbu	s0,0(s4)
  43755c:	1000f958 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437560:	26520004 	addiu	s2,s2,4
  437564:	8e56fffc 	lw	s6,-4(s2)
  437568:	26940001 	addiu	s4,s4,1
  43756c:	06c10003 	bgez	s6,43757c <run__19FileIconInterpreterFPcPvT1+0x1b60>
  437570:	2652fffc 	addiu	s2,s2,-4
  437574:	10000038 	b	437658 <run__19FileIconInterpreterFPcPvT1+0x1c3c>
  437578:	2413ffff 	li	s3,-1
  43757c:	8eec023c 	lw	t4,572(s7)
  437580:	00000000 	nop
  437584:	15800003 	bnez	t4,437594 <run__19FileIconInterpreterFPcPvT1+0x1b78>
  437588:	00000000 	nop
  43758c:	10000032 	b	437658 <run__19FileIconInterpreterFPcPvT1+0x1c3c>
  437590:	2413ffff 	li	s3,-1
  437594:	8eee0234 	lw	t6,564(s7)
  437598:	00000000 	nop
  43759c:	11c00021 	beqz	t6,437624 <run__19FileIconInterpreterFPcPvT1+0x1c08>
  4375a0:	00000000 	nop
  4375a4:	8ee302cc 	lw	v1,716(s7)
  4375a8:	26cf0002 	addiu	t7,s6,2
  4375ac:	006f082b 	sltu	at,v1,t7
  4375b0:	1420000a 	bnez	at,4375dc <run__19FileIconInterpreterFPcPvT1+0x1bc0>
  4375b4:	24010200 	li	at,512
  4375b8:	8f99887c 	lw	t9,-30596(gp)
  4375bc:	02f62021 	addu	a0,s7,s6
  4375c0:	0320f809 	jalr	t9
  4375c4:	24840020 	addiu	a0,a0,32
  4375c8:	8fbc0064 	lw	gp,100(sp)
  4375cc:	a7a2022c 	sh	v0,556(sp)
  4375d0:	10000021 	b	437658 <run__19FileIconInterpreterFPcPvT1+0x1c3c>
  4375d4:	00409825 	move	s3,v0
  4375d8:	24010200 	li	at,512
  4375dc:	10610003 	beq	v1,at,4375ec <run__19FileIconInterpreterFPcPvT1+0x1bd0>
  4375e0:	00000000 	nop
  4375e4:	1000001c 	b	437658 <run__19FileIconInterpreterFPcPvT1+0x1c3c>
  4375e8:	2413ffff 	li	s3,-1
  4375ec:	8f998888 	lw	t9,-30584(gp)
  4375f0:	8ee40238 	lw	a0,568(s7)
  4375f4:	02c02825 	move	a1,s6
  4375f8:	27a6022c 	addiu	a2,sp,556
  4375fc:	0320f809 	jalr	t9
  437600:	24070002 	li	a3,2
  437604:	8fbc0064 	lw	gp,100(sp)
  437608:	10400004 	beqz	v0,43761c <run__19FileIconInterpreterFPcPvT1+0x1c00>
  43760c:	87b3022c 	lh	s3,556(sp)
  437610:	10000011 	b	437658 <run__19FileIconInterpreterFPcPvT1+0x1c3c>
  437614:	2413ffff 	li	s3,-1
  437618:	87b3022c 	lh	s3,556(sp)
  43761c:	1000000f 	b	43765c <run__19FileIconInterpreterFPcPvT1+0x1c40>
  437620:	02408025 	move	s0,s2
  437624:	8f998888 	lw	t9,-30584(gp)
  437628:	8ee40238 	lw	a0,568(s7)
  43762c:	02c02825 	move	a1,s6
  437630:	27a6022c 	addiu	a2,sp,556
  437634:	0320f809 	jalr	t9
  437638:	24070002 	li	a3,2
  43763c:	8fbc0064 	lw	gp,100(sp)
  437640:	10400004 	beqz	v0,437654 <run__19FileIconInterpreterFPcPvT1+0x1c38>
  437644:	87b3022c 	lh	s3,556(sp)
  437648:	10000003 	b	437658 <run__19FileIconInterpreterFPcPvT1+0x1c3c>
  43764c:	2413ffff 	li	s3,-1
  437650:	87b3022c 	lh	s3,556(sp)
  437654:	00000000 	nop
  437658:	02408025 	move	s0,s2
  43765c:	ae130000 	sw	s3,0(s0)
  437660:	92900000 	lbu	s0,0(s4)
  437664:	1000f916 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437668:	26520004 	addiu	s2,s2,4
  43766c:	8e56fffc 	lw	s6,-4(s2)
  437670:	26940001 	addiu	s4,s4,1
  437674:	06c10003 	bgez	s6,437684 <run__19FileIconInterpreterFPcPvT1+0x1c68>
  437678:	2652fffc 	addiu	s2,s2,-4
  43767c:	10000038 	b	437760 <run__19FileIconInterpreterFPcPvT1+0x1d44>
  437680:	2413ffff 	li	s3,-1
  437684:	8ef8023c 	lw	t8,572(s7)
  437688:	00000000 	nop
  43768c:	17000003 	bnez	t8,43769c <run__19FileIconInterpreterFPcPvT1+0x1c80>
  437690:	00000000 	nop
  437694:	10000032 	b	437760 <run__19FileIconInterpreterFPcPvT1+0x1d44>
  437698:	2413ffff 	li	s3,-1
  43769c:	8ef90234 	lw	t9,564(s7)
  4376a0:	00000000 	nop
  4376a4:	13200021 	beqz	t9,43772c <run__19FileIconInterpreterFPcPvT1+0x1d10>
  4376a8:	00000000 	nop
  4376ac:	8ee302cc 	lw	v1,716(s7)
  4376b0:	26c80004 	addiu	t0,s6,4
  4376b4:	0068082b 	sltu	at,v1,t0
  4376b8:	1420000a 	bnez	at,4376e4 <run__19FileIconInterpreterFPcPvT1+0x1cc8>
  4376bc:	24010200 	li	at,512
  4376c0:	8f998880 	lw	t9,-30592(gp)
  4376c4:	02f62021 	addu	a0,s7,s6
  4376c8:	0320f809 	jalr	t9
  4376cc:	24840020 	addiu	a0,a0,32
  4376d0:	8fbc0064 	lw	gp,100(sp)
  4376d4:	afa20228 	sw	v0,552(sp)
  4376d8:	10000021 	b	437760 <run__19FileIconInterpreterFPcPvT1+0x1d44>
  4376dc:	00409825 	move	s3,v0
  4376e0:	24010200 	li	at,512
  4376e4:	10610003 	beq	v1,at,4376f4 <run__19FileIconInterpreterFPcPvT1+0x1cd8>
  4376e8:	00000000 	nop
  4376ec:	1000001c 	b	437760 <run__19FileIconInterpreterFPcPvT1+0x1d44>
  4376f0:	2413ffff 	li	s3,-1
  4376f4:	8f998888 	lw	t9,-30584(gp)
  4376f8:	8ee40238 	lw	a0,568(s7)
  4376fc:	02c02825 	move	a1,s6
  437700:	27a60228 	addiu	a2,sp,552
  437704:	0320f809 	jalr	t9
  437708:	24070004 	li	a3,4
  43770c:	8fbc0064 	lw	gp,100(sp)
  437710:	10400004 	beqz	v0,437724 <run__19FileIconInterpreterFPcPvT1+0x1d08>
  437714:	8fb30228 	lw	s3,552(sp)
  437718:	10000011 	b	437760 <run__19FileIconInterpreterFPcPvT1+0x1d44>
  43771c:	2413ffff 	li	s3,-1
  437720:	8fb30228 	lw	s3,552(sp)
  437724:	1000000f 	b	437764 <run__19FileIconInterpreterFPcPvT1+0x1d48>
  437728:	02408025 	move	s0,s2
  43772c:	8f998888 	lw	t9,-30584(gp)
  437730:	8ee40238 	lw	a0,568(s7)
  437734:	02c02825 	move	a1,s6
  437738:	27a60228 	addiu	a2,sp,552
  43773c:	0320f809 	jalr	t9
  437740:	24070004 	li	a3,4
  437744:	8fbc0064 	lw	gp,100(sp)
  437748:	10400004 	beqz	v0,43775c <run__19FileIconInterpreterFPcPvT1+0x1d40>
  43774c:	8fb30228 	lw	s3,552(sp)
  437750:	10000003 	b	437760 <run__19FileIconInterpreterFPcPvT1+0x1d44>
  437754:	2413ffff 	li	s3,-1
  437758:	8fb30228 	lw	s3,552(sp)
  43775c:	00000000 	nop
  437760:	02408025 	move	s0,s2
  437764:	ae130000 	sw	s3,0(s0)
  437768:	92900000 	lbu	s0,0(s4)
  43776c:	1000f8d4 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437770:	26520004 	addiu	s2,s2,4
  437774:	8ee9023c 	lw	t1,572(s7)
  437778:	8e56fffc 	lw	s6,-4(s2)
  43777c:	26940001 	addiu	s4,s4,1
  437780:	15200003 	bnez	t1,437790 <run__19FileIconInterpreterFPcPvT1+0x1d74>
  437784:	2652fffc 	addiu	s2,s2,-4
  437788:	1000002e 	b	437844 <run__19FileIconInterpreterFPcPvT1+0x1e28>
  43778c:	2413ffff 	li	s3,-1
  437790:	8eea0234 	lw	t2,564(s7)
  437794:	00000000 	nop
  437798:	1140001d 	beqz	t2,437810 <run__19FileIconInterpreterFPcPvT1+0x1df4>
  43779c:	00000000 	nop
  4377a0:	8ee302cc 	lw	v1,716(s7)
  4377a4:	26cb0001 	addiu	t3,s6,1
  4377a8:	006b082b 	sltu	at,v1,t3
  4377ac:	14200006 	bnez	at,4377c8 <run__19FileIconInterpreterFPcPvT1+0x1dac>
  4377b0:	24010200 	li	at,512
  4377b4:	02f66821 	addu	t5,s7,s6
  4377b8:	91b30020 	lbu	s3,32(t5)
  4377bc:	10000022 	b	437848 <run__19FileIconInterpreterFPcPvT1+0x1e2c>
  4377c0:	02408025 	move	s0,s2
  4377c4:	24010200 	li	at,512
  4377c8:	10610003 	beq	v1,at,4377d8 <run__19FileIconInterpreterFPcPvT1+0x1dbc>
  4377cc:	00000000 	nop
  4377d0:	1000001c 	b	437844 <run__19FileIconInterpreterFPcPvT1+0x1e28>
  4377d4:	2413ffff 	li	s3,-1
  4377d8:	8f998888 	lw	t9,-30584(gp)
  4377dc:	8ee40238 	lw	a0,568(s7)
  4377e0:	02c02825 	move	a1,s6
  4377e4:	27a60227 	addiu	a2,sp,551
  4377e8:	0320f809 	jalr	t9
  4377ec:	24070001 	li	a3,1
  4377f0:	8fbc0064 	lw	gp,100(sp)
  4377f4:	10400004 	beqz	v0,437808 <run__19FileIconInterpreterFPcPvT1+0x1dec>
  4377f8:	93b30227 	lbu	s3,551(sp)
  4377fc:	10000011 	b	437844 <run__19FileIconInterpreterFPcPvT1+0x1e28>
  437800:	2413ffff 	li	s3,-1
  437804:	93b30227 	lbu	s3,551(sp)
  437808:	1000000f 	b	437848 <run__19FileIconInterpreterFPcPvT1+0x1e2c>
  43780c:	02408025 	move	s0,s2
  437810:	8f998888 	lw	t9,-30584(gp)
  437814:	8ee40238 	lw	a0,568(s7)
  437818:	02c02825 	move	a1,s6
  43781c:	27a60227 	addiu	a2,sp,551
  437820:	0320f809 	jalr	t9
  437824:	24070001 	li	a3,1
  437828:	8fbc0064 	lw	gp,100(sp)
  43782c:	10400004 	beqz	v0,437840 <run__19FileIconInterpreterFPcPvT1+0x1e24>
  437830:	93b30227 	lbu	s3,551(sp)
  437834:	10000003 	b	437844 <run__19FileIconInterpreterFPcPvT1+0x1e28>
  437838:	2413ffff 	li	s3,-1
  43783c:	93b30227 	lbu	s3,551(sp)
  437840:	00000000 	nop
  437844:	02408025 	move	s0,s2
  437848:	ae130000 	sw	s3,0(s0)
  43784c:	92900000 	lbu	s0,0(s4)
  437850:	1000f89b 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437854:	26520004 	addiu	s2,s2,4
  437858:	8e56fffc 	lw	s6,-4(s2)
  43785c:	26940001 	addiu	s4,s4,1
  437860:	06c10003 	bgez	s6,437870 <run__19FileIconInterpreterFPcPvT1+0x1e54>
  437864:	2652fffc 	addiu	s2,s2,-4
  437868:	1000003a 	b	437954 <run__19FileIconInterpreterFPcPvT1+0x1f38>
  43786c:	2413ffff 	li	s3,-1
  437870:	8eec023c 	lw	t4,572(s7)
  437874:	00000000 	nop
  437878:	15800003 	bnez	t4,437888 <run__19FileIconInterpreterFPcPvT1+0x1e6c>
  43787c:	00000000 	nop
  437880:	10000034 	b	437954 <run__19FileIconInterpreterFPcPvT1+0x1f38>
  437884:	2413ffff 	li	s3,-1
  437888:	8eee0234 	lw	t6,564(s7)
  43788c:	00000000 	nop
  437890:	11c00022 	beqz	t6,43791c <run__19FileIconInterpreterFPcPvT1+0x1f00>
  437894:	00000000 	nop
  437898:	8ee302cc 	lw	v1,716(s7)
  43789c:	26cf0002 	addiu	t7,s6,2
  4378a0:	006f082b 	sltu	at,v1,t7
  4378a4:	1420000b 	bnez	at,4378d4 <run__19FileIconInterpreterFPcPvT1+0x1eb8>
  4378a8:	24010200 	li	at,512
  4378ac:	8f99887c 	lw	t9,-30596(gp)
  4378b0:	02f62021 	addu	a0,s7,s6
  4378b4:	0320f809 	jalr	t9
  4378b8:	24840020 	addiu	a0,a0,32
  4378bc:	8fbc0064 	lw	gp,100(sp)
  4378c0:	3043ffff 	andi	v1,v0,0xffff
  4378c4:	00609825 	move	s3,v1
  4378c8:	10000022 	b	437954 <run__19FileIconInterpreterFPcPvT1+0x1f38>
  4378cc:	a7a30224 	sh	v1,548(sp)
  4378d0:	24010200 	li	at,512
  4378d4:	10610003 	beq	v1,at,4378e4 <run__19FileIconInterpreterFPcPvT1+0x1ec8>
  4378d8:	00000000 	nop
  4378dc:	1000001d 	b	437954 <run__19FileIconInterpreterFPcPvT1+0x1f38>
  4378e0:	2413ffff 	li	s3,-1
  4378e4:	8f998888 	lw	t9,-30584(gp)
  4378e8:	8ee40238 	lw	a0,568(s7)
  4378ec:	02c02825 	move	a1,s6
  4378f0:	27a60224 	addiu	a2,sp,548
  4378f4:	0320f809 	jalr	t9
  4378f8:	24070002 	li	a3,2
  4378fc:	8fbc0064 	lw	gp,100(sp)
  437900:	10400003 	beqz	v0,437910 <run__19FileIconInterpreterFPcPvT1+0x1ef4>
  437904:	00000000 	nop
  437908:	10000012 	b	437954 <run__19FileIconInterpreterFPcPvT1+0x1f38>
  43790c:	2413ffff 	li	s3,-1
  437910:	97a30224 	lhu	v1,548(sp)
  437914:	1000000f 	b	437954 <run__19FileIconInterpreterFPcPvT1+0x1f38>
  437918:	00609825 	move	s3,v1
  43791c:	8f998888 	lw	t9,-30584(gp)
  437920:	8ee40238 	lw	a0,568(s7)
  437924:	02c02825 	move	a1,s6
  437928:	27a60224 	addiu	a2,sp,548
  43792c:	0320f809 	jalr	t9
  437930:	24070002 	li	a3,2
  437934:	8fbc0064 	lw	gp,100(sp)
  437938:	10400003 	beqz	v0,437948 <run__19FileIconInterpreterFPcPvT1+0x1f2c>
  43793c:	00000000 	nop
  437940:	10000004 	b	437954 <run__19FileIconInterpreterFPcPvT1+0x1f38>
  437944:	2413ffff 	li	s3,-1
  437948:	97a30224 	lhu	v1,548(sp)
  43794c:	00000000 	nop
  437950:	00609825 	move	s3,v1
  437954:	02408025 	move	s0,s2
  437958:	ae130000 	sw	s3,0(s0)
  43795c:	92900000 	lbu	s0,0(s4)
  437960:	1000f857 	b	435ac0 <run__19FileIconInterpreterFPcPvT1+0xa4>
  437964:	26520004 	addiu	s2,s2,4
  437968:	8e56fffc 	lw	s6,-4(s2)
  43796c:	26940001 	addiu	s4,s4,1
  437970:	06c10003 	bgez	s6,437980 <run__19FileIconInterpreterFPcPvT1+0x1f64>
  437974:	2652fffc 	addiu	s2,s2,-4
  437978:	10000038 	b	437a5c <run__19FileIconInterpreterFPcPvT1+0x2040>
  43797c:	2413ffff 	li	s3,-1
  437980:	8ef8023c 	lw	t8,572(s7)
  437984:	00000000 	nop
  437988:	17000003 	bnez	t8,437998 <run__19FileIconInterpreterFPcPvT1+0x1f7c>
  43798c:	00000000 	nop
  437990:	10000032 	b	437a5c <run__19FileIconInterpreterFPcPvT1+0x2040>
  437994:	2413ffff 	li	s3,-1
  437998:	8ef90234 	lw	t9,564(s7)
  43799c:	00000000 	nop
  4379a0:	13200021 	beqz	t9,437a28 <run__19FileIconInterpreterFPcPvT1+0x200c>
  4379a4:	00000000 	nop
  4379a8:	8ee302cc 	lw	v1,716(s7)
  4379ac:	26c80004 	addiu	t0,s6,4
  4379b0:	0068082b 	sltu	at,v1,t0
  4379b4:	1420000a 	bnez	at,4379e0 <run__19FileIconInterpreterFPcPvT1+0x1fc4>
  4379b8:	24010200 	li	at,512
  4379bc:	8f998880 	lw	t9,-30592(gp)
  4379c0:	02f62021 	addu	a0,s7,s6
  4379c4:	0320f809 	jalr	t9
  4379c8:	24840020 	addiu	a0,a0,32
  4379cc:	8fbc0064 	lw	gp,100(sp)
  4379d0:	afa20220 	sw	v0,544(sp)
  4379d4:	10000021 	b	437a5c <run__19FileIconInterpreterFPcPvT1+0x2040>
  4379d8:	00409825 	move	s3,v0
  4379dc:	24010200 	li	at,512
  4379e0:	10610003 	beq	v1,at,4379f0 <run__19FileIconInterpreterFPcPvT1+0x1fd4>
  4379e4:	00000000 	nop
  4379e8:	1000001c 	b	437a5c <run__19FileIconInterpreterFPcPvT1+0x2040>
  4379ec:	2413ffff 	li	s3,-1
  4379f0:	8f998888 	lw	t9,-30584(gp)
  4379f4:	8ee40238 	lw	a0,568(s7)
  4379f8:	02c02825 	move	a1,s6
  4379fc:	27a60220 	addiu	a2,sp,544
  437a00:	0320f809 	jalr	t9
  437a04:	24070004 	li	a3,4
  437a08:	8fbc0064 	lw	gp,100(sp)
  437a0c:	10400004 	beqz	v0,437a20 <run__19FileIconInterpreterFPcPvT1+0x2004>
  437a10:	8fb30220 	lw	s3,544(sp)
  437a14:	10000011 	b	437a5c <run__19FileIconInterpreterFPcPvT1+0x2040>
  437a18:	2413ffff 	li	s3,-1
  437a1c:	8fb30220 	lw	s3,544(sp)
  437a20:	1000000f 	b	437a60 <run__19FileIconInterpreterFPcPvT1+0x2044>
