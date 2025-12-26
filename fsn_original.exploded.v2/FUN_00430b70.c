/**
 * FUN_00430b70
 *
 * Extracted from fsn.c lines 70282-70299
 * Ghidra address: 0x00430b70
 * Category: Other
 */

void FUN_00430b70(void)

{
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_10016f04 = DAT_10016f04 == '\0';
  local_28 = 0xe3f40b5;
  if ((bool)DAT_10016f04) {
    local_24 = search_xmstring_2;
  }
  else {
    local_24 = search_xmstring_3;
  }
  XtSetValues(search_size_comp_button,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00430b70):
     * Function: FUN_00430b70
     *
     * Looking at this assembly:
     * 1. **What it does:** Stores a byte value, then based on whether (t6 & 0xff) is zero, loads one of two different pointers from GOT-relative addresses (offset 0x6ed4 or 0x6ed8), builds an argument structure on stack, and calls a function with that structure.
     * 2. **C pseudocode:**
     * ```c
     * *(char*)(v1 + 4) = (char)t6;
     * stack[40] = t7 + 7501;
     * if ((t6 & 0xff) != 0) {
     * stack[44] = some_table->field_6ed4;
     * } else {
     * stack[44] = some_table->field_6ed8;
     * }
     * // Call function at GOT[-31936] with args: (GOT_base->field_6ef0, &stack[40], 1)
     * func_8340(got_table->widget_6ef0, &stack[40], 1);
     * ```
     * The GOT offset 0x806c points to a base structure. Offsets 0x6ed4/0x6ed8 are likely XtArgVal alternatives (e.g., True/False or different resource values). The final call at GOT offset 0x8340 is likely `XtSetValues()` setting a single resource on a widget.
     */
halt_baddata();
}
