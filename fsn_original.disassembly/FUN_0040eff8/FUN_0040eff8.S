# Function: FUN_0040eff8
# Address: 0x0040eff8 - 0x0040f080
# Size: 0x88 (136 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040eff8 <setScales+0x1800>:
  40eff8:	3c1c0fc1 	lui	gp,0xfc1
  40effc:	279ceb38 	addiu	gp,gp,-5320
  40f000:	0399e021 	addu	gp,gp,t9
  40f004:	27bdffe0 	addiu	sp,sp,-32
  40f008:	afbf001c 	sw	ra,28(sp)
  40f00c:	afbc0018 	sw	gp,24(sp)
  40f010:	afa40020 	sw	a0,32(sp)
  40f014:	8cce0008 	lw	t6,8(a2)
  40f018:	00000000 	nop
  40f01c:	11c00015 	beqz	t6,40f074 <setScales+0x187c>
  40f020:	8fbf001c 	lw	ra,28(sp)
  40f024:	8f818928 	lw	at,-30424(gp)
  40f028:	8f998588 	lw	t9,-31352(gp)
  40f02c:	ac250000 	sw	a1,0(at)
  40f030:	0320f809 	jalr	t9
  40f034:	00000000 	nop
  40f038:	8fbc0018 	lw	gp,24(sp)
  40f03c:	00000000 	nop
  40f040:	8f998534 	lw	t9,-31436(gp)
  40f044:	00000000 	nop
  40f048:	0320f809 	jalr	t9
  40f04c:	00000000 	nop
  40f050:	8fbc0018 	lw	gp,24(sp)
  40f054:	00000000 	nop
  40f058:	8f998780 	lw	t9,-30848(gp)
  40f05c:	00000000 	nop
  40f060:	0320f809 	jalr	t9
  40f064:	00000000 	nop
  40f068:	8fbc0018 	lw	gp,24(sp)
  40f06c:	00000000 	nop
  40f070:	8fbf001c 	lw	ra,28(sp)
  40f074:	27bd0020 	addiu	sp,sp,32
  40f078:	03e00008 	jr	ra
  40f07c:	00000000 	nop
