/**
 * FUN_0041e988
 *
 * Extracted from fsn.c lines 59587-59615
 * Ghidra address: 0x0041e988
 * Category: Other
 */

void FUN_0041e988(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_2c;
  uint local_28;
  
  iVar1 = curcontext->current_file /* was: *(int *)(curcontext + 0x48) */;
  if ((iVar1 != 0) && (curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ != 0)) {
    if (*(int *)(param_3 + 8) == 0) {
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xbf;
    }
    else {
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x40;
      *(byte *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x75) =
           *(byte *)(curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */ + 0x75) | 8;
      XtSetSensitive(menu_process_deletes,1);
      XtSetSensitive(menu_undo_deletes,1);
    }
    redraw_gl_scene();
    FUN_0042a8e4();
    local_2c = 0xe3f48f1;
    local_28 = (uint)(*(int *)(curcontext->current_file /* was: *(int *)(curcontext + 0x48) */ + 0x28) << 9) >> 0x1f;
    XtSetValues(menu_delete_file_1,&local_2c,1);
    XtSetValues(menu_delete_file_2,&local_2c,1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041e988):
     * Function: FUN_0041e988
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Extracts bit 22 from curcontext[0x48][0x28] (a flag), stores it along with a string pointer, then calls XtSetValues twice on two widgets (curcontextdata->widget1 and widget2) with these args.
     * **2. C pseudocode:**
     * ```c
     * // GP offsets resolved:
     * // gp-32608 (0x80a0) = string constant base
     * // gp-30340 (0x897c) = curcontext pointer
     * // gp-32660 (0x806c) = curcontextdata pointer
     * // gp-31936 (0x8340) = XtSetValues
     * char *str = string_base + 9609;  // some XmN resource string
     * int flags = curcontext[0x48/4]->field_0x28;
     * int bit22 = (flags >> 22) & 1;   // sll 9, srl 31 extracts bit 22
     * Arg args[2];
     * args[0].name = str;
     * args[0].value = bit22;
     * XtSetValues(curcontextdata->widget_6b84, args, 1);
     * XtSetValues(curcontextdata->widget_6b88, args, 1);
     * ```
     * The `sll t0,0x9` then `srl t1,0x1f` is an idiom to extract a single bit: shift left to put target bit at position 31, then shift right 31 to isolate it as 0 or 1. Bit position = 31 - 9 = bit 22.
     */
halt_baddata();
}
