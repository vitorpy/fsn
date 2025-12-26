# Function: FUN_0040de38
# Address: 0x0040de38 - 0x0040dee0
# Size: 0xa8 (168 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040de38 <setScales+0x640>:
  40de38:	3c1c0fc1 	lui	gp,0xfc1
  40de3c:	279cfcf8 	addiu	gp,gp,-776
  40de40:	0399e021 	addu	gp,gp,t9
  40de44:	8f8e806c 	lw	t6,-32660(gp)
  40de48:	8f818a1c 	lw	at,-30180(gp)
  40de4c:	8dce6654 	lw	t6,26196(t6)
  40de50:	27bdff88 	addiu	sp,sp,-120
  40de54:	afbf001c 	sw	ra,28(sp)
  40de58:	afbc0018 	sw	gp,24(sp)
  40de5c:	11c0001c 	beqz	t6,40ded0 <setScales+0x6d8>
  40de60:	a0200000 	sb	zero,0(at)
  40de64:	8f8f80a0 	lw	t7,-32608(gp)
  40de68:	8f84806c 	lw	a0,-32660(gp)
  40de6c:	8f998340 	lw	t9,-31936(gp)
  40de70:	24180001 	li	t8,1
  40de74:	25ef1399 	addiu	t7,t7,5017
  40de78:	8c846650 	lw	a0,26192(a0)
  40de7c:	afaf0028 	sw	t7,40(sp)
  40de80:	afb8002c 	sw	t8,44(sp)
  40de84:	27a50028 	addiu	a1,sp,40
  40de88:	0320f809 	jalr	t9
  40de8c:	24060001 	li	a2,1
  40de90:	8fbc0018 	lw	gp,24(sp)
  40de94:	00000000 	nop
  40de98:	8f84806c 	lw	a0,-32660(gp)
  40de9c:	8f998490 	lw	t9,-31600(gp)
  40dea0:	8c846658 	lw	a0,26200(a0)
  40dea4:	0320f809 	jalr	t9
  40dea8:	00000000 	nop
  40deac:	8fbc0018 	lw	gp,24(sp)
  40deb0:	00000000 	nop
  40deb4:	8f84806c 	lw	a0,-32660(gp)
  40deb8:	8f998490 	lw	t9,-31600(gp)
  40debc:	8c846654 	lw	a0,26196(a0)
  40dec0:	0320f809 	jalr	t9
  40dec4:	00000000 	nop
  40dec8:	8fbc0018 	lw	gp,24(sp)
  40decc:	00000000 	nop
  40ded0:	8fbf001c 	lw	ra,28(sp)
  40ded4:	27bd0078 	addiu	sp,sp,120
  40ded8:	03e00008 	jr	ra
  40dedc:	00000000 	nop
