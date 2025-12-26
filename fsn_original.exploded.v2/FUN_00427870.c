/**
 * FUN_00427870
 *
 * Extracted from fsn.c lines 64457-64493
 * Ghidra address: 0x00427870
 * Category: Other
 */

void FUN_00427870(int param_1,int param_2)

{
  int unaff_gp;
  double dVar1;
  ulonglong in_f4;
  float fVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      dVar1 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)(in_f4 & 0xffffffff00000000) +
              (double)*(float *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x88);
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)
                ((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x14) * dVar1,
                 (double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x18) * dVar1) /* =FUN_00410264 */;
    }
    else {
      if (*(char *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 5) == '\0') {
        fVar2 = param_2->child_count /* was: *(float *)(param_2 + 0x14) */;
      }
      else {
        fVar2 = param_2->child_count /* was: *(float *)(param_2 + 0x14) */;
      }
      dVar1 = (double)*(float *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x94);
      (**(code **)(unaff_gp + -0x7aa8) /* -> FUN_00410264 */)
                (((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ +
                 (double)fVar2 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x14) * dVar1,
                 ((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ + (double)param_2->child_array /* was: *(float *)(param_2 + 0x18) */) -
                 (double)*(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0x18) * dVar1) /* =FUN_00410264 */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427870):
     * Function: FUN_00427870
     *
     * Looking at the assembly:
     * 1. **What it does:** Calculates spotlight/cone endpoint coordinates by applying a scale factor to position differences, then calls a drawing function (likely `bgnclosedline` or similar at GP-31400) with the computed coordinates as doubles pushed to stack.
     * 2. **C pseudocode:**
     * ```c
     * // v0 = some struct, v1 = another struct, a0 = context or params
     * double scale = (double)v0->f24 + (double)a0->f56;  // $f10+$f16 -> $f0
     * double x_offset = (double)v0->f24 * scale;
     * double y_offset = (double)a0->f36 * scale;
     * double z_coord = (double)v1->f132 + (double)a0->f36;
     * double arg_x = (double)v0->f6 - x_offset;   // $f12
     * double arg_y = (double)a0->f56 - y_offset;  // $f14
     * // Stack args: 0=0, 4=0, 8=0, 12=v1->i140, 16-20=z_coord (double)
     * func_gp_minus31400(arg_x, arg_y, /* stack args */);
     * ```
     * The GP-31400 offset likely resolves to a graphics primitive function. The pattern of computing coordinate deltas and passing doubles suggests this draws part of a spotlight beam or selection cone geometry.
     */
halt_baddata();
}
