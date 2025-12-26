/**
 * setScales
 *
 * Extracted from fsn.c lines 50682-50706
 * Category: Other
 */

void setScales(void)

{
  undefined4 uStack_50;
  int iStack_4c;
  
  if ((controlsShowing != '\0') && (curcontext[0xc53] == '\0')) {
    if (DAT_10000148 != curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */) {
      uStack_50 = 0xf66187b;
      iStack_4c = (int)curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */;
      DAT_10000148 = curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */;
      XtSetValues(DAT_1001663c,&uStack_50,1);
    }
    if (DAT_1000014c != curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */) {
      uStack_50 = 0xf66187b;
      iStack_4c = (int)curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */;
      DAT_1000014c = curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */;
      XtSetValues(DAT_10016640,&uStack_50,1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
        /*
     * BADDATA ANALYSIS (from binary @ 0x0040d7f8):
     * Function: setScales
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Checks if fsn is initialized (DAT_10008a20), then if curcontext->field_0xc53 is set returns early. Otherwise compares curcontext->field_0xc (short at offset 12) against a cached value at DAT_10008068+328, and if different, updates the cache and prepares to call XtVaSetValues with a resource string.
     * 2. **C pseudocode:**
     * ```c
     * void setScales(void) {
     * if (!*fsn_initialized) return;           // DAT_10008a20
     * Context *ctx = *curcontext;              // DAT_1000897c
     * if (ctx->field_0xc53 != 0) return;       // early exit flag
     * short val = ctx->field_0xc;              // offset 12 = short
     * ScaleCache *cache = DAT_10008068;        // some widget/state struct
     * if (cache->cached_scale != val) {        // offset 328
     * cache->cached_scale = val;
     * // XtVaSetValues call with XmNvalue resource (string at gp-32604+859)
     * XtVaSetValues(widget, XmNvalue, val, NULL);
     * }
     * // ... continues with more scale widget updates
     * }
     * ```
     * The pattern repeats - this function synchronizes multiple Motif Scale widgets with values from curcontext fields. The `halt_baddata` likely occurred because Ghidra struggled with the varargs XtVaSetValues calls and the interleaved short/byte field accesses.
     */
halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040d7f8):
     * Function: setScales
     *
     * Looking at this assembly:
     * 1. **What it does**: Calls a function via GP (likely XtVaSetValues), then compares `curcontext[2]` (float at offset 8) with a global float. If not equal, stores the new value to the global and calls another function (likely `sprintf` or float conversion) with string at offset 859.
     * 2. **C pseudocode**:
     * ```c
     * XtVaSetValues(widget, XmNvalue, ...);  // jalr at 40d8d4
     * float val = ((float*)curcontext)[2];   // curcontext offset 8
     * if (val != cached_scale_value) {
     * cached_scale_value = val;
     * sprintf(buffer, scale_format_str, val);  // jalr at 40d934, format at +859
     * }
     * ```
     * The `0x4024` being loaded into `$f17` is the double constant 10.0 (IEEE 754: 0x40240000 high word), likely for scaling/formatting the value.
     */
halt_baddata();
}
