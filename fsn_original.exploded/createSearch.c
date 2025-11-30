/**
 * createSearch
 *
 * Extracted from fsn.c lines 70328-70406
 * Category: UI
 */

void createSearch(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  search_xmstring_1 = XmStringCreateSimple("Search");
  search_xmstring_2 = XmStringCreateSimple(&DAT_10013d2c);
  search_xmstring_3 = XmStringCreateSimple(&DAT_10013d30);
  uStack_28 = 0xe3f3afd;
  uStack_24 = 1;
  uVar1 = XmCreateSelectionBox(param_1,"search",&uStack_28,1);
  uVar2 = XmSelectionBoxGetChild(uVar1,7);
  XtUnmanageChild(uVar2);
  uVar2 = XmSelectionBoxGetChild(uVar1,0xe);
  XtUnmanageChild(uVar2);
  uVar2 = XmSelectionBoxGetChild(uVar1,0xb);
  XtUnmanageChild(uVar2);
  uVar2 = XmSelectionBoxGetChild(uVar1,0xd);
  XtUnmanageChild(uVar2);
  DAT_10016ef8 = XmSelectionBoxGetChild(uVar1,1);
  XtSetSensitive(DAT_10016ef8,0);
  XtManageChild(DAT_10016ef8);
  XtManageChild(uVar1);
  XtAddCallback(uVar1,0xe3f44b6,FUN_00430448,0);
  XtAddCallback(uVar1,0xe3f3641,FUN_004308ec,0);
  XtAddCallback(uVar1,0xe3f380d,FUN_004307bc,0);
  uStack_24 = 1;
  uStack_28 = 0xf661719;
  uVar2 = XmCreateRowColumn(uVar1,"search",&uStack_28,1);
  XtManageChild(uVar2);
  uStack_24 = search_xmstring_1;
  uStack_28 = 0xe3f40b5;
  search_count_label = XmCreateLabel(uVar2,"searchCount",&uStack_28,1);
  XtManageChild(search_count_label);
  uStack_28 = 0xf661719;
  uStack_24 = 2;
  uVar3 = XmCreateRowColumn(uVar2,"searchname",&uStack_28,1);
  XtManageChild(uVar3);
  uVar4 = XmCreateLabel(uVar3,&DAT_10013d5c,&uStack_28,0);
  XtManageChild(uVar4);
  search_name_field = XmCreateTextField(uVar3,"nametext",&uStack_28,0);
  XtManageChild(search_name_field);
  uStack_28 = 0xf661719;
  uStack_24 = 2;
  uVar3 = XmCreateRowColumn(uVar2,"searchsize",&uStack_28,1);
  XtManageChild(uVar3);
  uVar4 = XmCreateLabel(uVar3,&DAT_10013d7c,&uStack_28,0);
  XtManageChild(uVar4);
  uStack_24 = search_xmstring_3;
  uStack_28 = 0xe3f40b5;
  search_size_comp_button = XmCreatePushButton(uVar3,"searchSizeComp",&uStack_28,1);
  XtAddCallback(search_size_comp_button,0xe3f35b3,FUN_00430b70,0);
  XtManageChild(search_size_comp_button);
  DAT_10016f04 = 0;
  search_size_field = XmCreateTextField(uVar3,"sizetext",&uStack_28,0);
  XtManageChild(search_size_field);
  uStack_24 = 2;
  uStack_28 = 0xf661719;
  uVar2 = XmCreateRowColumn(uVar2,"searchage",&uStack_28,1);
  XtManageChild(uVar2);
  uVar3 = XmCreateLabel(uVar2,&DAT_10013dac,&uStack_28,0);
  XtManageChild(uVar3);
  uStack_24 = search_xmstring_3;
  uStack_28 = 0xe3f40b5;
  search_age_comp_button = XmCreatePushButton(uVar2,"searchAgeComp",&uStack_28,1);
  XtAddCallback(search_age_comp_button,0xe3f35b3,FUN_00430c0c,0);
  XtManageChild(search_age_comp_button);
  DAT_10016f05 = 0;
  search_age_field = XmCreateTextField(uVar2,"agetext",&uStack_28,0);
  XtManageChild(search_age_field);
  install_help_callback(uVar1,&searchHelp);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
