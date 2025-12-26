# Function: FUN_0042cbb8
# Address: 0x0042cbb8 - 0x0042cc30
# Size: 0x78 (120 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042cbb8 <showPreferencePanel+0x11d0>:
  42cbb8:	3c1c0fbf 	lui	gp,0xfbf
  42cbbc:	279c0f78 	addiu	gp,gp,3960
  42cbc0:	0399e021 	addu	gp,gp,t9
  42cbc4:	27bdffe0 	addiu	sp,sp,-32
  42cbc8:	afbf001c 	sw	ra,28(sp)
  42cbcc:	afbc0018 	sw	gp,24(sp)
  42cbd0:	afa40020 	sw	a0,32(sp)
  42cbd4:	8cce0008 	lw	t6,8(a2)
  42cbd8:	00000000 	nop
  42cbdc:	11c00004 	beqz	t6,42cbf0 <showPreferencePanel+0x1208>
  42cbe0:	00000000 	nop
  42cbe4:	8f81806c 	lw	at,-32660(gp)
  42cbe8:	00000000 	nop
  42cbec:	ac2594ec 	sw	a1,-27412(at)
  42cbf0:	8f998020 	lw	t9,-32736(gp)
  42cbf4:	00000000 	nop
  42cbf8:	2739d618 	addiu	t9,t9,-10728
  42cbfc:	0320f809 	jalr	t9
  42cc00:	00000000 	nop
  42cc04:	8fbc0018 	lw	gp,24(sp)
  42cc08:	00000000 	nop
  42cc0c:	8f998020 	lw	t9,-32736(gp)
  42cc10:	00000000 	nop
  42cc14:	2739d6f0 	addiu	t9,t9,-10512
  42cc18:	0320f809 	jalr	t9
  42cc1c:	00000000 	nop
  42cc20:	8fbf001c 	lw	ra,28(sp)
  42cc24:	8fbc0018 	lw	gp,24(sp)
  42cc28:	03e00008 	jr	ra
  42cc2c:	27bd0020 	addiu	sp,sp,32
