# Function: hidePreferencePanel
# Address: 0x0042cc54 - 0x0042ccac
# Size: 0x58 (88 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042cc54 <hidePreferencePanel>:
  42cc54:	3c1c0fbf 	lui	gp,0xfbf
  42cc58:	279c0edc 	addiu	gp,gp,3804
  42cc5c:	0399e021 	addu	gp,gp,t9
  42cc60:	27bdffe0 	addiu	sp,sp,-32
  42cc64:	afa40020 	sw	a0,32(sp)
  42cc68:	8f84806c 	lw	a0,-32660(gp)
  42cc6c:	afbf001c 	sw	ra,28(sp)
  42cc70:	8c848940 	lw	a0,-30400(a0)
  42cc74:	afbc0018 	sw	gp,24(sp)
  42cc78:	afa50024 	sw	a1,36(sp)
  42cc7c:	10800007 	beqz	a0,42cc9c <hidePreferencePanel+0x48>
  42cc80:	afa60028 	sw	a2,40(sp)
  42cc84:	8f998490 	lw	t9,-31600(gp)
  42cc88:	00000000 	nop
  42cc8c:	0320f809 	jalr	t9
  42cc90:	00000000 	nop
  42cc94:	8fbc0018 	lw	gp,24(sp)
  42cc98:	00000000 	nop
  42cc9c:	8fbf001c 	lw	ra,28(sp)
  42cca0:	27bd0020 	addiu	sp,sp,32
  42cca4:	03e00008 	jr	ra
  42cca8:	00000000 	nop
