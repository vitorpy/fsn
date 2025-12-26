/**
 * FUN_0042b5ac
 *
 * Extracted from fsn.c lines 67371-67396
 * Ghidra address: 0x0042b5ac
 * Category: Other
 */

void FUN_0042b5ac(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *local_res8 [2];
  
  local_res8[0] = param_3;
  if (DAT_10007c28 == 0) {
    DAT_10007c28 = XCreateFontCursor(display,0x5c);
  }
  iVar1 = XmTrackingLocate(toplevel,DAT_10007c28,0);
  if (iVar1 != 0) {
    *local_res8[0] = 1;
    do {
      iVar2 = XtHasCallbacks(iVar1,0xe3f3e9f);
      if (iVar2 == 2) {
        XtCallCallbacks(iVar1,0xe3f3e9f,local_res8);
            /*
     * BADDATA ANALYSIS (from binary @ 0x0042b5ac):
     * Function: FUN_0042b5ac
     *
     * Looking at this assembly:
     * 1. **What it does**: Checks if a global pointer (at GP offset -32664, field +31784) is null. If null, calls a function with args (some_global, 92) and stores result. Then calls another function with (another_global, that_pointer, 0) and stores the pointer back.
     * 2. **C pseudocode**:
     * ```c
     * void *ptr = globals->some_struct->field_7c28;
     * if (ptr == NULL) {
     * ptr = func1(stderr, 92);  // likely XmStringCreateLocalized or similar, 92='\'
     * }
     * globals->some_struct->field_7c28 = ptr;
     * func2(some_widget, ptr, 0);  // likely XtSetArg or XmString setter
     * ```
     * The pattern (check cached value, create if null, then use) is typical for Motif XmString caching - create the string resource once, reuse it. The literal 92 (0x5c = backslash '\') suggests this creates a separator string.
     */
halt_baddata();
      }
      iVar1 = XtParent(iVar1);
    } while (iVar1 != 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b5ac):
     * Function: FUN_0042b5ac
     *
     * Looking at the GP offsets and control flow:
     * 1. **What it does:** Searches for a string "s2" (base + 6967 offset) in widget s0 using strcmp-like function. If match (returns 2), calls a getter function with output parameter. Otherwise loops through siblings/children until NULL.
     * 2. **C pseudocode:**
     * ```c
     * // GP offsets: -32608=string_table, -32352=strcmp_func, -32328=get_value_func, -32324=get_next_func
     * char *search_str = string_table + 6967;  // offset into string constant
     * *some_flag = 1;
     * do {
     * result = strcmp_func(widget, search_str);
     * if (result == 2) {
     * get_value_func(widget, search_str, &output);
     * break;
     * }
     * widget = get_next_func(widget);
     * } while (widget != NULL);
     * ```
     * This appears to be an X/Motif resource lookup loop - searching widget tree for a named resource, returning its value when found. The "2" return likely means "exact match" in SGI's resource matching semantics.
     */
halt_baddata();
}
