/**
 * pickPointer
 *
 * Extracted from fsn.c lines 64005-64016
 * Category: Input
 */

void pickPointer(void)

{
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    FUN_0042631c();
  }
  else {
    FUN_0041a358();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426db4):
     * Function: pickPointer
     *
     * Looking at the assembly:
     * 1. **What it does**: Loads `curcontext`, checks if `curcontext[15]` (offset 60 = 0x3c) is zero. If zero, calls one function (at GP-31012), otherwise calls another function (at GP-31224). This is a simple if/else dispatch.
     * 2. **C pseudocode**:
     * ```c
     * void pickPointer(void) {
     * if (curcontext[15] == 0) {  // offset 0x3c = 60 bytes = index 15
     * pickNothing();          // GP offset -31012 (0x86dc)
     * } else {
     * pickSomething();        // GP offset -31224 (0x8608)
     * }
     * }
     * ```
     * To identify the actual function names, check your GP_MAPPING.md for offsets -31012 (0xFFFF86DC) and -31224 (0xFFFF8608), or run:
     * ```
     * python3 analysis/resolve_got.py
     * ```
     * with those offsets. The field at curcontext+0x3c (index 15) likely indicates selection state or pick mode.
     */
halt_baddata();
}
