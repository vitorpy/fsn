/**
 * FUN_0042f66c
 *
 * Extracted from fsn.c lines 69566-69586
 * Ghidra address: 0x0042f66c
 * Category: Memory
 */

void FUN_0042f66c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_3c [56];
  char *local_4;
  
  iVar1 = XmStringGetLtoR(*(undefined4 *)(param_3 + 8),&default_charset,&local_4);
  if (iVar1 != 0) {
    sVar2 = strlen(local_4);
    if (sVar2 != 0) {
      FUN_0042dc64(auStack_3c);
      FUN_0042ef04(local_4,auStack_3c);
      XmListSetBottomPos(mark_selector_list,0);
    }
    XtFree(local_4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
