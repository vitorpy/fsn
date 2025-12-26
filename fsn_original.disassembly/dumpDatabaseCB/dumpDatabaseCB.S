# Function: dumpDatabaseCB
# Address: 0x004154c4 - 0x004154f8
# Size: 0x34 (52 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004154c4 <dumpDatabaseCB>:
  4154c4:	3c1c0fc1 	lui	gp,0xfc1
  4154c8:	279c866c 	addiu	gp,gp,-31124
  4154cc:	0399e021 	addu	gp,gp,t9
  4154d0:	8f998018 	lw	t9,-32744(gp)
  4154d4:	27bdffe0 	addiu	sp,sp,-32
  4154d8:	afbf001c 	sw	ra,28(sp)
  4154dc:	27394da4 	addiu	t9,t9,19876
  4154e0:	0320f809 	jalr	t9
  4154e4:	afbc0018 	sw	gp,24(sp)
  4154e8:	8fbf001c 	lw	ra,28(sp)
  4154ec:	8fbc0018 	lw	gp,24(sp)
  4154f0:	03e00008 	jr	ra
  4154f4:	27bd0020 	addiu	sp,sp,32
