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
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042f5d0):
     * Function: FUN_0042f5d0
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calls a function via GP-relative lookup (likely XtVaGetValues or similar X toolkit function) with stack-allocated output parameters. If the call succeeds (v0 != 0), it checks if the first output value > 0, and if so calls another function with (second_output[0] - 1). Finally calls a cleanup/free function on the second output parameter.
     * **C pseudocode:**
     * ```c
     * int width, height_or_list;
     * Widget *children;
     * /* GP offset 0x6ec4 -> likely XtVaGetValues or XmListGetSelectedPos */
     * if (XmListGetSelectedPos(widget, &children, &width)) {
     * if (width > 0) {
     * /* GP offset -32736 + (-3804) -> likely XmListSelectPos or similar */
     * XmListSelectPos(list_widget, children[0] - 1, False);
     * }
     * /* GP offset 0x8174 -> XtFree */
     * XtFree((char *)children);
     * }
     * ```
     * The pattern suggests: get selected list positions, if any exist, select the item at (position - 1), then free the position array. This is typical "select previous item" logic for a Motif XmList widget.
     */
halt_baddata();
}
