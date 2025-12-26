/**
 * calc_h_angle
 *
 * Extracted from fsn.c lines 50180-50199
 * Category: Other
 */

void calc_h_angle(void)

{
  float fVar1;
  uint in_register_00001040;
  float __x;
  undefined4 in_register_00001080;
  
  __x = (float)(((double)(int)curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */ /
                (double)((ulonglong)in_register_00001040 << 0x20)) *
               (double)CONCAT44(in_register_00001080,0x54442d18));
  fVar1 = sinf(__x);
  curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ = fVar1;
  fVar1 = cosf(__x);
  curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ = fVar1;
  fVar1 = tanf(__x);
  curcontext->tan_z /* was: *(float *)(curcontext + 0x1c) */ = fVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040bfe0):
     * Function: calc_h_angle
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Calls two trig functions (sin at gp-31904, cos at gp-31888) with the angle from sp+36, storing results in curcontext offsets +20, +24, and +28. The sin result goes to offset 20, then sin again to offset 24, then cos to offset 28.
     * 2. **C pseudocode:**
     * ```c
     * // t8 = curcontext (from prior code)
     * curcontext->field_0x14 = sinf(angle);  // offset 20
     * curcontext->field_0x18 = sinf(angle);  // offset 24
     * curcontext->field_0x1c = cosf(angle);  // offset 28
     * ```
     * Wait - let me re-check. The gp-31904 call happens twice (at 0x40c058 and implicitly from t8 store), then gp-31888 once. Looking more carefully:
     * - 0x40c054: stores f0 to t8+20 (result from PRIOR call, likely sinf)
     * - 0x40c058-0x40c060: calls gp-31904 (sinf?) with angle
     * - 0x40c080: stores f0 to t9+24
     * - 0x40c084-0x40c08c: calls gp-31888 (cosf?) with angle
     * - 0x40c0ac: stores f0 to t0+28
     * **Corrected pseudocode:**
     * ```c
     * curcontext->sin_h = sinf(angle);   // offset 0x14 (20)
     * curcontext->sin_h2 = sinf(angle);  // offset 0x18 (24) - redundant?
     * curcontext->cos_h = cosf(angle);   // offset 0x1c (28)
     * ```
     * GP offsets: -31904 = sinf, -31888 = cosf (typical libm GOT entries)
     */
halt_baddata();
}
