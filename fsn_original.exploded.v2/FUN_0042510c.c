/**
 * FUN_0042510c
 *
 * Extracted from fsn.c lines 63008-63154
 * Ghidra address: 0x0042510c
 * Category: Other
 */

void FUN_0042510c(char param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int unaff_gp;
  float fVar5;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = DAT_10010000 /* was: *(int *)(unaff_gp + -0x7f94) */ /* -> DAT_10010000 */;
  piVar4 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  iVar2 = *piVar4;
  *(undefined4 *)(iVar1 + 0x6c60) = 0;
  *(undefined4 *)(iVar1 + 0x6c64) = 0;
  if (iVar2->height /* was: *(int *)(iVar2 + 0x3c) */ == 0) {
    iVar1 = *topdir /* was: *(int **)(unaff_gp + -0x76d4) */ /* -> topdir */;
    if (iVar1 != 0) {
      if (param_1 == '\0') {
        iVar1 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
        fVar5 = (float)/* TODO: GP:-0x7b64 */ (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                                 (*(undefined4 *)(iVar1 + 0x104),
                                  (*(float *)(iVar2 + 4) -
                                  iVar2->child_array /* was: *(float *)(iVar2 + 0x18) */ * iVar2->_field_20 /* was: *(float *)(iVar2 + 0x20) */ *
                                  *(float *)(iVar2 + 8)) / *(float *)(iVar1 + 0x108));
        fVar5 = (*(float *)(iVar1 + 0x110) * *(float *)(*piVar4 + 0x34)) / fVar5;
        if (*(char *)(iVar1 + 4) == '\0') {
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar1 + 0x148));
          /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x448c))
                           );
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4484))
                           );
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
          iVar1 = *topdir /* was: *(int **)(unaff_gp + -0x76d4) */ /* -> topdir */;
        }
        else {
          /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(1);
          /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar1 + 0x150));
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar1 + 0x14c));
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
          /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(0);
          /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar1 + 0x14c));
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 + fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x449c))
                           );
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = (float)((double)pfVar3[1] + (double)*(float *)(iVar1 + 0x114));
          local_4 = (float)((double)pfVar3[2] +
                           (double)CONCAT44((int)((ulonglong)(double)pfVar3[1] >> 0x20),
                                            *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x4494))
                           );
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          pfVar3 = (float *)*piVar4;
          local_c = *pfVar3 - fVar5;
          local_8 = pfVar3[1] + *(float *)(iVar1 + 0x114);
          local_4 = pfVar3[2] + *(float *)(iVar1 + 0x10c);
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
          /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(1);
          /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar1 + 0x15c));
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] - *(float *)(iVar1 + 0x118);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] - *(float *)(iVar1 + 0x118);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar1 + 0x158));
          local_c = *(float *)*piVar4 + fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          local_c = *(float *)*piVar4 - fVar5;
          local_8 = ((float *)*piVar4)[1] + *(float *)(iVar1 + 0x114);
          local_4 = -0.5;
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
          /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
          /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(0);
          iVar1 = *topdir /* was: *(int **)(unaff_gp + -0x76d4) */ /* -> topdir */;
        }
      }
      (**(code **)(unaff_gp + -0x793c) /* -> FUN_0042425c */)(iVar1,param_1) /* =FUN_0042425c */;
    }
  }
  else {
    (**(code **)(unaff_gp + -0x79fc) /* -> FUN_00419424 */)(iVar2->height /* was: *(int *)(iVar2 + 0x3c) */,param_1) /* =FUN_00419424 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042510c):
     * Function: FUN_0042510c
     *
     * Looking at the GP offsets and the assembly pattern:
     * **1. What it does:**
     * This is the epilogue of draw_directories(). It calls a function via GP-31036 with curcontext and a byte from stack offset 91, then restores saved registers (f20, f21, s0-s3, ra) and returns. The branch at 42598c skips an alternate path at 425994 that calls a different function (GP-31228).
     * **2. C pseudocode:**
     * ```c
     * // ... end of draw_directories function
     * // Call via GP-31036 (likely setLongValue or similar)
     * func_at_gp_minus_31036(*curcontext, stack_byte_91);
     * goto epilogue;
     * alternate_path:
     * // Call via GP-31228 with different args
     * func_at_gp_minus_31228(a2_saved, stack_byte_91);
     * epilogue:
     * // Restore saved registers and return
     * return;
     * }
     * ```
     * To identify the actual functions, check GP_MAPPING.md for offsets -31036 (0x86c4) and -31228 (0x8604), or run:
     * ```
     * python3 analysis/resolve_got.py <<< "-31036 -31228"
     * ```
     */
halt_baddata();
}
