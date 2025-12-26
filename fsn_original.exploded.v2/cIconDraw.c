/**
 * cIconDraw
 *
 * Extracted from fsn.c lines 72037-72043
 * Category: Graphics
 */

void cIconDraw(int param_1)

{
  (**(code **)(param_1->_field_60 /* was: *(int *)(param_1 + 0x60) */ + 0xc))(*(short *)(param_1->_field_60 /* was: *(int *)(param_1 + 0x60) */ + 8) + param_1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00433c9c):
     * Function: cIconDraw
     *
     * ## Analysis
     * **What it does:**
     * Loads a callback structure from offset 96 of the widget parameter. Extracts a short offset at +8 and a function pointer at +12 from that structure, then calls the function with (widget + offset) as the argument.
     * **C pseudocode:**
     * ```c
     * void cIconDraw(void *widget) {
     * void *callback_struct = *(void **)((char *)widget + 96);  // offset 0x60
     * short offset = *(short *)((char *)callback_struct + 8);
     * void (*draw_func)(void *) = *(void (**)(void *))((char *)callback_struct + 12);
     * draw_func((char *)widget + offset);
     * }
     * ```
     * This is a typical Xt/Motif widget draw callback dispatch - the widget stores a pointer to a callback descriptor containing an offset to the drawable data and a function pointer to render it.
     */
halt_baddata();
}
