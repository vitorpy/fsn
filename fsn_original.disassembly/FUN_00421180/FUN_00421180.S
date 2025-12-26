# Function: FUN_00421180
# Address: 0x00421180 - 0x004211d4
# Size: 0x54 (84 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00421180 <hideOverview+0x5c>:
  421180:	3c1c0fc0 	lui	gp,0xfc0
  421184:	279cc9b0 	addiu	gp,gp,-13904
  421188:	0399e021 	addu	gp,gp,t9
  42118c:	8f81893c 	lw	at,-30404(gp)
  421190:	27bdffe0 	addiu	sp,sp,-32
  421194:	afa40020 	sw	a0,32(sp)
  421198:	8f84806c 	lw	a0,-32660(gp)
  42119c:	a0200000 	sb	zero,0(at)
  4211a0:	8f818068 	lw	at,-32664(gp)
  4211a4:	8f998694 	lw	t9,-31084(gp)
  4211a8:	afbf001c 	sw	ra,28(sp)
  4211ac:	8c846c08 	lw	a0,27656(a0)
  4211b0:	afbc0018 	sw	gp,24(sp)
  4211b4:	afa50024 	sw	a1,36(sp)
  4211b8:	afa60028 	sw	a2,40(sp)
  4211bc:	0320f809 	jalr	t9
  4211c0:	ac206eb4 	sw	zero,28340(at)
  4211c4:	8fbf001c 	lw	ra,28(sp)
  4211c8:	8fbc0018 	lw	gp,24(sp)
  4211cc:	03e00008 	jr	ra
  4211d0:	27bd0020 	addiu	sp,sp,32
