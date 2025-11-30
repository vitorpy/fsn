/**
 * FUN_0042d28c
 *
 * Extracted from fsn.c lines 68054-68067
 * Ghidra address: 0x0042d28c
 * Category: Memory
 */

void FUN_0042d28c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_c [3];
  
  iVar1 = XmStringGetLtoR(*(undefined4 *)(param_3 + 8),&default_charset,local_c);
  if (iVar1 != 0) {
    XmTextFieldSetString(DAT_10016e48,local_c[0]);
    XtFree(local_c[0]);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
