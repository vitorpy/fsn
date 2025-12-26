# Function: FUN_0040ef44
# Address: 0x0040ef44 - 0x0040eff8
# Size: 0xb4 (180 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040ef44 <setScales+0x174c>:
  40ef44:	3c1c0fc1 	lui	gp,0xfc1
  40ef48:	279cebec 	addiu	gp,gp,-5140
  40ef4c:	0399e021 	addu	gp,gp,t9
  40ef50:	27bdffe0 	addiu	sp,sp,-32
  40ef54:	afbf001c 	sw	ra,28(sp)
  40ef58:	afbc0018 	sw	gp,24(sp)
  40ef5c:	afa40020 	sw	a0,32(sp)
  40ef60:	8cce0008 	lw	t6,8(a2)
  40ef64:	0005c02b 	sltu	t8,zero,a1
  40ef68:	11c00020 	beqz	t6,40efec <setScales+0x17f4>
  40ef6c:	8fbf001c 	lw	ra,28(sp)
  40ef70:	8f8f897c 	lw	t7,-30340(gp)
  40ef74:	8f828924 	lw	v0,-30428(gp)
  40ef78:	8def0000 	lw	t7,0(t7)
  40ef7c:	8f84806c 	lw	a0,-32660(gp)
  40ef80:	a1e00c50 	sb	zero,3152(t7)
  40ef84:	ac450000 	sw	a1,0(v0)
  40ef88:	8f998318 	lw	t9,-31976(gp)
  40ef8c:	8c84666c 	lw	a0,26220(a0)
  40ef90:	0320f809 	jalr	t9
  40ef94:	03002825 	move	a1,t8
  40ef98:	8fbc0018 	lw	gp,24(sp)
  40ef9c:	00000000 	nop
  40efa0:	8f998588 	lw	t9,-31352(gp)
  40efa4:	00000000 	nop
  40efa8:	0320f809 	jalr	t9
  40efac:	00000000 	nop
  40efb0:	8fbc0018 	lw	gp,24(sp)
  40efb4:	00000000 	nop
  40efb8:	8f998534 	lw	t9,-31436(gp)
  40efbc:	00000000 	nop
  40efc0:	0320f809 	jalr	t9
  40efc4:	00000000 	nop
  40efc8:	8fbc0018 	lw	gp,24(sp)
  40efcc:	00000000 	nop
  40efd0:	8f998780 	lw	t9,-30848(gp)
  40efd4:	00000000 	nop
  40efd8:	0320f809 	jalr	t9
  40efdc:	00000000 	nop
  40efe0:	8fbc0018 	lw	gp,24(sp)
  40efe4:	00000000 	nop
  40efe8:	8fbf001c 	lw	ra,28(sp)
  40efec:	27bd0020 	addiu	sp,sp,32
  40eff0:	03e00008 	jr	ra
  40eff4:	00000000 	nop
