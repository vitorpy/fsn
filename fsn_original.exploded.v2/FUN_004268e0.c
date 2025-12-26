/**
 * FUN_004268e0
 *
 * Extracted from fsn.c lines 63876-63963
 * Ghidra address: 0x004268e0
 * Category: Other
 */

void FUN_004268e0(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                 undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  uint extraout_var;
  uint extraout_var_00;
  int local_c;
  int local_8;
  int local_4;
  
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  (**(code **)(unaff_gp + -0x7924) /* -> FUN_0042631c */)(&local_4,&local_c,&local_8) /* =FUN_0042631c */;
  if (local_c == 0) {
    if (local_4 == 0) {
      if (local_8 == 0) {
        (**(code **)(unaff_gp + -0x79c8) /* -> FUN_0041d54c */)() /* =FUN_0041d54c */;
      }
      else {
        local_4 = local_8;
        if ((local_8 == *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x44)) &&
           (*(int *)(local_8 + 0x28) != 0)) {
          local_4 = *(int *)(local_8 + 0x28);
        }
        (**(code **)(unaff_gp + -0x79c4) /* -> FUN_0041d69c */)(local_4) /* =FUN_0041d69c */;
        iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
        piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
        *param_1 = (float)((double)*(float *)(local_4 + 0x34) -
                          (double)*(float *)(*piVar2 + 0x14) *
                          ((double)*(float *)(local_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) +
                          (double)*(float *)(iVar1 + 0x88)));
        *param_2 = (float)((double)*(float *)(local_4 + 0x38) -
                          (double)*(float *)(*piVar2 + 0x18) *
                          ((double)*(float *)(local_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) +
                          (double)*(float *)(iVar1 + 0x88)));
        *param_3 = *(float *)(iVar1 + 0x84) + *(float *)(local_4 + 0x24);
        *param_4 = (short)*(undefined4 *)(iVar1 + 0x8c);
        *param_6 = 0;
      }
    }
    else {
      (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)() /* =FUN_0041d920 */;
      (**(code **)(unaff_gp + -0x79c4) /* -> FUN_0041d69c */)(local_4) /* =FUN_0041d69c */;
      iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
      piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
      *param_1 = (float)((double)*(float *)(local_4 + 0x34) -
                        (double)*(float *)(*piVar2 + 0x14) *
                        ((double)*(float *)(local_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) +
                        (double)*(float *)(iVar1 + 0x88)));
      *param_2 = (float)((double)*(float *)(local_4 + 0x38) -
                        (double)*(float *)(*piVar2 + 0x18) *
                        ((double)*(float *)(local_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) +
                        (double)*(float *)(iVar1 + 0x88)));
      *param_3 = *(float *)(iVar1 + 0x84) + *(float *)(local_4 + 0x24);
      *param_4 = (short)*(undefined4 *)(iVar1 + 0x8c);
      *param_6 = 0;
    }
  }
  else {
    (**(code **)(unaff_gp + -0x79c4) /* -> FUN_0041d69c */)(local_4) /* =FUN_0041d69c */;
    (**(code **)(unaff_gp + -0x79bc) /* -> FUN_0041da44 */)(local_c) /* =FUN_0041da44 */;
    piVar2 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    *param_1 = (*(float *)(local_4 + 0x34) + *(float *)(local_c + 0x14) * *(float *)(local_4 + 0x58)
               ) - *(float *)(*piVar2 + 0x14) * *(float *)(iVar1 + 0x94);
    *param_2 = (*(float *)(local_4 + 0x38) + *(float *)(local_c + 0x18)) -
               *(float *)(*piVar2 + 0x18) * *(float *)(iVar1 + 0x94);
    if (*(char *)(iVar1 + 5) == '\0') {
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(local_4 + 0x24) + *(float *)(local_c + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = *(float *)(iVar1 + 0x90) + *(float *)(local_4 + 0x24) + *(float *)(iVar1 + 0x80);
    }
    *param_6 = 0;
    *param_4 = (short)*(undefined4 *)(iVar1 + 0x98);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004268e0):
     * Function: FUN_004268e0
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calculates transformed X coordinate (subtract scaled offset), Y coordinate (add offset), stores a 16-bit value from offset 140, and stores zero to an output pointer. This is the tail of a coordinate transformation function, likely computing screen/world position from object data.
     * **C pseudocode:**
     * ```c
     * // t2 = source object, v1 = context/transform data, t4/t5/t1/t9 = output pointers
     * *out_x = (float)src->field_0 - (double_scale * (double)ctx->offset_84);  // t4
     * *out_y = ctx->field_24 + ctx->offset_84;  // t5 (offset 36 + offset 132)
     * *out_short = (short)ctx->field_8c;  // t1 (offset 140 as int16)
     * *out_flag = 0;  // t9 (offset 68 from stack)
     * return result;  // or falls through to return 0 via the branch at 426ce0
     * ```
     * The branch at 426ce0 skips over what appears to be an error path (426ce8-426cfc calls a function via GP and returns 0).
     */
halt_baddata();
}
