# Function: FUN_0041e0a8
# Address: 0x0041e0a8 - 0x0041e124
# Size: 0x7c (124 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041e0a8 <checkValidSelections+0x514>:
  41e0a8:	3c1c0fc0 	lui	gp,0xfc0
  41e0ac:	279cfa88 	addiu	gp,gp,-1400
  41e0b0:	0399e021 	addu	gp,gp,t9
  41e0b4:	27bdffe0 	addiu	sp,sp,-32
  41e0b8:	8f8e897c 	lw	t6,-30340(gp)
  41e0bc:	afbf001c 	sw	ra,28(sp)
  41e0c0:	8dce0000 	lw	t6,0(t6)
  41e0c4:	afbc0018 	sw	gp,24(sp)
  41e0c8:	afa40020 	sw	a0,32(sp)
  41e0cc:	afa50024 	sw	a1,36(sp)
  41e0d0:	afa60028 	sw	a2,40(sp)
  41e0d4:	8dc40044 	lw	a0,68(t6)
  41e0d8:	00000000 	nop
  41e0dc:	1080000e 	beqz	a0,41e118 <checkValidSelections+0x584>
  41e0e0:	8fbf001c 	lw	ra,28(sp)
  41e0e4:	8c8f0074 	lw	t7,116(a0)
  41e0e8:	00000000 	nop
  41e0ec:	000fc340 	sll	t8,t7,0xd
  41e0f0:	0018cfc2 	srl	t9,t8,0x1f
  41e0f4:	17200008 	bnez	t9,41e118 <checkValidSelections+0x584>
  41e0f8:	8fbf001c 	lw	ra,28(sp)
  41e0fc:	8f9985bc 	lw	t9,-31300(gp)
  41e100:	00000000 	nop
  41e104:	0320f809 	jalr	t9
  41e108:	00000000 	nop
  41e10c:	8fbc0018 	lw	gp,24(sp)
  41e110:	00000000 	nop
  41e114:	8fbf001c 	lw	ra,28(sp)
  41e118:	27bd0020 	addiu	sp,sp,32
  41e11c:	03e00008 	jr	ra
  41e120:	00000000 	nop
