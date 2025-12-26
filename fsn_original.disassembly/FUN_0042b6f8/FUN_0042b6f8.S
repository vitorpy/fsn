# Function: FUN_0042b6f8
# Address: 0x0042b6f8 - 0x0042b838
# Size: 0x140 (320 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0042b6f8 <widgetHelp+0x44>:
  42b6f8:	3c1c0fbf 	lui	gp,0xfbf
  42b6fc:	279c2438 	addiu	gp,gp,9272
  42b700:	0399e021 	addu	gp,gp,t9
  42b704:	27bdffa0 	addiu	sp,sp,-96
  42b708:	afbf001c 	sw	ra,28(sp)
  42b70c:	afbc0018 	sw	gp,24(sp)
  42b710:	afa40060 	sw	a0,96(sp)
  42b714:	afa60068 	sw	a2,104(sp)
  42b718:	afa7006c 	sw	a3,108(sp)
  42b71c:	8cae0000 	lw	t6,0(a1)
  42b720:	00000000 	nop
  42b724:	11c00008 	beqz	t6,42b748 <widgetHelp+0x94>
  42b728:	00000000 	nop
  42b72c:	8f84805c 	lw	a0,-32676(gp)
  42b730:	8f9981c0 	lw	t9,-32320(gp)
  42b734:	24842bf4 	addiu	a0,a0,11252
  42b738:	0320f809 	jalr	t9
  42b73c:	00000000 	nop
  42b740:	8fbc0018 	lw	gp,24(sp)
  42b744:	00000000 	nop
  42b748:	8f8f80a4 	lw	t7,-32604(gp)
  42b74c:	8f848a10 	lw	a0,-30192(gp)
  42b750:	8f998364 	lw	t9,-31900(gp)
  42b754:	27b8005c 	addiu	t8,sp,92
  42b758:	25ef009a 	addiu	t7,t7,154
  42b75c:	8c840000 	lw	a0,0(a0)
  42b760:	afaf0034 	sw	t7,52(sp)
  42b764:	afb80038 	sw	t8,56(sp)
  42b768:	27a50034 	addiu	a1,sp,52
  42b76c:	0320f809 	jalr	t9
  42b770:	24060001 	li	a2,1
  42b774:	8fbc0018 	lw	gp,24(sp)
  42b778:	00000000 	nop
  42b77c:	8f848a10 	lw	a0,-30192(gp)
  42b780:	8f9983fc 	lw	t9,-31748(gp)
  42b784:	8c840000 	lw	a0,0(a0)
  42b788:	0320f809 	jalr	t9
  42b78c:	00000000 	nop
  42b790:	8fb90068 	lw	t9,104(sp)
  42b794:	8fbc0018 	lw	gp,24(sp)
  42b798:	8f260004 	lw	a2,4(t9)
  42b79c:	8f9981c4 	lw	t9,-32316(gp)
  42b7a0:	8fa5005c 	lw	a1,92(sp)
  42b7a4:	00402025 	move	a0,v0
  42b7a8:	0320f809 	jalr	t9
  42b7ac:	27a70024 	addiu	a3,sp,36
  42b7b0:	8fbc0018 	lw	gp,24(sp)
  42b7b4:	1440000b 	bnez	v0,42b7e4 <widgetHelp+0x130>
  42b7b8:	97ab002a 	lhu	t3,42(sp)
  42b7bc:	8fa80068 	lw	t0,104(sp)
  42b7c0:	8f85805c 	lw	a1,-32676(gp)
  42b7c4:	8f9981b4 	lw	t9,-32332(gp)
  42b7c8:	8d040004 	lw	a0,4(t0)
  42b7cc:	0320f809 	jalr	t9
  42b7d0:	24a52c24 	addiu	a1,a1,11300
  42b7d4:	8fbc0018 	lw	gp,24(sp)
  42b7d8:	10000014 	b	42b82c <widgetHelp+0x178>
  42b7dc:	8fbf001c 	lw	ra,28(sp)
  42b7e0:	97ab002a 	lhu	t3,42(sp)
  42b7e4:	97a90028 	lhu	t1,40(sp)
  42b7e8:	97af002c 	lhu	t7,44(sp)
  42b7ec:	000b6202 	srl	t4,t3,0x8
  42b7f0:	000c6a00 	sll	t5,t4,0x8
  42b7f4:	00095202 	srl	t2,t1,0x8
  42b7f8:	000fc202 	srl	t8,t7,0x8
  42b7fc:	8f81806c 	lw	at,-32660(gp)
  42b800:	0018cc00 	sll	t9,t8,0x10
  42b804:	014d7021 	addu	t6,t2,t5
  42b808:	8fab006c 	lw	t3,108(sp)
  42b80c:	8f8c806c 	lw	t4,-32660(gp)
  42b810:	01d94021 	addu	t0,t6,t9
  42b814:	ac286e24 	sw	t0,28196(at)
  42b818:	24090004 	li	t1,4
  42b81c:	258c6e24 	addiu	t4,t4,28196
  42b820:	ad690000 	sw	t1,0(t3)
  42b824:	ad6c0004 	sw	t4,4(t3)
  42b828:	8fbf001c 	lw	ra,28(sp)
  42b82c:	27bd0060 	addiu	sp,sp,96
  42b830:	03e00008 	jr	ra
  42b834:	00000000 	nop
