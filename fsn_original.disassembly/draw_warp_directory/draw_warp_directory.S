# Function: draw_warp_directory
# Address: 0x00419418 - 0x0041a34c
# Size: 0xf34 (3892 bytes)
# End detected by: jr ra
# GP = 0x1001db30
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00419418 <draw_warp_directory>:
  419418:	3c1c0fc0 	lui	gp,0xfc0
  41941c:	279c4718 	addiu	gp,gp,18200
  419420:	0399e021 	addu	gp,gp,t9
  419424:	27bdff30 	addiu	sp,sp,-208
  419428:	afa500d4 	sw	a1,212(sp)
  41942c:	93ae00d7 	lbu	t6,215(sp)
  419430:	afb40064 	sw	s4,100(sp)
  419434:	0080a025 	move	s4,a0
  419438:	afbf0074 	sw	ra,116(sp)
  41943c:	afbc0070 	sw	gp,112(sp)
  419440:	afb6006c 	sw	s6,108(sp)
  419444:	afb50068 	sw	s5,104(sp)
  419448:	afb30060 	sw	s3,96(sp)
  41944c:	afb2005c 	sw	s2,92(sp)
  419450:	afb10058 	sw	s1,88(sp)
  419454:	afb00054 	sw	s0,84(sp)
  419458:	e7b70048 	swc1	$f23,72(sp)
  41945c:	e7b6004c 	swc1	$f22,76(sp)
  419460:	e7b50040 	swc1	$f21,64(sp)
  419464:	15c001de 	bnez	t6,419be0 <draw_warp_directory+0x7c8>
  419468:	e7b40044 	swc1	$f20,68(sp)
  41946c:	8f96897c 	lw	s6,-30340(gp)
  419470:	8f938a24 	lw	s3,-30172(gp)
  419474:	8ecf0000 	lw	t7,0(s6)
  419478:	c6640110 	lwc1	$f4,272(s3)
  41947c:	c5e80034 	lwc1	$f8,52(t7)
  419480:	460021a1 	cvt.d.s	$f6,$f4
  419484:	460042a1 	cvt.d.s	$f10,$f8
  419488:	462a3482 	mul.d	$f18,$f6,$f10
  41948c:	92780004 	lbu	t8,4(s3)
  419490:	00000000 	nop
  419494:	13000166 	beqz	t8,419a30 <draw_warp_directory+0x618>
  419498:	462095a0 	cvt.s.d	$f22,$f18
  41949c:	8f998338 	lw	t9,-31944(gp)
  4194a0:	24040001 	li	a0,1
  4194a4:	0320f809 	jalr	t9
  4194a8:	00000000 	nop
  4194ac:	8fbc0070 	lw	gp,112(sp)
  4194b0:	00000000 	nop
  4194b4:	8f99823c 	lw	t9,-32196(gp)
  4194b8:	00000000 	nop
  4194bc:	0320f809 	jalr	t9
  4194c0:	00000000 	nop
  4194c4:	8fbc0070 	lw	gp,112(sp)
  4194c8:	8e640150 	lw	a0,336(s3)
  4194cc:	8f998464 	lw	t9,-31644(gp)
  4194d0:	00000000 	nop
  4194d4:	0320f809 	jalr	t9
  4194d8:	00000000 	nop
  4194dc:	8ec20000 	lw	v0,0(s6)
  4194e0:	4600b521 	cvt.d.s	$f20,$f22
  4194e4:	c4440000 	lwc1	$f4,0(v0)
  4194e8:	8fbc0070 	lw	gp,112(sp)
  4194ec:	46002221 	cvt.d.s	$f8,$f4
  4194f0:	46344181 	sub.d	$f6,$f8,$f20
  4194f4:	c6680114 	lwc1	$f8,276(s3)
  4194f8:	462032a0 	cvt.s.d	$f10,$f6
  4194fc:	3c01bf00 	lui	at,0xbf00
  419500:	e7aa00a8 	swc1	$f10,168(sp)
  419504:	c4520004 	lwc1	$f18,4(v0)
  419508:	460041a1 	cvt.d.s	$f6,$f8
  41950c:	46009121 	cvt.d.s	$f4,$f18
  419510:	46262280 	add.d	$f10,$f4,$f6
  419514:	44814000 	mtc1	at,$f8
  419518:	8f998240 	lw	t9,-32192(gp)
  41951c:	462054a0 	cvt.s.d	$f18,$f10
  419520:	27b000a8 	addiu	s0,sp,168
  419524:	02002025 	move	a0,s0
  419528:	e7b200ac 	swc1	$f18,172(sp)
  41952c:	0320f809 	jalr	t9
  419530:	e7a800b0 	swc1	$f8,176(sp)
  419534:	8ec20000 	lw	v0,0(s6)
  419538:	8fbc0070 	lw	gp,112(sp)
  41953c:	c4440000 	lwc1	$f4,0(v0)
  419540:	3c01bf00 	lui	at,0xbf00
  419544:	460021a1 	cvt.d.s	$f6,$f4
  419548:	46343280 	add.d	$f10,$f6,$f20
  41954c:	c6660114 	lwc1	$f6,276(s3)
  419550:	462054a0 	cvt.s.d	$f18,$f10
  419554:	8f998240 	lw	t9,-32192(gp)
  419558:	e7b200a8 	swc1	$f18,168(sp)
  41955c:	c4480004 	lwc1	$f8,4(v0)
  419560:	460032a1 	cvt.d.s	$f10,$f6
  419564:	46004121 	cvt.d.s	$f4,$f8
  419568:	462a2480 	add.d	$f18,$f4,$f10
  41956c:	44813000 	mtc1	at,$f6
  419570:	46209220 	cvt.s.d	$f8,$f18
  419574:	02002025 	move	a0,s0
  419578:	e7a800ac 	swc1	$f8,172(sp)
  41957c:	0320f809 	jalr	t9
  419580:	e7a600b0 	swc1	$f6,176(sp)
  419584:	8fbc0070 	lw	gp,112(sp)
  419588:	8e64014c 	lw	a0,332(s3)
  41958c:	8f998464 	lw	t9,-31644(gp)
  419590:	00000000 	nop
  419594:	0320f809 	jalr	t9
  419598:	00000000 	nop
  41959c:	8ec20000 	lw	v0,0(s6)
  4195a0:	8fbc0070 	lw	gp,112(sp)
  4195a4:	c4440000 	lwc1	$f4,0(v0)
  4195a8:	8f998240 	lw	t9,-32192(gp)
  4195ac:	460022a1 	cvt.d.s	$f10,$f4
  4195b0:	46345480 	add.d	$f18,$f10,$f20
  4195b4:	c66a0114 	lwc1	$f10,276(s3)
  4195b8:	46209220 	cvt.s.d	$f8,$f18
  4195bc:	02002025 	move	a0,s0
  4195c0:	e7a800a8 	swc1	$f8,168(sp)
  4195c4:	c4460004 	lwc1	$f6,4(v0)
  4195c8:	460054a1 	cvt.d.s	$f18,$f10
  4195cc:	46003121 	cvt.d.s	$f4,$f6
  4195d0:	46322200 	add.d	$f8,$f4,$f18
  4195d4:	c672010c 	lwc1	$f18,268(s3)
  4195d8:	462041a0 	cvt.s.d	$f6,$f8
  4195dc:	e7a600ac 	swc1	$f6,172(sp)
  4195e0:	c44a0008 	lwc1	$f10,8(v0)
  4195e4:	46009221 	cvt.d.s	$f8,$f18
  4195e8:	46005121 	cvt.d.s	$f4,$f10
  4195ec:	46282180 	add.d	$f6,$f4,$f8
  4195f0:	462032a0 	cvt.s.d	$f10,$f6
  4195f4:	0320f809 	jalr	t9
  4195f8:	e7aa00b0 	swc1	$f10,176(sp)
  4195fc:	8ec20000 	lw	v0,0(s6)
  419600:	8fbc0070 	lw	gp,112(sp)
  419604:	c4520000 	lwc1	$f18,0(v0)
  419608:	8f998240 	lw	t9,-32192(gp)
  41960c:	46009121 	cvt.d.s	$f4,$f18
  419610:	46342201 	sub.d	$f8,$f4,$f20
  419614:	c6640114 	lwc1	$f4,276(s3)
  419618:	462041a0 	cvt.s.d	$f6,$f8
  41961c:	02002025 	move	a0,s0
  419620:	e7a600a8 	swc1	$f6,168(sp)
  419624:	c44a0004 	lwc1	$f10,4(v0)
  419628:	46002221 	cvt.d.s	$f8,$f4
  41962c:	460054a1 	cvt.d.s	$f18,$f10
  419630:	46289180 	add.d	$f6,$f18,$f8
  419634:	c668010c 	lwc1	$f8,268(s3)
  419638:	462032a0 	cvt.s.d	$f10,$f6
  41963c:	e7aa00ac 	swc1	$f10,172(sp)
  419640:	c4440008 	lwc1	$f4,8(v0)
  419644:	460041a1 	cvt.d.s	$f6,$f8
  419648:	460024a1 	cvt.d.s	$f18,$f4
  41964c:	46269280 	add.d	$f10,$f18,$f6
  419650:	46205120 	cvt.s.d	$f4,$f10
  419654:	0320f809 	jalr	t9
  419658:	e7a400b0 	swc1	$f4,176(sp)
  41965c:	8fbc0070 	lw	gp,112(sp)
  419660:	00000000 	nop
  419664:	8f998244 	lw	t9,-32188(gp)
  419668:	00000000 	nop
  41966c:	0320f809 	jalr	t9
  419670:	00000000 	nop
  419674:	8fbc0070 	lw	gp,112(sp)
  419678:	00002025 	move	a0,zero
  41967c:	8f998338 	lw	t9,-31944(gp)
  419680:	00000000 	nop
  419684:	0320f809 	jalr	t9
  419688:	00000000 	nop
  41968c:	8fbc0070 	lw	gp,112(sp)
  419690:	00000000 	nop
  419694:	8f99823c 	lw	t9,-32196(gp)
  419698:	00000000 	nop
  41969c:	0320f809 	jalr	t9
  4196a0:	00000000 	nop
  4196a4:	8fbc0070 	lw	gp,112(sp)
  4196a8:	8e64014c 	lw	a0,332(s3)
  4196ac:	8f998464 	lw	t9,-31644(gp)
  4196b0:	00000000 	nop
  4196b4:	0320f809 	jalr	t9
  4196b8:	00000000 	nop
  4196bc:	8ec20000 	lw	v0,0(s6)
  4196c0:	8fbc0070 	lw	gp,112(sp)
  4196c4:	c4480000 	lwc1	$f8,0(v0)
  4196c8:	8f998240 	lw	t9,-32192(gp)
  4196cc:	460044a1 	cvt.d.s	$f18,$f8
  4196d0:	46349180 	add.d	$f6,$f18,$f20
  4196d4:	c6720114 	lwc1	$f18,276(s3)
  4196d8:	462032a0 	cvt.s.d	$f10,$f6
  4196dc:	02002025 	move	a0,s0
  4196e0:	e7aa00a8 	swc1	$f10,168(sp)
  4196e4:	c4440004 	lwc1	$f4,4(v0)
  4196e8:	460091a1 	cvt.d.s	$f6,$f18
  4196ec:	46002221 	cvt.d.s	$f8,$f4
  4196f0:	46264280 	add.d	$f10,$f8,$f6
  4196f4:	c666010c 	lwc1	$f6,268(s3)
  4196f8:	46205120 	cvt.s.d	$f4,$f10
  4196fc:	e7a400ac 	swc1	$f4,172(sp)
  419700:	c4520008 	lwc1	$f18,8(v0)
  419704:	460032a1 	cvt.d.s	$f10,$f6
  419708:	46009221 	cvt.d.s	$f8,$f18
  41970c:	462a4100 	add.d	$f4,$f8,$f10
  419710:	462024a0 	cvt.s.d	$f18,$f4
  419714:	0320f809 	jalr	t9
  419718:	e7b200b0 	swc1	$f18,176(sp)
  41971c:	8ec20000 	lw	v0,0(s6)
  419720:	8fbc0070 	lw	gp,112(sp)
  419724:	c4460000 	lwc1	$f6,0(v0)
  419728:	8f81805c 	lw	at,-32676(gp)
  41972c:	46003221 	cvt.d.s	$f8,$f6
  419730:	46344280 	add.d	$f10,$f8,$f20
  419734:	c6680114 	lwc1	$f8,276(s3)
  419738:	46205120 	cvt.s.d	$f4,$f10
  41973c:	c437af38 	lwc1	$f23,-20680(at)
  419740:	e7a400a8 	swc1	$f4,168(sp)
  419744:	c4520004 	lwc1	$f18,4(v0)
  419748:	460042a1 	cvt.d.s	$f10,$f8
  41974c:	460091a1 	cvt.d.s	$f6,$f18
  419750:	462a3100 	add.d	$f4,$f6,$f10
  419754:	c436af3c 	lwc1	$f22,-20676(at)
  419758:	462024a0 	cvt.s.d	$f18,$f4
  41975c:	8f998240 	lw	t9,-32192(gp)
  419760:	e7b200ac 	swc1	$f18,172(sp)
  419764:	c4480008 	lwc1	$f8,8(v0)
  419768:	02002025 	move	a0,s0
  41976c:	460041a1 	cvt.d.s	$f6,$f8
  419770:	46363280 	add.d	$f10,$f6,$f22
  419774:	46205120 	cvt.s.d	$f4,$f10
  419778:	0320f809 	jalr	t9
  41977c:	e7a400b0 	swc1	$f4,176(sp)
  419780:	8ec20000 	lw	v0,0(s6)
  419784:	8fbc0070 	lw	gp,112(sp)
  419788:	c4520000 	lwc1	$f18,0(v0)
  41978c:	8f998240 	lw	t9,-32192(gp)
  419790:	46009221 	cvt.d.s	$f8,$f18
  419794:	46344181 	sub.d	$f6,$f8,$f20
  419798:	c6680114 	lwc1	$f8,276(s3)
  41979c:	462032a0 	cvt.s.d	$f10,$f6
  4197a0:	02002025 	move	a0,s0
  4197a4:	e7aa00a8 	swc1	$f10,168(sp)
  4197a8:	c4440004 	lwc1	$f4,4(v0)
  4197ac:	460041a1 	cvt.d.s	$f6,$f8
  4197b0:	460024a1 	cvt.d.s	$f18,$f4
  4197b4:	46269280 	add.d	$f10,$f18,$f6
  4197b8:	46205120 	cvt.s.d	$f4,$f10
  4197bc:	e7a400ac 	swc1	$f4,172(sp)
  4197c0:	c4480008 	lwc1	$f8,8(v0)
  4197c4:	00000000 	nop
  4197c8:	460044a1 	cvt.d.s	$f18,$f8
  4197cc:	46369180 	add.d	$f6,$f18,$f22
  4197d0:	462032a0 	cvt.s.d	$f10,$f6
  4197d4:	0320f809 	jalr	t9
  4197d8:	e7aa00b0 	swc1	$f10,176(sp)
  4197dc:	8ec20000 	lw	v0,0(s6)
  4197e0:	8fbc0070 	lw	gp,112(sp)
  4197e4:	c4440000 	lwc1	$f4,0(v0)
  4197e8:	8f998240 	lw	t9,-32192(gp)
  4197ec:	46002221 	cvt.d.s	$f8,$f4
  4197f0:	46344481 	sub.d	$f18,$f8,$f20
  4197f4:	c6680114 	lwc1	$f8,276(s3)
  4197f8:	462091a0 	cvt.s.d	$f6,$f18
  4197fc:	02002025 	move	a0,s0
  419800:	e7a600a8 	swc1	$f6,168(sp)
  419804:	c44a0004 	lwc1	$f10,4(v0)
  419808:	460044a1 	cvt.d.s	$f18,$f8
  41980c:	46005121 	cvt.d.s	$f4,$f10
  419810:	46322180 	add.d	$f6,$f4,$f18
  419814:	c672010c 	lwc1	$f18,268(s3)
  419818:	462032a0 	cvt.s.d	$f10,$f6
  41981c:	e7aa00ac 	swc1	$f10,172(sp)
  419820:	c4480008 	lwc1	$f8,8(v0)
  419824:	460091a1 	cvt.d.s	$f6,$f18
  419828:	46004121 	cvt.d.s	$f4,$f8
  41982c:	46262280 	add.d	$f10,$f4,$f6
  419830:	46205220 	cvt.s.d	$f8,$f10
  419834:	0320f809 	jalr	t9
  419838:	e7a800b0 	swc1	$f8,176(sp)
  41983c:	8fbc0070 	lw	gp,112(sp)
  419840:	00000000 	nop
  419844:	8f998244 	lw	t9,-32188(gp)
  419848:	00000000 	nop
  41984c:	0320f809 	jalr	t9
  419850:	00000000 	nop
  419854:	8fbc0070 	lw	gp,112(sp)
  419858:	24040001 	li	a0,1
  41985c:	8f998338 	lw	t9,-31944(gp)
  419860:	00000000 	nop
  419864:	0320f809 	jalr	t9
  419868:	00000000 	nop
  41986c:	8fbc0070 	lw	gp,112(sp)
  419870:	00000000 	nop
  419874:	8f99823c 	lw	t9,-32196(gp)
  419878:	00000000 	nop
  41987c:	0320f809 	jalr	t9
  419880:	00000000 	nop
  419884:	8fbc0070 	lw	gp,112(sp)
  419888:	8e64015c 	lw	a0,348(s3)
  41988c:	8f998464 	lw	t9,-31644(gp)
  419890:	00000000 	nop
  419894:	0320f809 	jalr	t9
  419898:	00000000 	nop
  41989c:	8ec20000 	lw	v0,0(s6)
  4198a0:	8fbc0070 	lw	gp,112(sp)
  4198a4:	c4520000 	lwc1	$f18,0(v0)
  4198a8:	3c01bf00 	lui	at,0xbf00
  4198ac:	46009121 	cvt.d.s	$f4,$f18
  4198b0:	46342181 	sub.d	$f6,$f4,$f20
  4198b4:	c6640118 	lwc1	$f4,280(s3)
  4198b8:	462032a0 	cvt.s.d	$f10,$f6
  4198bc:	8f998240 	lw	t9,-32192(gp)
  4198c0:	e7aa00a8 	swc1	$f10,168(sp)
  4198c4:	c4480004 	lwc1	$f8,4(v0)
  4198c8:	460021a1 	cvt.d.s	$f6,$f4
  4198cc:	460044a1 	cvt.d.s	$f18,$f8
  4198d0:	46269281 	sub.d	$f10,$f18,$f6
  4198d4:	44812000 	mtc1	at,$f4
  4198d8:	46205220 	cvt.s.d	$f8,$f10
  4198dc:	02002025 	move	a0,s0
  4198e0:	e7a800ac 	swc1	$f8,172(sp)
  4198e4:	0320f809 	jalr	t9
  4198e8:	e7a400b0 	swc1	$f4,176(sp)
  4198ec:	8ec20000 	lw	v0,0(s6)
  4198f0:	8fbc0070 	lw	gp,112(sp)
  4198f4:	c4520000 	lwc1	$f18,0(v0)
  4198f8:	3c01bf00 	lui	at,0xbf00
  4198fc:	460091a1 	cvt.d.s	$f6,$f18
  419900:	46343280 	add.d	$f10,$f6,$f20
  419904:	c6660118 	lwc1	$f6,280(s3)
  419908:	46205220 	cvt.s.d	$f8,$f10
  41990c:	8f998240 	lw	t9,-32192(gp)
  419910:	e7a800a8 	swc1	$f8,168(sp)
  419914:	c4440004 	lwc1	$f4,4(v0)
  419918:	460032a1 	cvt.d.s	$f10,$f6
  41991c:	460024a1 	cvt.d.s	$f18,$f4
  419920:	462a9201 	sub.d	$f8,$f18,$f10
  419924:	44813000 	mtc1	at,$f6
  419928:	46204120 	cvt.s.d	$f4,$f8
  41992c:	02002025 	move	a0,s0
  419930:	e7a400ac 	swc1	$f4,172(sp)
  419934:	0320f809 	jalr	t9
  419938:	e7a600b0 	swc1	$f6,176(sp)
  41993c:	8fbc0070 	lw	gp,112(sp)
  419940:	8e640158 	lw	a0,344(s3)
  419944:	8f998464 	lw	t9,-31644(gp)
  419948:	00000000 	nop
  41994c:	0320f809 	jalr	t9
  419950:	00000000 	nop
  419954:	8ec20000 	lw	v0,0(s6)
  419958:	8fbc0070 	lw	gp,112(sp)
  41995c:	c4520000 	lwc1	$f18,0(v0)
  419960:	3c01bf00 	lui	at,0xbf00
  419964:	460092a1 	cvt.d.s	$f10,$f18
  419968:	46345200 	add.d	$f8,$f10,$f20
  41996c:	c66a0114 	lwc1	$f10,276(s3)
  419970:	46204120 	cvt.s.d	$f4,$f8
  419974:	8f998240 	lw	t9,-32192(gp)
  419978:	e7a400a8 	swc1	$f4,168(sp)
  41997c:	c4460004 	lwc1	$f6,4(v0)
  419980:	46005221 	cvt.d.s	$f8,$f10
  419984:	460034a1 	cvt.d.s	$f18,$f6
  419988:	46289100 	add.d	$f4,$f18,$f8
  41998c:	44815000 	mtc1	at,$f10
  419990:	462021a0 	cvt.s.d	$f6,$f4
  419994:	02002025 	move	a0,s0
  419998:	e7a600ac 	swc1	$f6,172(sp)
  41999c:	0320f809 	jalr	t9
  4199a0:	e7aa00b0 	swc1	$f10,176(sp)
  4199a4:	8ec20000 	lw	v0,0(s6)
  4199a8:	8fbc0070 	lw	gp,112(sp)
  4199ac:	c4520000 	lwc1	$f18,0(v0)
  4199b0:	3c01bf00 	lui	at,0xbf00
  4199b4:	46009221 	cvt.d.s	$f8,$f18
  4199b8:	46344101 	sub.d	$f4,$f8,$f20
  4199bc:	c6680114 	lwc1	$f8,276(s3)
  4199c0:	462021a0 	cvt.s.d	$f6,$f4
  4199c4:	8f998240 	lw	t9,-32192(gp)
  4199c8:	e7a600a8 	swc1	$f6,168(sp)
  4199cc:	c44a0004 	lwc1	$f10,4(v0)
  4199d0:	46004121 	cvt.d.s	$f4,$f8
  4199d4:	460054a1 	cvt.d.s	$f18,$f10
  4199d8:	46249180 	add.d	$f6,$f18,$f4
  4199dc:	44814000 	mtc1	at,$f8
  4199e0:	462032a0 	cvt.s.d	$f10,$f6
  4199e4:	02002025 	move	a0,s0
  4199e8:	e7aa00ac 	swc1	$f10,172(sp)
  4199ec:	0320f809 	jalr	t9
  4199f0:	e7a800b0 	swc1	$f8,176(sp)
  4199f4:	8fbc0070 	lw	gp,112(sp)
  4199f8:	00000000 	nop
  4199fc:	8f998244 	lw	t9,-32188(gp)
  419a00:	00000000 	nop
  419a04:	0320f809 	jalr	t9
  419a08:	00000000 	nop
  419a0c:	8fbc0070 	lw	gp,112(sp)
  419a10:	00002025 	move	a0,zero
  419a14:	8f998338 	lw	t9,-31944(gp)
  419a18:	00000000 	nop
  419a1c:	0320f809 	jalr	t9
  419a20:	00000000 	nop
  419a24:	8fbc0070 	lw	gp,112(sp)
  419a28:	1000006d 	b	419be0 <draw_warp_directory+0x7c8>
  419a2c:	00000000 	nop
  419a30:	8f998464 	lw	t9,-31644(gp)
  419a34:	8e640148 	lw	a0,328(s3)
  419a38:	0320f809 	jalr	t9
  419a3c:	00000000 	nop
  419a40:	8fbc0070 	lw	gp,112(sp)
  419a44:	00000000 	nop
  419a48:	8f99823c 	lw	t9,-32196(gp)
  419a4c:	00000000 	nop
  419a50:	0320f809 	jalr	t9
  419a54:	00000000 	nop
  419a58:	8ec20000 	lw	v0,0(s6)
  419a5c:	4600b521 	cvt.d.s	$f20,$f22
  419a60:	c4520000 	lwc1	$f18,0(v0)
  419a64:	8fbc0070 	lw	gp,112(sp)
  419a68:	46009121 	cvt.d.s	$f4,$f18
  419a6c:	46342181 	sub.d	$f6,$f4,$f20
  419a70:	c6640114 	lwc1	$f4,276(s3)
  419a74:	462032a0 	cvt.s.d	$f10,$f6
  419a78:	3c01bf00 	lui	at,0xbf00
  419a7c:	e7aa00a8 	swc1	$f10,168(sp)
  419a80:	c4480004 	lwc1	$f8,4(v0)
  419a84:	460021a1 	cvt.d.s	$f6,$f4
  419a88:	460044a1 	cvt.d.s	$f18,$f8
  419a8c:	46269280 	add.d	$f10,$f18,$f6
  419a90:	44812000 	mtc1	at,$f4
  419a94:	8f998240 	lw	t9,-32192(gp)
  419a98:	46205220 	cvt.s.d	$f8,$f10
  419a9c:	27b000a8 	addiu	s0,sp,168
  419aa0:	02002025 	move	a0,s0
  419aa4:	e7a800ac 	swc1	$f8,172(sp)
  419aa8:	0320f809 	jalr	t9
  419aac:	e7a400b0 	swc1	$f4,176(sp)
  419ab0:	8ec20000 	lw	v0,0(s6)
  419ab4:	8fbc0070 	lw	gp,112(sp)
  419ab8:	c4520000 	lwc1	$f18,0(v0)
  419abc:	3c01bf00 	lui	at,0xbf00
  419ac0:	460091a1 	cvt.d.s	$f6,$f18
  419ac4:	46343280 	add.d	$f10,$f6,$f20
  419ac8:	c6660114 	lwc1	$f6,276(s3)
  419acc:	46205220 	cvt.s.d	$f8,$f10
  419ad0:	8f998240 	lw	t9,-32192(gp)
  419ad4:	e7a800a8 	swc1	$f8,168(sp)
  419ad8:	c4440004 	lwc1	$f4,4(v0)
  419adc:	460032a1 	cvt.d.s	$f10,$f6
  419ae0:	460024a1 	cvt.d.s	$f18,$f4
  419ae4:	462a9200 	add.d	$f8,$f18,$f10
  419ae8:	44813000 	mtc1	at,$f6
  419aec:	46204120 	cvt.s.d	$f4,$f8
  419af0:	02002025 	move	a0,s0
  419af4:	e7a400ac 	swc1	$f4,172(sp)
  419af8:	0320f809 	jalr	t9
  419afc:	e7a600b0 	swc1	$f6,176(sp)
  419b00:	8ec20000 	lw	v0,0(s6)
  419b04:	8fbc0070 	lw	gp,112(sp)
  419b08:	c4520000 	lwc1	$f18,0(v0)
  419b0c:	8f81805c 	lw	at,-32676(gp)
  419b10:	460092a1 	cvt.d.s	$f10,$f18
  419b14:	46345200 	add.d	$f8,$f10,$f20
  419b18:	c66a0114 	lwc1	$f10,276(s3)
  419b1c:	46204120 	cvt.s.d	$f4,$f8
  419b20:	c437af40 	lwc1	$f23,-20672(at)
  419b24:	e7a400a8 	swc1	$f4,168(sp)
  419b28:	c4460004 	lwc1	$f6,4(v0)
  419b2c:	46005221 	cvt.d.s	$f8,$f10
  419b30:	460034a1 	cvt.d.s	$f18,$f6
  419b34:	46289100 	add.d	$f4,$f18,$f8
  419b38:	c436af44 	lwc1	$f22,-20668(at)
  419b3c:	462021a0 	cvt.s.d	$f6,$f4
  419b40:	8f998240 	lw	t9,-32192(gp)
  419b44:	e7a600ac 	swc1	$f6,172(sp)
  419b48:	c44a0008 	lwc1	$f10,8(v0)
  419b4c:	02002025 	move	a0,s0
  419b50:	460054a1 	cvt.d.s	$f18,$f10
  419b54:	46369200 	add.d	$f8,$f18,$f22
  419b58:	46204120 	cvt.s.d	$f4,$f8
  419b5c:	0320f809 	jalr	t9
  419b60:	e7a400b0 	swc1	$f4,176(sp)
  419b64:	8ec20000 	lw	v0,0(s6)
  419b68:	8fbc0070 	lw	gp,112(sp)
  419b6c:	c4460000 	lwc1	$f6,0(v0)
  419b70:	8f998240 	lw	t9,-32192(gp)
  419b74:	460032a1 	cvt.d.s	$f10,$f6
  419b78:	46345481 	sub.d	$f18,$f10,$f20
  419b7c:	c66a0114 	lwc1	$f10,276(s3)
  419b80:	46209220 	cvt.s.d	$f8,$f18
  419b84:	02002025 	move	a0,s0
  419b88:	e7a800a8 	swc1	$f8,168(sp)
  419b8c:	c4440004 	lwc1	$f4,4(v0)
  419b90:	460054a1 	cvt.d.s	$f18,$f10
  419b94:	460021a1 	cvt.d.s	$f6,$f4
  419b98:	46323200 	add.d	$f8,$f6,$f18
  419b9c:	46204120 	cvt.s.d	$f4,$f8
  419ba0:	e7a400ac 	swc1	$f4,172(sp)
  419ba4:	c44a0008 	lwc1	$f10,8(v0)
  419ba8:	00000000 	nop
  419bac:	460051a1 	cvt.d.s	$f6,$f10
  419bb0:	46363480 	add.d	$f18,$f6,$f22
  419bb4:	46209220 	cvt.s.d	$f8,$f18
  419bb8:	0320f809 	jalr	t9
  419bbc:	e7a800b0 	swc1	$f8,176(sp)
  419bc0:	8fbc0070 	lw	gp,112(sp)
  419bc4:	00000000 	nop
  419bc8:	8f998244 	lw	t9,-32188(gp)
  419bcc:	00000000 	nop
  419bd0:	0320f809 	jalr	t9
  419bd4:	00000000 	nop
  419bd8:	8fbc0070 	lw	gp,112(sp)
  419bdc:	00000000 	nop
  419be0:	8f96897c 	lw	s6,-30340(gp)
  419be4:	8f9981e4 	lw	t9,-32284(gp)
  419be8:	8ec20000 	lw	v0,0(s6)
  419bec:	8f938a24 	lw	s3,-30172(gp)
  419bf0:	c4440020 	lwc1	$f4,32(v0)
  419bf4:	c44a0008 	lwc1	$f10,8(v0)
  419bf8:	c4480014 	lwc1	$f8,20(v0)
  419bfc:	460020a1 	cvt.d.s	$f2,$f4
  419c00:	46005021 	cvt.d.s	$f0,$f10
  419c04:	46004121 	cvt.d.s	$f4,$f8
  419c08:	46222282 	mul.d	$f10,$f4,$f2
  419c0c:	c4460000 	lwc1	$f6,0(v0)
  419c10:	c4440004 	lwc1	$f4,4(v0)
  419c14:	460034a1 	cvt.d.s	$f18,$f6
  419c18:	46205182 	mul.d	$f6,$f10,$f0
  419c1c:	460022a1 	cvt.d.s	$f10,$f4
  419c20:	46269201 	sub.d	$f8,$f18,$f6
  419c24:	c4520018 	lwc1	$f18,24(v0)
  419c28:	462045a0 	cvt.s.d	$f22,$f8
  419c2c:	460091a1 	cvt.d.s	$f6,$f18
  419c30:	46223202 	mul.d	$f8,$f6,$f2
  419c34:	46204102 	mul.d	$f4,$f8,$f0
  419c38:	46245481 	sub.d	$f18,$f10,$f4
  419c3c:	462091a0 	cvt.s.d	$f6,$f18
  419c40:	e7a600b8 	swc1	$f6,184(sp)
  419c44:	8684005e 	lh	a0,94(s4)
  419c48:	0320f809 	jalr	t9
  419c4c:	00000000 	nop
  419c50:	8fbc0070 	lw	gp,112(sp)
  419c54:	00000000 	nop
  419c58:	8f9984b8 	lw	t9,-31560(gp)
  419c5c:	00000000 	nop
  419c60:	0320f809 	jalr	t9
  419c64:	00000000 	nop
  419c68:	c688003c 	lwc1	$f8,60(s4)
  419c6c:	3c014000 	lui	at,0x4000
  419c70:	4481a800 	mtc1	at,$f21
  419c74:	4480a000 	mtc1	zero,$f20
  419c78:	460042a1 	cvt.d.s	$f10,$f8
  419c7c:	00000000 	nop
  419c80:	46345103 	div.d	$f4,$f10,$f20
  419c84:	8fbc0070 	lw	gp,112(sp)
  419c88:	44806000 	mtc1	zero,$f12
  419c8c:	8f9984a0 	lw	t9,-31584(gp)
  419c90:	44066000 	mfc1	a2,$f12
  419c94:	0320f809 	jalr	t9
  419c98:	462023a0 	cvt.s.d	$f14,$f4
  419c9c:	8e990074 	lw	t9,116(s4)
  419ca0:	8fbc0070 	lw	gp,112(sp)
  419ca4:	00194ac0 	sll	t1,t9,0xb
  419ca8:	0521002e 	bgez	t1,419d64 <draw_warp_directory+0x94c>
  419cac:	00000000 	nop
  419cb0:	8f9984b8 	lw	t9,-31560(gp)
  419cb4:	00000000 	nop
  419cb8:	0320f809 	jalr	t9
  419cbc:	00000000 	nop
  419cc0:	8fbc0070 	lw	gp,112(sp)
  419cc4:	8e640174 	lw	a0,372(s3)
  419cc8:	8f998464 	lw	t9,-31644(gp)
  419ccc:	00000000 	nop
  419cd0:	0320f809 	jalr	t9
  419cd4:	00000000 	nop
  419cd8:	8fbc0070 	lw	gp,112(sp)
  419cdc:	44806000 	mtc1	zero,$f12
  419ce0:	8f9984a0 	lw	t9,-31584(gp)
  419ce4:	3c06bd4c 	lui	a2,0xbd4c
  419ce8:	34c6cccd 	ori	a2,a2,0xcccd
  419cec:	0320f809 	jalr	t9
  419cf0:	46006386 	mov.s	$f14,$f12
  419cf4:	c682003c 	lwc1	$f2,60(s4)
  419cf8:	c6720060 	lwc1	$f18,96(s3)
  419cfc:	46001187 	neg.s	$f6,$f2
  419d00:	46009021 	cvt.d.s	$f0,$f18
  419d04:	46003221 	cvt.d.s	$f8,$f6
  419d08:	460014a1 	cvt.d.s	$f18,$f2
  419d0c:	00000000 	nop
  419d10:	46349183 	div.d	$f6,$f18,$f20
  419d14:	8fbc0070 	lw	gp,112(sp)
  419d18:	00000000 	nop
  419d1c:	8f9981e0 	lw	t9,-32288(gp)
  419d20:	46344283 	div.d	$f10,$f8,$f20
  419d24:	46203200 	add.d	$f8,$f6,$f0
  419d28:	46204420 	cvt.s.d	$f16,$f8
  419d2c:	44068000 	mfc1	a2,$f16
  419d30:	44078000 	mfc1	a3,$f16
  419d34:	46205101 	sub.d	$f4,$f10,$f0
  419d38:	46202320 	cvt.s.d	$f12,$f4
  419d3c:	0320f809 	jalr	t9
  419d40:	46006386 	mov.s	$f14,$f12
  419d44:	8fbc0070 	lw	gp,112(sp)
  419d48:	00000000 	nop
  419d4c:	8f9984d8 	lw	t9,-31528(gp)
  419d50:	00000000 	nop
  419d54:	0320f809 	jalr	t9
  419d58:	00000000 	nop
  419d5c:	8fbc0070 	lw	gp,112(sp)
  419d60:	00000000 	nop
  419d64:	8f8a8974 	lw	t2,-30348(gp)
  419d68:	8f998464 	lw	t9,-31644(gp)
  419d6c:	8d4a0000 	lw	t2,0(t2)
  419d70:	00000000 	nop
  419d74:	8d440010 	lw	a0,16(t2)
  419d78:	0320f809 	jalr	t9
  419d7c:	00000000 	nop
  419d80:	8e8b0074 	lw	t3,116(s4)
  419d84:	8fbc0070 	lw	gp,112(sp)
  419d88:	000b6b40 	sll	t5,t3,0xd
  419d8c:	05a10013 	bgez	t5,419ddc <draw_warp_directory+0x9c4>
  419d90:	00000000 	nop
  419d94:	c682003c 	lwc1	$f2,60(s4)
  419d98:	8f998210 	lw	t9,-32240(gp)
  419d9c:	460011a1 	cvt.d.s	$f6,$f2
  419da0:	00000000 	nop
  419da4:	46343203 	div.d	$f8,$f6,$f20
  419da8:	46001287 	neg.s	$f10,$f2
  419dac:	46005121 	cvt.d.s	$f4,$f10
  419db0:	00000000 	nop
  419db4:	46342483 	div.d	$f18,$f4,$f20
  419db8:	46204020 	cvt.s.d	$f0,$f8
  419dbc:	44060000 	mfc1	a2,$f0
  419dc0:	44070000 	mfc1	a3,$f0
  419dc4:	46209320 	cvt.s.d	$f12,$f18
  419dc8:	0320f809 	jalr	t9
  419dcc:	46006386 	mov.s	$f14,$f12
  419dd0:	8fbc0070 	lw	gp,112(sp)
  419dd4:	10000012 	b	419e20 <draw_warp_directory+0xa08>
  419dd8:	00000000 	nop
  419ddc:	c682003c 	lwc1	$f2,60(s4)
  419de0:	8f9981e0 	lw	t9,-32288(gp)
  419de4:	460011a1 	cvt.d.s	$f6,$f2
  419de8:	00000000 	nop
  419dec:	46343203 	div.d	$f8,$f6,$f20
  419df0:	46001287 	neg.s	$f10,$f2
  419df4:	46005121 	cvt.d.s	$f4,$f10
  419df8:	00000000 	nop
  419dfc:	46342483 	div.d	$f18,$f4,$f20
  419e00:	46204020 	cvt.s.d	$f0,$f8
  419e04:	44060000 	mfc1	a2,$f0
  419e08:	44070000 	mfc1	a3,$f0
  419e0c:	46209320 	cvt.s.d	$f12,$f18
  419e10:	0320f809 	jalr	t9
  419e14:	46006386 	mov.s	$f14,$f12
  419e18:	8fbc0070 	lw	gp,112(sp)
  419e1c:	00000000 	nop
  419e20:	8f9984b8 	lw	t9,-31560(gp)
  419e24:	00000000 	nop
  419e28:	0320f809 	jalr	t9
  419e2c:	00000000 	nop
  419e30:	8fbc0070 	lw	gp,112(sp)
  419e34:	8e8e0004 	lw	t6,4(s4)
  419e38:	8f81805c 	lw	at,-32676(gp)
  419e3c:	448e5000 	mtc1	t6,$f10
  419e40:	c688003c 	lwc1	$f8,60(s4)
  419e44:	46805121 	cvt.d.w	$f4,$f10
  419e48:	c433af48 	lwc1	$f19,-20664(at)
  419e4c:	c432af4c 	lwc1	$f18,-20660(at)
  419e50:	46004287 	neg.s	$f10,$f8
  419e54:	46322182 	mul.d	$f6,$f4,$f18
  419e58:	46005121 	cvt.d.s	$f4,$f10
  419e5c:	00000000 	nop
  419e60:	46342483 	div.d	$f18,$f4,$f20
  419e64:	8f81805c 	lw	at,-32676(gp)
  419e68:	8f9984a0 	lw	t9,-31584(gp)
  419e6c:	46203320 	cvt.s.d	$f12,$f6
  419e70:	c426af54 	lwc1	$f6,-20652(at)
  419e74:	c427af50 	lwc1	$f7,-20656(at)
  419e78:	24060000 	li	a2,0
  419e7c:	46269201 	sub.d	$f8,$f18,$f6
  419e80:	0320f809 	jalr	t9
  419e84:	462043a0 	cvt.s.d	$f14,$f8
  419e88:	8ecf0000 	lw	t7,0(s6)
  419e8c:	8fbc0070 	lw	gp,112(sp)
  419e90:	85e4000e 	lh	a0,14(t7)
  419e94:	8f998498 	lw	t9,-31592(gp)
  419e98:	00042023 	negu	a0,a0
  419e9c:	0004c400 	sll	t8,a0,0x10
  419ea0:	00182403 	sra	a0,t8,0x10
  419ea4:	0320f809 	jalr	t9
  419ea8:	24050078 	li	a1,120
  419eac:	8fbc0070 	lw	gp,112(sp)
  419eb0:	3c063f80 	lui	a2,0x3f80
  419eb4:	8f81805c 	lw	at,-32676(gp)
  419eb8:	8f998494 	lw	t9,-31596(gp)
  419ebc:	c42caf58 	lwc1	$f12,-20648(at)
  419ec0:	0320f809 	jalr	t9
  419ec4:	46006386 	mov.s	$f14,$f12
  419ec8:	8fbc0070 	lw	gp,112(sp)
  419ecc:	8e840000 	lw	a0,0(s4)
  419ed0:	8f9985f8 	lw	t9,-31240(gp)
  419ed4:	00000000 	nop
  419ed8:	0320f809 	jalr	t9
  419edc:	00000000 	nop
  419ee0:	8fbc0070 	lw	gp,112(sp)
  419ee4:	00000000 	nop
  419ee8:	8f9984d8 	lw	t9,-31528(gp)
  419eec:	00000000 	nop
  419ef0:	0320f809 	jalr	t9
  419ef4:	00000000 	nop
  419ef8:	8e88000c 	lw	t0,12(s4)
  419efc:	8fbc0070 	lw	gp,112(sp)
  419f00:	190000f8 	blez	t0,41a2e4 <draw_warp_directory+0xecc>
  419f04:	00008825 	move	s1,zero
  419f08:	c7a400b8 	lwc1	$f4,184(sp)
  419f0c:	93b500d7 	lbu	s5,215(sp)
  419f10:	4600b2a1 	cvt.d.s	$f10,$f22
  419f14:	460024a1 	cvt.d.s	$f18,$f4
  419f18:	2ea90001 	sltiu	t1,s5,1
  419f1c:	4480b000 	mtc1	zero,$f22
  419f20:	4480b800 	mtc1	zero,$f23
  419f24:	0120a825 	move	s5,t1
  419f28:	e7b20084 	swc1	$f18,132(sp)
  419f2c:	e7b30080 	swc1	$f19,128(sp)
  419f30:	e7aa0094 	swc1	$f10,148(sp)
  419f34:	e7ab0090 	swc1	$f11,144(sp)
  419f38:	00009025 	move	s2,zero
  419f3c:	8e8a0010 	lw	t2,16(s4)
  419f40:	8f998250 	lw	t9,-32176(gp)
  419f44:	01525821 	addu	t3,t2,s2
  419f48:	8d700000 	lw	s0,0(t3)
  419f4c:	00112400 	sll	a0,s1,0x10
  419f50:	00046403 	sra	t4,a0,0x10
  419f54:	01802025 	move	a0,t4
  419f58:	afb5009c 	sw	s5,156(sp)
  419f5c:	afb50098 	sw	s5,152(sp)
  419f60:	02a03025 	move	a2,s5
  419f64:	0320f809 	jalr	t9
  419f68:	02a03825 	move	a3,s5
  419f6c:	c6080014 	lwc1	$f8,20(s0)
  419f70:	c7a70090 	lwc1	$f7,144(sp)
  419f74:	c7a60094 	lwc1	$f6,148(sp)
  419f78:	460042a1 	cvt.d.s	$f10,$f8
  419f7c:	c688003c 	lwc1	$f8,60(s4)
  419f80:	462a3101 	sub.d	$f4,$f6,$f10
  419f84:	c7b30080 	lwc1	$f19,128(sp)
  419f88:	460041a1 	cvt.d.s	$f6,$f8
  419f8c:	00000000 	nop
  419f90:	46343283 	div.d	$f10,$f6,$f20
  419f94:	c7b20084 	lwc1	$f18,132(sp)
  419f98:	46202020 	cvt.s.d	$f0,$f4
  419f9c:	c6080018 	lwc1	$f8,24(s0)
  419fa0:	46000085 	abs.s	$f2,$f0
  419fa4:	460041a1 	cvt.d.s	$f6,$f8
  419fa8:	8fbc0070 	lw	gp,112(sp)
  419fac:	8fa60098 	lw	a2,152(sp)
  419fb0:	8fa7009c 	lw	a3,156(sp)
  419fb4:	93af00d7 	lbu	t7,215(sp)
  419fb8:	02802025 	move	a0,s4
  419fbc:	02002825 	move	a1,s0
  419fc0:	2409001f 	li	t1,31
  419fc4:	462a9101 	sub.d	$f4,$f18,$f10
  419fc8:	46262481 	sub.d	$f18,$f4,$f6
  419fcc:	46209020 	cvt.s.d	$f0,$f18
  419fd0:	12a0001f 	beqz	s5,41a050 <draw_warp_directory+0xc38>
  419fd4:	46000005 	abs.s	$f0,$f0
  419fd8:	8ecd0000 	lw	t5,0(s6)
  419fdc:	c66400b0 	lwc1	$f4,176(s3)
  419fe0:	c5aa0008 	lwc1	$f10,8(t5)
  419fe4:	460021a1 	cvt.d.s	$f6,$f4
  419fe8:	46005221 	cvt.d.s	$f8,$f10
  419fec:	4626403c 	c.lt.d	$f8,$f6
  419ff0:	00003025 	move	a2,zero
  419ff4:	45000002 	bc1f	41a000 <draw_warp_directory+0xbe8>
  419ff8:	00000000 	nop
  419ffc:	24060001 	li	a2,1
  41a000:	10c00013 	beqz	a2,41a050 <draw_warp_directory+0xc38>
  41a004:	00000000 	nop
  41a008:	c66a00a8 	lwc1	$f10,168(s3)
  41a00c:	460014a1 	cvt.d.s	$f18,$f2
  41a010:	46005121 	cvt.d.s	$f4,$f10
  41a014:	4624903c 	c.lt.d	$f18,$f4
  41a018:	00003025 	move	a2,zero
  41a01c:	45000002 	bc1f	41a028 <draw_warp_directory+0xc10>
  41a020:	00000000 	nop
  41a024:	24060001 	li	a2,1
  41a028:	10c00009 	beqz	a2,41a050 <draw_warp_directory+0xc38>
  41a02c:	00000000 	nop
  41a030:	c66600ac 	lwc1	$f6,172(s3)
  41a034:	46000221 	cvt.d.s	$f8,$f0
  41a038:	460032a1 	cvt.d.s	$f10,$f6
  41a03c:	462a403c 	c.lt.d	$f8,$f10
  41a040:	00003025 	move	a2,zero
  41a044:	45000002 	bc1f	41a050 <draw_warp_directory+0xc38>
  41a048:	00000000 	nop
  41a04c:	24060001 	li	a2,1
  41a050:	12a0001f 	beqz	s5,41a0d0 <draw_warp_directory+0xcb8>
  41a054:	00000000 	nop
  41a058:	8ece0000 	lw	t6,0(s6)
  41a05c:	c66600bc 	lwc1	$f6,188(s3)
  41a060:	c5d20008 	lwc1	$f18,8(t6)
  41a064:	46003221 	cvt.d.s	$f8,$f6
  41a068:	46009121 	cvt.d.s	$f4,$f18
  41a06c:	4628203c 	c.lt.d	$f4,$f8
  41a070:	00003825 	move	a3,zero
  41a074:	45000002 	bc1f	41a080 <draw_warp_directory+0xc68>
  41a078:	00000000 	nop
  41a07c:	24070001 	li	a3,1
  41a080:	10e00013 	beqz	a3,41a0d0 <draw_warp_directory+0xcb8>
  41a084:	00000000 	nop
  41a088:	c67200b4 	lwc1	$f18,180(s3)
  41a08c:	460012a1 	cvt.d.s	$f10,$f2
  41a090:	460091a1 	cvt.d.s	$f6,$f18
  41a094:	4626503c 	c.lt.d	$f10,$f6
  41a098:	00003825 	move	a3,zero
  41a09c:	45000002 	bc1f	41a0a8 <draw_warp_directory+0xc90>
  41a0a0:	00000000 	nop
  41a0a4:	24070001 	li	a3,1
  41a0a8:	10e00009 	beqz	a3,41a0d0 <draw_warp_directory+0xcb8>
  41a0ac:	00000000 	nop
  41a0b0:	c66800b8 	lwc1	$f8,184(s3)
  41a0b4:	46000121 	cvt.d.s	$f4,$f0
  41a0b8:	460044a1 	cvt.d.s	$f18,$f8
  41a0bc:	4632203c 	c.lt.d	$f4,$f18
  41a0c0:	00003825 	move	a3,zero
  41a0c4:	45000002 	bc1f	41a0d0 <draw_warp_directory+0xcb8>
  41a0c8:	00000000 	nop
  41a0cc:	24070001 	li	a3,1
  41a0d0:	11e00003 	beqz	t7,41a0e0 <draw_warp_directory+0xcc8>
  41a0d4:	00000000 	nop
  41a0d8:	10000009 	b	41a100 <draw_warp_directory+0xce8>
  41a0dc:	24020004 	li	v0,4
  41a0e0:	8e180028 	lw	t8,40(s0)
  41a0e4:	00001825 	move	v1,zero
  41a0e8:	00184240 	sll	t0,t8,0x9
  41a0ec:	05010003 	bgez	t0,41a0fc <draw_warp_directory+0xce4>
  41a0f0:	00000000 	nop
  41a0f4:	10000001 	b	41a0fc <draw_warp_directory+0xce4>
  41a0f8:	24030001 	li	v1,1
  41a0fc:	00601025 	move	v0,v1
  41a100:	8f9986b8 	lw	t9,-31048(gp)
  41a104:	afa20010 	sw	v0,16(sp)
  41a108:	0320f809 	jalr	t9
  41a10c:	afa90014 	sw	t1,20(sp)
  41a110:	8e0a0028 	lw	t2,40(s0)
  41a114:	8fbc0070 	lw	gp,112(sp)
  41a118:	000a60c0 	sll	t4,t2,0x3
  41a11c:	05810067 	bgez	t4,41a2bc <draw_warp_directory+0xea4>
  41a120:	00000000 	nop
  41a124:	8f9984b8 	lw	t9,-31560(gp)
  41a128:	00000000 	nop
  41a12c:	0320f809 	jalr	t9
  41a130:	00000000 	nop
  41a134:	c68a003c 	lwc1	$f10,60(s4)
  41a138:	8fbc0070 	lw	gp,112(sp)
  41a13c:	46005187 	neg.s	$f6,$f10
  41a140:	46003221 	cvt.d.s	$f8,$f6
  41a144:	00000000 	nop
  41a148:	46344103 	div.d	$f4,$f8,$f20
  41a14c:	44806000 	mtc1	zero,$f12
  41a150:	8f9984a0 	lw	t9,-31584(gp)
  41a154:	44066000 	mfc1	a2,$f12
  41a158:	0320f809 	jalr	t9
  41a15c:	462023a0 	cvt.s.d	$f14,$f4
  41a160:	c692003c 	lwc1	$f18,60(s4)
  41a164:	3c014034 	lui	at,0x4034
  41a168:	44815800 	mtc1	at,$f11
  41a16c:	44805000 	mtc1	zero,$f10
  41a170:	46009021 	cvt.d.s	$f0,$f18
  41a174:	e7ab0010 	swc1	$f11,16(sp)
  41a178:	e7aa0014 	swc1	$f10,20(sp)
  41a17c:	46340283 	div.d	$f10,$f0,$f20
  41a180:	c6060014 	lwc1	$f6,20(s0)
  41a184:	8fbc0070 	lw	gp,112(sp)
  41a188:	46003221 	cvt.d.s	$f8,$f6
  41a18c:	e7a8001c 	swc1	$f8,28(sp)
  41a190:	e7a90018 	swc1	$f9,24(sp)
  41a194:	c6040018 	lwc1	$f4,24(s0)
  41a198:	c6680070 	lwc1	$f8,112(s3)
  41a19c:	460024a1 	cvt.d.s	$f18,$f4
  41a1a0:	46004121 	cvt.d.s	$f4,$f8
  41a1a4:	93ad00d7 	lbu	t5,215(sp)
  41a1a8:	8e6e0184 	lw	t6,388(s3)
  41a1ac:	8f998708 	lw	t9,-30968(gp)
  41a1b0:	e7b6002c 	swc1	$f22,44(sp)
  41a1b4:	e7b70028 	swc1	$f23,40(sp)
  41a1b8:	46340382 	mul.d	$f14,$f0,$f20
  41a1bc:	afad0038 	sw	t5,56(sp)
  41a1c0:	afae003c 	sw	t6,60(sp)
  41a1c4:	462a9180 	add.d	$f6,$f18,$f10
  41a1c8:	c66a0074 	lwc1	$f10,116(s3)
  41a1cc:	46342483 	div.d	$f18,$f4,$f20
  41a1d0:	e7a60024 	swc1	$f6,36(sp)
  41a1d4:	e7a70020 	swc1	$f7,32(sp)
  41a1d8:	460051a1 	cvt.d.s	$f6,$f10
  41a1dc:	4620b306 	mov.d	$f12,$f22
  41a1e0:	46269200 	add.d	$f8,$f18,$f6
  41a1e4:	e7a80034 	swc1	$f8,52(sp)
  41a1e8:	0320f809 	jalr	t9
  41a1ec:	e7a90030 	swc1	$f9,48(sp)
  41a1f0:	8fbc0070 	lw	gp,112(sp)
  41a1f4:	00000000 	nop
  41a1f8:	8f9984d8 	lw	t9,-31528(gp)
  41a1fc:	00000000 	nop
  41a200:	0320f809 	jalr	t9
  41a204:	00000000 	nop
  41a208:	8fbc0070 	lw	gp,112(sp)
  41a20c:	1a200013 	blez	s1,41a25c <draw_warp_directory+0xe44>
  41a210:	00000000 	nop
  41a214:	8e8f0010 	lw	t7,16(s4)
  41a218:	c6040014 	lwc1	$f4,20(s0)
  41a21c:	01f2c021 	addu	t8,t7,s2
  41a220:	8f19fffc 	lw	t9,-4(t8)
  41a224:	460022a1 	cvt.d.s	$f10,$f4
  41a228:	c7320014 	lwc1	$f18,20(t9)
  41a22c:	02802025 	move	a0,s4
  41a230:	460091a1 	cvt.d.s	$f6,$f18
  41a234:	4626503c 	c.lt.d	$f10,$f6
  41a238:	00000000 	nop
  41a23c:	45000007 	bc1f	41a25c <draw_warp_directory+0xe44>
  41a240:	00000000 	nop
  41a244:	8f9986bc 	lw	t9,-31044(gp)
  41a248:	2625ffff 	addiu	a1,s1,-1
  41a24c:	0320f809 	jalr	t9
  41a250:	02203025 	move	a2,s1
  41a254:	8fbc0070 	lw	gp,112(sp)
  41a258:	00000000 	nop
  41a25c:	8e88000c 	lw	t0,12(s4)
  41a260:	00000000 	nop
  41a264:	2509ffff 	addiu	t1,t0,-1
  41a268:	0229082a 	slt	at,s1,t1
  41a26c:	10200013 	beqz	at,41a2bc <draw_warp_directory+0xea4>
  41a270:	00000000 	nop
  41a274:	8e8a0010 	lw	t2,16(s4)
  41a278:	c6120014 	lwc1	$f18,20(s0)
  41a27c:	01525821 	addu	t3,t2,s2
  41a280:	8d6c0004 	lw	t4,4(t3)
  41a284:	460092a1 	cvt.d.s	$f10,$f18
  41a288:	c5880014 	lwc1	$f8,20(t4)
  41a28c:	02802025 	move	a0,s4
  41a290:	46004121 	cvt.d.s	$f4,$f8
  41a294:	462a203c 	c.lt.d	$f4,$f10
  41a298:	00000000 	nop
  41a29c:	45000007 	bc1f	41a2bc <draw_warp_directory+0xea4>
  41a2a0:	00000000 	nop
  41a2a4:	8f9986bc 	lw	t9,-31044(gp)
  41a2a8:	02202825 	move	a1,s1
  41a2ac:	0320f809 	jalr	t9
  41a2b0:	26260001 	addiu	a2,s1,1
  41a2b4:	8fbc0070 	lw	gp,112(sp)
  41a2b8:	00000000 	nop
  41a2bc:	8f998218 	lw	t9,-32232(gp)
  41a2c0:	26300001 	addiu	s0,s1,1
  41a2c4:	0320f809 	jalr	t9
  41a2c8:	00000000 	nop
  41a2cc:	8e8d000c 	lw	t5,12(s4)
  41a2d0:	8fbc0070 	lw	gp,112(sp)
  41a2d4:	020d082a 	slt	at,s0,t5
  41a2d8:	02008825 	move	s1,s0
  41a2dc:	1420ff17 	bnez	at,419f3c <draw_warp_directory+0xb24>
  41a2e0:	26520004 	addiu	s2,s2,4
  41a2e4:	8f99801c 	lw	t9,-32740(gp)
  41a2e8:	93a500d7 	lbu	a1,215(sp)
  41a2ec:	2739919c 	addiu	t9,t9,-28260
  41a2f0:	0320f809 	jalr	t9
  41a2f4:	02802025 	move	a0,s4
  41a2f8:	8fbc0070 	lw	gp,112(sp)
  41a2fc:	00000000 	nop
  41a300:	8f9984d8 	lw	t9,-31528(gp)
  41a304:	00000000 	nop
  41a308:	0320f809 	jalr	t9
  41a30c:	00000000 	nop
  41a310:	8fbf0074 	lw	ra,116(sp)
  41a314:	8fbc0070 	lw	gp,112(sp)
  41a318:	c7b50040 	lwc1	$f21,64(sp)
  41a31c:	c7b40044 	lwc1	$f20,68(sp)
  41a320:	c7b70048 	lwc1	$f23,72(sp)
  41a324:	c7b6004c 	lwc1	$f22,76(sp)
  41a328:	8fb00054 	lw	s0,84(sp)
  41a32c:	8fb10058 	lw	s1,88(sp)
  41a330:	8fb2005c 	lw	s2,92(sp)
  41a334:	8fb30060 	lw	s3,96(sp)
  41a338:	8fb40064 	lw	s4,100(sp)
  41a33c:	8fb50068 	lw	s5,104(sp)
  41a340:	8fb6006c 	lw	s6,108(sp)
  41a344:	03e00008 	jr	ra
  41a348:	27bd00d0 	addiu	sp,sp,208
