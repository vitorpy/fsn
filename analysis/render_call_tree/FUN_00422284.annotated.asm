# Disassembly of FUN_00422284
# Address: 0x00422284
# End: 0x00422f4c
# Size: 0xcc8 (3272 bytes)
# Detection: jr ra
# GP = 0x1001db30
#
# Annotations: GP offsets, function calls, float constants
#


fsn.original:     file format elf32-tradbigmips


Disassembly of section .text:

00422284 <draw_box+0xc>:
  422284:	27bdffc0 	addiu	sp,sp,-64
  422288:	24010004 	li	at,4
  42228c:	afbf0024 	sw	ra,36(sp)
  422290:	afbc0020 	sw	gp,32(sp)
  422294:	afb2001c 	sw	s2,28(sp)
  422298:	afb10018 	sw	s1,24(sp)
  42229c:	afb00014 	sw	s0,20(sp)
  4222a0:	afa40040 	sw	a0,64(sp)
  4222a4:	afa50044 	sw	a1,68(sp)
  4222a8:	14a1003c 	bne	a1,at,42239c <draw_box+0x124>
  4222ac:	afa60048 	sw	a2,72(sp)
  4222b0:	10800007 	beqz	a0,4222d0 <draw_box+0x58>
  4222b4:	00000000 	nop
  4222b8:	8f998464 	lw	t9,-31644(gp)  # cpack
  4222bc:	8c840000 	lw	a0,0(a0)
  4222c0:	0320f809 	jalr	t9  # call cpack
  4222c4:	00000000 	nop
  4222c8:	8fbc0020 	lw	gp,32(sp)
  4222cc:	00000000 	nop
  4222d0:	8f9982ac 	lw	t9,-32084(gp)
  4222d4:	00000000 	nop
  4222d8:	0320f809 	jalr	t9
  4222dc:	00000000 	nop
  4222e0:	8fbc0020 	lw	gp,32(sp)
  4222e4:	2412000c 	li	s2,12
  4222e8:	8f908068 	lw	s0,-32664(gp)  # small
  4222ec:	8f918068 	lw	s1,-32664(gp)  # small
  4222f0:	26107010 	addiu	s0,s0,28688
  4222f4:	8e180000 	lw	t8,0(s0)
  4222f8:	26316f40 	addiu	s1,s1,28480
  4222fc:	03120019 	multu	t8,s2
  422300:	0000c812 	mflo	t9
  422304:	02392021 	addu	a0,s1,t9
  422308:	8f998240 	lw	t9,-32192(gp)  # v3f
  42230c:	00000000 	nop
  422310:	0320f809 	jalr	t9  # call v3f
  422314:	00000000 	nop
  422318:	8e080004 	lw	t0,4(s0)
  42231c:	8fbc0020 	lw	gp,32(sp)
  422320:	01120019 	multu	t0,s2
  422324:	8f998240 	lw	t9,-32192(gp)  # v3f
  422328:	00004812 	mflo	t1
  42232c:	02292021 	addu	a0,s1,t1
  422330:	0320f809 	jalr	t9  # call v3f
  422334:	00000000 	nop
  422338:	8e0a000c 	lw	t2,12(s0)
  42233c:	8fbc0020 	lw	gp,32(sp)
  422340:	01520019 	multu	t2,s2
  422344:	8f998240 	lw	t9,-32192(gp)  # v3f
  422348:	00005812 	mflo	t3
  42234c:	022b2021 	addu	a0,s1,t3
  422350:	0320f809 	jalr	t9  # call v3f
  422354:	00000000 	nop
  422358:	8e0c0008 	lw	t4,8(s0)
  42235c:	8fbc0020 	lw	gp,32(sp)
  422360:	01920019 	multu	t4,s2
  422364:	8f998240 	lw	t9,-32192(gp)  # v3f
  422368:	00006812 	mflo	t5
  42236c:	022d2021 	addu	a0,s1,t5
  422370:	0320f809 	jalr	t9  # call v3f
  422374:	00000000 	nop
  422378:	8fbc0020 	lw	gp,32(sp)
  42237c:	00000000 	nop
  422380:	8f9982c4 	lw	t9,-32060(gp)
  422384:	00000000 	nop
  422388:	0320f809 	jalr	t9
  42238c:	00000000 	nop
  422390:	8fbc0020 	lw	gp,32(sp)
  422394:	100002e8 	b	422f38 <draw_box+0xcc0>
  422398:	8fbf0024 	lw	ra,36(sp)
  42239c:	8fae0044 	lw	t6,68(sp)
  4223a0:	24010003 	li	at,3
  4223a4:	15c10027 	bne	t6,at,422444 <draw_box+0x1cc>
  4223a8:	8fb80044 	lw	t8,68(sp)
  4223ac:	8faf0040 	lw	t7,64(sp)
  4223b0:	00000000 	nop
  4223b4:	11e00007 	beqz	t7,4223d4 <draw_box+0x15c>
  4223b8:	00000000 	nop
  4223bc:	8f998464 	lw	t9,-31644(gp)  # cpack
  4223c0:	8de40000 	lw	a0,0(t7)
  4223c4:	0320f809 	jalr	t9  # call cpack
  4223c8:	00000000 	nop
  4223cc:	8fbc0020 	lw	gp,32(sp)
  4223d0:	00000000 	nop
  4223d4:	8f998484 	lw	t9,-31612(gp)
  4223d8:	00000000 	nop
  4223dc:	0320f809 	jalr	t9
  4223e0:	00000000 	nop
  4223e4:	8fbc0020 	lw	gp,32(sp)
  4223e8:	00000000 	nop
  4223ec:	8f848068 	lw	a0,-32664(gp)  # small
  4223f0:	8f998240 	lw	t9,-32192(gp)  # v3f
  4223f4:	24847020 	addiu	a0,a0,28704
  4223f8:	0320f809 	jalr	t9  # call v3f
  4223fc:	00000000 	nop
  422400:	8fbc0020 	lw	gp,32(sp)
  422404:	00000000 	nop
  422408:	8f848068 	lw	a0,-32664(gp)  # small
  42240c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422410:	2484702c 	addiu	a0,a0,28716
  422414:	0320f809 	jalr	t9  # call v3f
  422418:	00000000 	nop
  42241c:	8fbc0020 	lw	gp,32(sp)
  422420:	00000000 	nop
  422424:	8f99846c 	lw	t9,-31636(gp)
  422428:	00000000 	nop
  42242c:	0320f809 	jalr	t9
  422430:	00000000 	nop
  422434:	8fbc0020 	lw	gp,32(sp)
  422438:	100002bf 	b	422f38 <draw_box+0xcc0>
  42243c:	8fbf0024 	lw	ra,36(sp)
  422440:	8fb80044 	lw	t8,68(sp)
  422444:	24010002 	li	at,2
  422448:	1701003f 	bne	t8,at,422548 <draw_box+0x2d0>
  42244c:	8fa20044 	lw	v0,68(sp)
  422450:	8fb90040 	lw	t9,64(sp)
  422454:	00000000 	nop
  422458:	13200008 	beqz	t9,42247c <draw_box+0x204>
  42245c:	00000000 	nop
  422460:	8f240000 	lw	a0,0(t9)
  422464:	8f998464 	lw	t9,-31644(gp)  # cpack
  422468:	00000000 	nop
  42246c:	0320f809 	jalr	t9  # call cpack
  422470:	00000000 	nop
  422474:	8fbc0020 	lw	gp,32(sp)
  422478:	00000000 	nop
  42247c:	8f9982ac 	lw	t9,-32084(gp)
  422480:	00000000 	nop
  422484:	0320f809 	jalr	t9
  422488:	00000000 	nop
  42248c:	8fbc0020 	lw	gp,32(sp)
  422490:	2412000c 	li	s2,12
  422494:	8f908068 	lw	s0,-32664(gp)  # small
  422498:	8f918068 	lw	s1,-32664(gp)  # small
  42249c:	26107000 	addiu	s0,s0,28672
  4224a0:	8e080000 	lw	t0,0(s0)
  4224a4:	8f998240 	lw	t9,-32192(gp)  # v3f
  4224a8:	01120019 	multu	t0,s2
  4224ac:	26316f40 	addiu	s1,s1,28480
  4224b0:	00004812 	mflo	t1
  4224b4:	02292021 	addu	a0,s1,t1
  4224b8:	0320f809 	jalr	t9  # call v3f
  4224bc:	00000000 	nop
  4224c0:	8e0a0004 	lw	t2,4(s0)
  4224c4:	8fbc0020 	lw	gp,32(sp)
  4224c8:	01520019 	multu	t2,s2
  4224cc:	8f998240 	lw	t9,-32192(gp)  # v3f
  4224d0:	00005812 	mflo	t3
  4224d4:	022b2021 	addu	a0,s1,t3
  4224d8:	0320f809 	jalr	t9  # call v3f
  4224dc:	00000000 	nop
  4224e0:	8e0c000c 	lw	t4,12(s0)
  4224e4:	8fbc0020 	lw	gp,32(sp)
  4224e8:	01920019 	multu	t4,s2
  4224ec:	8f998240 	lw	t9,-32192(gp)  # v3f
  4224f0:	00006812 	mflo	t5
  4224f4:	022d2021 	addu	a0,s1,t5
  4224f8:	0320f809 	jalr	t9  # call v3f
  4224fc:	00000000 	nop
  422500:	8e0e0008 	lw	t6,8(s0)
  422504:	8fbc0020 	lw	gp,32(sp)
  422508:	01d20019 	multu	t6,s2
  42250c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422510:	00007812 	mflo	t7
  422514:	022f2021 	addu	a0,s1,t7
  422518:	0320f809 	jalr	t9  # call v3f
  42251c:	00000000 	nop
  422520:	8fbc0020 	lw	gp,32(sp)
  422524:	00000000 	nop
  422528:	8f9982c4 	lw	t9,-32060(gp)
  42252c:	00000000 	nop
  422530:	0320f809 	jalr	t9
  422534:	00000000 	nop
  422538:	8fbc0020 	lw	gp,32(sp)
  42253c:	1000027e 	b	422f38 <draw_box+0xcc0>
  422540:	8fbf0024 	lw	ra,36(sp)
  422544:	8fa20044 	lw	v0,68(sp)
  422548:	8fb90040 	lw	t9,64(sp)
  42254c:	38580001 	xori	t8,v0,0x1
  422550:	0018102b 	sltu	v0,zero,t8
  422554:	10400003 	beqz	v0,422564 <draw_box+0x2ec>
  422558:	afa20034 	sw	v0,52(sp)
  42255c:	0019402b 	sltu	t0,zero,t9
  422560:	afa80034 	sw	t0,52(sp)
  422564:	8fa90044 	lw	t1,68(sp)
  422568:	24010001 	li	at,1
  42256c:	1521000c 	bne	t1,at,4225a0 <draw_box+0x328>
  422570:	8fab0048 	lw	t3,72(sp)
  422574:	8faa0040 	lw	t2,64(sp)
  422578:	00000000 	nop
  42257c:	11400008 	beqz	t2,4225a0 <draw_box+0x328>
  422580:	8fab0048 	lw	t3,72(sp)
  422584:	8f998464 	lw	t9,-31644(gp)  # cpack
  422588:	8d440004 	lw	a0,4(t2)
  42258c:	0320f809 	jalr	t9  # call cpack
  422590:	00000000 	nop
  422594:	8fbc0020 	lw	gp,32(sp)
  422598:	00000000 	nop
  42259c:	8fab0048 	lw	t3,72(sp)
  4225a0:	93ad0037 	lbu	t5,55(sp)
  4225a4:	316c0001 	andi	t4,t3,0x1
  4225a8:	11800068 	beqz	t4,42274c <draw_box+0x4d4>
  4225ac:	00000000 	nop
  4225b0:	11a00009 	beqz	t5,4225d8 <draw_box+0x360>
  4225b4:	8faf0044 	lw	t7,68(sp)
  4225b8:	8fae0040 	lw	t6,64(sp)
  4225bc:	8f998464 	lw	t9,-31644(gp)  # cpack
  4225c0:	8dc40004 	lw	a0,4(t6)
  4225c4:	0320f809 	jalr	t9  # call cpack
  4225c8:	00000000 	nop
  4225cc:	8fbc0020 	lw	gp,32(sp)
  4225d0:	00000000 	nop
  4225d4:	8faf0044 	lw	t7,68(sp)
  4225d8:	24010001 	li	at,1
  4225dc:	15e10022 	bne	t7,at,422668 <draw_box+0x3f0>
  4225e0:	00000000 	nop
  4225e4:	8f9982dc 	lw	t9,-32036(gp)
  4225e8:	00000000 	nop
  4225ec:	0320f809 	jalr	t9
  4225f0:	00000000 	nop
  4225f4:	8fbc0020 	lw	gp,32(sp)
  4225f8:	2412000c 	li	s2,12
  4225fc:	8f908068 	lw	s0,-32664(gp)  # small
  422600:	8f918068 	lw	s1,-32664(gp)  # small
  422604:	26106fa0 	addiu	s0,s0,28576
  422608:	26316f40 	addiu	s1,s1,28480
  42260c:	8e180000 	lw	t8,0(s0)
  422610:	00000000 	nop
  422614:	03120019 	multu	t8,s2
  422618:	0000c812 	mflo	t9
  42261c:	02392021 	addu	a0,s1,t9
  422620:	8f998240 	lw	t9,-32192(gp)  # v3f
  422624:	00000000 	nop
  422628:	0320f809 	jalr	t9  # call v3f
  42262c:	00000000 	nop
  422630:	8fbc0020 	lw	gp,32(sp)
  422634:	26100004 	addiu	s0,s0,4
  422638:	8f888068 	lw	t0,-32664(gp)  # small
  42263c:	00000000 	nop
  422640:	25086fb0 	addiu	t0,t0,28592
  422644:	1608fff1 	bne	s0,t0,42260c <draw_box+0x394>
  422648:	00000000 	nop
  42264c:	8f9982e0 	lw	t9,-32032(gp)
  422650:	00000000 	nop
  422654:	0320f809 	jalr	t9
  422658:	00000000 	nop
  42265c:	8fbc0020 	lw	gp,32(sp)
  422660:	1000003a 	b	42274c <draw_box+0x4d4>
  422664:	00000000 	nop
  422668:	8f9982ac 	lw	t9,-32084(gp)
  42266c:	00000000 	nop
  422670:	0320f809 	jalr	t9
  422674:	00000000 	nop
  422678:	8fbc0020 	lw	gp,32(sp)
  42267c:	2412000c 	li	s2,12
  422680:	8f898068 	lw	t1,-32664(gp)  # small
  422684:	8f918068 	lw	s1,-32664(gp)  # small
  422688:	8d296fa0 	lw	t1,28576(t1)
  42268c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422690:	01320019 	multu	t1,s2
  422694:	26316f40 	addiu	s1,s1,28480
  422698:	00005012 	mflo	t2
  42269c:	022a2021 	addu	a0,s1,t2
  4226a0:	0320f809 	jalr	t9  # call v3f
  4226a4:	00000000 	nop
  4226a8:	8fbc0020 	lw	gp,32(sp)
  4226ac:	00000000 	nop
  4226b0:	8f8b8068 	lw	t3,-32664(gp)  # small
  4226b4:	8f998240 	lw	t9,-32192(gp)  # v3f
  4226b8:	8d6b6fa4 	lw	t3,28580(t3)
  4226bc:	00000000 	nop
  4226c0:	01720019 	multu	t3,s2
  4226c4:	00006012 	mflo	t4
  4226c8:	022c2021 	addu	a0,s1,t4
  4226cc:	0320f809 	jalr	t9  # call v3f
  4226d0:	00000000 	nop
  4226d4:	8fbc0020 	lw	gp,32(sp)
  4226d8:	00000000 	nop
  4226dc:	8f8d8068 	lw	t5,-32664(gp)  # small
  4226e0:	8f998240 	lw	t9,-32192(gp)  # v3f
  4226e4:	8dad6fac 	lw	t5,28588(t5)
  4226e8:	00000000 	nop
  4226ec:	01b20019 	multu	t5,s2
  4226f0:	00007012 	mflo	t6
  4226f4:	022e2021 	addu	a0,s1,t6
  4226f8:	0320f809 	jalr	t9  # call v3f
  4226fc:	00000000 	nop
  422700:	8fbc0020 	lw	gp,32(sp)
  422704:	00000000 	nop
  422708:	8f8f8068 	lw	t7,-32664(gp)  # small
  42270c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422710:	8def6fa8 	lw	t7,28584(t7)
  422714:	00000000 	nop
  422718:	01f20019 	multu	t7,s2
  42271c:	0000c012 	mflo	t8
  422720:	02382021 	addu	a0,s1,t8
  422724:	0320f809 	jalr	t9  # call v3f
  422728:	00000000 	nop
  42272c:	8fbc0020 	lw	gp,32(sp)
  422730:	00000000 	nop
  422734:	8f9982c4 	lw	t9,-32060(gp)
  422738:	00000000 	nop
  42273c:	0320f809 	jalr	t9
  422740:	00000000 	nop
  422744:	8fbc0020 	lw	gp,32(sp)
  422748:	00000000 	nop
  42274c:	8f918068 	lw	s1,-32664(gp)  # small
  422750:	93b90037 	lbu	t9,55(sp)
  422754:	2412000c 	li	s2,12
  422758:	26316f40 	addiu	s1,s1,28480
  42275c:	13200008 	beqz	t9,422780 <draw_box+0x508>
  422760:	afb9002c 	sw	t9,44(sp)
  422764:	8fa80040 	lw	t0,64(sp)
  422768:	8f998464 	lw	t9,-31644(gp)  # cpack
  42276c:	8d04000c 	lw	a0,12(t0)
  422770:	0320f809 	jalr	t9  # call cpack
  422774:	00000000 	nop
  422778:	8fbc0020 	lw	gp,32(sp)
  42277c:	00000000 	nop
  422780:	8fa90048 	lw	t1,72(sp)
  422784:	8fab0044 	lw	t3,68(sp)
  422788:	312a0002 	andi	t2,t1,0x2
  42278c:	1140005a 	beqz	t2,4228f8 <draw_box+0x680>
  422790:	24010001 	li	at,1
  422794:	1561001f 	bne	t3,at,422814 <draw_box+0x59c>
  422798:	00000000 	nop
  42279c:	8f9982dc 	lw	t9,-32036(gp)
  4227a0:	00000000 	nop
  4227a4:	0320f809 	jalr	t9
  4227a8:	00000000 	nop
  4227ac:	8fbc0020 	lw	gp,32(sp)
  4227b0:	00000000 	nop
  4227b4:	8f908068 	lw	s0,-32664(gp)  # small
  4227b8:	00000000 	nop
  4227bc:	26106fa0 	addiu	s0,s0,28576
  4227c0:	8e0c0010 	lw	t4,16(s0)
  4227c4:	8f998240 	lw	t9,-32192(gp)  # v3f
  4227c8:	01920019 	multu	t4,s2
  4227cc:	00006812 	mflo	t5
  4227d0:	022d2021 	addu	a0,s1,t5
  4227d4:	0320f809 	jalr	t9  # call v3f
  4227d8:	00000000 	nop
  4227dc:	8fbc0020 	lw	gp,32(sp)
  4227e0:	26100004 	addiu	s0,s0,4
  4227e4:	8f8e8068 	lw	t6,-32664(gp)  # small
  4227e8:	00000000 	nop
  4227ec:	25ce6fb0 	addiu	t6,t6,28592
  4227f0:	160efff3 	bne	s0,t6,4227c0 <draw_box+0x548>
  4227f4:	00000000 	nop
  4227f8:	8f9982e0 	lw	t9,-32032(gp)
  4227fc:	00000000 	nop
  422800:	0320f809 	jalr	t9
  422804:	00000000 	nop
  422808:	8fbc0020 	lw	gp,32(sp)
  42280c:	1000003b 	b	4228fc <draw_box+0x684>
  422810:	8fad0048 	lw	t5,72(sp)
  422814:	8f9982ac 	lw	t9,-32084(gp)
  422818:	00000000 	nop
  42281c:	0320f809 	jalr	t9
  422820:	00000000 	nop
  422824:	8fbc0020 	lw	gp,32(sp)
  422828:	00000000 	nop
  42282c:	8f8f8068 	lw	t7,-32664(gp)  # small
  422830:	8f998240 	lw	t9,-32192(gp)  # v3f
  422834:	8def6fb0 	lw	t7,28592(t7)
  422838:	00000000 	nop
  42283c:	01f20019 	multu	t7,s2
  422840:	0000c012 	mflo	t8
  422844:	02382021 	addu	a0,s1,t8
  422848:	0320f809 	jalr	t9  # call v3f
  42284c:	00000000 	nop
  422850:	8fbc0020 	lw	gp,32(sp)
  422854:	00000000 	nop
  422858:	8f998068 	lw	t9,-32664(gp)  # small
  42285c:	00000000 	nop
  422860:	8f396fb4 	lw	t9,28596(t9)
  422864:	00000000 	nop
  422868:	03320019 	multu	t9,s2
  42286c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422870:	00004012 	mflo	t0
  422874:	02282021 	addu	a0,s1,t0
  422878:	0320f809 	jalr	t9  # call v3f
  42287c:	00000000 	nop
  422880:	8fbc0020 	lw	gp,32(sp)
  422884:	00000000 	nop
  422888:	8f898068 	lw	t1,-32664(gp)  # small
  42288c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422890:	8d296fbc 	lw	t1,28604(t1)
  422894:	00000000 	nop
  422898:	01320019 	multu	t1,s2
  42289c:	00005012 	mflo	t2
  4228a0:	022a2021 	addu	a0,s1,t2
  4228a4:	0320f809 	jalr	t9  # call v3f
  4228a8:	00000000 	nop
  4228ac:	8fbc0020 	lw	gp,32(sp)
  4228b0:	00000000 	nop
  4228b4:	8f8b8068 	lw	t3,-32664(gp)  # small
  4228b8:	8f998240 	lw	t9,-32192(gp)  # v3f
  4228bc:	8d6b6fb8 	lw	t3,28600(t3)
  4228c0:	00000000 	nop
  4228c4:	01720019 	multu	t3,s2
  4228c8:	00006012 	mflo	t4
  4228cc:	022c2021 	addu	a0,s1,t4
  4228d0:	0320f809 	jalr	t9  # call v3f
  4228d4:	00000000 	nop
  4228d8:	8fbc0020 	lw	gp,32(sp)
  4228dc:	00000000 	nop
  4228e0:	8f9982c4 	lw	t9,-32060(gp)
  4228e4:	00000000 	nop
  4228e8:	0320f809 	jalr	t9
  4228ec:	00000000 	nop
  4228f0:	8fbc0020 	lw	gp,32(sp)
  4228f4:	00000000 	nop
  4228f8:	8fad0048 	lw	t5,72(sp)
  4228fc:	8faf0044 	lw	t7,68(sp)
  422900:	31ae0004 	andi	t6,t5,0x4
  422904:	11c0005b 	beqz	t6,422a74 <draw_box+0x7fc>
  422908:	24010001 	li	at,1
  42290c:	15e10021 	bne	t7,at,422994 <draw_box+0x71c>
  422910:	00000000 	nop
  422914:	8f9982dc 	lw	t9,-32036(gp)
  422918:	00000000 	nop
  42291c:	0320f809 	jalr	t9
  422920:	00000000 	nop
  422924:	8fbc0020 	lw	gp,32(sp)
  422928:	00000000 	nop
  42292c:	8f908068 	lw	s0,-32664(gp)  # small
  422930:	00000000 	nop
  422934:	26106fa0 	addiu	s0,s0,28576
  422938:	8e180020 	lw	t8,32(s0)
  42293c:	00000000 	nop
  422940:	03120019 	multu	t8,s2
  422944:	0000c812 	mflo	t9
  422948:	02392021 	addu	a0,s1,t9
  42294c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422950:	00000000 	nop
  422954:	0320f809 	jalr	t9  # call v3f
  422958:	00000000 	nop
  42295c:	8fbc0020 	lw	gp,32(sp)
  422960:	26100004 	addiu	s0,s0,4
  422964:	8f888068 	lw	t0,-32664(gp)  # small
  422968:	00000000 	nop
  42296c:	25086fb0 	addiu	t0,t0,28592
  422970:	1608fff1 	bne	s0,t0,422938 <draw_box+0x6c0>
  422974:	00000000 	nop
  422978:	8f9982e0 	lw	t9,-32032(gp)
  42297c:	00000000 	nop
  422980:	0320f809 	jalr	t9
  422984:	00000000 	nop
  422988:	8fbc0020 	lw	gp,32(sp)
  42298c:	1000003a 	b	422a78 <draw_box+0x800>
  422990:	8fb90048 	lw	t9,72(sp)
  422994:	8f9982ac 	lw	t9,-32084(gp)
  422998:	00000000 	nop
  42299c:	0320f809 	jalr	t9
  4229a0:	00000000 	nop
  4229a4:	8fbc0020 	lw	gp,32(sp)
  4229a8:	00000000 	nop
  4229ac:	8f898068 	lw	t1,-32664(gp)  # small
  4229b0:	8f998240 	lw	t9,-32192(gp)  # v3f
  4229b4:	8d296fc0 	lw	t1,28608(t1)
  4229b8:	00000000 	nop
  4229bc:	01320019 	multu	t1,s2
  4229c0:	00005012 	mflo	t2
  4229c4:	022a2021 	addu	a0,s1,t2
  4229c8:	0320f809 	jalr	t9  # call v3f
  4229cc:	00000000 	nop
  4229d0:	8fbc0020 	lw	gp,32(sp)
  4229d4:	00000000 	nop
  4229d8:	8f8b8068 	lw	t3,-32664(gp)  # small
  4229dc:	8f998240 	lw	t9,-32192(gp)  # v3f
  4229e0:	8d6b6fc4 	lw	t3,28612(t3)
  4229e4:	00000000 	nop
  4229e8:	01720019 	multu	t3,s2
  4229ec:	00006012 	mflo	t4
  4229f0:	022c2021 	addu	a0,s1,t4
  4229f4:	0320f809 	jalr	t9  # call v3f
  4229f8:	00000000 	nop
  4229fc:	8fbc0020 	lw	gp,32(sp)
  422a00:	00000000 	nop
  422a04:	8f8d8068 	lw	t5,-32664(gp)  # small
  422a08:	8f998240 	lw	t9,-32192(gp)  # v3f
  422a0c:	8dad6fcc 	lw	t5,28620(t5)
  422a10:	00000000 	nop
  422a14:	01b20019 	multu	t5,s2
  422a18:	00007012 	mflo	t6
  422a1c:	022e2021 	addu	a0,s1,t6
  422a20:	0320f809 	jalr	t9  # call v3f
  422a24:	00000000 	nop
  422a28:	8fbc0020 	lw	gp,32(sp)
  422a2c:	00000000 	nop
  422a30:	8f8f8068 	lw	t7,-32664(gp)  # small
  422a34:	8f998240 	lw	t9,-32192(gp)  # v3f
  422a38:	8def6fc8 	lw	t7,28616(t7)
  422a3c:	00000000 	nop
  422a40:	01f20019 	multu	t7,s2
  422a44:	0000c012 	mflo	t8
  422a48:	02382021 	addu	a0,s1,t8
  422a4c:	0320f809 	jalr	t9  # call v3f
  422a50:	00000000 	nop
  422a54:	8fbc0020 	lw	gp,32(sp)
  422a58:	00000000 	nop
  422a5c:	8f9982c4 	lw	t9,-32060(gp)
  422a60:	00000000 	nop
  422a64:	0320f809 	jalr	t9
  422a68:	00000000 	nop
  422a6c:	8fbc0020 	lw	gp,32(sp)
  422a70:	00000000 	nop
  422a74:	8fb90048 	lw	t9,72(sp)
  422a78:	8fa9002c 	lw	t1,44(sp)
  422a7c:	33280008 	andi	t0,t9,0x8
  422a80:	11000066 	beqz	t0,422c1c <draw_box+0x9a4>
  422a84:	8fad0048 	lw	t5,72(sp)
  422a88:	11200009 	beqz	t1,422ab0 <draw_box+0x838>
  422a8c:	8fab0044 	lw	t3,68(sp)
  422a90:	8faa0040 	lw	t2,64(sp)
  422a94:	8f998464 	lw	t9,-31644(gp)  # cpack
  422a98:	8d440008 	lw	a0,8(t2)
  422a9c:	0320f809 	jalr	t9  # call cpack
  422aa0:	00000000 	nop
  422aa4:	8fbc0020 	lw	gp,32(sp)
  422aa8:	00000000 	nop
  422aac:	8fab0044 	lw	t3,68(sp)
  422ab0:	24010001 	li	at,1
  422ab4:	1561001f 	bne	t3,at,422b34 <draw_box+0x8bc>
  422ab8:	00000000 	nop
  422abc:	8f9982dc 	lw	t9,-32036(gp)
  422ac0:	00000000 	nop
  422ac4:	0320f809 	jalr	t9
  422ac8:	00000000 	nop
  422acc:	8fbc0020 	lw	gp,32(sp)
  422ad0:	00000000 	nop
  422ad4:	8f908068 	lw	s0,-32664(gp)  # small
  422ad8:	00000000 	nop
  422adc:	26106fa0 	addiu	s0,s0,28576
  422ae0:	8e0c0030 	lw	t4,48(s0)
  422ae4:	8f998240 	lw	t9,-32192(gp)  # v3f
  422ae8:	01920019 	multu	t4,s2
  422aec:	00006812 	mflo	t5
  422af0:	022d2021 	addu	a0,s1,t5
  422af4:	0320f809 	jalr	t9  # call v3f
  422af8:	00000000 	nop
  422afc:	8fbc0020 	lw	gp,32(sp)
  422b00:	26100004 	addiu	s0,s0,4
  422b04:	8f8e8068 	lw	t6,-32664(gp)  # small
  422b08:	00000000 	nop
  422b0c:	25ce6fb0 	addiu	t6,t6,28592
  422b10:	160efff3 	bne	s0,t6,422ae0 <draw_box+0x868>
  422b14:	00000000 	nop
  422b18:	8f9982e0 	lw	t9,-32032(gp)
  422b1c:	00000000 	nop
  422b20:	0320f809 	jalr	t9
  422b24:	00000000 	nop
  422b28:	8fbc0020 	lw	gp,32(sp)
  422b2c:	1000003b 	b	422c1c <draw_box+0x9a4>
  422b30:	8fad0048 	lw	t5,72(sp)
  422b34:	8f9982ac 	lw	t9,-32084(gp)
  422b38:	00000000 	nop
  422b3c:	0320f809 	jalr	t9
  422b40:	00000000 	nop
  422b44:	8fbc0020 	lw	gp,32(sp)
  422b48:	00000000 	nop
  422b4c:	8f8f8068 	lw	t7,-32664(gp)  # small
  422b50:	8f998240 	lw	t9,-32192(gp)  # v3f
  422b54:	8def6fd0 	lw	t7,28624(t7)
  422b58:	00000000 	nop
  422b5c:	01f20019 	multu	t7,s2
  422b60:	0000c012 	mflo	t8
  422b64:	02382021 	addu	a0,s1,t8
  422b68:	0320f809 	jalr	t9  # call v3f
  422b6c:	00000000 	nop
  422b70:	8fbc0020 	lw	gp,32(sp)
  422b74:	00000000 	nop
  422b78:	8f998068 	lw	t9,-32664(gp)  # small
  422b7c:	00000000 	nop
  422b80:	8f396fd4 	lw	t9,28628(t9)
  422b84:	00000000 	nop
  422b88:	03320019 	multu	t9,s2
  422b8c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422b90:	00004012 	mflo	t0
  422b94:	02282021 	addu	a0,s1,t0
  422b98:	0320f809 	jalr	t9  # call v3f
  422b9c:	00000000 	nop
  422ba0:	8fbc0020 	lw	gp,32(sp)
  422ba4:	00000000 	nop
  422ba8:	8f898068 	lw	t1,-32664(gp)  # small
  422bac:	8f998240 	lw	t9,-32192(gp)  # v3f
  422bb0:	8d296fdc 	lw	t1,28636(t1)
  422bb4:	00000000 	nop
  422bb8:	01320019 	multu	t1,s2
  422bbc:	00005012 	mflo	t2
  422bc0:	022a2021 	addu	a0,s1,t2
  422bc4:	0320f809 	jalr	t9  # call v3f
  422bc8:	00000000 	nop
  422bcc:	8fbc0020 	lw	gp,32(sp)
  422bd0:	00000000 	nop
  422bd4:	8f8b8068 	lw	t3,-32664(gp)  # small
  422bd8:	8f998240 	lw	t9,-32192(gp)  # v3f
  422bdc:	8d6b6fd8 	lw	t3,28632(t3)
  422be0:	00000000 	nop
  422be4:	01720019 	multu	t3,s2
  422be8:	00006012 	mflo	t4
  422bec:	022c2021 	addu	a0,s1,t4
  422bf0:	0320f809 	jalr	t9  # call v3f
  422bf4:	00000000 	nop
  422bf8:	8fbc0020 	lw	gp,32(sp)
  422bfc:	00000000 	nop
  422c00:	8f9982c4 	lw	t9,-32060(gp)
  422c04:	00000000 	nop
  422c08:	0320f809 	jalr	t9
  422c0c:	00000000 	nop
  422c10:	8fbc0020 	lw	gp,32(sp)
  422c14:	00000000 	nop
  422c18:	8fad0048 	lw	t5,72(sp)
  422c1c:	8faf002c 	lw	t7,44(sp)
  422c20:	31ae0010 	andi	t6,t5,0x10
  422c24:	11c00066 	beqz	t6,422dc0 <draw_box+0xb48>
  422c28:	8fa90048 	lw	t1,72(sp)
  422c2c:	11e00009 	beqz	t7,422c54 <draw_box+0x9dc>
  422c30:	8fb90044 	lw	t9,68(sp)
  422c34:	8fb80040 	lw	t8,64(sp)
  422c38:	8f998464 	lw	t9,-31644(gp)  # cpack
  422c3c:	8f040000 	lw	a0,0(t8)
  422c40:	0320f809 	jalr	t9  # call cpack
  422c44:	00000000 	nop
  422c48:	8fbc0020 	lw	gp,32(sp)
  422c4c:	00000000 	nop
  422c50:	8fb90044 	lw	t9,68(sp)
  422c54:	24010001 	li	at,1
  422c58:	1721001f 	bne	t9,at,422cd8 <draw_box+0xa60>
  422c5c:	00000000 	nop
  422c60:	8f9982dc 	lw	t9,-32036(gp)
  422c64:	00000000 	nop
  422c68:	0320f809 	jalr	t9
  422c6c:	00000000 	nop
  422c70:	8fbc0020 	lw	gp,32(sp)
  422c74:	00000000 	nop
  422c78:	8f908068 	lw	s0,-32664(gp)  # small
  422c7c:	00000000 	nop
  422c80:	26106fa0 	addiu	s0,s0,28576
  422c84:	8e080040 	lw	t0,64(s0)
  422c88:	8f998240 	lw	t9,-32192(gp)  # v3f
  422c8c:	01120019 	multu	t0,s2
  422c90:	00004812 	mflo	t1
  422c94:	02292021 	addu	a0,s1,t1
  422c98:	0320f809 	jalr	t9  # call v3f
  422c9c:	00000000 	nop
  422ca0:	8fbc0020 	lw	gp,32(sp)
  422ca4:	26100004 	addiu	s0,s0,4
  422ca8:	8f8a8068 	lw	t2,-32664(gp)  # small
  422cac:	00000000 	nop
  422cb0:	254a6fb0 	addiu	t2,t2,28592
  422cb4:	160afff3 	bne	s0,t2,422c84 <draw_box+0xa0c>
  422cb8:	00000000 	nop
  422cbc:	8f9982e0 	lw	t9,-32032(gp)
  422cc0:	00000000 	nop
  422cc4:	0320f809 	jalr	t9
  422cc8:	00000000 	nop
  422ccc:	8fbc0020 	lw	gp,32(sp)
  422cd0:	1000003b 	b	422dc0 <draw_box+0xb48>
  422cd4:	8fa90048 	lw	t1,72(sp)
  422cd8:	8f9982ac 	lw	t9,-32084(gp)
  422cdc:	00000000 	nop
  422ce0:	0320f809 	jalr	t9
  422ce4:	00000000 	nop
  422ce8:	8fbc0020 	lw	gp,32(sp)
  422cec:	00000000 	nop
  422cf0:	8f8b8068 	lw	t3,-32664(gp)  # small
  422cf4:	8f998240 	lw	t9,-32192(gp)  # v3f
  422cf8:	8d6b6fe0 	lw	t3,28640(t3)
  422cfc:	00000000 	nop
  422d00:	01720019 	multu	t3,s2
  422d04:	00006012 	mflo	t4
  422d08:	022c2021 	addu	a0,s1,t4
  422d0c:	0320f809 	jalr	t9  # call v3f
  422d10:	00000000 	nop
  422d14:	8fbc0020 	lw	gp,32(sp)
  422d18:	00000000 	nop
  422d1c:	8f8d8068 	lw	t5,-32664(gp)  # small
  422d20:	8f998240 	lw	t9,-32192(gp)  # v3f
  422d24:	8dad6fe4 	lw	t5,28644(t5)
  422d28:	00000000 	nop
  422d2c:	01b20019 	multu	t5,s2
  422d30:	00007012 	mflo	t6
  422d34:	022e2021 	addu	a0,s1,t6
  422d38:	0320f809 	jalr	t9  # call v3f
  422d3c:	00000000 	nop
  422d40:	8fbc0020 	lw	gp,32(sp)
  422d44:	00000000 	nop
  422d48:	8f8f8068 	lw	t7,-32664(gp)  # small
  422d4c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422d50:	8def6fec 	lw	t7,28652(t7)
  422d54:	00000000 	nop
  422d58:	01f20019 	multu	t7,s2
  422d5c:	0000c012 	mflo	t8
  422d60:	02382021 	addu	a0,s1,t8
  422d64:	0320f809 	jalr	t9  # call v3f
  422d68:	00000000 	nop
  422d6c:	8fbc0020 	lw	gp,32(sp)
  422d70:	00000000 	nop
  422d74:	8f998068 	lw	t9,-32664(gp)  # small
  422d78:	00000000 	nop
  422d7c:	8f396fe8 	lw	t9,28648(t9)
  422d80:	00000000 	nop
  422d84:	03320019 	multu	t9,s2
  422d88:	8f998240 	lw	t9,-32192(gp)  # v3f
  422d8c:	00004012 	mflo	t0
  422d90:	02282021 	addu	a0,s1,t0
  422d94:	0320f809 	jalr	t9  # call v3f
  422d98:	00000000 	nop
  422d9c:	8fbc0020 	lw	gp,32(sp)
  422da0:	00000000 	nop
  422da4:	8f9982c4 	lw	t9,-32060(gp)
  422da8:	00000000 	nop
  422dac:	0320f809 	jalr	t9
  422db0:	00000000 	nop
  422db4:	8fbc0020 	lw	gp,32(sp)
  422db8:	00000000 	nop
  422dbc:	8fa90048 	lw	t1,72(sp)
  422dc0:	8fab0044 	lw	t3,68(sp)
  422dc4:	312a0020 	andi	t2,t1,0x20
  422dc8:	1140005a 	beqz	t2,422f34 <draw_box+0xcbc>
  422dcc:	24010001 	li	at,1
  422dd0:	1561001f 	bne	t3,at,422e50 <draw_box+0xbd8>
  422dd4:	00000000 	nop
  422dd8:	8f9982dc 	lw	t9,-32036(gp)
  422ddc:	00000000 	nop
  422de0:	0320f809 	jalr	t9
  422de4:	00000000 	nop
  422de8:	8fbc0020 	lw	gp,32(sp)
  422dec:	00000000 	nop
  422df0:	8f908068 	lw	s0,-32664(gp)  # small
  422df4:	00000000 	nop
  422df8:	26106fa0 	addiu	s0,s0,28576
  422dfc:	8e0c0050 	lw	t4,80(s0)
  422e00:	8f998240 	lw	t9,-32192(gp)  # v3f
  422e04:	01920019 	multu	t4,s2
  422e08:	00006812 	mflo	t5
  422e0c:	022d2021 	addu	a0,s1,t5
  422e10:	0320f809 	jalr	t9  # call v3f
  422e14:	00000000 	nop
  422e18:	8fbc0020 	lw	gp,32(sp)
  422e1c:	26100004 	addiu	s0,s0,4
  422e20:	8f8e8068 	lw	t6,-32664(gp)  # small
  422e24:	00000000 	nop
  422e28:	25ce6fb0 	addiu	t6,t6,28592
  422e2c:	160efff3 	bne	s0,t6,422dfc <draw_box+0xb84>
  422e30:	00000000 	nop
  422e34:	8f9982e0 	lw	t9,-32032(gp)
  422e38:	00000000 	nop
  422e3c:	0320f809 	jalr	t9
  422e40:	00000000 	nop
  422e44:	8fbc0020 	lw	gp,32(sp)
  422e48:	1000003b 	b	422f38 <draw_box+0xcc0>
  422e4c:	8fbf0024 	lw	ra,36(sp)
  422e50:	8f9982ac 	lw	t9,-32084(gp)
  422e54:	00000000 	nop
  422e58:	0320f809 	jalr	t9
  422e5c:	00000000 	nop
  422e60:	8fbc0020 	lw	gp,32(sp)
  422e64:	00000000 	nop
  422e68:	8f8f8068 	lw	t7,-32664(gp)  # small
  422e6c:	8f998240 	lw	t9,-32192(gp)  # v3f
  422e70:	8def6ff0 	lw	t7,28656(t7)
  422e74:	00000000 	nop
  422e78:	01f20019 	multu	t7,s2
  422e7c:	0000c012 	mflo	t8
  422e80:	02382021 	addu	a0,s1,t8
  422e84:	0320f809 	jalr	t9  # call v3f
  422e88:	00000000 	nop
  422e8c:	8fbc0020 	lw	gp,32(sp)
  422e90:	00000000 	nop
  422e94:	8f998068 	lw	t9,-32664(gp)  # small
  422e98:	00000000 	nop
  422e9c:	8f396ff4 	lw	t9,28660(t9)
  422ea0:	00000000 	nop
  422ea4:	03320019 	multu	t9,s2
  422ea8:	8f998240 	lw	t9,-32192(gp)  # v3f
  422eac:	00004012 	mflo	t0
  422eb0:	02282021 	addu	a0,s1,t0
  422eb4:	0320f809 	jalr	t9  # call v3f
  422eb8:	00000000 	nop
  422ebc:	8fbc0020 	lw	gp,32(sp)
  422ec0:	00000000 	nop
  422ec4:	8f898068 	lw	t1,-32664(gp)  # small
  422ec8:	8f998240 	lw	t9,-32192(gp)  # v3f
  422ecc:	8d296ffc 	lw	t1,28668(t1)
  422ed0:	00000000 	nop
  422ed4:	01320019 	multu	t1,s2
  422ed8:	00005012 	mflo	t2
  422edc:	022a2021 	addu	a0,s1,t2
  422ee0:	0320f809 	jalr	t9  # call v3f
  422ee4:	00000000 	nop
  422ee8:	8fbc0020 	lw	gp,32(sp)
  422eec:	00000000 	nop
  422ef0:	8f8b8068 	lw	t3,-32664(gp)  # small
  422ef4:	8f998240 	lw	t9,-32192(gp)  # v3f
  422ef8:	8d6b6ff8 	lw	t3,28664(t3)
  422efc:	00000000 	nop
  422f00:	01720019 	multu	t3,s2
  422f04:	00006012 	mflo	t4
  422f08:	022c2021 	addu	a0,s1,t4
  422f0c:	0320f809 	jalr	t9  # call v3f
  422f10:	00000000 	nop
  422f14:	8fbc0020 	lw	gp,32(sp)
  422f18:	00000000 	nop
  422f1c:	8f9982c4 	lw	t9,-32060(gp)
  422f20:	00000000 	nop
  422f24:	0320f809 	jalr	t9
  422f28:	00000000 	nop
  422f2c:	8fbc0020 	lw	gp,32(sp)
  422f30:	00000000 	nop
  422f34:	8fbf0024 	lw	ra,36(sp)
  422f38:	8fb00014 	lw	s0,20(sp)
  422f3c:	8fb10018 	lw	s1,24(sp)
  422f40:	8fb2001c 	lw	s2,28(sp)
  422f44:	03e00008 	jr	ra
  422f48:	27bd0040 	addiu	sp,sp,64


