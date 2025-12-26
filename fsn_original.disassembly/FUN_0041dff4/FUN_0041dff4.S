# Function: FUN_0041dff4
# Address: 0x0041dff4 - 0x0041e0a8
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041dff4 <checkValidSelections+0x460>:
  41dff4:	3c1c0fc0 	lui	gp,0xfc0
  41dff8:	279cfb3c 	addiu	gp,gp,-1220
  41dffc:	0399e021 	addu	gp,gp,t9
  41e000:	27bdffe0 	addiu	sp,sp,-32
  41e004:	8f8e897c 	lw	t6,-30340(gp)
  41e008:	afbf001c 	sw	ra,28(sp)
  41e00c:	8dce0000 	lw	t6,0(t6)
  41e010:	afbc0018 	sw	gp,24(sp)
  41e014:	afa40020 	sw	a0,32(sp)
  41e018:	afa50024 	sw	a1,36(sp)
  41e01c:	afa60028 	sw	a2,40(sp)
  41e020:	8dc40044 	lw	a0,68(t6)
  41e024:	00000000 	nop
  41e028:	1080001c 	beqz	a0,41e09c <checkValidSelections+0x508>
  41e02c:	8fbf001c 	lw	ra,28(sp)
  41e030:	8f99801c 	lw	t9,-32740(gp)
  41e034:	30a500ff 	andi	a1,a1,0xff
  41e038:	2739df54 	addiu	t9,t9,-8364
  41e03c:	0320f809 	jalr	t9
  41e040:	00000000 	nop
  41e044:	8fbc0018 	lw	gp,24(sp)
  41e048:	00000000 	nop
  41e04c:	8f99801c 	lw	t9,-32740(gp)
  41e050:	00000000 	nop
  41e054:	2739c3e4 	addiu	t9,t9,-15388
  41e058:	0320f809 	jalr	t9
  41e05c:	00000000 	nop
  41e060:	8fbc0018 	lw	gp,24(sp)
  41e064:	00000000 	nop
  41e068:	8f998534 	lw	t9,-31436(gp)
  41e06c:	00000000 	nop
  41e070:	0320f809 	jalr	t9
  41e074:	00000000 	nop
  41e078:	8fbc0018 	lw	gp,24(sp)
  41e07c:	00000000 	nop
  41e080:	8f998780 	lw	t9,-30848(gp)
  41e084:	00000000 	nop
  41e088:	0320f809 	jalr	t9
  41e08c:	00000000 	nop
  41e090:	8fbc0018 	lw	gp,24(sp)
  41e094:	00000000 	nop
  41e098:	8fbf001c 	lw	ra,28(sp)
  41e09c:	27bd0020 	addiu	sp,sp,32
  41e0a0:	03e00008 	jr	ra
  41e0a4:	00000000 	nop
