/**
 * error
 *
 * Extracted from fsn.c lines 38786-38808
 * Category: UI
 */

void error(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4;
  
  uStack_50 = XmStringCreate(param_1,&default_charset);
  uStack_54 = 0xe3f42e0;
  uStack_4 = uStack_50;
  uVar1 = XmCreateErrorDialog(toplevel,"error",&uStack_54,1);
  uVar2 = XmMessageBoxGetChild(uVar1,2);
  XtUnmanageChild(uVar2);
  uVar2 = XmMessageBoxGetChild(uVar1,7);
  XtUnmanageChild(uVar2);
  XtAddCallback(uVar1,0xf6615c9,search_dialog_map_callback,0);
  XtManageChild(uVar1);
  XmStringFree(uStack_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
