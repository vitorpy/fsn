# Function: FUN_00435444
# Address: 0x00435444 - 0x00435510
# Size: 0xcc (204 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00435444 <__ct__8RuleInfoFv+0xc>:
  435444:	27bdffe0 	addiu	sp,sp,-32
  435448:	afbf001c 	sw	ra,28(sp)
  43544c:	14800008 	bnez	a0,435470 <__ct__8RuleInfoFv+0x38>
  435450:	afbc0018 	sw	gp,24(sp)
  435454:	8f9984a4 	lw	t9,-31580(gp)
  435458:	2404006c 	li	a0,108
  43545c:	0320f809 	jalr	t9
  435460:	00000000 	nop
  435464:	8fbc0018 	lw	gp,24(sp)
  435468:	10400025 	beqz	v0,435500 <__ct__8RuleInfoFv+0xc8>
  43546c:	00402025 	move	a0,v0
  435470:	24030001 	li	v1,1
  435474:	00037080 	sll	t6,v1,0x2
  435478:	ac800000 	sw	zero,0(a0)
  43547c:	ac800004 	sw	zero,4(a0)
  435480:	ac800008 	sw	zero,8(a0)
  435484:	ac80000c 	sw	zero,12(a0)
  435488:	ac800010 	sw	zero,16(a0)
  43548c:	ac800014 	sw	zero,20(a0)
  435490:	ac800018 	sw	zero,24(a0)
  435494:	ac80001c 	sw	zero,28(a0)
  435498:	ac800020 	sw	zero,32(a0)
  43549c:	ac800024 	sw	zero,36(a0)
  4354a0:	ac800028 	sw	zero,40(a0)
  4354a4:	ac80002c 	sw	zero,44(a0)
  4354a8:	ac800030 	sw	zero,48(a0)
  4354ac:	ac800034 	sw	zero,52(a0)
  4354b0:	008e1021 	addu	v0,a0,t6
  4354b4:	ac800050 	sw	zero,80(a0)
  4354b8:	ac40005c 	sw	zero,92(v0)
  4354bc:	ac400058 	sw	zero,88(v0)
  4354c0:	ac400054 	sw	zero,84(v0)
  4354c4:	ac400050 	sw	zero,80(v0)
  4354c8:	3c0142c8 	lui	at,0x42c8
  4354cc:	44811000 	mtc1	at,$f2
  4354d0:	3c014248 	lui	at,0x4248
  4354d4:	44816000 	mtc1	at,$f12
  4354d8:	44800000 	mtc1	zero,$f0
  4354dc:	240f0005 	li	t7,5
  4354e0:	ac8f0064 	sw	t7,100(a0)
  4354e4:	ac800068 	sw	zero,104(a0)
  4354e8:	e4820044 	swc1	$f2,68(a0)
  4354ec:	e4820040 	swc1	$f2,64(a0)
  4354f0:	e48c004c 	swc1	$f12,76(a0)
  4354f4:	e48c0048 	swc1	$f12,72(a0)
  4354f8:	e480003c 	swc1	$f0,60(a0)
  4354fc:	e4800038 	swc1	$f0,56(a0)
  435500:	8fbf001c 	lw	ra,28(sp)
  435504:	27bd0020 	addiu	sp,sp,32
  435508:	03e00008 	jr	ra
  43550c:	00801025 	move	v0,a0
