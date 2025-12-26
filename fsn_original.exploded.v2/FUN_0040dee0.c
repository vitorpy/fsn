/**
 * FUN_0040dee0
 *
 * Extracted from fsn.c lines 50890-50908
 * Ghidra address: 0x0040dee0
 * Category: UI
 */

void FUN_0040dee0(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  controlsShowing = 1;
  FUN_0040d804();
  XtManageChild(DAT_1001665c);
  local_48 = 0xe3f40f2;
  local_44 = DAT_1001665c;
  local_50 = 0xe3f40cb;
  local_4c = 3;
  XtSetValues(panel_vsep_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040dee0):
     * Function: FUN_0040dee0
     *
     * Looking at the GP offsets and call patterns:
     * **1. What the assembly does:**
     * Calls XtUnmanageChild on curcontext->someWidget[26204], then calls XtVaSetValues on curcontext->anotherWidget[26212] with 2 string resource arguments (offsets 7523 and 7562 into .rodata) plus an integer value 3, then returns.
     * **2. C pseudocode:**
     * ```c
     * XtUnmanageChild(curcontext->widget_665c);  // offset 0x665c = 26204
     * XtVaSetValues(curcontext->widget_6664,     // offset 0x6664 = 26212
     * "resourceName1",    // .rodata + 7523 (0x1d63)
     * "resourceName2",    // .rodata + 7562 (0x1d8a)
     * 3,
     * curcontext->widget_665c,
     * NULL);
     * ```
     * The pattern is typical Motif: unmanage a widget, then configure another widget with XtVaSetValues using varargs (the addiu building string pointers from .rodata base, li loading integer 3, stack setup at sp+40 for the varargs array with 2 items indicated by a2=2).
     */
halt_baddata();
}
