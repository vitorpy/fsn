/**
 * FUN_004101e4
 *
 * Extracted from fsn.c lines 51644-51655
 * Ghidra address: 0x004101e4
 * Category: Other
 */

void FUN_004101e4(void)

{
  int unaff_gp;
  
  /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x180));
  /* TODO: GP:-0x7cf8 */ (**(code **)(unaff_gp + -0x7cf8) /* -> EXTERNAL_0x0f128324 */)();
  /* TODO: GP:-0x7b54 */ (**(code **)(unaff_gp + -0x7b54) /* -> EXTERNAL_0x0f125eb8 */)();
  /* TODO: GP:-0x7cd0 */ (**(code **)(unaff_gp + -0x7cd0) /* -> EXTERNAL_0x0f1210f8 */)();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004101e4):
     * Function: FUN_004101e4
     *
     * Based on the analysis:
     * **1. What the assembly does:**
     * Destroys a widget at fsn_resources[0x180], then calls three cleanup functions in sequence - likely XFlush, XSync, and XtDispatchEvent or similar X11 cleanup calls.
     * **2. C-like pseudocode:**
     * ```c
     * void FUN_004101e4(void)
     * {
     * /* Destroy widget stored at offset 0x180 (384) in fsn_resources */
     * XtDestroyWidget(fsn_resources->widget_at_0x180);
     * /* X11 cleanup calls - flush/sync display */
     * XFlush(display);      /* -0x7cf8: flush X output buffer */
     * XSync(display, 0);    /* -0x7b54: synchronize with X server */
     * XtDispatchEvent();    /* -0x7cd0: process pending events */
     * }
     * ```
     * The function appears to be a cleanup/shutdown helper that destroys a specific widget (offset 0x180 = 384 bytes into fsn_resources structure, likely a dialog or panel widget) then ensures the X server is synchronized. The three no-argument calls are typical X11 flush/sync/dispatch sequence used after widget destruction.
     */
halt_baddata();
}
