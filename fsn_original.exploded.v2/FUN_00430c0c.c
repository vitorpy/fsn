/**
 * FUN_00430c0c
 *
 * Extracted from fsn.c lines 70305-70322
 * Ghidra address: 0x00430c0c
 * Category: Other
 */

void FUN_00430c0c(void)

{
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_10016f05 = DAT_10016f05 == '\0';
  local_28 = 0xe3f40b5;
  if ((bool)DAT_10016f05) {
    local_24 = search_xmstring_2;
  }
  else {
    local_24 = search_xmstring_3;
  }
  XtSetValues(search_age_comp_button,&local_28,1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00430c0c):
     * Function: FUN_00430c0c
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks if low byte of t6 is zero. If non-zero, loads a function pointer from GOT offset 0x6ed4; if zero, loads from offset 0x6ed8. Then calls another function (at GP-0x8340) with three args: a pointer from GOT+0x6ef4, address of stack buffer containing {7501, selected_func_ptr}, and count=1.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_00430c0c(int a0, int a1, int a2) {
     * struct { int val; void *func; } args;
     * args.val = 7501;
     * *(char*)(v1 + 5) = (char)t6;  // store byte
     * if ((t6 & 0xff) != 0) {
     * args.func = GOT->callback_nonzero;  // offset 0x6ed4
     * } else {
     * args.func = GOT->callback_zero;     // offset 0x6ed8
     * }
     * // Call function at GP-0x8340 (likely XtSetValues or similar)
     * GOT->xt_function(GOT->widget_ptr, &args, 1);
     * }
     * ```
     * The pattern (widget, arglist, count=1) strongly suggests this is `XtSetValues(widget, args, 1)` setting a single Xt/Motif resource with value 7501 (0x1d4d) and a callback based on a boolean condition.
     */
halt_baddata();
}
