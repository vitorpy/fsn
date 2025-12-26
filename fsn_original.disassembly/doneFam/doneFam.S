# Function: doneFam
# Address: 0x00418664 - 0x00418694
# Size: 0x30 (48 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00418664 <doneFam>:
  418664:	3c1c0fc0 	lui	gp,0xfc0
  418668:	279c54cc 	addiu	gp,gp,21708
  41866c:	0399e021 	addu	gp,gp,t9
  418670:	8f9985cc 	lw	t9,-31284(gp)
  418674:	27bdffe0 	addiu	sp,sp,-32
  418678:	afbf001c 	sw	ra,28(sp)
  41867c:	0320f809 	jalr	t9
  418680:	afbc0018 	sw	gp,24(sp)
  418684:	8fbf001c 	lw	ra,28(sp)
  418688:	8fbc0018 	lw	gp,24(sp)
  41868c:	03e00008 	jr	ra
  418690:	27bd0020 	addiu	sp,sp,32
