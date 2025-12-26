# Function: FUN_00411674
# Address: 0x00411674 - 0x00411774
# Size: 0x100 (256 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00411674 <fileerror+0x5ec>:
  411674:	3c1c0fc1 	lui	gp,0xfc1
  411678:	279cc4bc 	addiu	gp,gp,-15172
  41167c:	0399e021 	addu	gp,gp,t9
  411680:	8f84805c 	lw	a0,-32676(gp)
  411684:	8f9981a8 	lw	t9,-32344(gp)
  411688:	27bdfed0 	addiu	sp,sp,-304
  41168c:	afbf001c 	sw	ra,28(sp)
  411690:	afbc0018 	sw	gp,24(sp)
  411694:	0320f809 	jalr	t9
  411698:	2484a6d8 	addiu	a0,a0,-22824
  41169c:	8fbc0018 	lw	gp,24(sp)
  4116a0:	14400031 	bnez	v0,411768 <fileerror+0x6e0>
  4116a4:	8fbf001c 	lw	ra,28(sp)
  4116a8:	8f84805c 	lw	a0,-32676(gp)
  4116ac:	8f9981a8 	lw	t9,-32344(gp)
  4116b0:	2484a6e4 	addiu	a0,a0,-22812
  4116b4:	0320f809 	jalr	t9
  4116b8:	00000000 	nop
  4116bc:	8fbc0018 	lw	gp,24(sp)
  4116c0:	10400021 	beqz	v0,411748 <fileerror+0x6c0>
  4116c4:	00403025 	move	a2,v0
  4116c8:	8f85805c 	lw	a1,-32676(gp)
  4116cc:	8f9983e4 	lw	t9,-31772(gp)
  4116d0:	27a4002c 	addiu	a0,sp,44
  4116d4:	0320f809 	jalr	t9
  4116d8:	24a5a6ec 	addiu	a1,a1,-22804
  4116dc:	8fbc0018 	lw	gp,24(sp)
  4116e0:	27a4002c 	addiu	a0,sp,44
  4116e4:	8f9983e0 	lw	t9,-31776(gp)
  4116e8:	00000000 	nop
  4116ec:	0320f809 	jalr	t9
  4116f0:	00000000 	nop
  4116f4:	8fbc0018 	lw	gp,24(sp)
  4116f8:	24440001 	addiu	a0,v0,1
  4116fc:	8f9984c0 	lw	t9,-31552(gp)
  411700:	00000000 	nop
  411704:	0320f809 	jalr	t9
  411708:	00000000 	nop
  41170c:	8fbc0018 	lw	gp,24(sp)
  411710:	00402025 	move	a0,v0
  411714:	8f998134 	lw	t9,-32460(gp)
  411718:	27a5002c 	addiu	a1,sp,44
  41171c:	0320f809 	jalr	t9
  411720:	00000000 	nop
  411724:	8fbc0018 	lw	gp,24(sp)
  411728:	00402025 	move	a0,v0
  41172c:	8f9983e8 	lw	t9,-31768(gp)
  411730:	00000000 	nop
  411734:	0320f809 	jalr	t9
  411738:	00000000 	nop
  41173c:	8fbc0018 	lw	gp,24(sp)
  411740:	10000009 	b	411768 <fileerror+0x6e0>
  411744:	8fbf001c 	lw	ra,28(sp)
  411748:	8f84805c 	lw	a0,-32676(gp)
  41174c:	8f9983e8 	lw	t9,-31768(gp)
  411750:	2484a704 	addiu	a0,a0,-22780
  411754:	0320f809 	jalr	t9
  411758:	00000000 	nop
  41175c:	8fbc0018 	lw	gp,24(sp)
  411760:	00000000 	nop
  411764:	8fbf001c 	lw	ra,28(sp)
  411768:	27bd0130 	addiu	sp,sp,304
  41176c:	03e00008 	jr	ra
  411770:	00000000 	nop
