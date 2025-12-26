# Function: draw_warp
# Address: 0x004101d8 - 0x00410258
# Size: 0x80 (128 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004101d8 <draw_warp>:
  4101d8:	3c1c0fc1 	lui	gp,0xfc1
  4101dc:	279cd958 	addiu	gp,gp,-9896
  4101e0:	0399e021 	addu	gp,gp,t9
  4101e4:	8f848a24 	lw	a0,-30172(gp)
  4101e8:	8f998464 	lw	t9,-31644(gp)
  4101ec:	27bdffe0 	addiu	sp,sp,-32
  4101f0:	afbf001c 	sw	ra,28(sp)
  4101f4:	8c840180 	lw	a0,384(a0)
  4101f8:	0320f809 	jalr	t9
  4101fc:	afbc0018 	sw	gp,24(sp)
  410200:	8fbc0018 	lw	gp,24(sp)
  410204:	00000000 	nop
  410208:	8f998308 	lw	t9,-31992(gp)
  41020c:	00000000 	nop
  410210:	0320f809 	jalr	t9
  410214:	00000000 	nop
  410218:	8fbc0018 	lw	gp,24(sp)
  41021c:	00000000 	nop
  410220:	8f9984ac 	lw	t9,-31572(gp)
  410224:	00000000 	nop
  410228:	0320f809 	jalr	t9
  41022c:	00000000 	nop
  410230:	8fbc0018 	lw	gp,24(sp)
  410234:	00000000 	nop
  410238:	8f998330 	lw	t9,-31952(gp)
  41023c:	00000000 	nop
  410240:	0320f809 	jalr	t9
  410244:	00000000 	nop
  410248:	8fbf001c 	lw	ra,28(sp)
  41024c:	8fbc0018 	lw	gp,24(sp)
  410250:	03e00008 	jr	ra
  410254:	27bd0020 	addiu	sp,sp,32
