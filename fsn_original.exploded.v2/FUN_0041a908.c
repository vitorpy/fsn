/**
 * FUN_0041a908
 *
 * Extracted from fsn.c lines 57308-57327
 * Ghidra address: 0x0041a908
 * Category: Other
 */

void FUN_0041a908(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  undefined8 in_f4;
  undefined8 in_f6;
  float fVar1;
  uint in_register_00001080;
  
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
            ((float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (float)(double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),param_2),param_3,param_4,0);
  /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)-*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78);
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(0,*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0xe8));
  fVar1 = (float)((double)-*(float *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0xe4) /
                 (double)((ulonglong)in_register_00001080 << 0x20));
  /* TODO: GP:-0x7df0 */ (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)(fVar1,fVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041a908):
     * Function: FUN_0041a908
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function with $f12 and curcontext[58] (offset 232) as args, then calls ortho2() with symmetric bounds derived from curcontext[57] (offset 228) divided by 2.0.
     * 2. **C pseudocode:**
     * ```c
     * // gp[-30172] = curcontext, gp[-31584] = first function (likely fminsizefs or similar)
     * // gp[-32240] = ortho2
     * float f12_val = $f12;  // passed in
     * float width = curcontext[58];  // offset 232
     * some_function(f12_val, width);
     * float height = curcontext[57];  // offset 228
     * float half = 2.0f;
     * float top = height / half;
     * float bottom = -height / half;
     * ortho2(top, top, bottom, bottom);  // a2=a3=top, a0(f12)=a1(f14)=bottom
     * ```
     * The `lui 0x4000` + `mtc1 zero` creates double 2.0 in $f16/$f17. The ortho2 call sets up a 2D orthographic projection centered at origin with height-based symmetric bounds.
     */
halt_baddata();
}
