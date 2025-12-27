/**
 * context_funcs.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "fsn.h"
#include "fsn_state.h"
#include "context_funcs.h"

#include "fsn_context.h"
void myContext(undefined4 param_1,undefined4 param_2)

{
  set_gl_context(param_2,0);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a960):
     * Function: myContext
     *
     * Based on my analysis:
     * ---
     * **Summary for myContext (0x42a960-0x42a9a4):**
     * **1. What it does:**
     * Wrapper function that calls an Xt function (likely XtVaSetValues or similar) at GP-30856 with args (a1, NULL), ignoring a0 and a2.
     * **2. C pseudocode:**
     * // void myContext(Widget w, ArgList args, Cardinal num_args) {
     * // GP-30856: XtSetValues or similar Xt function
     * // XtSetValues(args, NULL);  // Only passes args, ignores widget and count
     * // }
     * Given the function name "myContext" and that it's near other context-related functions (newcontext, swapcontext, savecontext, etc. at 0x42a4c8-0x42a88c), this appears to be a thin wrapper around an Xt intrinsics call, possibly for setting context-related widget attributes. The unusual signature (ignoring a0 and a2) suggests it may be a callback adapter or specialized context operation.
     */
  return;
}

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
     * void setcontext(Widget w, int mode) {
     * if (w == curcontext[2] || w == curcontext[3]) {
     * setInputMode(mode & 0xff);
     * }
     * }
     * GP offsets resolved:
     * - `gp-30328` (0x8988) = curcontext pointer
     * - `gp-30868` (0x876c) = likely setInputMode or similar input handler
     * The `curcontext[2]` and `curcontext[3]` are probably the GL widget and its overlay/form - this sets input mode when focus enters one of the drawing widgets.
     */
  return;
}

void newcontext(uint param_1,char param_2)

{
    FsnContext *ctx = (FsnContext *)curcontext;
  int iVar1;
  Display *displayVar;
  Window windowVar;
  Widget widgetVar;

  if (param_1 != curcontextid) {
    iVar1 = *(int *)(curcontext + 0x44);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xdf;
    }
    iVar1 = *(int *)(curcontext + 0x48);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xef;
    }
    curcontext = context + param_1 * 0xc54;
    curcontextwindows = contextwindows + param_1 * 0x38;
    altcontext = context + (1 - param_1) * 0xc54;
    altcontextwindows = contextwindows + (1 - param_1) * 0x38;
    curcontextflag = 1 << (param_1 & 0x1f);
    iVar1 = *(int *)(context + param_1 * 0xc54 + 0x44);
    curcontextid = param_1;
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) | 0x20;
    }
    iVar1 = *(int *)(curcontext + 0x48);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x10;
    }
    if (param_2 == '\0') {
      widgetVar = (Widget)*(undefined4 *)(altcontextwindows + 0x28);
      displayVar = XtDisplay(widgetVar);
      windowVar = XtWindow(widgetVar);
      XMapWindow(displayVar,windowVar);
      widgetVar = (Widget)*(undefined4 *)(curcontextwindows + 0x28);
      displayVar = XtDisplay(widgetVar);
      windowVar = XtWindow(widgetVar);
      XUnmapWindow(displayVar,windowVar);
      update_widget_state();
      refresh_display();
      ctx->special_mode_flag = 0;
      altcontext[0xc53] = 1;
      ui_layout_setup_wrapper();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a4c8):
     * Function: newcontext
     *
     * Looking at the GP offsets and the assembly:
     * **1. What it does:**
     * Calls two functions (GP-0x8630 and GP-0x8674), then sets `prevcontext->field_0xc53 = 0` and `curcontext->field_0xc53 = 1`, then calls a third function (GP-0x8544). This marks the previous context as inactive and current context as active.
     * **2. C pseudocode:**
     * // c
     * func_at_gp_minus_8630();           // GP-0x8630
     * func_at_gp_minus_8674();           // GP-0x8674
     * prevcontext[0]->byte_c53 = 0;      // GP-0x897c -> prevcontext, clear active flag
     * curcontext[0]->byte_c53 = 1;       // GP-0x8980 -> curcontext, set active flag
     * func_at_gp_minus_8544();           // GP-0x8544
     * // end c
     * To get the actual function names, check GP_MAPPING.md for offsets 0x8630, 0x8674, 0x8544, 0x897c, and 0x8980. The 0xc53 offset (3155 decimal) is a flag byte in the context structure indicating whether that context is currently active/focused.
     */
  return;
}
