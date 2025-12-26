/**
 * FUN_0041fd70
 *
 * Extracted from fsn.c lines 60238-60248
 * Ghidra address: 0x0041fd70
 * Category: Other
 */

void FUN_0041fd70(void)

{
  int unaff_gp;
  
  /* TODO: GP:-0x7d0c */ (**(code **)(unaff_gp + -0x7d0c) /* -> EXTERNAL_0x0f14c31c */)
            (**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c00));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fd70):
     * Function: FUN_0041fd70
     *
     * Now I can give you a complete answer:
     * **ANALYSIS OF FUN_0041fd70:**
     * **1. What it does:**
     * Loads `display` global (GP-0x75fc = 0x10017454), dereferences it, loads value at chrtbl_base+0x6c00 (27648 bytes = end of 128-char font table), calls function pointer at GP-0x7d0c with these two args.
     * **2. C pseudocode:**
     * ```c
     * // FUN_0041fd70 - Calls external function with display and font data
     * // GP-0x75fc → display (X11 Display*)
     * // GP-0x7f94 → chrtbl base pointer
     * // GP-0x7d0c → external function pointer (likely XFlush or similar X11 call)
     * void FUN_0041fd70(void) {
     * Display *dpy = *display;
     * void *font_param = *(void**)(chrtbl_base + 0x6c00);  // offset 27648
     * external_func(dpy, font_param);
     * }
     * ```
     * The 0x6c00 offset (27648) is exactly the size of the font table (128 chars × 216 bytes), suggesting this accesses data immediately after the font, or this could be an X11/GL call that takes display + some resource ID. Given it's called after drawing operations, this is likely **XFlush(display)** or similar synchronization call (the second parameter might be ignored or this is a different X function).
     */
halt_baddata();
}
