# Function: databaseDumpTimeout
# Address: 0x004154f8 - 0x00415544
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004154f8 <databaseDumpTimeout>:
  4154f8:	3c1c0fc1 	lui	gp,0xfc1
  4154fc:	279c8638 	addiu	gp,gp,-31176
  415500:	0399e021 	addu	gp,gp,t9
  415504:	8f998018 	lw	t9,-32744(gp)
  415508:	27bdffe0 	addiu	sp,sp,-32
  41550c:	afbf001c 	sw	ra,28(sp)
  415510:	27394da4 	addiu	t9,t9,19876
  415514:	0320f809 	jalr	t9
  415518:	afbc0018 	sw	gp,24(sp)
  41551c:	8fbc0018 	lw	gp,24(sp)
  415520:	00000000 	nop
  415524:	8f9985b8 	lw	t9,-31304(gp)
  415528:	00000000 	nop
  41552c:	0320f809 	jalr	t9
  415530:	00000000 	nop
  415534:	8fbf001c 	lw	ra,28(sp)
  415538:	8fbc0018 	lw	gp,24(sp)
  41553c:	03e00008 	jr	ra
  415540:	27bd0020 	addiu	sp,sp,32
