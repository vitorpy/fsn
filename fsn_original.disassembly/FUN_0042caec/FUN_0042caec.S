# Function: FUN_0042caec
# Address: 0x0042caec - 0x0042cb38
# Size: 0x4c (76 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042caec <showPreferencePanel+0x1104>:
  42caec:	3c1c0fbf 	lui	gp,0xfbf
  42caf0:	279c1044 	addiu	gp,gp,4164
  42caf4:	0399e021 	addu	gp,gp,t9
  42caf8:	27bdffe0 	addiu	sp,sp,-32
  42cafc:	afbf001c 	sw	ra,28(sp)
  42cb00:	afbc0018 	sw	gp,24(sp)
  42cb04:	afa40020 	sw	a0,32(sp)
  42cb08:	8caf0004 	lw	t7,4(a1)
  42cb0c:	8cce0008 	lw	t6,8(a2)
  42cb10:	8f998020 	lw	t9,-32736(gp)
  42cb14:	adee0000 	sw	t6,0(t7)
  42cb18:	8ca40008 	lw	a0,8(a1)
  42cb1c:	2739c970 	addiu	t9,t9,-13968
  42cb20:	0320f809 	jalr	t9
  42cb24:	00000000 	nop
  42cb28:	8fbf001c 	lw	ra,28(sp)
  42cb2c:	8fbc0018 	lw	gp,24(sp)
  42cb30:	03e00008 	jr	ra
  42cb34:	27bd0020 	addiu	sp,sp,32
