# Function: setMoveAndCopyButtons
# Address: 0x0041c9dc - 0x0041d350
# Size: 0x974 (2420 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041c9dc <setMoveAndCopyButtons>:
  41c9dc:	3c1c0fc0 	lui	gp,0xfc0
  41c9e0:	279c1154 	addiu	gp,gp,4436
  41c9e4:	0399e021 	addu	gp,gp,t9
  41c9e8:	8f8e897c 	lw	t6,-30340(gp)
  41c9ec:	27bdff90 	addiu	sp,sp,-112
  41c9f0:	8dce0000 	lw	t6,0(t6)
  41c9f4:	afbf001c 	sw	ra,28(sp)
  41c9f8:	afbc0018 	sw	gp,24(sp)
  41c9fc:	8f84806c 	lw	a0,-32660(gp)
  41ca00:	8dc50044 	lw	a1,68(t6)
  41ca04:	8f998318 	lw	t9,-31976(gp)
  41ca08:	8c846b98 	lw	a0,27544(a0)
  41ca0c:	0005782b 	sltu	t7,zero,a1
  41ca10:	0320f809 	jalr	t9
  41ca14:	01e02825 	move	a1,t7
  41ca18:	8fbc0018 	lw	gp,24(sp)
  41ca1c:	00000000 	nop
  41ca20:	8f98897c 	lw	t8,-30340(gp)
  41ca24:	8f84806c 	lw	a0,-32660(gp)
  41ca28:	8f180000 	lw	t8,0(t8)
  41ca2c:	8c846b9c 	lw	a0,27548(a0)
  41ca30:	8f050048 	lw	a1,72(t8)
  41ca34:	00000000 	nop
  41ca38:	0005c82b 	sltu	t9,zero,a1
  41ca3c:	03202825 	move	a1,t9
  41ca40:	8f998318 	lw	t9,-31976(gp)
  41ca44:	00000000 	nop
  41ca48:	0320f809 	jalr	t9
  41ca4c:	00000000 	nop
  41ca50:	8fbc0018 	lw	gp,24(sp)
  41ca54:	00000000 	nop
  41ca58:	8f88897c 	lw	t0,-30340(gp)
  41ca5c:	8f84806c 	lw	a0,-32660(gp)
  41ca60:	8d080000 	lw	t0,0(t0)
  41ca64:	8f998318 	lw	t9,-31976(gp)
  41ca68:	8d050048 	lw	a1,72(t0)
  41ca6c:	8c846b94 	lw	a0,27540(a0)
  41ca70:	0005482b 	sltu	t1,zero,a1
  41ca74:	0320f809 	jalr	t9
  41ca78:	01202825 	move	a1,t1
  41ca7c:	8fbc0018 	lw	gp,24(sp)
  41ca80:	24040001 	li	a0,1
  41ca84:	8f99801c 	lw	t9,-32740(gp)
  41ca88:	00000000 	nop
  41ca8c:	2739c928 	addiu	t9,t9,-14040
  41ca90:	0320f809 	jalr	t9
  41ca94:	00000000 	nop
  41ca98:	8fbc0018 	lw	gp,24(sp)
  41ca9c:	00000000 	nop
  41caa0:	8f838980 	lw	v1,-30336(gp)
  41caa4:	00000000 	nop
  41caa8:	8c630000 	lw	v1,0(v1)
  41caac:	00000000 	nop
  41cab0:	90650c51 	lbu	a1,3153(v1)
  41cab4:	00000000 	nop
  41cab8:	10a00010 	beqz	a1,41cafc <setMoveAndCopyButtons+0x120>
  41cabc:	00000000 	nop
  41cac0:	8f84897c 	lw	a0,-30340(gp)
  41cac4:	00000000 	nop
  41cac8:	8c840000 	lw	a0,0(a0)
  41cacc:	00000000 	nop
  41cad0:	8c820044 	lw	v0,68(a0)
  41cad4:	00000000 	nop
  41cad8:	10400008 	beqz	v0,41cafc <setMoveAndCopyButtons+0x120>
  41cadc:	00000000 	nop
  41cae0:	10a00004 	beqz	a1,41caf4 <setMoveAndCopyButtons+0x118>
  41cae4:	00003025 	move	a2,zero
  41cae8:	8c660044 	lw	a2,68(v1)
  41caec:	10000001 	b	41caf4 <setMoveAndCopyButtons+0x118>
  41caf0:	00000000 	nop
  41caf4:	14c20069 	bne	a2,v0,41cc9c <setMoveAndCopyButtons+0x2c0>
  41caf8:	00000000 	nop
  41cafc:	8f8b806c 	lw	t3,-32660(gp)
  41cb00:	8f8a80a0 	lw	t2,-32608(gp)
  41cb04:	8f84806c 	lw	a0,-32660(gp)
  41cb08:	8f998340 	lw	t9,-31936(gp)
  41cb0c:	8d6b6b30 	lw	t3,27440(t3)
  41cb10:	254a1d4d 	addiu	t2,t2,7501
  41cb14:	8c846b6c 	lw	a0,27500(a0)
  41cb18:	afaa0048 	sw	t2,72(sp)
  41cb1c:	27a50048 	addiu	a1,sp,72
  41cb20:	24060001 	li	a2,1
  41cb24:	0320f809 	jalr	t9
  41cb28:	afab004c 	sw	t3,76(sp)
  41cb2c:	8fbc0018 	lw	gp,24(sp)
  41cb30:	27a50048 	addiu	a1,sp,72
  41cb34:	8f84806c 	lw	a0,-32660(gp)
  41cb38:	8f998340 	lw	t9,-31936(gp)
  41cb3c:	8c846b70 	lw	a0,27504(a0)
  41cb40:	0320f809 	jalr	t9
  41cb44:	24060001 	li	a2,1
  41cb48:	8fbc0018 	lw	gp,24(sp)
  41cb4c:	00002825 	move	a1,zero
  41cb50:	8f84806c 	lw	a0,-32660(gp)
  41cb54:	8f998318 	lw	t9,-31976(gp)
  41cb58:	8c846b6c 	lw	a0,27500(a0)
  41cb5c:	0320f809 	jalr	t9
  41cb60:	00000000 	nop
  41cb64:	8fbc0018 	lw	gp,24(sp)
  41cb68:	00002825 	move	a1,zero
  41cb6c:	8f84806c 	lw	a0,-32660(gp)
  41cb70:	8f998318 	lw	t9,-31976(gp)
  41cb74:	8c846b70 	lw	a0,27504(a0)
  41cb78:	0320f809 	jalr	t9
  41cb7c:	00000000 	nop
  41cb80:	8fbc0018 	lw	gp,24(sp)
  41cb84:	27a50048 	addiu	a1,sp,72
  41cb88:	8f8d806c 	lw	t5,-32660(gp)
  41cb8c:	8f8c80a0 	lw	t4,-32608(gp)
  41cb90:	8f84806c 	lw	a0,-32660(gp)
  41cb94:	8f998340 	lw	t9,-31936(gp)
  41cb98:	8dad6b3c 	lw	t5,27452(t5)
  41cb9c:	258c1d4d 	addiu	t4,t4,7501
  41cba0:	8c846b74 	lw	a0,27508(a0)
  41cba4:	afac0048 	sw	t4,72(sp)
  41cba8:	24060001 	li	a2,1
  41cbac:	0320f809 	jalr	t9
  41cbb0:	afad004c 	sw	t5,76(sp)
  41cbb4:	8fbc0018 	lw	gp,24(sp)
  41cbb8:	27a50048 	addiu	a1,sp,72
  41cbbc:	8f84806c 	lw	a0,-32660(gp)
  41cbc0:	8f998340 	lw	t9,-31936(gp)
  41cbc4:	8c846b78 	lw	a0,27512(a0)
  41cbc8:	0320f809 	jalr	t9
  41cbcc:	24060001 	li	a2,1
  41cbd0:	8fbc0018 	lw	gp,24(sp)
  41cbd4:	00002825 	move	a1,zero
  41cbd8:	8f84806c 	lw	a0,-32660(gp)
  41cbdc:	8f998318 	lw	t9,-31976(gp)
  41cbe0:	8c846b74 	lw	a0,27508(a0)
  41cbe4:	0320f809 	jalr	t9
  41cbe8:	00000000 	nop
  41cbec:	8fbc0018 	lw	gp,24(sp)
  41cbf0:	00002825 	move	a1,zero
  41cbf4:	8f84806c 	lw	a0,-32660(gp)
  41cbf8:	8f998318 	lw	t9,-31976(gp)
  41cbfc:	8c846b78 	lw	a0,27512(a0)
  41cc00:	0320f809 	jalr	t9
  41cc04:	00000000 	nop
  41cc08:	8fbc0018 	lw	gp,24(sp)
  41cc0c:	27a50048 	addiu	a1,sp,72
  41cc10:	8f8f806c 	lw	t7,-32660(gp)
  41cc14:	8f8e80a0 	lw	t6,-32608(gp)
  41cc18:	8f84806c 	lw	a0,-32660(gp)
  41cc1c:	8f998340 	lw	t9,-31936(gp)
  41cc20:	8def6b48 	lw	t7,27464(t7)
  41cc24:	25ce1d4d 	addiu	t6,t6,7501
  41cc28:	8c846b7c 	lw	a0,27516(a0)
  41cc2c:	afae0048 	sw	t6,72(sp)
  41cc30:	24060001 	li	a2,1
  41cc34:	0320f809 	jalr	t9
  41cc38:	afaf004c 	sw	t7,76(sp)
  41cc3c:	8fbc0018 	lw	gp,24(sp)
  41cc40:	27a50048 	addiu	a1,sp,72
  41cc44:	8f84806c 	lw	a0,-32660(gp)
  41cc48:	8f998340 	lw	t9,-31936(gp)
  41cc4c:	8c846b80 	lw	a0,27520(a0)
  41cc50:	0320f809 	jalr	t9
  41cc54:	24060001 	li	a2,1
  41cc58:	8fbc0018 	lw	gp,24(sp)
  41cc5c:	00002825 	move	a1,zero
  41cc60:	8f84806c 	lw	a0,-32660(gp)
  41cc64:	8f998318 	lw	t9,-31976(gp)
  41cc68:	8c846b7c 	lw	a0,27516(a0)
  41cc6c:	0320f809 	jalr	t9
  41cc70:	00000000 	nop
  41cc74:	8fbc0018 	lw	gp,24(sp)
  41cc78:	00002825 	move	a1,zero
  41cc7c:	8f84806c 	lw	a0,-32660(gp)
  41cc80:	8f998318 	lw	t9,-31976(gp)
  41cc84:	8c846b80 	lw	a0,27520(a0)
  41cc88:	0320f809 	jalr	t9
  41cc8c:	00000000 	nop
  41cc90:	8fbc0018 	lw	gp,24(sp)
  41cc94:	100001ab 	b	41d344 <setMoveAndCopyButtons+0x968>
  41cc98:	8fbf001c 	lw	ra,28(sp)
  41cc9c:	8c980048 	lw	t8,72(a0)
  41cca0:	27a50048 	addiu	a1,sp,72
  41cca4:	130000e3 	beqz	t8,41d034 <setMoveAndCopyButtons+0x658>
  41cca8:	24060001 	li	a2,1
  41ccac:	8f9980a0 	lw	t9,-32608(gp)
  41ccb0:	8f88806c 	lw	t0,-32660(gp)
  41ccb4:	27391d4d 	addiu	t9,t9,7501
  41ccb8:	8f84806c 	lw	a0,-32660(gp)
  41ccbc:	afb90048 	sw	t9,72(sp)
  41ccc0:	8f998340 	lw	t9,-31936(gp)
  41ccc4:	8d086b34 	lw	t0,27444(t0)
  41ccc8:	8c846b6c 	lw	a0,27500(a0)
  41cccc:	0320f809 	jalr	t9
  41ccd0:	afa8004c 	sw	t0,76(sp)
  41ccd4:	8fbc0018 	lw	gp,24(sp)
  41ccd8:	27a50048 	addiu	a1,sp,72
  41ccdc:	8f84806c 	lw	a0,-32660(gp)
  41cce0:	8f998340 	lw	t9,-31936(gp)
  41cce4:	8c846b70 	lw	a0,27504(a0)
  41cce8:	0320f809 	jalr	t9
  41ccec:	24060001 	li	a2,1
  41ccf0:	8fbc0018 	lw	gp,24(sp)
  41ccf4:	00000000 	nop
  41ccf8:	8f838980 	lw	v1,-30336(gp)
  41ccfc:	00000000 	nop
  41cd00:	8c630000 	lw	v1,0(v1)
  41cd04:	00000000 	nop
  41cd08:	90650c51 	lbu	a1,3153(v1)
  41cd0c:	00000000 	nop
  41cd10:	10a00005 	beqz	a1,41cd28 <setMoveAndCopyButtons+0x34c>
  41cd14:	00002025 	move	a0,zero
  41cd18:	8c640044 	lw	a0,68(v1)
  41cd1c:	10000003 	b	41cd2c <setMoveAndCopyButtons+0x350>
  41cd20:	0004302b 	sltu	a2,zero,a0
  41cd24:	00002025 	move	a0,zero
  41cd28:	0004302b 	sltu	a2,zero,a0
  41cd2c:	10c00007 	beqz	a2,41cd4c <setMoveAndCopyButtons+0x370>
  41cd30:	00000000 	nop
  41cd34:	10a00004 	beqz	a1,41cd48 <setMoveAndCopyButtons+0x36c>
  41cd38:	00001025 	move	v0,zero
  41cd3c:	8c620048 	lw	v0,72(v1)
  41cd40:	10000002 	b	41cd4c <setMoveAndCopyButtons+0x370>
  41cd44:	2c460001 	sltiu	a2,v0,1
  41cd48:	2c460001 	sltiu	a2,v0,1
  41cd4c:	8f84806c 	lw	a0,-32660(gp)
  41cd50:	8f998318 	lw	t9,-31976(gp)
  41cd54:	8c846b6c 	lw	a0,27500(a0)
  41cd58:	0320f809 	jalr	t9
  41cd5c:	00c02825 	move	a1,a2
  41cd60:	8fbc0018 	lw	gp,24(sp)
  41cd64:	00000000 	nop
  41cd68:	8f838980 	lw	v1,-30336(gp)
  41cd6c:	00000000 	nop
  41cd70:	8c630000 	lw	v1,0(v1)
  41cd74:	00000000 	nop
  41cd78:	90650c51 	lbu	a1,3153(v1)
  41cd7c:	00000000 	nop
  41cd80:	10a00005 	beqz	a1,41cd98 <setMoveAndCopyButtons+0x3bc>
  41cd84:	00002025 	move	a0,zero
  41cd88:	8c640044 	lw	a0,68(v1)
  41cd8c:	10000003 	b	41cd9c <setMoveAndCopyButtons+0x3c0>
  41cd90:	0004302b 	sltu	a2,zero,a0
  41cd94:	00002025 	move	a0,zero
  41cd98:	0004302b 	sltu	a2,zero,a0
  41cd9c:	10c00007 	beqz	a2,41cdbc <setMoveAndCopyButtons+0x3e0>
  41cda0:	00000000 	nop
  41cda4:	10a00004 	beqz	a1,41cdb8 <setMoveAndCopyButtons+0x3dc>
  41cda8:	00001025 	move	v0,zero
  41cdac:	8c620048 	lw	v0,72(v1)
  41cdb0:	10000002 	b	41cdbc <setMoveAndCopyButtons+0x3e0>
  41cdb4:	2c460001 	sltiu	a2,v0,1
  41cdb8:	2c460001 	sltiu	a2,v0,1
  41cdbc:	8f84806c 	lw	a0,-32660(gp)
  41cdc0:	8f998318 	lw	t9,-31976(gp)
  41cdc4:	8c846b70 	lw	a0,27504(a0)
  41cdc8:	0320f809 	jalr	t9
  41cdcc:	00c02825 	move	a1,a2
  41cdd0:	8fbc0018 	lw	gp,24(sp)
  41cdd4:	27a50048 	addiu	a1,sp,72
  41cdd8:	8f8a806c 	lw	t2,-32660(gp)
  41cddc:	8f8980a0 	lw	t1,-32608(gp)
  41cde0:	8f84806c 	lw	a0,-32660(gp)
  41cde4:	8f998340 	lw	t9,-31936(gp)
  41cde8:	8d4a6b40 	lw	t2,27456(t2)
  41cdec:	25291d4d 	addiu	t1,t1,7501
  41cdf0:	8c846b74 	lw	a0,27508(a0)
  41cdf4:	afa90048 	sw	t1,72(sp)
  41cdf8:	24060001 	li	a2,1
  41cdfc:	0320f809 	jalr	t9
  41ce00:	afaa004c 	sw	t2,76(sp)
  41ce04:	8fbc0018 	lw	gp,24(sp)
  41ce08:	27a50048 	addiu	a1,sp,72
  41ce0c:	8f84806c 	lw	a0,-32660(gp)
  41ce10:	8f998340 	lw	t9,-31936(gp)
  41ce14:	8c846b78 	lw	a0,27512(a0)
  41ce18:	0320f809 	jalr	t9
  41ce1c:	24060001 	li	a2,1
  41ce20:	8fbc0018 	lw	gp,24(sp)
  41ce24:	00000000 	nop
  41ce28:	8f838980 	lw	v1,-30336(gp)
  41ce2c:	00000000 	nop
  41ce30:	8c630000 	lw	v1,0(v1)
  41ce34:	00000000 	nop
  41ce38:	90650c51 	lbu	a1,3153(v1)
  41ce3c:	00000000 	nop
  41ce40:	10a00005 	beqz	a1,41ce58 <setMoveAndCopyButtons+0x47c>
  41ce44:	00002025 	move	a0,zero
  41ce48:	8c640044 	lw	a0,68(v1)
  41ce4c:	10000003 	b	41ce5c <setMoveAndCopyButtons+0x480>
  41ce50:	0004302b 	sltu	a2,zero,a0
  41ce54:	00002025 	move	a0,zero
  41ce58:	0004302b 	sltu	a2,zero,a0
  41ce5c:	10c00007 	beqz	a2,41ce7c <setMoveAndCopyButtons+0x4a0>
  41ce60:	00000000 	nop
  41ce64:	10a00004 	beqz	a1,41ce78 <setMoveAndCopyButtons+0x49c>
  41ce68:	00001025 	move	v0,zero
  41ce6c:	8c620048 	lw	v0,72(v1)
  41ce70:	10000002 	b	41ce7c <setMoveAndCopyButtons+0x4a0>
  41ce74:	2c460001 	sltiu	a2,v0,1
  41ce78:	2c460001 	sltiu	a2,v0,1
  41ce7c:	8f84806c 	lw	a0,-32660(gp)
  41ce80:	8f998318 	lw	t9,-31976(gp)
  41ce84:	8c846b74 	lw	a0,27508(a0)
  41ce88:	0320f809 	jalr	t9
  41ce8c:	00c02825 	move	a1,a2
  41ce90:	8fbc0018 	lw	gp,24(sp)
  41ce94:	00000000 	nop
  41ce98:	8f838980 	lw	v1,-30336(gp)
  41ce9c:	00000000 	nop
  41cea0:	8c630000 	lw	v1,0(v1)
  41cea4:	00000000 	nop
  41cea8:	90650c51 	lbu	a1,3153(v1)
  41ceac:	00000000 	nop
  41ceb0:	10a00005 	beqz	a1,41cec8 <setMoveAndCopyButtons+0x4ec>
  41ceb4:	00002025 	move	a0,zero
  41ceb8:	8c640044 	lw	a0,68(v1)
  41cebc:	10000003 	b	41cecc <setMoveAndCopyButtons+0x4f0>
  41cec0:	0004302b 	sltu	a2,zero,a0
  41cec4:	00002025 	move	a0,zero
  41cec8:	0004302b 	sltu	a2,zero,a0
  41cecc:	10c00007 	beqz	a2,41ceec <setMoveAndCopyButtons+0x510>
  41ced0:	00000000 	nop
  41ced4:	10a00004 	beqz	a1,41cee8 <setMoveAndCopyButtons+0x50c>
  41ced8:	00001025 	move	v0,zero
  41cedc:	8c620048 	lw	v0,72(v1)
  41cee0:	10000002 	b	41ceec <setMoveAndCopyButtons+0x510>
  41cee4:	2c460001 	sltiu	a2,v0,1
  41cee8:	2c460001 	sltiu	a2,v0,1
  41ceec:	8f84806c 	lw	a0,-32660(gp)
  41cef0:	8f998318 	lw	t9,-31976(gp)
  41cef4:	8c846b78 	lw	a0,27512(a0)
  41cef8:	0320f809 	jalr	t9
  41cefc:	00c02825 	move	a1,a2
  41cf00:	8fbc0018 	lw	gp,24(sp)
  41cf04:	27a50048 	addiu	a1,sp,72
  41cf08:	8f8c806c 	lw	t4,-32660(gp)
  41cf0c:	8f8b80a0 	lw	t3,-32608(gp)
  41cf10:	8f84806c 	lw	a0,-32660(gp)
  41cf14:	8f998340 	lw	t9,-31936(gp)
  41cf18:	8d8c6b4c 	lw	t4,27468(t4)
  41cf1c:	256b1d4d 	addiu	t3,t3,7501
  41cf20:	8c846b7c 	lw	a0,27516(a0)
  41cf24:	afab0048 	sw	t3,72(sp)
  41cf28:	24060001 	li	a2,1
  41cf2c:	0320f809 	jalr	t9
  41cf30:	afac004c 	sw	t4,76(sp)
  41cf34:	8fbc0018 	lw	gp,24(sp)
  41cf38:	27a50048 	addiu	a1,sp,72
  41cf3c:	8f84806c 	lw	a0,-32660(gp)
  41cf40:	8f998340 	lw	t9,-31936(gp)
  41cf44:	8c846b80 	lw	a0,27520(a0)
  41cf48:	0320f809 	jalr	t9
  41cf4c:	24060001 	li	a2,1
  41cf50:	8fbc0018 	lw	gp,24(sp)
  41cf54:	00002025 	move	a0,zero
  41cf58:	8f838980 	lw	v1,-30336(gp)
  41cf5c:	00000000 	nop
  41cf60:	8c630000 	lw	v1,0(v1)
  41cf64:	00000000 	nop
  41cf68:	90650c51 	lbu	a1,3153(v1)
  41cf6c:	00000000 	nop
  41cf70:	10a00004 	beqz	a1,41cf84 <setMoveAndCopyButtons+0x5a8>
  41cf74:	00000000 	nop
  41cf78:	8c640044 	lw	a0,68(v1)
  41cf7c:	10000002 	b	41cf88 <setMoveAndCopyButtons+0x5ac>
  41cf80:	0004302b 	sltu	a2,zero,a0
  41cf84:	0004302b 	sltu	a2,zero,a0
  41cf88:	10c00007 	beqz	a2,41cfa8 <setMoveAndCopyButtons+0x5cc>
  41cf8c:	00000000 	nop
  41cf90:	10a00004 	beqz	a1,41cfa4 <setMoveAndCopyButtons+0x5c8>
  41cf94:	00001025 	move	v0,zero
  41cf98:	8c620048 	lw	v0,72(v1)
  41cf9c:	10000002 	b	41cfa8 <setMoveAndCopyButtons+0x5cc>
  41cfa0:	2c460001 	sltiu	a2,v0,1
  41cfa4:	2c460001 	sltiu	a2,v0,1
  41cfa8:	8f84806c 	lw	a0,-32660(gp)
  41cfac:	8f998318 	lw	t9,-31976(gp)
  41cfb0:	8c846b7c 	lw	a0,27516(a0)
  41cfb4:	0320f809 	jalr	t9
  41cfb8:	00c02825 	move	a1,a2
  41cfbc:	8fbc0018 	lw	gp,24(sp)
  41cfc0:	00002025 	move	a0,zero
  41cfc4:	8f838980 	lw	v1,-30336(gp)
  41cfc8:	00000000 	nop
  41cfcc:	8c630000 	lw	v1,0(v1)
  41cfd0:	00000000 	nop
  41cfd4:	90650c51 	lbu	a1,3153(v1)
  41cfd8:	00000000 	nop
  41cfdc:	10a00004 	beqz	a1,41cff0 <setMoveAndCopyButtons+0x614>
  41cfe0:	00000000 	nop
  41cfe4:	8c640044 	lw	a0,68(v1)
  41cfe8:	10000002 	b	41cff4 <setMoveAndCopyButtons+0x618>
  41cfec:	0004302b 	sltu	a2,zero,a0
  41cff0:	0004302b 	sltu	a2,zero,a0
  41cff4:	10c00007 	beqz	a2,41d014 <setMoveAndCopyButtons+0x638>
  41cff8:	00000000 	nop
  41cffc:	10a00004 	beqz	a1,41d010 <setMoveAndCopyButtons+0x634>
  41d000:	00001025 	move	v0,zero
  41d004:	8c620048 	lw	v0,72(v1)
  41d008:	10000002 	b	41d014 <setMoveAndCopyButtons+0x638>
  41d00c:	2c460001 	sltiu	a2,v0,1
  41d010:	2c460001 	sltiu	a2,v0,1
  41d014:	8f84806c 	lw	a0,-32660(gp)
  41d018:	8f998318 	lw	t9,-31976(gp)
  41d01c:	8c846b80 	lw	a0,27520(a0)
  41d020:	0320f809 	jalr	t9
  41d024:	00c02825 	move	a1,a2
  41d028:	8fbc0018 	lw	gp,24(sp)
  41d02c:	100000c5 	b	41d344 <setMoveAndCopyButtons+0x968>
  41d030:	8fbf001c 	lw	ra,28(sp)
  41d034:	104000c2 	beqz	v0,41d340 <setMoveAndCopyButtons+0x964>
  41d038:	27a50048 	addiu	a1,sp,72
  41d03c:	8f8e806c 	lw	t6,-32660(gp)
  41d040:	8f8d80a0 	lw	t5,-32608(gp)
  41d044:	8f84806c 	lw	a0,-32660(gp)
  41d048:	8f998340 	lw	t9,-31936(gp)
  41d04c:	8dce6b38 	lw	t6,27448(t6)
  41d050:	25ad1d4d 	addiu	t5,t5,7501
  41d054:	8c846b6c 	lw	a0,27500(a0)
  41d058:	afad0048 	sw	t5,72(sp)
  41d05c:	24060001 	li	a2,1
  41d060:	0320f809 	jalr	t9
  41d064:	afae004c 	sw	t6,76(sp)
  41d068:	8fbc0018 	lw	gp,24(sp)
  41d06c:	27a50048 	addiu	a1,sp,72
  41d070:	8f84806c 	lw	a0,-32660(gp)
  41d074:	8f998340 	lw	t9,-31936(gp)
  41d078:	8c846b70 	lw	a0,27504(a0)
  41d07c:	0320f809 	jalr	t9
  41d080:	24060001 	li	a2,1
  41d084:	8fbc0018 	lw	gp,24(sp)
  41d088:	00000000 	nop
  41d08c:	8f838980 	lw	v1,-30336(gp)
  41d090:	00000000 	nop
  41d094:	8c630000 	lw	v1,0(v1)
  41d098:	00000000 	nop
  41d09c:	906f0c51 	lbu	t7,3153(v1)
  41d0a0:	00000000 	nop
  41d0a4:	11e00005 	beqz	t7,41d0bc <setMoveAndCopyButtons+0x6e0>
  41d0a8:	00003025 	move	a2,zero
  41d0ac:	8c660048 	lw	a2,72(v1)
  41d0b0:	10000002 	b	41d0bc <setMoveAndCopyButtons+0x6e0>
  41d0b4:	00000000 	nop
  41d0b8:	00003025 	move	a2,zero
  41d0bc:	8f84806c 	lw	a0,-32660(gp)
  41d0c0:	8f998318 	lw	t9,-31976(gp)
  41d0c4:	8c846b6c 	lw	a0,27500(a0)
  41d0c8:	0320f809 	jalr	t9
  41d0cc:	0006282b 	sltu	a1,zero,a2
  41d0d0:	8fbc0018 	lw	gp,24(sp)
  41d0d4:	00000000 	nop
  41d0d8:	8f838980 	lw	v1,-30336(gp)
  41d0dc:	00000000 	nop
  41d0e0:	8c630000 	lw	v1,0(v1)
  41d0e4:	00000000 	nop
  41d0e8:	90780c51 	lbu	t8,3153(v1)
  41d0ec:	00000000 	nop
  41d0f0:	13000005 	beqz	t8,41d108 <setMoveAndCopyButtons+0x72c>
  41d0f4:	00003025 	move	a2,zero
  41d0f8:	8c660048 	lw	a2,72(v1)
  41d0fc:	10000002 	b	41d108 <setMoveAndCopyButtons+0x72c>
  41d100:	00000000 	nop
  41d104:	00003025 	move	a2,zero
  41d108:	8f84806c 	lw	a0,-32660(gp)
  41d10c:	8f998318 	lw	t9,-31976(gp)
  41d110:	8c846b70 	lw	a0,27504(a0)
  41d114:	0320f809 	jalr	t9
  41d118:	0006282b 	sltu	a1,zero,a2
  41d11c:	8fbc0018 	lw	gp,24(sp)
  41d120:	27a50048 	addiu	a1,sp,72
  41d124:	8f9980a0 	lw	t9,-32608(gp)
  41d128:	8f88806c 	lw	t0,-32660(gp)
  41d12c:	27391d4d 	addiu	t9,t9,7501
  41d130:	8f84806c 	lw	a0,-32660(gp)
  41d134:	afb90048 	sw	t9,72(sp)
  41d138:	8f998340 	lw	t9,-31936(gp)
  41d13c:	8d086b44 	lw	t0,27460(t0)
  41d140:	8c846b74 	lw	a0,27508(a0)
  41d144:	24060001 	li	a2,1
  41d148:	0320f809 	jalr	t9
  41d14c:	afa8004c 	sw	t0,76(sp)
  41d150:	8fbc0018 	lw	gp,24(sp)
  41d154:	27a50048 	addiu	a1,sp,72
  41d158:	8f84806c 	lw	a0,-32660(gp)
  41d15c:	8f998340 	lw	t9,-31936(gp)
  41d160:	8c846b78 	lw	a0,27512(a0)
  41d164:	0320f809 	jalr	t9
  41d168:	24060001 	li	a2,1
  41d16c:	8fbc0018 	lw	gp,24(sp)
  41d170:	00000000 	nop
  41d174:	8f838980 	lw	v1,-30336(gp)
  41d178:	00000000 	nop
  41d17c:	8c630000 	lw	v1,0(v1)
  41d180:	00000000 	nop
  41d184:	90690c51 	lbu	t1,3153(v1)
  41d188:	00000000 	nop
  41d18c:	11200005 	beqz	t1,41d1a4 <setMoveAndCopyButtons+0x7c8>
  41d190:	00003025 	move	a2,zero
  41d194:	8c660048 	lw	a2,72(v1)
  41d198:	10000002 	b	41d1a4 <setMoveAndCopyButtons+0x7c8>
  41d19c:	00000000 	nop
  41d1a0:	00003025 	move	a2,zero
  41d1a4:	8f84806c 	lw	a0,-32660(gp)
  41d1a8:	8f998318 	lw	t9,-31976(gp)
  41d1ac:	8c846b74 	lw	a0,27508(a0)
  41d1b0:	0320f809 	jalr	t9
  41d1b4:	0006282b 	sltu	a1,zero,a2
  41d1b8:	8fbc0018 	lw	gp,24(sp)
  41d1bc:	00000000 	nop
  41d1c0:	8f838980 	lw	v1,-30336(gp)
  41d1c4:	00000000 	nop
  41d1c8:	8c630000 	lw	v1,0(v1)
  41d1cc:	00000000 	nop
  41d1d0:	906a0c51 	lbu	t2,3153(v1)
  41d1d4:	00000000 	nop
  41d1d8:	11400005 	beqz	t2,41d1f0 <setMoveAndCopyButtons+0x814>
  41d1dc:	00003025 	move	a2,zero
  41d1e0:	8c660048 	lw	a2,72(v1)
  41d1e4:	10000002 	b	41d1f0 <setMoveAndCopyButtons+0x814>
  41d1e8:	00000000 	nop
  41d1ec:	00003025 	move	a2,zero
  41d1f0:	8f84806c 	lw	a0,-32660(gp)
  41d1f4:	8f998318 	lw	t9,-31976(gp)
  41d1f8:	8c846b78 	lw	a0,27512(a0)
  41d1fc:	0320f809 	jalr	t9
  41d200:	0006282b 	sltu	a1,zero,a2
  41d204:	8fbc0018 	lw	gp,24(sp)
  41d208:	27a50048 	addiu	a1,sp,72
  41d20c:	8f8c806c 	lw	t4,-32660(gp)
  41d210:	8f8b80a0 	lw	t3,-32608(gp)
  41d214:	8f84806c 	lw	a0,-32660(gp)
  41d218:	8f998340 	lw	t9,-31936(gp)
  41d21c:	8d8c6b50 	lw	t4,27472(t4)
  41d220:	256b1d4d 	addiu	t3,t3,7501
  41d224:	8c846b7c 	lw	a0,27516(a0)
  41d228:	afab0048 	sw	t3,72(sp)
  41d22c:	24060001 	li	a2,1
  41d230:	0320f809 	jalr	t9
  41d234:	afac004c 	sw	t4,76(sp)
  41d238:	8fbc0018 	lw	gp,24(sp)
  41d23c:	27a50048 	addiu	a1,sp,72
  41d240:	8f84806c 	lw	a0,-32660(gp)
  41d244:	8f998340 	lw	t9,-31936(gp)
  41d248:	8c846b80 	lw	a0,27520(a0)
  41d24c:	0320f809 	jalr	t9
  41d250:	24060001 	li	a2,1
  41d254:	8fbc0018 	lw	gp,24(sp)
  41d258:	00003025 	move	a2,zero
  41d25c:	8f838980 	lw	v1,-30336(gp)
  41d260:	00000000 	nop
  41d264:	8c630000 	lw	v1,0(v1)
  41d268:	00000000 	nop
  41d26c:	906d0c51 	lbu	t5,3153(v1)
  41d270:	00000000 	nop
  41d274:	11a00004 	beqz	t5,41d288 <setMoveAndCopyButtons+0x8ac>
  41d278:	00000000 	nop
  41d27c:	8c660048 	lw	a2,72(v1)
  41d280:	10000001 	b	41d288 <setMoveAndCopyButtons+0x8ac>
  41d284:	00000000 	nop
  41d288:	8f84806c 	lw	a0,-32660(gp)
  41d28c:	8f998318 	lw	t9,-31976(gp)
  41d290:	8c846b7c 	lw	a0,27516(a0)
  41d294:	0320f809 	jalr	t9
  41d298:	0006282b 	sltu	a1,zero,a2
  41d29c:	8fbc0018 	lw	gp,24(sp)
  41d2a0:	00003025 	move	a2,zero
  41d2a4:	8f838980 	lw	v1,-30336(gp)
  41d2a8:	00000000 	nop
  41d2ac:	8c630000 	lw	v1,0(v1)
  41d2b0:	00000000 	nop
  41d2b4:	906e0c51 	lbu	t6,3153(v1)
  41d2b8:	00000000 	nop
  41d2bc:	11c00004 	beqz	t6,41d2d0 <setMoveAndCopyButtons+0x8f4>
  41d2c0:	00000000 	nop
  41d2c4:	8c660048 	lw	a2,72(v1)
  41d2c8:	10000001 	b	41d2d0 <setMoveAndCopyButtons+0x8f4>
  41d2cc:	00000000 	nop
  41d2d0:	8f84806c 	lw	a0,-32660(gp)
  41d2d4:	8f998318 	lw	t9,-31976(gp)
  41d2d8:	8c846b80 	lw	a0,27520(a0)
  41d2dc:	0320f809 	jalr	t9
  41d2e0:	0006282b 	sltu	a1,zero,a2
  41d2e4:	8fbc0018 	lw	gp,24(sp)
  41d2e8:	24050001 	li	a1,1
  41d2ec:	8f84806c 	lw	a0,-32660(gp)
  41d2f0:	8f998318 	lw	t9,-31976(gp)
  41d2f4:	8c846b9c 	lw	a0,27548(a0)
  41d2f8:	0320f809 	jalr	t9
  41d2fc:	00000000 	nop
  41d300:	8fbc0018 	lw	gp,24(sp)
  41d304:	24050001 	li	a1,1
  41d308:	8f84806c 	lw	a0,-32660(gp)
  41d30c:	8f998318 	lw	t9,-31976(gp)
  41d310:	8c846b94 	lw	a0,27540(a0)
  41d314:	0320f809 	jalr	t9
  41d318:	00000000 	nop
  41d31c:	8fbc0018 	lw	gp,24(sp)
  41d320:	00002025 	move	a0,zero
  41d324:	8f99801c 	lw	t9,-32740(gp)
  41d328:	00000000 	nop
  41d32c:	2739c928 	addiu	t9,t9,-14040
  41d330:	0320f809 	jalr	t9
  41d334:	00000000 	nop
  41d338:	8fbc0018 	lw	gp,24(sp)
  41d33c:	00000000 	nop
  41d340:	8fbf001c 	lw	ra,28(sp)
  41d344:	27bd0070 	addiu	sp,sp,112
  41d348:	03e00008 	jr	ra
  41d34c:	00000000 	nop
