# Function: FUN_00416198
# Address: 0x00416198 - 0x00416220
# Size: 0x88 (136 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00416198 <rescanDatabase+0xa9c>:
  416198:	3c1c0fc0 	lui	gp,0xfc0
  41619c:	279c7998 	addiu	gp,gp,31128
  4161a0:	0399e021 	addu	gp,gp,t9
  4161a4:	8f8e892c 	lw	t6,-30420(gp)
  4161a8:	27bdffe0 	addiu	sp,sp,-32
  4161ac:	8dce0000 	lw	t6,0(t6)
  4161b0:	afbf001c 	sw	ra,28(sp)
  4161b4:	11c0000f 	beqz	t6,4161f4 <rescanDatabase+0xaf8>
  4161b8:	afbc0018 	sw	gp,24(sp)
  4161bc:	8f848098 	lw	a0,-32616(gp)
  4161c0:	8f85805c 	lw	a1,-32676(gp)
  4161c4:	8f9983f8 	lw	t9,-31752(gp)
  4161c8:	24840020 	addiu	a0,a0,32
  4161cc:	0320f809 	jalr	t9
  4161d0:	24a5a9d4 	addiu	a1,a1,-22060
  4161d4:	8fbc0018 	lw	gp,24(sp)
  4161d8:	24040001 	li	a0,1
  4161dc:	8f9983a0 	lw	t9,-31840(gp)
  4161e0:	00000000 	nop
  4161e4:	0320f809 	jalr	t9
  4161e8:	00000000 	nop
  4161ec:	8fbc0018 	lw	gp,24(sp)
  4161f0:	00000000 	nop
  4161f4:	8f998018 	lw	t9,-32744(gp)
  4161f8:	00002025 	move	a0,zero
  4161fc:	27395dec 	addiu	t9,t9,24044
  416200:	0320f809 	jalr	t9
  416204:	00002825 	move	a1,zero
  416208:	8fbc0018 	lw	gp,24(sp)
  41620c:	8fbf001c 	lw	ra,28(sp)
  416210:	8f81892c 	lw	at,-30420(gp)
  416214:	27bd0020 	addiu	sp,sp,32
  416218:	03e00008 	jr	ra
  41621c:	ac220000 	sw	v0,0(at)
