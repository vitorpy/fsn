# Function: redrawSelectionNames
# Address: 0x0041c714 - 0x0041c928
# Size: 0x214 (532 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0041c714 <redrawSelectionNames>:
  41c714:	3c1c0fc0 	lui	gp,0xfc0
  41c718:	279c141c 	addiu	gp,gp,5148
  41c71c:	0399e021 	addu	gp,gp,t9
  41c720:	8f82897c 	lw	v0,-30340(gp)
  41c724:	27bdffe0 	addiu	sp,sp,-32
  41c728:	8c420000 	lw	v0,0(v0)
  41c72c:	afbf001c 	sw	ra,28(sp)
  41c730:	afbc0018 	sw	gp,24(sp)
  41c734:	904e0c51 	lbu	t6,3153(v0)
  41c738:	00000000 	nop
  41c73c:	11c00077 	beqz	t6,41c91c <redrawSelectionNames+0x208>
  41c740:	8fbf001c 	lw	ra,28(sp)
  41c744:	904f0c52 	lbu	t7,3154(v0)
  41c748:	00000000 	nop
  41c74c:	11e00073 	beqz	t7,41c91c <redrawSelectionNames+0x208>
  41c750:	8fbf001c 	lw	ra,28(sp)
  41c754:	8f818068 	lw	at,-32664(gp)
  41c758:	00000000 	nop
  41c75c:	a0206e24 	sb	zero,28196(at)
  41c760:	8c580048 	lw	t8,72(v0)
  41c764:	00000000 	nop
  41c768:	1300002d 	beqz	t8,41c820 <redrawSelectionNames+0x10c>
  41c76c:	00000000 	nop
  41c770:	8f998984 	lw	t9,-30332(gp)
  41c774:	2445044c 	addiu	a1,v0,1100
  41c778:	8f390000 	lw	t9,0(t9)
  41c77c:	00000000 	nop
  41c780:	8f24001c 	lw	a0,28(t9)
  41c784:	8f998214 	lw	t9,-32236(gp)
  41c788:	00000000 	nop
  41c78c:	0320f809 	jalr	t9
  41c790:	00000000 	nop
  41c794:	8fbc0018 	lw	gp,24(sp)
  41c798:	00000000 	nop
  41c79c:	8f84897c 	lw	a0,-30340(gp)
  41c7a0:	8f9983e0 	lw	t9,-31776(gp)
  41c7a4:	8c840000 	lw	a0,0(a0)
  41c7a8:	0320f809 	jalr	t9
  41c7ac:	2484044c 	addiu	a0,a0,1100
  41c7b0:	8fbc0018 	lw	gp,24(sp)
  41c7b4:	00402825 	move	a1,v0
  41c7b8:	8f888984 	lw	t0,-30332(gp)
  41c7bc:	8f998234 	lw	t9,-32204(gp)
  41c7c0:	8d080000 	lw	t0,0(t0)
  41c7c4:	00000000 	nop
  41c7c8:	8d04001c 	lw	a0,28(t0)
  41c7cc:	0320f809 	jalr	t9
  41c7d0:	00000000 	nop
  41c7d4:	8fbc0018 	lw	gp,24(sp)
  41c7d8:	00000000 	nop
  41c7dc:	8f84897c 	lw	a0,-30340(gp)
  41c7e0:	8f9983e0 	lw	t9,-31776(gp)
  41c7e4:	8c840000 	lw	a0,0(a0)
  41c7e8:	0320f809 	jalr	t9
  41c7ec:	2484044c 	addiu	a0,a0,1100
  41c7f0:	8fbc0018 	lw	gp,24(sp)
  41c7f4:	00402825 	move	a1,v0
  41c7f8:	8f898984 	lw	t1,-30332(gp)
  41c7fc:	8f998248 	lw	t9,-32184(gp)
  41c800:	8d290000 	lw	t1,0(t1)
  41c804:	00000000 	nop
  41c808:	8d24001c 	lw	a0,28(t1)
  41c80c:	0320f809 	jalr	t9
  41c810:	00000000 	nop
  41c814:	8fbc0018 	lw	gp,24(sp)
  41c818:	10000038 	b	41c8fc <redrawSelectionNames+0x1e8>
  41c81c:	00000000 	nop
  41c820:	8c4a0044 	lw	t2,68(v0)
  41c824:	00000000 	nop
  41c828:	1140002b 	beqz	t2,41c8d8 <redrawSelectionNames+0x1c4>
  41c82c:	00000000 	nop
  41c830:	8f8b8984 	lw	t3,-30332(gp)
  41c834:	8f998214 	lw	t9,-32236(gp)
  41c838:	8d6b0000 	lw	t3,0(t3)
  41c83c:	2445004c 	addiu	a1,v0,76
  41c840:	8d64001c 	lw	a0,28(t3)
  41c844:	0320f809 	jalr	t9
  41c848:	00000000 	nop
  41c84c:	8fbc0018 	lw	gp,24(sp)
  41c850:	00000000 	nop
  41c854:	8f84897c 	lw	a0,-30340(gp)
  41c858:	8f9983e0 	lw	t9,-31776(gp)
  41c85c:	8c840000 	lw	a0,0(a0)
  41c860:	0320f809 	jalr	t9
  41c864:	2484004c 	addiu	a0,a0,76
  41c868:	8fbc0018 	lw	gp,24(sp)
  41c86c:	00402825 	move	a1,v0
  41c870:	8f8c8984 	lw	t4,-30332(gp)
  41c874:	8f998234 	lw	t9,-32204(gp)
  41c878:	8d8c0000 	lw	t4,0(t4)
  41c87c:	00000000 	nop
  41c880:	8d84001c 	lw	a0,28(t4)
  41c884:	0320f809 	jalr	t9
  41c888:	00000000 	nop
  41c88c:	8fbc0018 	lw	gp,24(sp)
  41c890:	00000000 	nop
  41c894:	8f84897c 	lw	a0,-30340(gp)
  41c898:	8f9983e0 	lw	t9,-31776(gp)
  41c89c:	8c840000 	lw	a0,0(a0)
  41c8a0:	0320f809 	jalr	t9
  41c8a4:	2484004c 	addiu	a0,a0,76
  41c8a8:	8fbc0018 	lw	gp,24(sp)
  41c8ac:	00402825 	move	a1,v0
  41c8b0:	8f8d8984 	lw	t5,-30332(gp)
  41c8b4:	8f998248 	lw	t9,-32184(gp)
  41c8b8:	8dad0000 	lw	t5,0(t5)
  41c8bc:	00000000 	nop
  41c8c0:	8da4001c 	lw	a0,28(t5)
  41c8c4:	0320f809 	jalr	t9
  41c8c8:	00000000 	nop
  41c8cc:	8fbc0018 	lw	gp,24(sp)
  41c8d0:	1000000a 	b	41c8fc <redrawSelectionNames+0x1e8>
  41c8d4:	00000000 	nop
  41c8d8:	8f8e8984 	lw	t6,-30332(gp)
  41c8dc:	8f85805c 	lw	a1,-32676(gp)
  41c8e0:	8dce0000 	lw	t6,0(t6)
  41c8e4:	8f998214 	lw	t9,-32236(gp)
  41c8e8:	8dc4001c 	lw	a0,28(t6)
  41c8ec:	0320f809 	jalr	t9
  41c8f0:	24a5b33c 	addiu	a1,a1,-19652
  41c8f4:	8fbc0018 	lw	gp,24(sp)
  41c8f8:	00000000 	nop
  41c8fc:	8f99801c 	lw	t9,-32740(gp)
  41c900:	00000000 	nop
  41c904:	2739c3e4 	addiu	t9,t9,-15388
  41c908:	0320f809 	jalr	t9
  41c90c:	00000000 	nop
  41c910:	8fbc0018 	lw	gp,24(sp)
  41c914:	00000000 	nop
  41c918:	8fbf001c 	lw	ra,28(sp)
  41c91c:	27bd0020 	addiu	sp,sp,32
  41c920:	03e00008 	jr	ra
  41c924:	00000000 	nop
