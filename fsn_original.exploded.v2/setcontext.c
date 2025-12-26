/**
 * setcontext
 *
 * Extracted from fsn.c lines 66599-66608
 * Category: Other
 */

void setcontext(int param_1,undefined1 param_2)

{
  if ((param_1 == *(int *)(altcontextwindows + 8)) || (param_1 == *(int *)(altcontextwindows + 0xc))
     ) {
    gl_swap_buffers(param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a820):
     * Function: setcontext
     *
     * Looking at the assembly:
     * 1. **What it does:** Checks if arg `a0` matches either `curcontext[2]` (offset 8) or `curcontext[3]` (offset 12). If either matches, calls a function (likely `setInputMode`) with `a1 & 0xff` as the argument.
     * 2. **C pseudocode:**
     * ```c
     * void setcontext(Widget w, int mode) {
     * if (w == curcontext[2] || w == curcontext[3]) {
     * setInputMode(mode & 0xff);
     * }
     * }
     * ```
     * GP offsets resolved:
     * - `gp-30328` (0x8988) = curcontext pointer
     * - `gp-30868` (0x876c) = likely setInputMode or similar input handler
     * The `curcontext[2]` and `curcontext[3]` are probably the GL widget and its overlay/form - this sets input mode when focus enters one of the drawing widgets.
     */
halt_baddata();
}
