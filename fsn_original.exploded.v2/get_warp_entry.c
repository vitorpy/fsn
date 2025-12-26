/**
 * get_warp_entry
 *
 * Extracted from fsn.c lines 64041-64056
 * Category: Other
 */

void get_warp_entry(int param_1,float *param_2,float *param_3)

{
  uint in_register_00001000;
  
  *param_2 = (float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ -
                    (double)curcontext->sin_z /* was: *(float *)(curcontext + 0x14) */ *
                    ((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)DAT_10017518));
  *param_3 = (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ -
                    (double)curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ *
                    ((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)DAT_10017518));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426e28):
     * Function: get_warp_entry
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Calculates 3D warp coordinates by interpolating between current position and target, using a ratio from curcontext. Stores results in three output floats (x, y, z via a1, a2, a3).
     * **2. C pseudocode:**
     * ```c
     * // a0 = source struct, a1 = &out_x, a2 = &out_y, a3 = &out_z
     * // v0 = curcontext, v1 = some struct (likely curcontext or related)
     * // f0/f18 already loaded with ratio/scale values from earlier in function
     * double ratio = (double)v1->field_0x88;  // offset 136
     * double scale = (double)(*v0)->field_0x18;  // offset 24 of pointed struct
     * *a1 = (float)((double)a0->field_0x34 - scale * ratio);           // out_x = src.x - scale*ratio
     * *a2 = (float)((double)a0->field_0x38 - scale * ((double)a0->field_0x3c/f0 + ratio));  // out_y
     * *a3 = (float)((double)v1->field_0x84 + (double)a0->field_0x24);  // out_z = base_z + src.z
     * ```
     * Key offsets: a0+0x34(52), a0+0x38(56), a0+0x3c(60), a0+0x24(36) are source coords; v1+0x84(132), v1+0x88(136) are base/ratio values.
     */
halt_baddata();
}
