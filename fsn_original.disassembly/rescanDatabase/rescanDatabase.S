# Function: rescanDatabase
# Address: 0x004156fc - 0x004158d4
# Size: 0x1d8 (472 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

004156fc <rescanDatabase>:
  4156fc:	3c1c0fc1 	lui	gp,0xfc1
  415700:	279c8434 	addiu	gp,gp,-31692
  415704:	0399e021 	addu	gp,gp,t9
  415708:	8f84805c 	lw	a0,-32676(gp)
  41570c:	8f998568 	lw	t9,-31384(gp)
  415710:	27bdfad0 	addiu	sp,sp,-1328
  415714:	afbf001c 	sw	ra,28(sp)
  415718:	afbc0018 	sw	gp,24(sp)
  41571c:	00002825 	move	a1,zero
  415720:	0320f809 	jalr	t9
  415724:	2484a824 	addiu	a0,a0,-22492
  415728:	8fbc0018 	lw	gp,24(sp)
  41572c:	afa20408 	sw	v0,1032(sp)
  415730:	8f998578 	lw	t9,-31368(gp)
  415734:	00000000 	nop
  415738:	0320f809 	jalr	t9
  41573c:	00000000 	nop
  415740:	8fbc0018 	lw	gp,24(sp)
  415744:	27a5040c 	addiu	a1,sp,1036
  415748:	8f8e892c 	lw	t6,-30420(gp)
  41574c:	8f99812c 	lw	t9,-32468(gp)
  415750:	8dce0000 	lw	t6,0(t6)
  415754:	00000000 	nop
  415758:	8dc40000 	lw	a0,0(t6)
  41575c:	0320f809 	jalr	t9
  415760:	00000000 	nop
  415764:	8fbc0018 	lw	gp,24(sp)
  415768:	04410017 	bgez	v0,4157c8 <rescanDatabase+0xcc>
  41576c:	27a40020 	addiu	a0,sp,32
  415770:	8f8f892c 	lw	t7,-30420(gp)
  415774:	8f85805c 	lw	a1,-32676(gp)
  415778:	8def0000 	lw	t7,0(t7)
  41577c:	8f9983e4 	lw	t9,-31772(gp)
  415780:	8de60000 	lw	a2,0(t7)
  415784:	0320f809 	jalr	t9
  415788:	24a5a83c 	addiu	a1,a1,-22468
  41578c:	8fbc0018 	lw	gp,24(sp)
  415790:	27a40020 	addiu	a0,sp,32
  415794:	8f998568 	lw	t9,-31384(gp)
  415798:	240503e8 	li	a1,1000
  41579c:	0320f809 	jalr	t9
  4157a0:	00000000 	nop
  4157a4:	8fbc0018 	lw	gp,24(sp)
  4157a8:	8fa40408 	lw	a0,1032(sp)
  4157ac:	8f998564 	lw	t9,-31388(gp)
  4157b0:	00000000 	nop
  4157b4:	0320f809 	jalr	t9
  4157b8:	00000000 	nop
  4157bc:	8fbc0018 	lw	gp,24(sp)
  4157c0:	10000041 	b	4158c8 <rescanDatabase+0x1cc>
  4157c4:	8fbf001c 	lw	ra,28(sp)
  4157c8:	8f998134 	lw	t9,-32460(gp)
  4157cc:	8f848a4c 	lw	a0,-30132(gp)
  4157d0:	0320f809 	jalr	t9
  4157d4:	27a50430 	addiu	a1,sp,1072
  4157d8:	8fbc0018 	lw	gp,24(sp)
  4157dc:	8fb80440 	lw	t8,1088(sp)
  4157e0:	3c018000 	lui	at,0x8000
  4157e4:	0301c824 	and	t9,t8,at
  4157e8:	8f818a50 	lw	at,-30128(gp)
  4157ec:	8f88892c 	lw	t0,-30420(gp)
  4157f0:	ac390000 	sw	t9,0(at)
  4157f4:	8d080000 	lw	t0,0(t0)
  4157f8:	8f998120 	lw	t9,-32480(gp)
  4157fc:	8d040000 	lw	a0,0(t0)
  415800:	0320f809 	jalr	t9
  415804:	27a504a8 	addiu	a1,sp,1192
  415808:	8fbc0018 	lw	gp,24(sp)
  41580c:	04410017 	bgez	v0,41586c <rescanDatabase+0x170>
  415810:	27a40020 	addiu	a0,sp,32
  415814:	8f89892c 	lw	t1,-30420(gp)
  415818:	8f85805c 	lw	a1,-32676(gp)
  41581c:	8d290000 	lw	t1,0(t1)
  415820:	8f9983e4 	lw	t9,-31772(gp)
  415824:	8d260000 	lw	a2,0(t1)
  415828:	0320f809 	jalr	t9
  41582c:	24a5a86c 	addiu	a1,a1,-22420
  415830:	8fbc0018 	lw	gp,24(sp)
  415834:	27a40020 	addiu	a0,sp,32
  415838:	8f998568 	lw	t9,-31384(gp)
  41583c:	240503e8 	li	a1,1000
  415840:	0320f809 	jalr	t9
  415844:	00000000 	nop
  415848:	8fbc0018 	lw	gp,24(sp)
  41584c:	8fa40408 	lw	a0,1032(sp)
  415850:	8f998564 	lw	t9,-31388(gp)
  415854:	00000000 	nop
  415858:	0320f809 	jalr	t9
  41585c:	00000000 	nop
  415860:	8fbc0018 	lw	gp,24(sp)
  415864:	10000018 	b	4158c8 <rescanDatabase+0x1cc>
  415868:	8fbf001c 	lw	ra,28(sp)
  41586c:	8f84892c 	lw	a0,-30420(gp)
  415870:	8faa04a8 	lw	t2,1192(sp)
  415874:	8f81806c 	lw	at,-32660(gp)
  415878:	8f9985bc 	lw	t9,-31300(gp)
  41587c:	8c840000 	lw	a0,0(a0)
  415880:	0320f809 	jalr	t9
  415884:	ac2a66b8 	sw	t2,26296(at)
  415888:	8fbc0018 	lw	gp,24(sp)
  41588c:	8fa40408 	lw	a0,1032(sp)
  415890:	8f998564 	lw	t9,-31388(gp)
  415894:	00000000 	nop
  415898:	0320f809 	jalr	t9
  41589c:	00000000 	nop
  4158a0:	8fbc0018 	lw	gp,24(sp)
  4158a4:	240507d0 	li	a1,2000
  4158a8:	8f84805c 	lw	a0,-32676(gp)
  4158ac:	8f998568 	lw	t9,-31384(gp)
  4158b0:	2484a898 	addiu	a0,a0,-22376
  4158b4:	0320f809 	jalr	t9
  4158b8:	00000000 	nop
  4158bc:	8fbc0018 	lw	gp,24(sp)
  4158c0:	00000000 	nop
  4158c4:	8fbf001c 	lw	ra,28(sp)
  4158c8:	27bd0530 	addiu	sp,sp,1328
  4158cc:	03e00008 	jr	ra
  4158d0:	00000000 	nop
