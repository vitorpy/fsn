/**
 * draw__13ByteCodedIconFv
 *
 * Extracted from fsn.c lines 73398-73416
 * Category: Graphics
 */

void draw__13ByteCodedIconFv(undefined1 *param_1)

{
  if (*(int *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x18) != 0) {
    setState__19FileIconInterpreterFiN41
              (&TheFileIconInterpreter,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
    setColors__19FileIconInterpreterFiN21
              (&TheFileIconInterpreter,*(undefined4 *)(param_1 + 8),param_1->file_count /* was: *(undefined4 *)(param_1 + 0xc) */,
               param_1->file_array /* was: *(undefined4 *)(param_1 + 0x10) */);
    pushmatrix();
    multmatrix(param_1 + 0x20);
    linewidth(1);
    FUN_00435a28(&TheFileIconInterpreter,*(undefined4 *)(param_1->child_count /* was: *(int *)(param_1 + 0x14) */ + 0x18),
                 param_1->child_array /* was: *(undefined4 *)(param_1 + 0x18) */,param_1->_field_1c /* was: *(undefined4 *)(param_1 + 0x1c) */);
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00435228):
     * Function: draw__13ByteCodedIconFv
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls linewidth(1), then calls cmov() to position for text output (loading coordinates from s0+20/24/28 structure), then calls endcharstr() to finish character rendering.
     * **2. C pseudocode:**
     * ```c
     * linewidth(1);                           // gp-32268 = linewidth
     * cmov(cursor_pos,                        // gp-30548 = cmov, gp-30228 = some global
     * ((int*)s0)[5]->field_24,           // s0+20 -> offset 24
     * *(float*)(s0+24),                  // s0+24
     * *(float*)(s0+28));                 // s0+28
     * endcharstr();                           // gp-31528 = endcharstr
     * // function epilogue: restore ra, s0, return
     * ```
     * The s0 register holds a ByteCodedIcon object pointer. Fields at offsets 20, 24, 28 are likely position data (pointer to something with text at +24, plus x/y floats). This is the tail end of a vector text drawing routine - reset line width, move cursor to final position, end the character string.
     */
halt_baddata();
}
