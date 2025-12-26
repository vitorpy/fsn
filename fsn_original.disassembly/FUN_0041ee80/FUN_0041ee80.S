# Function: FUN_0041ee80
# Address: 0x0041ee80 - 0x0041ef30
# Size: 0xb0 (176 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041ee80 <editCB+0xd5c>:
  41ee80:	3c1c0fc0 	lui	gp,0xfc0
  41ee84:	279cecb0 	addiu	gp,gp,-4944
  41ee88:	0399e021 	addu	gp,gp,t9
  41ee8c:	27bdffe0 	addiu	sp,sp,-32
  41ee90:	afa40020 	sw	a0,32(sp)
  41ee94:	8f84892c 	lw	a0,-30420(gp)
  41ee98:	8f99801c 	lw	t9,-32740(gp)
  41ee9c:	afbf001c 	sw	ra,28(sp)
  41eea0:	8c840000 	lw	a0,0(a0)
  41eea4:	2739ed94 	addiu	t9,t9,-4716
  41eea8:	afbc0018 	sw	gp,24(sp)
  41eeac:	afa50024 	sw	a1,36(sp)
  41eeb0:	0320f809 	jalr	t9
  41eeb4:	afa60028 	sw	a2,40(sp)
  41eeb8:	8fbc0018 	lw	gp,24(sp)
  41eebc:	00000000 	nop
  41eec0:	8f998534 	lw	t9,-31436(gp)
  41eec4:	00000000 	nop
  41eec8:	0320f809 	jalr	t9
  41eecc:	00000000 	nop
  41eed0:	8fbc0018 	lw	gp,24(sp)
  41eed4:	00000000 	nop
  41eed8:	8f998780 	lw	t9,-30848(gp)
  41eedc:	00000000 	nop
  41eee0:	0320f809 	jalr	t9
  41eee4:	00000000 	nop
  41eee8:	8fbc0018 	lw	gp,24(sp)
  41eeec:	00002825 	move	a1,zero
  41eef0:	8f84806c 	lw	a0,-32660(gp)
  41eef4:	8f998318 	lw	t9,-31976(gp)
  41eef8:	8c846b8c 	lw	a0,27532(a0)
  41eefc:	0320f809 	jalr	t9
  41ef00:	00000000 	nop
  41ef04:	8fbc0018 	lw	gp,24(sp)
  41ef08:	00002825 	move	a1,zero
  41ef0c:	8f84806c 	lw	a0,-32660(gp)
  41ef10:	8f998318 	lw	t9,-31976(gp)
  41ef14:	8c846b90 	lw	a0,27536(a0)
  41ef18:	0320f809 	jalr	t9
  41ef1c:	00000000 	nop
  41ef20:	8fbf001c 	lw	ra,28(sp)
  41ef24:	8fbc0018 	lw	gp,24(sp)
  41ef28:	03e00008 	jr	ra
  41ef2c:	27bd0020 	addiu	sp,sp,32
