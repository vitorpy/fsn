/**
 * FUN_0040cf9c
 *
 * Extracted from fsn.c lines 50538-50568
 * Ghidra address: 0x0040cf9c
 * Category: Other
 */

void FUN_0040cf9c(undefined8 param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  float fVar4;
  undefined4 in_register_00001010;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar4 = (float)/* TODO: GP:-0x7b64 */ (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                           (*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x104),
                            *(float *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 4) /
                            *(float *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x108));
  piVar3 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  pfVar1 = (float *)*piVar3;
  *pfVar1 = (float)((double)*pfVar1 +
                   ((double)pfVar1[5] * (double)CONCAT44(in_register_00001010,(int)param_1) +
                   (double)pfVar1[6] * (double)CONCAT44(uVar5,param_2)) / (double)fVar4);
  iVar2 = *piVar3;
  *(float *)(iVar2 + 4) =
       (float)((double)*(float *)(iVar2 + 4) +
              (double)-iVar2->child_count /* was: *(float *)(iVar2 + 0x14) */ * (double)CONCAT44(uVar5,param_2) +
              (double)iVar2->child_array /* was: *(float *)(iVar2 + 0x18) */ * (double)CONCAT44(in_register_00001010,(int)param_1)
              );
  (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)() /* =FUN_0040cad0 */;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0040cf9c):
     * Function: FUN_0040cf9c
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes interpolated 3D position. First calculates `result->x = base_x + (sum / divisor)`. Then calculates `result->y = base_y + (-field_20 * factor1) + (field_24 * factor2)`. Finally calls a function via GP offset -31436 (0x8534).
     * 2. **C pseudocode:**
     * ```c
     * // Continuing from previous computation...
     * double temp = (f8_double + f16_double) / f4_double;  // 40d028-40d030
     * result->x = base_x + (float)temp;                     // 40d038-40d040
     * // Load struct pointer from v1
     * struct_ptr = *(void**)v1;                             // 40d044
     * // Compute Y interpolation
     * float neg_f20 = -struct_ptr->field_20;                // 40d04c, 40d054
     * double term1 = (double)neg_f20 * f12_double;          // 40d058-40d05c
     * double term2 = (double)struct_ptr->field_24 * f2_double;  // 40d060-40d068
     * struct_ptr->field_4 = struct_ptr->field_4 + (float)(term1 + term2);  // 40d06c-40d07c
     * // Call function at GP-0x8534
     * (*gp_func_8534)();                                    // 40d080-40d08c
     * ```
     * The GP offset 0x8534 (decimal -31436) likely resolves to a redraw or update function. Use `python3 analysis/resolve_got.py` with offset 0x8534 to identify the actual symbol.
     */
halt_baddata();
}
