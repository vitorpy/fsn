/**
 * FUN_0042f5d0
 *
 * Extracted from fsn.c lines 69544-69560
 * Ghidra address: 0x0042f5d0
 * Category: Memory
 */

void FUN_0042f5d0(void)

{
  int iVar1;
  int local_8;
  int *local_4;
  
  iVar1 = XmListGetSelectedPos(mark_selector_list,&local_4,&local_8);
  if (iVar1 != 0) {
    if (0 < local_8) {
      FUN_0042f124(*local_4 + -1);
    }
    XtFree(local_4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
