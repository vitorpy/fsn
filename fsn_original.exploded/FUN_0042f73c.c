/**
 * FUN_0042f73c
 *
 * Extracted from fsn.c lines 69592-69624
 * Ghidra address: 0x0042f73c
 * Category: UI
 */

void FUN_0042f73c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 local_28;
  undefined4 local_24;
  
  if (mark_prompt_dialog == 0) {
    mark_prompt_dialog = XmCreatePromptDialog(param_1,"markPrompt",&local_28,0);
    XtAddCallback(mark_prompt_dialog,0xf6615c9,FUN_0042f4b4,0);
    XtAddCallback(mark_prompt_dialog,0xe3f44b6,FUN_0042f66c,0);
  }
  if (*(undefined4 **)(curcontext + 0x48) == (undefined4 *)0x0) {
    if (*(undefined4 **)(curcontext + 0x44) == (undefined4 *)0x0) {
      puVar2 = &DAT_10013c60;
    }
    else {
      puVar2 = (undefined *)**(undefined4 **)(curcontext + 0x44);
    }
  }
  else {
    puVar2 = (undefined *)**(undefined4 **)(curcontext + 0x48);
  }
  uVar1 = XmStringCreateSimple(puVar2);
  local_28 = 0xe3f4ab9;
  local_24 = uVar1;
  XtSetValues(mark_prompt_dialog,&local_28,1);
  XmStringFree(uVar1);
  XtManageChild(mark_prompt_dialog);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
