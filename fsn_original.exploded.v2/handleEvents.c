/**
 * handleEvents
 *
 * Extracted from fsn.c lines 52417-52440
 * Category: Other
 */

void handleEvents(void)

{
  int iVar1;
  undefined1 auStack_60 [96];
  
  iVar1 = XtAppPending(app_context);
  if (iVar1 == 0) {
    iVar1 = FUN_0040f1f0();
    if (iVar1 == 0) goto LAB_00411a50;
  }
  do {
    do {
      XtAppNextEvent(app_context,auStack_60);
      XtDispatchEvent(auStack_60);
      iVar1 = XtAppPending(app_context);
    } while (iVar1 != 0);
    iVar1 = FUN_0040f1f0();
  } while (iVar1 != 0);
LAB_00411a50:
  FUN_0040cf50();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041198c):
     * Function: handleEvents
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Calls an unknown function (GP-0x7d10), then loops calling XtAppPending and checking for pending events. When no events pending, calls a cleanup/idle function (GP-0x7ac8) before returning.
     * **2. C pseudocode:**
     * ```c
     * // After halt_baddata section in handleEvents:
     * unknown_func();                          // GP-0x7d10 (-32016)
     * while (XtAppPending(app_context)) {      // GP-0x7cdc (-31964) - loops back to 0x4119e4
     * // process events (code at 0x4119e4)
     * }
     * if (check_work_pending()) {              // GP-0x7ab8 (-31416)
     * goto event_loop;                     // back to 0x4119e4
     * }
     * idle_cleanup();                          // GP-0x7ac8 (-31432)
     * return;
     * ```
     * To resolve the actual function names, check GP_MAPPING.md or run:
     * ```
     * python3 analysis/resolve_got.py
     * ```
     * with offsets: -32016 (0x7d10), -31964 (0x7cdc), -31416 (0x7ab8), -31432 (0x7ac8)
     */
halt_baddata();
}
