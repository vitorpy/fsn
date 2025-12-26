/**
 * draw_directories
 *
 * Extracted from fsn.c lines 62881-63002
 * Category: Graphics
 */

void draw_directories(char param_1)

{
  float fVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  selected_id_1 = 0;
  selected_id_2 = 0;
  if (curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */ == 0) {
    if (topdir != 0) {
      if (param_1 == '\0') {
        fVar1 = powf(DAT_10017594,
                     (*(float *)(curcontext + 4) -
                     curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                     *(float *)(curcontext + 8)) / DAT_10017598);
        fVar1 = (DAT_100175a0 * curcontext->scale_factor /* was: *(float *)(curcontext + 0x34) */) / fVar1;
        if (DAT_10017494 == '\0') {
          cpack(DAT_100175d8);
          bgnpolygon();
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          endpolygon();
        }
        else {
          shademodel(1);
          bgnpolygon();
          cpack(DAT_100175e0);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(DAT_100175dc);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
          bgnpolygon();
          cpack(DAT_100175dc);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + DAT_1001759c;
          v3f(&fStack_c);
          endpolygon();
          shademodel(1);
          bgnpolygon();
          cpack(DAT_100175ec);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) - DAT_100175a8;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) - DAT_100175a8;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(DAT_100175e8);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
        }
      }
      FUN_0042425c(topdir,param_1);
    }
  }
  else {
    FUN_00419424(curcontext->zoom_mode /* was: *(int *)(curcontext + 0x3c) */,param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00425100):
     * Function: draw_directories
     *
     * Looking at this assembly:
     * **What it does:**
     * This is the function epilogue of draw_directories with two paths: one calls a function via GP-31036 with curcontext and a byte from stack, the other calls GP-31228 with a2 and the same byte. Then restores saved registers (f20, f21, s0-s3, ra) and returns.
     * **C pseudocode:**
     * ```c
     * // After previous jalr (at 425958)
     * // Path 1 (falls through from above):
     * a0 = *curcontext;           // GP-30420 = curcontext
     * func_gp_31036(a0, local_91); // GP-31036, a1 = byte at sp+91
     * goto epilogue;
     * // Path 2 (jumped to from elsewhere):
     * path2:
     * func_gp_31228(a2, local_91); // GP-31228 = different function
     * epilogue:
     * // Restore callee-saved: f20, f21, s0, s1, s2, s3, ra
     * return;
     * ```
     * To identify the actual functions, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-31036
     * -31228
     * -30420"
     * ```
     * GP-30420 is likely `curcontext`. GP-31036 and GP-31228 are probably drawing-related functions (given context of draw_directories) - possibly `set_line_color` or similar based on the byte parameter pattern (color index?).
     */
halt_baddata();
}
