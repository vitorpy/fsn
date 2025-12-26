# Function: FUN_0040bc64
# Address: 0x0040bc64 - 0x0040bce8
# Size: 0x84 (132 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040bc64 <setOverlayWindow+0x48>:
  40bc64:	3c1c0fc1 	lui	gp,0xfc1
  40bc68:	279c1ecc 	addiu	gp,gp,7884
  40bc6c:	0399e021 	addu	gp,gp,t9
  40bc70:	27bdffe0 	addiu	sp,sp,-32
  40bc74:	8f998770 	lw	t9,-30864(gp)
  40bc78:	afbf001c 	sw	ra,28(sp)
  40bc7c:	afbc0018 	sw	gp,24(sp)
  40bc80:	afa40020 	sw	a0,32(sp)
  40bc84:	afa50024 	sw	a1,36(sp)
  40bc88:	0320f809 	jalr	t9
  40bc8c:	afa60028 	sw	a2,40(sp)
  40bc90:	8fbc0018 	lw	gp,24(sp)
  40bc94:	8fa40020 	lw	a0,32(sp)
  40bc98:	8f998778 	lw	t9,-30856(gp)
  40bc9c:	24050001 	li	a1,1
  40bca0:	0320f809 	jalr	t9
  40bca4:	00000000 	nop
  40bca8:	8fbc0018 	lw	gp,24(sp)
  40bcac:	00000000 	nop
  40bcb0:	8f998534 	lw	t9,-31436(gp)
  40bcb4:	00000000 	nop
  40bcb8:	0320f809 	jalr	t9
  40bcbc:	00000000 	nop
  40bcc0:	8fbc0018 	lw	gp,24(sp)
  40bcc4:	00000000 	nop
  40bcc8:	8f998774 	lw	t9,-30860(gp)
  40bccc:	00000000 	nop
  40bcd0:	0320f809 	jalr	t9
  40bcd4:	00000000 	nop
  40bcd8:	8fbf001c 	lw	ra,28(sp)
  40bcdc:	8fbc0018 	lw	gp,24(sp)
  40bce0:	03e00008 	jr	ra
  40bce4:	27bd0020 	addiu	sp,sp,32
