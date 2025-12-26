/**
 * FUN_0041c928
 *
 * Extracted from fsn.c lines 58447-58467
 * Ghidra address: 0x0041c928
 * Category: Other
 */

void FUN_0041c928(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = DAT_10006e54;
  if ((param_1 != DAT_10006e54) && (iVar2 = 0, cVar1 = param_1, 0 < array_index)) {
    puVar3 = &menu_items_array;
    do {
      XtSetSensitive(*puVar3,param_1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      cVar1 = param_1;
    } while (iVar2 < array_index);
  }
  DAT_10006e54 = cVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041c928):
     * Function: FUN_0041c928
     *
     * Looking at the GP offsets and structure:
     * **What it does:**
     * Iterates through an array of widgets (count at gp-32664+28192, array at gp-32660+27552), calling a function via gp-31976 on each widget with s3 as second argument. After loop, stores s3 as a byte at offset 28244 from the base.
     * **C pseudocode:**
     * ```c
     * // GP-32664 + 28192 = DAT_10006e20 (base for selection data)
     * // GP-32660 + 27552 = DAT_10006ba0 (widget array)
     * // GP-31976 = function pointer (likely XtSetSensitive or similar)
     * int count = selectionData->count;        // offset 0
     * Widget *widgets = selectionWidgets;       // array at 0x10006ba0
     * for (int i = 0; i < count; i++) {
     * (*callback_func)(widgets[i], flag);   // s3 is the flag/state
     * }
     * selectionData->dirty_flag = flag;         // store byte at offset +52 (28244-28192=52)
     * ```
     * **Likely meaning:** This enables/disables a set of selection-related menu items or buttons based on the `flag` parameter (s3). The function called is probably `XtSetSensitive(widget, sensitive)` which matches the (Widget, Boolean) signature.
     */
halt_baddata();
}