======================================================================
ANALYSIS SUMMARY: FUN_00422284
======================================================================

FUNCTION CALLS:
----------------------------------------
  cpack (8x)
  v3f (40x)

IRISGL CALLS (with addresses):
----------------------------------------
  0x004222c0: cpack
  0x00422310: v3f
  0x00422330: v3f
  0x00422350: v3f
  0x00422370: v3f
  0x004223c4: cpack
  0x004223f8: v3f
  0x00422414: v3f
  0x0042246c: cpack
  0x004224b8: v3f
  0x004224d8: v3f
  0x004224f8: v3f
  0x00422518: v3f
  0x0042258c: cpack
  0x004225c4: cpack
  0x00422628: v3f
  0x004226a0: v3f
  0x004226cc: v3f
  0x004226f8: v3f
  0x00422724: v3f
  0x00422770: cpack
  0x004227d4: v3f
  0x00422848: v3f
  0x00422878: v3f
  0x004228a4: v3f
  0x004228d0: v3f
  0x00422954: v3f
  0x004229c8: v3f
  0x004229f4: v3f
  0x00422a20: v3f
  0x00422a4c: v3f
  0x00422a9c: cpack
  0x00422af4: v3f
  0x00422b68: v3f
  0x00422b98: v3f
  0x00422bc4: v3f
  0x00422bf0: v3f
  0x00422c40: cpack
  0x00422c98: v3f
  0x00422d0c: v3f
  0x00422d38: v3f
  0x00422d64: v3f
  0x00422d94: v3f
  0x00422e10: v3f
  0x00422e84: v3f
  0x00422eb4: v3f
  0x00422ee0: v3f
  0x00422f0c: v3f

GP SYMBOL REFERENCES:
----------------------------------------
  cpack
  small
  v3f

======================================================================