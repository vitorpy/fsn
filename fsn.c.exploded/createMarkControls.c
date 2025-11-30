/**
 * createMarkControls
 *
 * Extracted from fsn.c lines 54054-54083
 * Category: UI
 */

void createMarkControls(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  uStack_54 = 0xf6617e7;
  uStack_50 = 0;
  mark_selector_dialog = XmCreateSelectionBox(param_1,"markSelector",&uStack_54,1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,7);
  XtUnmanageChild(uVar1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,0xd);
  XtUnmanageChild(uVar1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,0xb);
  XtUnmanageChild(uVar1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,0xe);
  XtUnmanageChild(uVar1);
  mark_selector_list = XmSelectionBoxGetChild(mark_selector_dialog,8);
  XtAddCallback(mark_selector_dialog,0xe3f44b6,mark_dialog_value_callback,0);
  XtAddCallback(mark_selector_dialog,0xe3f380d,mark_dialog_focus_callback,0);
  XtManageChild(mark_selector_dialog);
  install_help_callback(mark_selector_dialog,&markHelp);
  uVar1 = XmCreatePushButton(param_1,&search_label_type,&uStack_54,0);
  XtAddCallback(uVar1,0xe3f35b3,mark_select_callback,0);
  XtManageChild(uVar1);
  install_help_callback(uVar1,&markHelp);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
