# Function: shrinkDueToZoom
# Address: 0x004108ac - 0x004108ec
# Size: 0x40 (64 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004108ac <shrinkDueToZoom>:
  4108ac:	3c1c0fc1 	lui	gp,0xfc1
  4108b0:	279cd284 	addiu	gp,gp,-11644
  4108b4:	0399e021 	addu	gp,gp,t9
  4108b8:	8f998018 	lw	t9,-32744(gp)
  4108bc:	8f848018 	lw	a0,-32744(gp)
  4108c0:	27bdffe0 	addiu	sp,sp,-32
  4108c4:	afbf001c 	sw	ra,28(sp)
  4108c8:	2739f150 	addiu	t9,t9,-3760
  4108cc:	afbc0018 	sw	gp,24(sp)
  4108d0:	00002825 	move	a1,zero
  4108d4:	0320f809 	jalr	t9
  4108d8:	24840858 	addiu	a0,a0,2136
  4108dc:	8fbf001c 	lw	ra,28(sp)
  4108e0:	8fbc0018 	lw	gp,24(sp)
  4108e4:	03e00008 	jr	ra
  4108e8:	27bd0020 	addiu	sp,sp,32
