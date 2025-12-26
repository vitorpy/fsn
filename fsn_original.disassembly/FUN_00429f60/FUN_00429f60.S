# Function: FUN_00429f60
# Address: 0x00429f60 - 0x00429fc8
# Size: 0x68 (104 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00429f60 <createViewer+0x328>:
  429f60:	3c1c0fbf 	lui	gp,0xfbf
  429f64:	279c3bd0 	addiu	gp,gp,15312
  429f68:	0399e021 	addu	gp,gp,t9
  429f6c:	27bdffe0 	addiu	sp,sp,-32
  429f70:	8f998778 	lw	t9,-30856(gp)
  429f74:	afa40020 	sw	a0,32(sp)
  429f78:	afbf001c 	sw	ra,28(sp)
  429f7c:	afa50024 	sw	a1,36(sp)
  429f80:	00a02025 	move	a0,a1
  429f84:	afbc0018 	sw	gp,24(sp)
  429f88:	afa60028 	sw	a2,40(sp)
  429f8c:	0320f809 	jalr	t9
  429f90:	00002825 	move	a1,zero
  429f94:	8fbc0018 	lw	gp,24(sp)
  429f98:	00000000 	nop
  429f9c:	8f8e8984 	lw	t6,-30332(gp)
  429fa0:	8f998490 	lw	t9,-31600(gp)
  429fa4:	8dce0000 	lw	t6,0(t6)
  429fa8:	00000000 	nop
  429fac:	8dc40010 	lw	a0,16(t6)
  429fb0:	0320f809 	jalr	t9
  429fb4:	00000000 	nop
  429fb8:	8fbf001c 	lw	ra,28(sp)
  429fbc:	8fbc0018 	lw	gp,24(sp)
  429fc0:	03e00008 	jr	ra
  429fc4:	27bd0020 	addiu	sp,sp,32
