/**
 * FUN_00426e34
 *
 * Extracted from fsn.c lines 64062-64084
 * Ghidra address: 0x00426e34
 * Category: Other
 */

void FUN_00426e34(int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  uint in_register_00001000;
  
  piVar1 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  iVar2 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
  *param_2 = (float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ -
                    (double)*(float *)(*piVar1 + 0x14) *
                    ((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                     (double)((ulonglong)in_register_00001000 << 0x20) +
                    (double)*(float *)(iVar2 + 0x88)));
  *param_3 = (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ -
                    (double)*(float *)(*piVar1 + 0x18) *
                    ((double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                     (double)((ulonglong)in_register_00001000 << 0x20) +
                    (double)*(float *)(iVar2 + 0x88)));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426e34):
     * Function: FUN_00426e34
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Computes 3D projected screen coordinates from world-space object data. Takes object position, applies perspective division using view parameters, and outputs X, Y, Z screen coordinates to three output pointers.
     * **C pseudocode:**
     * ```c
     * // a0 = object data ptr, a1 = out_x, a2 = out_y, a3 = out_z
     * // v0 = curcontext ptr, v1 = view params (likely curcontext or camera)
     * // f0 = pre-computed scale factor, f6/f18 = pre-computed intermediates
     * void project_to_screen(float *obj, float *out_x, float *out_y, float *out_z) {
     * float **ctx = curcontext;
     * float *view = (float *)ctx;  // or camera params at v1
     * // X: obj[13] - (scale * some_factor)  [offsets 52 = 13*4]
     * *out_x = obj[13] - (float)(obj_factor * precomputed_scale);
     * // Y: perspective divide then multiply by view param
     * // obj[15] (off 60) / scale + view[34] (off 136), then * ctx->param[6] (off 24)
     * float *ctx_ptr = ctx[0];  // lw t7,0(v0)
     * float depth_factor = obj[15] / scale + view[34];
     * *out_y = obj[14] - (float)(ctx_ptr[6] * depth_factor);
     * // Z: view[33] (off 132) + obj[9] (off 36)
     * *out_z = view[33] + obj[9];
     * }
     * ```
     * **Key register usage:**
     * - `a0`: object/node struct pointer
     * - `a1, a2, a3`: output X, Y, Z pointers
     * - `v0`: curcontext (dereferenced once to get t7)
     * - `v1`: view/camera parameters struct (offsets 132, 136)
     * - `f0`: pre-loaded scale divisor (set before this snippet)
     */
halt_baddata();
}
