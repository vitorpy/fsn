/**
 * FUN_0042f4d8
 *
 * Extracted from fsn.c lines 69518-69538
 * Ghidra address: 0x0042f4d8
 * Category: Filesystem
 */

void FUN_0042f4d8(void)

{
  int iVar1;
  int local_8;
  int *local_4;
  
  iVar1 = XmListGetSelectedPos(mark_selector_list,&local_4,&local_8);
  if (iVar1 != 0) {
    if (0 < local_8) {
      save_matrix_state();
      iVar1 = FUN_0042e670((*local_4 + -1) * 0x40 + selection_buffer);
      if (iVar1 == 0) {
        show_error_dialog("can\'t go to",*(undefined4 *)(selection_buffer + *local_4 * 0x40 + -8));
      }
    }
    XtFree(local_4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
