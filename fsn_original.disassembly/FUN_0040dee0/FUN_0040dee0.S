# Function: FUN_0040dee0
# Address: 0x0040dee0 - 0x0040df80
# Size: 0xa0 (160 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0040dee0 <setScales+0x6e8>:
  40dee0:	3c1c0fc1 	lui	gp,0xfc1
  40dee4:	279cfc50 	addiu	gp,gp,-944
  40dee8:	0399e021 	addu	gp,gp,t9
  40deec:	8f818a20 	lw	at,-30176(gp)
  40def0:	8f998544 	lw	t9,-31420(gp)
  40def4:	27bdff88 	addiu	sp,sp,-120
  40def8:	afbf001c 	sw	ra,28(sp)
  40defc:	240e0001 	li	t6,1
  40df00:	afbc0018 	sw	gp,24(sp)
  40df04:	0320f809 	jalr	t9
  40df08:	a02e0000 	sb	t6,0(at)
  40df0c:	8fbc0018 	lw	gp,24(sp)
  40df10:	00000000 	nop
  40df14:	8f84806c 	lw	a0,-32660(gp)
  40df18:	8f998388 	lw	t9,-31864(gp)
  40df1c:	8c84665c 	lw	a0,26204(a0)
  40df20:	0320f809 	jalr	t9
  40df24:	00000000 	nop
  40df28:	8fbc0018 	lw	gp,24(sp)
  40df2c:	24180003 	li	t8,3
  40df30:	8f9980a0 	lw	t9,-32608(gp)
  40df34:	8f88806c 	lw	t0,-32660(gp)
  40df38:	27391d8a 	addiu	t9,t9,7562
  40df3c:	8f8f80a0 	lw	t7,-32608(gp)
  40df40:	8f84806c 	lw	a0,-32660(gp)
  40df44:	afb90030 	sw	t9,48(sp)
  40df48:	8f998340 	lw	t9,-31936(gp)
  40df4c:	8d08665c 	lw	t0,26204(t0)
  40df50:	25ef1d63 	addiu	t7,t7,7523
  40df54:	8c846664 	lw	a0,26212(a0)
  40df58:	afaf0028 	sw	t7,40(sp)
  40df5c:	afb8002c 	sw	t8,44(sp)
  40df60:	27a50028 	addiu	a1,sp,40
  40df64:	24060002 	li	a2,2
  40df68:	0320f809 	jalr	t9
  40df6c:	afa80034 	sw	t0,52(sp)
  40df70:	8fbf001c 	lw	ra,28(sp)
  40df74:	8fbc0018 	lw	gp,24(sp)
  40df78:	03e00008 	jr	ra
  40df7c:	27bd0078 	addiu	sp,sp,120
