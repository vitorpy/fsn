/**
 * FUN_004307bc
 *
 * Extracted from fsn.c lines 70173-70192
 * Ghidra address: 0x004307bc
 * Category: Other
 */

void FUN_004307bc(void)

{
  undefined4 local_28;
  undefined4 local_24;
  
  DAT_10016edc = 0;
  XmTextFieldSetString(search_name_field,&DAT_10013d18);
  XmTextFieldSetString(search_size_field,&DAT_10013d1c);
  XmTextFieldSetString(search_age_field,&DAT_10013d20);
  XtSetSensitive(DAT_10016ef8,0);
  FUN_00430358();
  local_24 = search_xmstring_1;
  local_28 = 0xe3f40b5;
  XtSetValues(search_count_label,&local_28,1);
  redraw_gl_scene();
  FUN_0042a8e4();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004307bc):
     * Function: FUN_004307bc
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls XtVaSetValues to update a widget (from GP+0x806c offset 0x6ee0) with a string resource (GP+0x80a0+7501) and an integer value (from GP+0x806c offset 0x6ed0). Then calls two cleanup functions (GP+0x8534 and GP+0x8780).
     * 2. **C pseudocode:**
     * ```c
     * // GP offsets: 0x806c = curcontextwindows, 0x80a0 = string table base
     * // 0x8340 = XtVaSetValues, 0x8534 = ?, 0x8780 = ?
     * Widget widget = curcontextwindows[0x6ee0/4];  // offset 28384
     * char *resource_name = string_base + 7501;      // XmNlabelString or similar
     * int value = curcontextwindows[0x6ed0/4];       // offset 28368
     * XtVaSetValues(widget, resource_name, value, NULL);  // a1 points to varargs on stack
     * unknown_func_8534();
     * unknown_func_8780();
     * ```
     * The varargs array at sp+40 contains: {resource_name, value} passed to XtVaSetValues. The string at offset 7501 is likely an Xt/Motif resource name like "labelString" or "value".
     */
halt_baddata();
}
