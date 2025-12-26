# Function: FUN_0040bfa0
# Address: 0x0040bfa0 - 0x0040bfe0
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040bfa0 <do_perspective+0xc>:
  40bfa0:	8f8e897c 	lw	t6,-30340(gp)
  40bfa4:	27bdffe0 	addiu	sp,sp,-32
  40bfa8:	8dce0000 	lw	t6,0(t6)
  40bfac:	8f998358 	lw	t9,-31912(gp)
  40bfb0:	afbf001c 	sw	ra,28(sp)
  40bfb4:	afbc0018 	sw	gp,24(sp)
  40bfb8:	3c063d4c 	lui	a2,0x3d4c
  40bfbc:	85c40010 	lh	a0,16(t6)
  40bfc0:	34c6cccd 	ori	a2,a2,0xcccd
  40bfc4:	3c053f80 	lui	a1,0x3f80
  40bfc8:	0320f809 	jalr	t9
  40bfcc:	3c0743fa 	lui	a3,0x43fa
  40bfd0:	8fbf001c 	lw	ra,28(sp)
  40bfd4:	8fbc0018 	lw	gp,24(sp)
  40bfd8:	03e00008 	jr	ra
  40bfdc:	27bd0020 	addiu	sp,sp,32
