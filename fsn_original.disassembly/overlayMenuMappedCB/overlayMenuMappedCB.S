# Function: overlayMenuMappedCB
# Address: 0x00422218 - 0x00422268
# Size: 0x50 (80 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00422218 <overlayMenuMappedCB>:
  422218:	3c1c0fc0 	lui	gp,0xfc0
  42221c:	279cb918 	addiu	gp,gp,-18152
  422220:	0399e021 	addu	gp,gp,t9
  422224:	27bdffe0 	addiu	sp,sp,-32
  422228:	8f998368 	lw	t9,-31896(gp)
  42222c:	afbf001c 	sw	ra,28(sp)
  422230:	afbc0018 	sw	gp,24(sp)
  422234:	afa50024 	sw	a1,36(sp)
  422238:	0320f809 	jalr	t9
  42223c:	afa60028 	sw	a2,40(sp)
  422240:	8fbc0018 	lw	gp,24(sp)
  422244:	00402025 	move	a0,v0
  422248:	8f998698 	lw	t9,-31080(gp)
  42224c:	00000000 	nop
  422250:	0320f809 	jalr	t9
  422254:	00000000 	nop
  422258:	8fbf001c 	lw	ra,28(sp)
  42225c:	8fbc0018 	lw	gp,24(sp)
  422260:	03e00008 	jr	ra
  422264:	27bd0020 	addiu	sp,sp,32
