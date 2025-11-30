/**
 * createSearch
 *
 * Extracted from fsn.c lines 54631-54709
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
  search_xmstring_2 = XmStringCreateSimple(&search_label_cancel);
  search_xmstring_3 = XmStringCreateSimple(&search_label_all);
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
  search_dialog_child = XmSelectionBoxGetChild(uVar1,1);
  XtSetSensitive(search_dialog_child,0);
  XtManageChild(search_dialog_child);
  XtManageChild(uVar1);
  XtAddCallback(uVar1,0xe3f44b6,search_value_callback,0);
  XtAddCallback(uVar1,0xe3f3641,search_activate_callback,0);
  XtAddCallback(uVar1,0xe3f380d,search_focus_callback,0);
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
  uVar4 = XmCreateLabel(uVar3,&search_label_name,&uStack_28,0);
  XtManageChild(uVar4);
  search_name_field = XmCreateTextField(uVar3,"nametext",&uStack_28,0);
  XtManageChild(search_name_field);
  uStack_28 = 0xf661719;
  uStack_24 = 2;
  uVar3 = XmCreateRowColumn(uVar2,"searchsize",&uStack_28,1);
  XtManageChild(uVar3);
  uVar4 = XmCreateLabel(uVar3,&search_label_size,&uStack_28,0);
  XtManageChild(uVar4);
  uStack_24 = search_xmstring_3;
  uStack_28 = 0xe3f40b5;
  search_size_comp_button = XmCreatePushButton(uVar3,"searchSizeComp",&uStack_28,1);
  XtAddCallback(search_size_comp_button,0xe3f35b3,search_size_callback,0);
  XtManageChild(search_size_comp_button);
  search_age_mode = 0;
  search_size_field = XmCreateTextField(uVar3,"sizetext",&uStack_28,0);
  XtManageChild(search_size_field);
  uStack_24 = 2;
  uStack_28 = 0xf661719;
  uVar2 = XmCreateRowColumn(uVar2,"searchage",&uStack_28,1);
  XtManageChild(uVar2);
  uVar3 = XmCreateLabel(uVar2,&search_label_age,&uStack_28,0);
  XtManageChild(uVar3);
  uStack_24 = search_xmstring_3;
  uStack_28 = 0xe3f40b5;
  search_age_comp_button = XmCreatePushButton(uVar2,"searchAgeComp",&uStack_28,1);
  XtAddCallback(search_age_comp_button,0xe3f35b3,search_age_callback,0);
  XtManageChild(search_age_comp_button);
  search_size_mode = 0;
  search_age_field = XmCreateTextField(uVar2,"agetext",&uStack_28,0);
  XtManageChild(search_age_field);
  install_help_callback(uVar1,&searchHelp);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
