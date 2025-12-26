/**
 * calc_v_angle
 *
 * Extracted from fsn.c lines 50233-50252
 * Category: Other
 */

void calc_v_angle(void)

{
  float fVar1;
  uint in_register_00001040;
  float __x;
  undefined4 in_register_00001080;
  
  __x = (float)(((double)(int)curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */ /
                (double)((ulonglong)in_register_00001040 << 0x20)) *
               (double)CONCAT44(in_register_00001080,0x54442d18));
  fVar1 = sinf(__x);
  curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ = fVar1;
  fVar1 = cosf(__x);
  curcontext->cos_x /* was: *(float *)(curcontext + 0x24) */ = fVar1;
  fVar1 = tanf(__x);
  curcontext->tan_x /* was: *(float *)(curcontext + 0x28) */ = fVar1;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040c0c0):
     * Function: calc_v_angle
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls sin() on angle (from sp+36), stores result to curcontext[9] (offset 36). Then calls cos() on same angle, stores result to curcontext[10] (offset 40). These are the vertical angle sine/cosine components for camera orientation.
     * 2. **C pseudocode:**
     * ```c
     * // GP-30340 = curcontext pointer
     * float angle = local_angle;  // sp+36
     * curcontext[8] = previous_result;  // offset 32, from before this snippet
     * curcontext[9] = sinf(angle);      // offset 36 - v_angle sine
     * curcontext[10] = cosf(angle);     // offset 40 - v_angle cosine
     * return;
     * ```
     * GP offsets resolved:
     * - GP-31904 (0x8360) = sinf
     * - GP-31888 (0x8370) = cosf
     * - GP-30340 (0x897c) = curcontext (double-indirected pointer)
     */
halt_baddata();
}
