# Function: FUN_0041ddf8
# Address: 0x0041ddf8 - 0x0041dea4
# Size: 0xac (172 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041ddf8 <checkValidSelections+0x264>:
  41ddf8:	3c1c0fc0 	lui	gp,0xfc0
  41ddfc:	279cfd38 	addiu	gp,gp,-712
  41de00:	0399e021 	addu	gp,gp,t9
  41de04:	27bdffe0 	addiu	sp,sp,-32
  41de08:	30ae00ff 	andi	t6,a1,0xff
  41de0c:	afbf001c 	sw	ra,28(sp)
  41de10:	afbc0018 	sw	gp,24(sp)
  41de14:	afa50024 	sw	a1,36(sp)
  41de18:	11c0000c 	beqz	t6,41de4c <checkValidSelections+0x2b8>
  41de1c:	00803025 	move	a2,a0
  41de20:	90980075 	lbu	t8,117(a0)
  41de24:	00000000 	nop
  41de28:	37190010 	ori	t9,t8,0x10
  41de2c:	a0990075 	sb	t9,117(a0)
  41de30:	8f998714 	lw	t9,-30956(gp)
  41de34:	00000000 	nop
  41de38:	0320f809 	jalr	t9
  41de3c:	00000000 	nop
  41de40:	8fbc0018 	lw	gp,24(sp)
  41de44:	10000014 	b	41de98 <checkValidSelections+0x304>
  41de48:	8fbf001c 	lw	ra,28(sp)
  41de4c:	90c80075 	lbu	t0,117(a2)
  41de50:	8cc40064 	lw	a0,100(a2)
  41de54:	3109ffef 	andi	t1,t0,0xffef
  41de58:	10800008 	beqz	a0,41de7c <checkValidSelections+0x2e8>
  41de5c:	a0c90075 	sb	t1,117(a2)
  41de60:	8f99824c 	lw	t9,-32180(gp)
  41de64:	afa60020 	sw	a2,32(sp)
  41de68:	0320f809 	jalr	t9
  41de6c:	00000000 	nop
  41de70:	8fbc0018 	lw	gp,24(sp)
  41de74:	8fa60020 	lw	a2,32(sp)
  41de78:	00000000 	nop
  41de7c:	8f998634 	lw	t9,-31180(gp)
  41de80:	00c02025 	move	a0,a2
  41de84:	0320f809 	jalr	t9
  41de88:	00000000 	nop
  41de8c:	8fbc0018 	lw	gp,24(sp)
  41de90:	00000000 	nop
  41de94:	8fbf001c 	lw	ra,28(sp)
  41de98:	27bd0020 	addiu	sp,sp,32
  41de9c:	03e00008 	jr	ra
  41dea0:	00000000 	nop
