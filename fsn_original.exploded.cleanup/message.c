/**
 * message
 *
 * Extracted from fsn.c lines 51993-52015
 * Category: UI
 */

void message(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  puVar1 = (undefined4 *)XtMalloc(0xc);
  uVar2 = XmStringCreateSimple(param_1);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[1] = DAT_10000020;
  uStack_54 = 0xe3f40b5;
  uStack_50 = *puVar1;
  DAT_10000020 = puVar1;
  XtSetValues(message_widget,&uStack_54,1);
  if (param_2 != 0) {
    XtAppAddTimeOut(app_context,param_2,deleteMessage,puVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
