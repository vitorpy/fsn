/**
 * FUN_00411998
 *
 * Extracted from fsn.c lines 52446-52472
 * Ghidra address: 0x00411998
 * Category: Other
 */

void FUN_00411998(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  undefined1 auStack_60 [96];
  
  puVar2 = app_context /* was: *(undefined4 **)(unaff_gp + -0x7600) */ /* -> app_context */;
  iVar1 = /* TODO: GP:-0x7cdc */ (**(code **)(unaff_gp + -0x7cdc) /* -> EXTERNAL_0x0f67de94 */)(*puVar2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(unaff_gp + -0x7ab8) /* -> FUN_0040f1f0 */)() /* =FUN_0040f1f0 */;
    if (iVar1 == 0) goto LAB_00411a50;
  }
  do {
    do {
      /* TODO: GP:-0x7cf4 */ (**(code **)(unaff_gp + -0x7cf4) /* -> EXTERNAL_0x0f66839c */)(*puVar2,auStack_60);
      /* TODO: GP:-0x7d10 */ (**(code **)(unaff_gp + -0x7d10) /* -> EXTERNAL_0x0f667a24 */)(auStack_60);
      iVar1 = /* TODO: GP:-0x7cdc */ (**(code **)(unaff_gp + -0x7cdc) /* -> EXTERNAL_0x0f67de94 */)(*puVar2);
    } while (iVar1 != 0);
    iVar1 = (**(code **)(unaff_gp + -0x7ab8) /* -> FUN_0040f1f0 */)() /* =FUN_0040f1f0 */;
  } while (iVar1 != 0);
LAB_00411a50:
  (**(code **)(unaff_gp + -0x7ac8) /* -> FUN_0040cf50 */)() /* =FUN_0040cf50 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411998):
     * Function: FUN_00411998
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Calls XtAppProcessEvent (GP -32016), then loops back to 0x4119e4 while either XtAppPending (GP -31964) or checkRedrawScene (GP -31416) returns non-zero. Finally calls qdevice (GP -31432) before returning.
     * **2. C pseudocode:**
     * ```c
     * do {
     * XtAppProcessEvent(app_context, XtIMAll);  // GP -32016 at 411a00
     * } while (XtAppPending(app_context) || checkRedrawScene());  // GP -31964, -31416
     * qdevice(/* some device */);  // GP -31432 at 411a50
     * ```
     * This is a standard X11/Xt event loop: process events until queue is empty AND no pending redraws, then re-register input device. The branch targets at 0x4119e4 indicate this is the bottom of a do-while loop that started earlier in the function.
     */
halt_baddata();
}
