# Function: FUN_004325fc
# Address: 0x004325fc - 0x00432a34
# Size: 0x438 (1080 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004325fc <SG_getVisualArgs+0x110>:
  4325fc:	3c1c0fbf 	lui	gp,0xfbf
  432600:	279cb534 	addiu	gp,gp,-19148
  432604:	0399e021 	addu	gp,gp,t9
  432608:	27bdff38 	addiu	sp,sp,-200
  43260c:	afb2003c 	sw	s2,60(sp)
  432610:	afb00034 	sw	s0,52(sp)
  432614:	00808025 	move	s0,a0
  432618:	00a09025 	move	s2,a1
  43261c:	afbf0044 	sw	ra,68(sp)
  432620:	afbc0040 	sw	gp,64(sp)
  432624:	14800003 	bnez	a0,432634 <SG_getVisualArgs+0x148>
  432628:	afb10038 	sw	s1,56(sp)
  43262c:	100000fb 	b	432a1c <SG_getVisualArgs+0x530>
  432630:	2402fffe 	li	v0,-2
  432634:	16400003 	bnez	s2,432644 <SG_getVisualArgs+0x158>
  432638:	00000000 	nop
  43263c:	8e120084 	lw	s2,132(s0)
  432640:	00000000 	nop
  432644:	8f84806c 	lw	a0,-32660(gp)
  432648:	00000000 	nop
  43264c:	8c849664 	lw	a0,-27036(a0)
  432650:	00000000 	nop
  432654:	10800013 	beqz	a0,4326a4 <SG_getVisualArgs+0x1b8>
  432658:	00000000 	nop
  43265c:	10800011 	beqz	a0,4326a4 <SG_getVisualArgs+0x1b8>
  432660:	00801825 	move	v1,a0
  432664:	8c6e0004 	lw	t6,4(v1)
  432668:	00000000 	nop
  43266c:	160e0007 	bne	s0,t6,43268c <SG_getVisualArgs+0x1a0>
  432670:	00000000 	nop
  432674:	8c6f0008 	lw	t7,8(v1)
  432678:	00000000 	nop
  43267c:	164f0003 	bne	s2,t7,43268c <SG_getVisualArgs+0x1a0>
  432680:	00000000 	nop
  432684:	100000e5 	b	432a1c <SG_getVisualArgs+0x530>
  432688:	00601025 	move	v0,v1
  43268c:	8c620000 	lw	v0,0(v1)
  432690:	00000000 	nop
  432694:	10400003 	beqz	v0,4326a4 <SG_getVisualArgs+0x1b8>
  432698:	00000000 	nop
  43269c:	1440fff1 	bnez	v0,432664 <SG_getVisualArgs+0x178>
  4326a0:	00401825 	move	v1,v0
  4326a4:	8f998428 	lw	t9,-31704(gp)
  4326a8:	24040078 	li	a0,120
  4326ac:	0320f809 	jalr	t9
  4326b0:	24050001 	li	a1,1
  4326b4:	8fbc0040 	lw	gp,64(sp)
  4326b8:	ac500004 	sw	s0,4(v0)
  4326bc:	ac520008 	sw	s2,8(v0)
  4326c0:	8f9980f4 	lw	t9,-32524(gp)
  4326c4:	8f85805c 	lw	a1,-32676(gp)
  4326c8:	afa200c0 	sw	v0,192(sp)
  4326cc:	02002025 	move	a0,s0
  4326d0:	00003025 	move	a2,zero
  4326d4:	0320f809 	jalr	t9
  4326d8:	24a53df0 	addiu	a1,a1,15856
  4326dc:	00128880 	sll	s1,s2,0x2
  4326e0:	8e18008c 	lw	t8,140(s0)
  4326e4:	02328821 	addu	s1,s1,s2
  4326e8:	00118900 	sll	s1,s1,0x4
  4326ec:	0311c821 	addu	t9,t8,s1
  4326f0:	8f250008 	lw	a1,8(t9)
  4326f4:	8fa800c0 	lw	t0,192(sp)
  4326f8:	8fbc0040 	lw	gp,64(sp)
  4326fc:	3c0e000f 	lui	t6,0xf
  432700:	25190010 	addiu	t9,t0,16
  432704:	afb90024 	sw	t9,36(sp)
  432708:	35ce4240 	ori	t6,t6,0x4240
  43270c:	27af0090 	addiu	t7,sp,144
  432710:	8f9984f8 	lw	t9,-31496(gp)
  432714:	afaf001c 	sw	t7,28(sp)
  432718:	afae0010 	sw	t6,16(sp)
  43271c:	27ae0088 	addiu	t6,sp,136
  432720:	27b8008c 	addiu	t8,sp,140
  432724:	250f000c 	addiu	t7,t0,12
  432728:	afaf002c 	sw	t7,44(sp)
  43272c:	afb80020 	sw	t8,32(sp)
  432730:	afae0028 	sw	t6,40(sp)
  432734:	afa00018 	sw	zero,24(sp)
  432738:	afa00014 	sw	zero,20(sp)
  43273c:	02002025 	move	a0,s0
  432740:	00403025 	move	a2,v0
  432744:	0320f809 	jalr	t9
  432748:	00003825 	move	a3,zero
  43274c:	8fbc0040 	lw	gp,64(sp)
  432750:	8fa800c0 	lw	t0,192(sp)
  432754:	1440000c 	bnez	v0,432788 <SG_getVisualArgs+0x29c>
  432758:	02002025 	move	a0,s0
  43275c:	8fb80090 	lw	t8,144(sp)
  432760:	8fb9008c 	lw	t9,140(sp)
  432764:	13000008 	beqz	t8,432788 <SG_getVisualArgs+0x29c>
  432768:	24010020 	li	at,32
  43276c:	17210006 	bne	t9,at,432788 <SG_getVisualArgs+0x29c>
  432770:	00000000 	nop
  432774:	8d050010 	lw	a1,16(t0)
  432778:	00000000 	nop
  43277c:	2ca10004 	sltiu	at,a1,4
  432780:	10200004 	beqz	at,432794 <SG_getVisualArgs+0x2a8>
  432784:	00057082 	srl	t6,a1,0x2
  432788:	ad000010 	sw	zero,16(t0)
  43278c:	10000002 	b	432798 <SG_getVisualArgs+0x2ac>
  432790:	ad00000c 	sw	zero,12(t0)
  432794:	ad0e0010 	sw	t6,16(t0)
  432798:	8f9984f4 	lw	t9,-31500(gp)
  43279c:	afb200a0 	sw	s2,160(sp)
  4327a0:	24050002 	li	a1,2
  4327a4:	27a60098 	addiu	a2,sp,152
  4327a8:	25070018 	addiu	a3,t0,24
  4327ac:	0320f809 	jalr	t9
  4327b0:	afa800c0 	sw	t0,192(sp)
  4327b4:	8fa800c0 	lw	t0,192(sp)
  4327b8:	8fbc0040 	lw	gp,64(sp)
  4327bc:	8d040018 	lw	a0,24(t0)
  4327c0:	ad020014 	sw	v0,20(t0)
  4327c4:	8f998428 	lw	t9,-31704(gp)
  4327c8:	00047880 	sll	t7,a0,0x2
  4327cc:	01e02025 	move	a0,t7
  4327d0:	0320f809 	jalr	t9
  4327d4:	24050001 	li	a1,1
  4327d8:	8fa800c0 	lw	t0,192(sp)
  4327dc:	8fbc0040 	lw	gp,64(sp)
  4327e0:	8d040018 	lw	a0,24(t0)
  4327e4:	ad02001c 	sw	v0,28(t0)
  4327e8:	8f998428 	lw	t9,-31704(gp)
  4327ec:	0004c080 	sll	t8,a0,0x2
  4327f0:	03002025 	move	a0,t8
  4327f4:	0320f809 	jalr	t9
  4327f8:	24050001 	li	a1,1
  4327fc:	8fbc0040 	lw	gp,64(sp)
  432800:	8fa800c0 	lw	t0,192(sp)
  432804:	8f99805c 	lw	t9,-32676(gp)
  432808:	8f8e805c 	lw	t6,-32676(gp)
  43280c:	27393e08 	addiu	t9,t9,15880
  432810:	8f8f805c 	lw	t7,-32676(gp)
  432814:	8f98805c 	lw	t8,-32676(gp)
  432818:	ad190068 	sw	t9,104(t0)
  43281c:	8d190018 	lw	t9,24(t0)
  432820:	25ce3e14 	addiu	t6,t6,15892
  432824:	25ef3e1c 	addiu	t7,t7,15900
  432828:	27183e24 	addiu	t8,t8,15908
  43282c:	00006025 	move	t4,zero
  432830:	00006825 	move	t5,zero
  432834:	ad020020 	sw	v0,32(t0)
  432838:	ad0e006c 	sw	t6,108(t0)
  43283c:	ad0f0070 	sw	t7,112(t0)
  432840:	1b20006a 	blez	t9,4329ec <SG_getVisualArgs+0x500>
  432844:	ad180074 	sw	t8,116(t0)
  432848:	00005025 	move	t2,zero
  43284c:	00004825 	move	t1,zero
  432850:	24120004 	li	s2,4
  432854:	241f0003 	li	ra,3
  432858:	240b0002 	li	t3,2
  43285c:	8d050010 	lw	a1,16(t0)
  432860:	8d0e0020 	lw	t6,32(t0)
  432864:	14a00005 	bnez	a1,43287c <SG_getVisualArgs+0x390>
  432868:	01ca3821 	addu	a3,t6,t2
  43286c:	aceb0000 	sw	t3,0(a3)
  432870:	8d0f0020 	lw	t7,32(t0)
  432874:	10000028 	b	432918 <SG_getVisualArgs+0x42c>
  432878:	01ea3821 	addu	a3,t7,t2
  43287c:	10a00020 	beqz	a1,432900 <SG_getVisualArgs+0x414>
  432880:	00001825 	move	v1,zero
  432884:	8d180014 	lw	t8,20(t0)
  432888:	8d02000c 	lw	v0,12(t0)
  43288c:	03093021 	addu	a2,t8,t1
  432890:	8cc40004 	lw	a0,4(a2)
  432894:	00000000 	nop
  432898:	8c590000 	lw	t9,0(v0)
  43289c:	00000000 	nop
  4328a0:	14990013 	bne	a0,t9,4328f0 <SG_getVisualArgs+0x404>
  4328a4:	00000000 	nop
  4328a8:	8cce000c 	lw	t6,12(a2)
  4328ac:	00000000 	nop
  4328b0:	156e000a 	bne	t3,t6,4328dc <SG_getVisualArgs+0x3f0>
  4328b4:	00000000 	nop
  4328b8:	8ccf0010 	lw	t7,16(a2)
  4328bc:	00000000 	nop
  4328c0:	17ef0006 	bne	ra,t7,4328dc <SG_getVisualArgs+0x3f0>
  4328c4:	00000000 	nop
  4328c8:	15800004 	bnez	t4,4328dc <SG_getVisualArgs+0x3f0>
  4328cc:	00000000 	nop
  4328d0:	acf20000 	sw	s2,0(a3)
  4328d4:	10000002 	b	4328e0 <SG_getVisualArgs+0x3f4>
  4328d8:	258c0001 	addiu	t4,t4,1
  4328dc:	acff0000 	sw	ra,0(a3)
  4328e0:	8d180020 	lw	t8,32(t0)
  4328e4:	8d050010 	lw	a1,16(t0)
  4328e8:	10000005 	b	432900 <SG_getVisualArgs+0x414>
  4328ec:	030a3821 	addu	a3,t8,t2
  4328f0:	24630001 	addiu	v1,v1,1
  4328f4:	0065082b 	sltu	at,v1,a1
  4328f8:	1420ffe7 	bnez	at,432898 <SG_getVisualArgs+0x3ac>
  4328fc:	24420010 	addiu	v0,v0,16
  432900:	14650005 	bne	v1,a1,432918 <SG_getVisualArgs+0x42c>
  432904:	00000000 	nop
  432908:	aceb0000 	sw	t3,0(a3)
  43290c:	8d190020 	lw	t9,32(t0)
  432910:	00000000 	nop
  432914:	032a3821 	addu	a3,t9,t2
  432918:	8d040014 	lw	a0,20(t0)
  43291c:	8e0e008c 	lw	t6,140(s0)
  432920:	00893021 	addu	a2,a0,t1
  432924:	01d17821 	addu	t7,t6,s1
  432928:	8ce20000 	lw	v0,0(a3)
  43292c:	8df80028 	lw	t8,40(t7)
  432930:	8cd90000 	lw	t9,0(a2)
  432934:	25ad0001 	addiu	t5,t5,1
  432938:	17190012 	bne	t8,t9,432984 <SG_getVisualArgs+0x498>
  43293c:	00401825 	move	v1,v0
  432940:	00037080 	sll	t6,v1,0x2
  432944:	ad030024 	sw	v1,36(t0)
  432948:	010e1021 	addu	v0,t0,t6
  43294c:	00897821 	addu	t7,a0,t1
  432950:	ac4f0028 	sw	t7,40(v0)
  432954:	8d180014 	lw	t8,20(t0)
  432958:	00000000 	nop
  43295c:	0309c821 	addu	t9,t8,t1
  432960:	8f2e0010 	lw	t6,16(t9)
  432964:	00000000 	nop
  432968:	ac4e003c 	sw	t6,60(v0)
  43296c:	8e0f008c 	lw	t7,140(s0)
  432970:	00000000 	nop
  432974:	01f1c021 	addu	t8,t7,s1
  432978:	8f190024 	lw	t9,36(t8)
  43297c:	10000016 	b	4329d8 <SG_getVisualArgs+0x4ec>
  432980:	ac590050 	sw	t9,80(v0)
  432984:	8d0e0024 	lw	t6,36(t0)
  432988:	00037880 	sll	t7,v1,0x2
  43298c:	11c20012 	beq	t6,v0,4329d8 <SG_getVisualArgs+0x4ec>
  432990:	010f1021 	addu	v0,t0,t7
  432994:	8cc4000c 	lw	a0,12(a2)
  432998:	8c580050 	lw	t8,80(v0)
  43299c:	00000000 	nop
  4329a0:	0304082a 	slt	at,t8,a0
  4329a4:	1020000c 	beqz	at,4329d8 <SG_getVisualArgs+0x4ec>
  4329a8:	00000000 	nop
  4329ac:	ac440050 	sw	a0,80(v0)
  4329b0:	8d190014 	lw	t9,20(t0)
  4329b4:	00000000 	nop
  4329b8:	03297021 	addu	t6,t9,t1
  4329bc:	ac4e0028 	sw	t6,40(v0)
  4329c0:	8d0f0014 	lw	t7,20(t0)
  4329c4:	00000000 	nop
  4329c8:	01e9c021 	addu	t8,t7,t1
  4329cc:	8f190010 	lw	t9,16(t8)
  4329d0:	00000000 	nop
  4329d4:	ac59003c 	sw	t9,60(v0)
  4329d8:	8d0e0018 	lw	t6,24(t0)
  4329dc:	254a0004 	addiu	t2,t2,4
  4329e0:	01ae082a 	slt	at,t5,t6
  4329e4:	1420ff9d 	bnez	at,43285c <SG_getVisualArgs+0x370>
  4329e8:	25290028 	addiu	t1,t1,40
  4329ec:	8f84806c 	lw	a0,-32660(gp)
  4329f0:	00000000 	nop
  4329f4:	8c849664 	lw	a0,-27036(a0)
  4329f8:	00000000 	nop
  4329fc:	10800003 	beqz	a0,432a0c <SG_getVisualArgs+0x520>
  432a00:	00000000 	nop
  432a04:	10000002 	b	432a10 <SG_getVisualArgs+0x524>
  432a08:	ad040000 	sw	a0,0(t0)
  432a0c:	ad000000 	sw	zero,0(t0)
  432a10:	8f81806c 	lw	at,-32660(gp)
  432a14:	01001025 	move	v0,t0
  432a18:	ac289664 	sw	t0,-27036(at)
  432a1c:	8fbf0044 	lw	ra,68(sp)
  432a20:	8fb00034 	lw	s0,52(sp)
  432a24:	8fb10038 	lw	s1,56(sp)
  432a28:	8fb2003c 	lw	s2,60(sp)
  432a2c:	03e00008 	jr	ra
  432a30:	27bd00c8 	addiu	sp,sp,200
