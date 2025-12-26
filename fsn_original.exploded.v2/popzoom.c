/**
 * popzoom
 *
 * Extracted from fsn.c lines 51559-51585
 * Category: Other
 */

void popzoom(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0042e670(*(int *)(curcontextwindows + 0x34) + curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ * 0x38);
  if (iVar1 == 0) {
    do {
      curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ = curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ + -1;
      iVar1 = curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */;
      if (iVar1 < 0) {
        curcontext->_field_40 /* was: *(undefined4 *)(curcontext + 0x40) */ = 9;
        iVar1 = curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */;
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_0042e670(*(int *)(curcontextwindows + 0x34) + iVar1 * 0x38);
    } while ((iVar1 == 0) && (iVar2 != 10));
  }
  curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ = curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ + -1;
  if (curcontext->_field_40 /* was: *(int *)(curcontext + 0x40) */ < 0) {
    curcontext->_field_40 /* was: *(undefined4 *)(curcontext + 0x40) */ = 9;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041007c):
     * Function: popzoom
     *
     * ## Analysis
     * **What it does:**
     * After a function call (jalr t9), if return value is 0 AND s0 != s2, loops back. Otherwise decrements a counter at offset 64 of a structure, clamping it to 9 if it goes negative. Then restores saved registers and returns.
     * **C pseudocode:**
     * ```c
     * // ... after jalr t9 call with result in v0:
     * if (v0 == 0 && s0 != s2) {
     * goto loop_start;  // branch back to 0x410104
     * }
     * // Decrement zoom level counter, clamp to 9 if negative
     * struct_ptr = *s1;                    // s1 points to pointer to structure
     * struct_ptr->field_0x40--;            // decrement counter at offset 64
     * if (struct_ptr->field_0x40 < 0) {
     * struct_ptr->field_0x40 = 9;      // clamp to max value 9
     * }
     * // restore s0-s5, ra from stack and return
     * ```
     * **Context:** This is the end of `popzoom()` - the field at offset 0x40 (64) is likely `zoom_level` or `zoom_index` in the context structure, clamped between 0-9 representing discrete zoom steps.
     */
halt_baddata();
}
