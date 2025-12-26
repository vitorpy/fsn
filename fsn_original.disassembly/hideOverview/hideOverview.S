# Function: hideOverview
# Address: 0x00421124 - 0x00421180
# Size: 0x5c (92 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421124 <hideOverview>:
  421124:	3c1c0fc0 	lui	gp,0xfc0
  421128:	279cca0c 	addiu	gp,gp,-13812
  42112c:	0399e021 	addu	gp,gp,t9
  421130:	27bdffe0 	addiu	sp,sp,-32
  421134:	afa40020 	sw	a0,32(sp)
  421138:	8f848068 	lw	a0,-32664(gp)
  42113c:	afbf001c 	sw	ra,28(sp)
  421140:	8c846eb4 	lw	a0,28340(a0)
  421144:	afbc0018 	sw	gp,24(sp)
  421148:	afa50024 	sw	a1,36(sp)
  42114c:	10800008 	beqz	a0,421170 <hideOverview+0x4c>
  421150:	afa60028 	sw	a2,40(sp)
  421154:	8f81893c 	lw	at,-30404(gp)
  421158:	8f998490 	lw	t9,-31600(gp)
  42115c:	a0200000 	sb	zero,0(at)
  421160:	0320f809 	jalr	t9
  421164:	00000000 	nop
  421168:	8fbc0018 	lw	gp,24(sp)
  42116c:	00000000 	nop
  421170:	8fbf001c 	lw	ra,28(sp)
  421174:	27bd0020 	addiu	sp,sp,32
  421178:	03e00008 	jr	ra
  42117c:	00000000 	nop
