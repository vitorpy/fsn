# Function: FUN_0043a664
# Address: 0x0043a664 - 0x0043aa0c
# Size: 0x3a8 (936 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

0043a664 <FAMCancelMonitor+0xb4>:
  43a664:	3c1c0fbe 	lui	gp,0xfbe
  43a668:	279c34cc 	addiu	gp,gp,13516
  43a66c:	0399e021 	addu	gp,gp,t9
  43a670:	27bdff50 	addiu	sp,sp,-176
  43a674:	afa400b0 	sw	a0,176(sp)
  43a678:	afa500b4 	sw	a1,180(sp)
  43a67c:	00a02025 	move	a0,a1
  43a680:	8f85806c 	lw	a1,-32660(gp)
  43a684:	8f998390 	lw	t9,-31856(gp)
  43a688:	afb0001c 	sw	s0,28(sp)
  43a68c:	00c08025 	move	s0,a2
  43a690:	afbf0024 	sw	ra,36(sp)
  43a694:	afbc0020 	sw	gp,32(sp)
  43a698:	27a600ae 	addiu	a2,sp,174
  43a69c:	0320f809 	jalr	t9
  43a6a0:	24a59f20 	addiu	a1,a1,-24800
  43a6a4:	93ae00ae 	lbu	t6,174(sp)
  43a6a8:	8fbc0020 	lw	gp,32(sp)
  43a6ac:	24010063 	li	at,99
  43a6b0:	27a600ae 	addiu	a2,sp,174
  43a6b4:	15c10029 	bne	t6,at,43a75c <FAMCancelMonitor+0x1ac>
  43a6b8:	00004025 	move	t0,zero
  43a6bc:	8f85806c 	lw	a1,-32660(gp)
  43a6c0:	8f998390 	lw	t9,-31856(gp)
  43a6c4:	8fa400b4 	lw	a0,180(sp)
  43a6c8:	27af0048 	addiu	t7,sp,72
  43a6cc:	afaf0010 	sw	t7,16(sp)
  43a6d0:	27a70044 	addiu	a3,sp,68
  43a6d4:	afa00038 	sw	zero,56(sp)
  43a6d8:	0320f809 	jalr	t9
  43a6dc:	24a59f24 	addiu	a1,a1,-24796
  43a6e0:	8fbc0020 	lw	gp,32(sp)
  43a6e4:	8fa400b4 	lw	a0,180(sp)
  43a6e8:	8f9980e8 	lw	t9,-32536(gp)
  43a6ec:	24050020 	li	a1,32
  43a6f0:	0320f809 	jalr	t9
  43a6f4:	00000000 	nop
  43a6f8:	8fbc0020 	lw	gp,32(sp)
  43a6fc:	24440001 	addiu	a0,v0,1
  43a700:	8f9980e8 	lw	t9,-32536(gp)
  43a704:	24050020 	li	a1,32
  43a708:	0320f809 	jalr	t9
  43a70c:	00000000 	nop
  43a710:	8fbc0020 	lw	gp,32(sp)
  43a714:	8fa80038 	lw	t0,56(sp)
  43a718:	1040002f 	beqz	v0,43a7d8 <FAMCancelMonitor+0x228>
  43a71c:	24430001 	addiu	v1,v0,1
  43a720:	90780000 	lbu	t8,0(v1)
  43a724:	00000000 	nop
  43a728:	13000009 	beqz	t8,43a750 <FAMCancelMonitor+0x1a0>
  43a72c:	00602025 	move	a0,v1
  43a730:	90990000 	lbu	t9,0(a0)
  43a734:	01001025 	move	v0,t0
  43a738:	02024821 	addu	t1,s0,v0
  43a73c:	a139000c 	sb	t9,12(t1)
  43a740:	906a0001 	lbu	t2,1(v1)
  43a744:	25080001 	addiu	t0,t0,1
  43a748:	1540fff8 	bnez	t2,43a72c <FAMCancelMonitor+0x17c>
  43a74c:	24630001 	addiu	v1,v1,1
  43a750:	02085821 	addu	t3,s0,t0
  43a754:	10000020 	b	43a7d8 <FAMCancelMonitor+0x228>
  43a758:	a160000b 	sb	zero,11(t3)
  43a75c:	8f85806c 	lw	a1,-32660(gp)
  43a760:	8f998390 	lw	t9,-31856(gp)
  43a764:	8fa400b4 	lw	a0,180(sp)
  43a768:	27a70044 	addiu	a3,sp,68
  43a76c:	afa80038 	sw	t0,56(sp)
  43a770:	0320f809 	jalr	t9
  43a774:	24a59f2c 	addiu	a1,a1,-24788
  43a778:	8fbc0020 	lw	gp,32(sp)
  43a77c:	8fa400b4 	lw	a0,180(sp)
  43a780:	8f9980e8 	lw	t9,-32536(gp)
  43a784:	24050020 	li	a1,32
  43a788:	0320f809 	jalr	t9
  43a78c:	00000000 	nop
  43a790:	8fbc0020 	lw	gp,32(sp)
  43a794:	8fa80038 	lw	t0,56(sp)
  43a798:	1040000f 	beqz	v0,43a7d8 <FAMCancelMonitor+0x228>
  43a79c:	24430001 	addiu	v1,v0,1
  43a7a0:	906c0000 	lbu	t4,0(v1)
  43a7a4:	00000000 	nop
  43a7a8:	11800009 	beqz	t4,43a7d0 <FAMCancelMonitor+0x220>
  43a7ac:	00602025 	move	a0,v1
  43a7b0:	908d0000 	lbu	t5,0(a0)
  43a7b4:	01001025 	move	v0,t0
  43a7b8:	02027021 	addu	t6,s0,v0
  43a7bc:	a1cd000c 	sb	t5,12(t6)
  43a7c0:	906f0001 	lbu	t7,1(v1)
  43a7c4:	25080001 	addiu	t0,t0,1
  43a7c8:	15e0fff8 	bnez	t7,43a7ac <FAMCancelMonitor+0x1fc>
  43a7cc:	24630001 	addiu	v1,v1,1
  43a7d0:	0208c021 	addu	t8,s0,t0
  43a7d4:	a300000b 	sb	zero,11(t8)
  43a7d8:	8fb90044 	lw	t9,68(sp)
  43a7dc:	00000000 	nop
  43a7e0:	ae190004 	sw	t9,4(s0)
  43a7e4:	8f998024 	lw	t9,-32732(gp)
  43a7e8:	8fa40044 	lw	a0,68(sp)
  43a7ec:	2739ae14 	addiu	t9,t9,-20972
  43a7f0:	0320f809 	jalr	t9
  43a7f4:	00000000 	nop
  43a7f8:	8fbc0020 	lw	gp,32(sp)
  43a7fc:	ae02040c 	sw	v0,1036(s0)
  43a800:	93a300ae 	lbu	v1,174(sp)
  43a804:	24010065 	li	at,101
  43a808:	1061001f 	beq	v1,at,43a888 <FAMCancelMonitor+0x2d8>
  43a80c:	24010046 	li	at,70
  43a810:	10610031 	beq	v1,at,43a8d8 <FAMCancelMonitor+0x328>
  43a814:	24010044 	li	at,68
  43a818:	10610044 	beq	v1,at,43a92c <FAMCancelMonitor+0x37c>
  43a81c:	24010043 	li	at,67
  43a820:	10610056 	beq	v1,at,43a97c <FAMCancelMonitor+0x3cc>
  43a824:	240f0001 	li	t7,1
  43a828:	24010063 	li	at,99
  43a82c:	10610053 	beq	v1,at,43a97c <FAMCancelMonitor+0x3cc>
  43a830:	24010041 	li	at,65
  43a834:	10610053 	beq	v1,at,43a984 <FAMCancelMonitor+0x3d4>
  43a838:	24180002 	li	t8,2
  43a83c:	2401006e 	li	at,110
  43a840:	10610050 	beq	v1,at,43a984 <FAMCancelMonitor+0x3d4>
  43a844:	24010058 	li	at,88
  43a848:	10610050 	beq	v1,at,43a98c <FAMCancelMonitor+0x3dc>
  43a84c:	24010078 	li	at,120
  43a850:	1061004e 	beq	v1,at,43a98c <FAMCancelMonitor+0x3dc>
  43a854:	24010051 	li	at,81
  43a858:	1061004f 	beq	v1,at,43a998 <FAMCancelMonitor+0x3e8>
  43a85c:	24090004 	li	t1,4
  43a860:	24010071 	li	at,113
  43a864:	1061004c 	beq	v1,at,43a998 <FAMCancelMonitor+0x3e8>
  43a868:	24010050 	li	at,80
  43a86c:	1061004c 	beq	v1,at,43a9a0 <FAMCancelMonitor+0x3f0>
  43a870:	240a0009 	li	t2,9
  43a874:	24010047 	li	at,71
  43a878:	10610058 	beq	v1,at,43a9dc <FAMCancelMonitor+0x42c>
  43a87c:	00000000 	nop
  43a880:	1000005f 	b	43aa00 <FAMCancelMonitor+0x450>
  43a884:	8fbf0024 	lw	ra,36(sp)
  43a888:	8f998024 	lw	t9,-32732(gp)
  43a88c:	8fa40044 	lw	a0,68(sp)
  43a890:	2739ae90 	addiu	t9,t9,-20848
  43a894:	0320f809 	jalr	t9
  43a898:	00000000 	nop
  43a89c:	8fbc0020 	lw	gp,32(sp)
  43a8a0:	240c0005 	li	t4,5
  43a8a4:	8f89806c 	lw	t1,-32660(gp)
  43a8a8:	240d0008 	li	t5,8
  43a8ac:	8d297418 	lw	t1,29720(t1)
  43a8b0:	00000000 	nop
  43a8b4:	01225021 	addu	t2,t1,v0
  43a8b8:	914b0000 	lbu	t3,0(t2)
  43a8bc:	00000000 	nop
  43a8c0:	11600003 	beqz	t3,43a8d0 <FAMCancelMonitor+0x320>
  43a8c4:	00000000 	nop
  43a8c8:	1000004c 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a8cc:	ae0c0410 	sw	t4,1040(s0)
  43a8d0:	1000004a 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a8d4:	ae0d0410 	sw	t5,1040(s0)
  43a8d8:	8f998024 	lw	t9,-32732(gp)
  43a8dc:	8fa40044 	lw	a0,68(sp)
  43a8e0:	2739ae90 	addiu	t9,t9,-20848
  43a8e4:	0320f809 	jalr	t9
  43a8e8:	00000000 	nop
  43a8ec:	8fbc0020 	lw	gp,32(sp)
  43a8f0:	24090008 	li	t1,8
  43a8f4:	8f8e806c 	lw	t6,-32660(gp)
  43a8f8:	00000000 	nop
  43a8fc:	8dce7418 	lw	t6,29720(t6)
  43a900:	00000000 	nop
  43a904:	01c27821 	addu	t7,t6,v0
  43a908:	91f80000 	lbu	t8,0(t7)
  43a90c:	00000000 	nop
  43a910:	13000004 	beqz	t8,43a924 <FAMCancelMonitor+0x374>
  43a914:	00000000 	nop
  43a918:	24190005 	li	t9,5
  43a91c:	10000037 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a920:	ae190410 	sw	t9,1040(s0)
  43a924:	10000035 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a928:	ae090410 	sw	t1,1040(s0)
  43a92c:	8f998024 	lw	t9,-32732(gp)
  43a930:	8fa40044 	lw	a0,68(sp)
  43a934:	2739ae90 	addiu	t9,t9,-20848
  43a938:	0320f809 	jalr	t9
  43a93c:	00000000 	nop
  43a940:	8fbc0020 	lw	gp,32(sp)
  43a944:	240d0001 	li	t5,1
  43a948:	8f8a806c 	lw	t2,-32660(gp)
  43a94c:	240e0008 	li	t6,8
  43a950:	8d4a7418 	lw	t2,29720(t2)
  43a954:	00000000 	nop
  43a958:	01425821 	addu	t3,t2,v0
  43a95c:	916c0000 	lbu	t4,0(t3)
  43a960:	00000000 	nop
  43a964:	11800003 	beqz	t4,43a974 <FAMCancelMonitor+0x3c4>
  43a968:	00000000 	nop
  43a96c:	10000023 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a970:	ae0d0410 	sw	t5,1040(s0)
  43a974:	10000021 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a978:	ae0e0410 	sw	t6,1040(s0)
  43a97c:	1000001f 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a980:	ae0f0410 	sw	t7,1040(s0)
  43a984:	1000001d 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a988:	ae180410 	sw	t8,1040(s0)
  43a98c:	24190003 	li	t9,3
  43a990:	1000001a 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a994:	ae190410 	sw	t9,1040(s0)
  43a998:	10000018 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a99c:	ae090410 	sw	t1,1040(s0)
  43a9a0:	8f998024 	lw	t9,-32732(gp)
  43a9a4:	ae0a0410 	sw	t2,1040(s0)
  43a9a8:	8fa40044 	lw	a0,68(sp)
  43a9ac:	2739ae90 	addiu	t9,t9,-20848
  43a9b0:	0320f809 	jalr	t9
  43a9b4:	00000000 	nop
  43a9b8:	8fbc0020 	lw	gp,32(sp)
  43a9bc:	240b0001 	li	t3,1
  43a9c0:	8f8c806c 	lw	t4,-32660(gp)
  43a9c4:	00000000 	nop
  43a9c8:	8d8c7418 	lw	t4,29720(t4)
  43a9cc:	00000000 	nop
  43a9d0:	01826821 	addu	t5,t4,v0
  43a9d4:	10000009 	b	43a9fc <FAMCancelMonitor+0x44c>
  43a9d8:	a1ab0000 	sb	t3,0(t5)
  43a9dc:	8f998024 	lw	t9,-32732(gp)
  43a9e0:	8fa40044 	lw	a0,68(sp)
  43a9e4:	2739b104 	addiu	t9,t9,-20220
  43a9e8:	0320f809 	jalr	t9
  43a9ec:	00000000 	nop
  43a9f0:	8fbc0020 	lw	gp,32(sp)
  43a9f4:	240e0007 	li	t6,7
  43a9f8:	ae0e0410 	sw	t6,1040(s0)
  43a9fc:	8fbf0024 	lw	ra,36(sp)
  43aa00:	8fb0001c 	lw	s0,28(sp)
  43aa04:	03e00008 	jr	ra
  43aa08:	27bd00b0 	addiu	sp,sp,176
