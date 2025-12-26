# Function: FUN_0041dba0
# Address: 0x0041dba0 - 0x0041ddf8
# Size: 0x258 (600 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041dba0 <checkValidSelections+0xc>:
  41dba0:	8f83897c 	lw	v1,-30340(gp)
  41dba4:	27bdffe0 	addiu	sp,sp,-32
  41dba8:	8c630000 	lw	v1,0(v1)
  41dbac:	afbf001c 	sw	ra,28(sp)
  41dbb0:	afbc0018 	sw	gp,24(sp)
  41dbb4:	8c620048 	lw	v0,72(v1)
  41dbb8:	00000000 	nop
  41dbbc:	10400010 	beqz	v0,41dc00 <checkValidSelections+0x6c>
  41dbc0:	00000000 	nop
  41dbc4:	8c4e0028 	lw	t6,40(v0)
  41dbc8:	00000000 	nop
  41dbcc:	000ec140 	sll	t8,t6,0x5
  41dbd0:	0700000b 	bltz	t8,41dc00 <checkValidSelections+0x6c>
  41dbd4:	00000000 	nop
  41dbd8:	8f998640 	lw	t9,-31168(gp)
  41dbdc:	00000000 	nop
  41dbe0:	0320f809 	jalr	t9
  41dbe4:	00000000 	nop
  41dbe8:	8fbc0018 	lw	gp,24(sp)
  41dbec:	00000000 	nop
  41dbf0:	8f83897c 	lw	v1,-30340(gp)
  41dbf4:	00000000 	nop
  41dbf8:	8c630000 	lw	v1,0(v1)
  41dbfc:	00000000 	nop
  41dc00:	8c620044 	lw	v0,68(v1)
  41dc04:	00000000 	nop
  41dc08:	10400010 	beqz	v0,41dc4c <checkValidSelections+0xb8>
  41dc0c:	00000000 	nop
  41dc10:	8c590074 	lw	t9,116(v0)
  41dc14:	00000000 	nop
  41dc18:	001948c0 	sll	t1,t9,0x3
  41dc1c:	0520000b 	bltz	t1,41dc4c <checkValidSelections+0xb8>
  41dc20:	00000000 	nop
  41dc24:	8f998638 	lw	t9,-31176(gp)
  41dc28:	00000000 	nop
  41dc2c:	0320f809 	jalr	t9
  41dc30:	00000000 	nop
  41dc34:	8fbc0018 	lw	gp,24(sp)
  41dc38:	00000000 	nop
  41dc3c:	8f83897c 	lw	v1,-30340(gp)
  41dc40:	00000000 	nop
  41dc44:	8c630000 	lw	v1,0(v1)
  41dc48:	00000000 	nop
  41dc4c:	8c62003c 	lw	v0,60(v1)
  41dc50:	00000000 	nop
  41dc54:	1040000c 	beqz	v0,41dc88 <checkValidSelections+0xf4>
  41dc58:	00000000 	nop
  41dc5c:	8c4a0074 	lw	t2,116(v0)
  41dc60:	00000000 	nop
  41dc64:	000a60c0 	sll	t4,t2,0x3
  41dc68:	05800007 	bltz	t4,41dc88 <checkValidSelections+0xf4>
  41dc6c:	00000000 	nop
  41dc70:	8f998540 	lw	t9,-31424(gp)
  41dc74:	00000000 	nop
  41dc78:	0320f809 	jalr	t9
  41dc7c:	00000000 	nop
  41dc80:	8fbc0018 	lw	gp,24(sp)
  41dc84:	00000000 	nop
  41dc88:	8f8d8980 	lw	t5,-30336(gp)
  41dc8c:	00000000 	nop
  41dc90:	8dad0000 	lw	t5,0(t5)
  41dc94:	00000000 	nop
  41dc98:	91ae0c51 	lbu	t6,3153(t5)
  41dc9c:	00000000 	nop
  41dca0:	11c00046 	beqz	t6,41ddbc <checkValidSelections+0x228>
  41dca4:	00000000 	nop
  41dca8:	8f99876c 	lw	t9,-30868(gp)
  41dcac:	24040001 	li	a0,1
  41dcb0:	0320f809 	jalr	t9
  41dcb4:	00000000 	nop
  41dcb8:	8fbc0018 	lw	gp,24(sp)
  41dcbc:	00000000 	nop
  41dcc0:	8f83897c 	lw	v1,-30340(gp)
  41dcc4:	00000000 	nop
  41dcc8:	8c630000 	lw	v1,0(v1)
  41dccc:	00000000 	nop
  41dcd0:	8c620048 	lw	v0,72(v1)
  41dcd4:	00000000 	nop
  41dcd8:	10400010 	beqz	v0,41dd1c <checkValidSelections+0x188>
  41dcdc:	00000000 	nop
  41dce0:	8c4f0028 	lw	t7,40(v0)
  41dce4:	00000000 	nop
  41dce8:	000fc940 	sll	t9,t7,0x5
  41dcec:	0720000b 	bltz	t9,41dd1c <checkValidSelections+0x188>
  41dcf0:	00000000 	nop
  41dcf4:	8f998640 	lw	t9,-31168(gp)
  41dcf8:	00000000 	nop
  41dcfc:	0320f809 	jalr	t9
  41dd00:	00000000 	nop
  41dd04:	8fbc0018 	lw	gp,24(sp)
  41dd08:	00000000 	nop
  41dd0c:	8f83897c 	lw	v1,-30340(gp)
  41dd10:	00000000 	nop
  41dd14:	8c630000 	lw	v1,0(v1)
  41dd18:	00000000 	nop
  41dd1c:	8c620044 	lw	v0,68(v1)
  41dd20:	00000000 	nop
  41dd24:	10400010 	beqz	v0,41dd68 <checkValidSelections+0x1d4>
  41dd28:	00000000 	nop
  41dd2c:	8c480074 	lw	t0,116(v0)
  41dd30:	00000000 	nop
  41dd34:	000850c0 	sll	t2,t0,0x3
  41dd38:	0540000b 	bltz	t2,41dd68 <checkValidSelections+0x1d4>
  41dd3c:	00000000 	nop
  41dd40:	8f998638 	lw	t9,-31176(gp)
  41dd44:	00000000 	nop
  41dd48:	0320f809 	jalr	t9
  41dd4c:	00000000 	nop
  41dd50:	8fbc0018 	lw	gp,24(sp)
  41dd54:	00000000 	nop
  41dd58:	8f83897c 	lw	v1,-30340(gp)
  41dd5c:	00000000 	nop
  41dd60:	8c630000 	lw	v1,0(v1)
  41dd64:	00000000 	nop
  41dd68:	8c62003c 	lw	v0,60(v1)
  41dd6c:	00000000 	nop
  41dd70:	1040000c 	beqz	v0,41dda4 <checkValidSelections+0x210>
  41dd74:	00000000 	nop
  41dd78:	8c4b0074 	lw	t3,116(v0)
  41dd7c:	00000000 	nop
  41dd80:	000b68c0 	sll	t5,t3,0x3
  41dd84:	05a00007 	bltz	t5,41dda4 <checkValidSelections+0x210>
  41dd88:	00000000 	nop
  41dd8c:	8f998540 	lw	t9,-31424(gp)
  41dd90:	00000000 	nop
  41dd94:	0320f809 	jalr	t9
  41dd98:	00000000 	nop
  41dd9c:	8fbc0018 	lw	gp,24(sp)
  41dda0:	00000000 	nop
  41dda4:	8f99876c 	lw	t9,-30868(gp)
  41dda8:	24040001 	li	a0,1
  41ddac:	0320f809 	jalr	t9
  41ddb0:	00000000 	nop
  41ddb4:	8fbc0018 	lw	gp,24(sp)
  41ddb8:	00000000 	nop
  41ddbc:	8f998630 	lw	t9,-31184(gp)
  41ddc0:	00000000 	nop
  41ddc4:	0320f809 	jalr	t9
  41ddc8:	00000000 	nop
  41ddcc:	8fbc0018 	lw	gp,24(sp)
  41ddd0:	00000000 	nop
  41ddd4:	8f99801c 	lw	t9,-32740(gp)
  41ddd8:	00000000 	nop
  41dddc:	2739c3e4 	addiu	t9,t9,-15388
  41dde0:	0320f809 	jalr	t9
  41dde4:	00000000 	nop
  41dde8:	8fbf001c 	lw	ra,28(sp)
  41ddec:	8fbc0018 	lw	gp,24(sp)
  41ddf0:	03e00008 	jr	ra
  41ddf4:	27bd0020 	addiu	sp,sp,32
