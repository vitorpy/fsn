# Function: FUN_0041fadc
# Address: 0x0041fadc - 0x0041fb20
# Size: 0x44 (68 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041fadc <doIt+0x9d0>:
  41fadc:	3c1c0fc0 	lui	gp,0xfc0
  41fae0:	279ce054 	addiu	gp,gp,-8108
  41fae4:	0399e021 	addu	gp,gp,t9
  41fae8:	27bdffe0 	addiu	sp,sp,-32
  41faec:	8f81806c 	lw	at,-32660(gp)
  41faf0:	8f998744 	lw	t9,-30908(gp)
  41faf4:	afbf001c 	sw	ra,28(sp)
  41faf8:	afbc0018 	sw	gp,24(sp)
  41fafc:	afa40020 	sw	a0,32(sp)
  41fb00:	afa50024 	sw	a1,36(sp)
  41fb04:	afa60028 	sw	a2,40(sp)
  41fb08:	0320f809 	jalr	t9
  41fb0c:	a0206bc8 	sb	zero,27592(at)
  41fb10:	8fbf001c 	lw	ra,28(sp)
  41fb14:	8fbc0018 	lw	gp,24(sp)
  41fb18:	03e00008 	jr	ra
  41fb1c:	27bd0020 	addiu	sp,sp,32
