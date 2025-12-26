/**
 * movehoriz
 *
 * Extracted from fsn.c lines 50509-50532
 * Category: Other
 */

void movehoriz(undefined8 param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 in_register_00001010;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar1 = powf(DAT_10017594,*(float *)(curcontext + 4) / DAT_10017598);
  *(float *)curcontext =
       (float)((double)*(float *)curcontext +
              ((double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ *
               (double)CONCAT44(in_register_00001010,(int)param_1) +
              (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * (double)CONCAT44(uVar2,param_2)) /
              (double)fVar1);
  *(float *)(curcontext + 4) =
       (float)((double)*(float *)(curcontext + 4) +
              (double)-curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * (double)CONCAT44(uVar2,param_2) +
              (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ *
              (double)CONCAT44(in_register_00001010,(int)param_1));
  redraw_gl_scene();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040cf90):
     * Function: movehoriz
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Computes horizontal movement for camera/view: updates X position as `X = X + (delta_x * sin + delta_z * cos) / divisor`, then updates Y position as `Y = Y + (-field_20 * sin + field_24 * cos)`, then calls a function via GP offset -31436 (0x8534).
     * **2. C pseudocode:**
     * ```c
     * // Continuing from previous calculation...
     * // v0 points to position being updated, v1 points to context/camera struct
     * // $f12 = sin_angle, $f2 = cos_angle (passed in registers)
     * // f18 = f8 + f16 (accumulated delta)
     * // f6 = f18 / f4 (divide by some factor)
     * // result = field_X + f6
     * *((float*)v0 + 0) = (float)((double)v0->field_0 + accumulated_delta / divisor);
     * // Load from context: field_20 (offset 0x14), field_24 (offset 0x18), field_4
     * struct_ptr = *(void**)v1;
     * float neg_f20 = -struct_ptr->field_20;  // neg.s
     * float f24 = struct_ptr->field_24;
     * float f4 = struct_ptr->field_4;
     * // Y = field_4 + (-field_20 * sin + field_24 * cos)
     * struct_ptr->field_4 = (float)((double)f4 + (double)neg_f20 * sin_angle + (double)f24 * cos_angle);
     * // Call function at GP-0x8534 (likely checkRedrawScene or similar)
     * (*gp_func_8534)();
     * ```
     * GP offset 0x8534 = -31436 likely resolves to `checkRedrawScene` or `scheduleRedraw` based on typical FSN patterns.
     */
halt_baddata();
}
