# Function: FUN_00410b7c
# Address: 0x00410b7c - 0x00410c9c
# Size: 0x120 (288 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00410b7c <shrinkDueToZoom+0x2d0>:
  410b7c:	3c1c0fc1 	lui	gp,0xfc1
  410b80:	279ccfb4 	addiu	gp,gp,-12364
  410b84:	0399e021 	addu	gp,gp,t9
  410b88:	27bdffb8 	addiu	sp,sp,-72
  410b8c:	8f998778 	lw	t9,-30856(gp)
  410b90:	afbf002c 	sw	ra,44(sp)
  410b94:	afa5004c 	sw	a1,76(sp)
  410b98:	afbc0028 	sw	gp,40(sp)
  410b9c:	afa60050 	sw	a2,80(sp)
  410ba0:	afa70054 	sw	a3,84(sp)
  410ba4:	0320f809 	jalr	t9
  410ba8:	00002825 	move	a1,zero
  410bac:	8fbc0028 	lw	gp,40(sp)
  410bb0:	00000000 	nop
  410bb4:	8f99851c 	lw	t9,-31460(gp)
  410bb8:	00000000 	nop
  410bbc:	0320f809 	jalr	t9
  410bc0:	00000000 	nop
  410bc4:	8fbc0028 	lw	gp,40(sp)
  410bc8:	00000000 	nop
  410bcc:	8f99854c 	lw	t9,-31412(gp)
  410bd0:	00000000 	nop
  410bd4:	0320f809 	jalr	t9
  410bd8:	00000000 	nop
  410bdc:	8fbc0028 	lw	gp,40(sp)
  410be0:	8fa2004c 	lw	v0,76(sp)
  410be4:	8f8f806c 	lw	t7,-32660(gp)
  410be8:	8c4e001c 	lw	t6,28(v0)
  410bec:	8def6628 	lw	t7,26152(t7)
  410bf0:	27a40044 	addiu	a0,sp,68
  410bf4:	01cfc023 	subu	t8,t6,t7
  410bf8:	2f01012c 	sltiu	at,t8,300
  410bfc:	1020000c 	beqz	at,410c30 <shrinkDueToZoom+0x384>
  410c00:	27a50040 	addiu	a1,sp,64
  410c04:	8c440030 	lw	a0,48(v0)
  410c08:	00000000 	nop
  410c0c:	30990008 	andi	t9,a0,0x8
  410c10:	0019202b 	sltu	a0,zero,t9
  410c14:	8f998654 	lw	t9,-31148(gp)
  410c18:	00000000 	nop
  410c1c:	0320f809 	jalr	t9
  410c20:	00000000 	nop
  410c24:	8fbc0028 	lw	gp,40(sp)
  410c28:	10000016 	b	410c84 <shrinkDueToZoom+0x3d8>
  410c2c:	8fad004c 	lw	t5,76(sp)
  410c30:	8f9986e4 	lw	t9,-31004(gp)
  410c34:	27a90038 	addiu	t1,sp,56
  410c38:	27aa0034 	addiu	t2,sp,52
  410c3c:	27ab0033 	addiu	t3,sp,51
  410c40:	27ac0032 	addiu	t4,sp,50
  410c44:	afac001c 	sw	t4,28(sp)
  410c48:	afab0018 	sw	t3,24(sp)
  410c4c:	afaa0014 	sw	t2,20(sp)
  410c50:	afa90010 	sw	t1,16(sp)
  410c54:	27a6003c 	addiu	a2,sp,60
  410c58:	0320f809 	jalr	t9
  410c5c:	27a7003a 	addiu	a3,sp,58
  410c60:	8fbc0028 	lw	gp,40(sp)
  410c64:	00000000 	nop
  410c68:	8f998534 	lw	t9,-31436(gp)
  410c6c:	00000000 	nop
  410c70:	0320f809 	jalr	t9
  410c74:	00000000 	nop
  410c78:	8fbc0028 	lw	gp,40(sp)
  410c7c:	00000000 	nop
  410c80:	8fad004c 	lw	t5,76(sp)
  410c84:	8f81806c 	lw	at,-32660(gp)
  410c88:	8fbf002c 	lw	ra,44(sp)
  410c8c:	8dae001c 	lw	t6,28(t5)
  410c90:	27bd0048 	addiu	sp,sp,72
  410c94:	03e00008 	jr	ra
  410c98:	ac2e6628 	sw	t6,26152(at)
