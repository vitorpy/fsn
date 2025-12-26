# Function: FUN_00432a34
# Address: 0x00432a34 - 0x00432b04
# Size: 0xd0 (208 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00432a34 <SG_getVisualArgs+0x548>:
  432a34:	3c1c0fbf 	lui	gp,0xfbf
  432a38:	279cb0fc 	addiu	gp,gp,-20228
  432a3c:	0399e021 	addu	gp,gp,t9
  432a40:	27bdfbd0 	addiu	sp,sp,-1072
  432a44:	8f8e805c 	lw	t6,-32676(gp)
  432a48:	8f8f805c 	lw	t7,-32676(gp)
  432a4c:	8f9984ec 	lw	t9,-31508(gp)
  432a50:	afbf0024 	sw	ra,36(sp)
  432a54:	afa50434 	sw	a1,1076(sp)
  432a58:	afa60438 	sw	a2,1080(sp)
  432a5c:	25ce3e2c 	addiu	t6,t6,15916
  432a60:	25ef3e3c 	addiu	t7,t7,15932
  432a64:	afbc0020 	sw	gp,32(sp)
  432a68:	afa7043c 	sw	a3,1084(sp)
  432a6c:	afaf0028 	sw	t7,40(sp)
  432a70:	afae002c 	sw	t6,44(sp)
  432a74:	27a60028 	addiu	a2,sp,40
  432a78:	0320f809 	jalr	t9
  432a7c:	27a5002c 	addiu	a1,sp,44
  432a80:	8fb90444 	lw	t9,1092(sp)
  432a84:	8fbc0020 	lw	gp,32(sp)
  432a88:	afb90014 	sw	t9,20(sp)
  432a8c:	8fb80440 	lw	t8,1088(sp)
  432a90:	8f9983e4 	lw	t9,-31772(gp)
  432a94:	8fa50434 	lw	a1,1076(sp)
  432a98:	8fa60438 	lw	a2,1080(sp)
  432a9c:	8fa7043c 	lw	a3,1084(sp)
  432aa0:	27a40030 	addiu	a0,sp,48
  432aa4:	0320f809 	jalr	t9
  432aa8:	afb80010 	sw	t8,16(sp)
  432aac:	8fbc0020 	lw	gp,32(sp)
  432ab0:	8fa6002c 	lw	a2,44(sp)
  432ab4:	8f858a68 	lw	a1,-30104(gp)
  432ab8:	8f848098 	lw	a0,-32616(gp)
  432abc:	8f9983f8 	lw	t9,-31752(gp)
  432ac0:	8fa70028 	lw	a3,40(sp)
  432ac4:	27a80030 	addiu	t0,sp,48
  432ac8:	8ca500b0 	lw	a1,176(a1)
  432acc:	afa80010 	sw	t0,16(sp)
  432ad0:	0320f809 	jalr	t9
  432ad4:	24840020 	addiu	a0,a0,32
  432ad8:	8fbc0020 	lw	gp,32(sp)
  432adc:	00000000 	nop
  432ae0:	8f848098 	lw	a0,-32616(gp)
  432ae4:	8f9984e8 	lw	t9,-31512(gp)
  432ae8:	24840020 	addiu	a0,a0,32
  432aec:	0320f809 	jalr	t9
  432af0:	00000000 	nop
  432af4:	8fbf0024 	lw	ra,36(sp)
  432af8:	8fbc0020 	lw	gp,32(sp)
  432afc:	03e00008 	jr	ra
  432b00:	27bd0430 	addiu	sp,sp,1072
