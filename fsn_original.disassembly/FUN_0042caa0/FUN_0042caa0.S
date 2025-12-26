# Function: FUN_0042caa0
# Address: 0x0042caa0 - 0x0042caec
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042caa0 <showPreferencePanel+0x10b8>:
  42caa0:	3c1c0fbf 	lui	gp,0xfbf
  42caa4:	279c1090 	addiu	gp,gp,4240
  42caa8:	0399e021 	addu	gp,gp,t9
  42caac:	27bdffe0 	addiu	sp,sp,-32
  42cab0:	afbf001c 	sw	ra,28(sp)
  42cab4:	afbc0018 	sw	gp,24(sp)
  42cab8:	afa40020 	sw	a0,32(sp)
  42cabc:	8caf0004 	lw	t7,4(a1)
  42cac0:	8cce0008 	lw	t6,8(a2)
  42cac4:	8f998020 	lw	t9,-32736(gp)
  42cac8:	a1ee0000 	sb	t6,0(t7)
  42cacc:	8ca40008 	lw	a0,8(a1)
  42cad0:	2739c970 	addiu	t9,t9,-13968
  42cad4:	0320f809 	jalr	t9
  42cad8:	00000000 	nop
  42cadc:	8fbf001c 	lw	ra,28(sp)
  42cae0:	8fbc0018 	lw	gp,24(sp)
  42cae4:	03e00008 	jr	ra
  42cae8:	27bd0020 	addiu	sp,sp,32
