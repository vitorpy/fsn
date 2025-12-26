# Function: FUN_0041dea4
# Address: 0x0041dea4 - 0x0041df54
# Size: 0xb0 (176 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041dea4 <checkValidSelections+0x310>:
  41dea4:	3c1c0fc0 	lui	gp,0xfc0
  41dea8:	279cfc8c 	addiu	gp,gp,-884
  41deac:	0399e021 	addu	gp,gp,t9
  41deb0:	27bdffe0 	addiu	sp,sp,-32
  41deb4:	8f8e897c 	lw	t6,-30340(gp)
  41deb8:	afbf001c 	sw	ra,28(sp)
  41debc:	8dce0000 	lw	t6,0(t6)
  41dec0:	afbc0018 	sw	gp,24(sp)
  41dec4:	afa40020 	sw	a0,32(sp)
  41dec8:	afa50024 	sw	a1,36(sp)
  41decc:	8dc40044 	lw	a0,68(t6)
  41ded0:	00000000 	nop
  41ded4:	1080001c 	beqz	a0,41df48 <checkValidSelections+0x3b4>
  41ded8:	8fbf001c 	lw	ra,28(sp)
  41dedc:	8f99801c 	lw	t9,-32740(gp)
  41dee0:	8cc50008 	lw	a1,8(a2)
  41dee4:	2739ddf8 	addiu	t9,t9,-8712
  41dee8:	0320f809 	jalr	t9
  41deec:	00000000 	nop
  41def0:	8fbc0018 	lw	gp,24(sp)
  41def4:	00000000 	nop
  41def8:	8f99801c 	lw	t9,-32740(gp)
  41defc:	00000000 	nop
  41df00:	2739c3e4 	addiu	t9,t9,-15388
  41df04:	0320f809 	jalr	t9
  41df08:	00000000 	nop
  41df0c:	8fbc0018 	lw	gp,24(sp)
  41df10:	00000000 	nop
  41df14:	8f998534 	lw	t9,-31436(gp)
  41df18:	00000000 	nop
  41df1c:	0320f809 	jalr	t9
  41df20:	00000000 	nop
  41df24:	8fbc0018 	lw	gp,24(sp)
  41df28:	00000000 	nop
  41df2c:	8f998780 	lw	t9,-30848(gp)
  41df30:	00000000 	nop
  41df34:	0320f809 	jalr	t9
  41df38:	00000000 	nop
  41df3c:	8fbc0018 	lw	gp,24(sp)
  41df40:	00000000 	nop
  41df44:	8fbf001c 	lw	ra,28(sp)
  41df48:	27bd0020 	addiu	sp,sp,32
  41df4c:	03e00008 	jr	ra
  41df50:	00000000 	nop
