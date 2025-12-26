/**
 * landscapeZoomToFile
 *
 * Extracted from fsn.c lines 64419-64451
 * Category: Filesystem
 */

void landscapeZoomToFile(int param_1,int param_2)

{
  double dVar1;
  ulonglong in_f4;
  float fVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      dVar1 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)(in_f4 & 0xffffffff00000000) +
              (double)DAT_10017518;
      set_camera_lookat((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ -
                   (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * dVar1,
                   (double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ -
                   (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * dVar1);
    }
    else {
      if (DAT_10017495 == '\0') {
        fVar2 = param_2->child_count /* was: *(float *)(param_2 + 0x14) */;
      }
      else {
        fVar2 = param_2->child_count /* was: *(float *)(param_2 + 0x14) */;
      }
      set_camera_lookat(((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ +
                   (double)fVar2 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */) -
                   (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ * (double)DAT_10017524,
                   ((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ + (double)param_2->child_array /* was: *(float *)(param_2 + 0x18) */) -
                   (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * (double)DAT_10017524);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427864):
     * Function: landscapeZoomToFile
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Computes camera position for zooming to a file. Calculates X and Y offsets by subtracting scaled interpolation values from source positions, computes Z from two floats, then calls a function (at gp-31400, likely `set_camera_position` or similar) with these coordinates and additional parameters.
     * **C pseudocode:**
     * ```c
     * // v0 = source object, v1 = target/context, a0 = some param struct
     * // t = interpolation factor (in $f10+$f16 as double)
     * double t = (double)f10 + (double)f16;  // interpolation sum
     * float src_x = *(float*)(v0 + 24);      // lwc1 $f4, 24(v0)
     * float src_y = *(float*)(a0 + 56);      // lwc1 $f16, 56(a0)
     * float z1 = *(float*)(a0 + 36);         // lwc1 $f4, 36(a0)
     * float z2 = *(float*)(v1 + 132);        // lwc1 $f10, 132(v1)
     * int param = *(int*)(v1 + 140);         // lw t7, 140(v1)
     * double scale_x = (double)prev_val * t; // mul.d using $f18
     * double scale_y = (double)prev_val2 * t;
     * double cam_x = (double)src_x - scale_x;  // $f12 = arg for call
     * double cam_y = (double)src_y - scale_y;  // $f14 = arg for call
     * double cam_z = (double)z2 + (double)z1;  // passed on stack
     * // Call function at gp[-31400] with:
     * // $f12=cam_x, $f14=cam_y, stack: 0,0,0,param, cam_z (as 2 floats)
     * func_gp_31400(cam_x, cam_y, 0, 0, 0, param, cam_z);
     * ```
     * The pattern suggests: `landscapeZoomToFile` interpolates camera from current position toward a target file's position, with Z computed from two height values.
     */
halt_baddata();
}
