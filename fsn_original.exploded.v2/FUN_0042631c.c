/**
 * FUN_0042631c
 *
 * Extracted from fsn.c lines 63660-63789
 * Ghidra address: 0x0042631c
 * Category: Other
 */

void FUN_0042631c(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_gp;
  undefined4 uVar10;
  uint uVar11;
  undefined8 in_f4;
  int local_7fc;
  short local_7dc [500];
  short local_3f4 [500];
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar11 = (uint)((ulonglong)in_f4 >> 0x20);
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  iVar9 = -1;
  iVar8 = -1;
  local_7fc = -1;
  /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  /* TODO: GP:-0x7de0 */ (**(code **)(unaff_gp + -0x7de0) /* -> EXTERNAL_0x0f12812c */)();
  /* TODO: GP:-0x7dd0 */ (**(code **)(unaff_gp + -0x7dd0) /* -> EXTERNAL_0x0f1214b8 */)(5,5);
  /* TODO: GP:-0x7dd4 */ (**(code **)(unaff_gp + -0x7dd4) /* -> EXTERNAL_0x0f121cb8 */)(local_3f4,500);
  (**(code **)(unaff_gp + -0x7adc) /* -> FUN_0040bfa0 */)() /* =FUN_0040bfa0 */;
  piVar5 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
            ((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(*piVar5 + 0x34)));
  /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(*piVar5 + 0xe),0x78);
  /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(*piVar5 + 0xc),0x7a);
  iVar2 = *piVar5;
  iVar6 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
  uVar10 = /* TODO: GP:-0x7b64 */ (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                     (*(undefined4 *)(iVar6 + 0x104),
                      (*(float *)(iVar2 + 4) -
                      iVar2->child_array /* was: *(float *)(iVar2 + 0x18) */ * iVar2->_field_20 /* was: *(float *)(iVar2 + 0x20) */ * *(float *)(iVar2 + 8)) /
                      *(float *)(iVar6 + 0x108));
  /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar10);
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(-*(float *)*piVar5,-((float *)*piVar5)[1]);
  (**(code **)(unaff_gp + -0x7938) /* -> FUN_0042510c */)(1) /* =FUN_0042510c */;
  iVar2 = /* TODO: GP:-0x7dd8 */ (**(code **)(unaff_gp + -0x7dd8) /* -> EXTERNAL_0x0f1232b8 */)(local_3f4);
  /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  /* TODO: GP:-0x7de0 */ (**(code **)(unaff_gp + -0x7de0) /* -> EXTERNAL_0x0f12812c */)();
  /* TODO: GP:-0x7dd4 */ (**(code **)(unaff_gp + -0x7dd4) /* -> EXTERNAL_0x0f121cb8 */)(local_7dc,500);
  uVar11 = 0;
  (**(code **)(unaff_gp + -0x7adc) /* -> FUN_0040bfa0 */)() /* =FUN_0040bfa0 */;
  /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
            ((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(*piVar5 + 0x34)));
  /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(*piVar5 + 0xe),0x78);
  /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)*(short *)(*piVar5 + 0xc),0x7a);
  iVar3 = *piVar5;
  uVar10 = /* TODO: GP:-0x7b64 */ (**(code **)(unaff_gp + -0x7b64) /* -> EXTERNAL_0x0f898750 */)
                     (*(undefined4 *)(iVar6 + 0x104),
                      (*(float *)(iVar3 + 4) -
                      iVar3->child_array /* was: *(float *)(iVar3 + 0x18) */ * iVar3->_field_20 /* was: *(float *)(iVar3 + 0x20) */ * *(float *)(iVar3 + 8)) /
                      *(float *)(iVar6 + 0x108));
  /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar10,0x3f800000);
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(-*(float *)*piVar5,-((float *)*piVar5)[1]);
  iVar3 = 0;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = local_3f4[iVar3];
      if (sVar1 == 1) {
        uVar10 = (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)((int)local_3f4[iVar3 + 1]) /* =FUN_00411e68 */;
        (**(code **)(unaff_gp + -0x7928) /* -> FUN_00425ee4 */)(uVar10) /* =FUN_00425ee4 */;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1 + (int)sVar1;
    } while (iVar6 != iVar2);
  }
  iVar6 = 0;
  iVar3 = 0;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + 0x6244))(**(undefined4 **)(unaff_gp + -0x76d4) /* -> topdir */);
  iVar2 = /* TODO: GP:-0x7dd8 */ (**(code **)(unaff_gp + -0x7dd8) /* -> EXTERNAL_0x0f1232b8 */)(local_7dc);
  /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  if (0 < iVar2) {
    do {
      iVar7 = (int)local_7dc[iVar3];
      psVar4 = local_7dc + iVar3 + 1;
      if (iVar7 == 2) {
        if (*psVar4 == 1) {
          if (iVar9 < 0) {
            iVar9 = (int)local_7dc[iVar3 + 2];
          }
        }
        else if ((*psVar4 == 2) && (iVar8 < 0)) {
          iVar8 = (int)local_7dc[iVar3 + 2];
        }
      }
      if ((iVar7 == 3) && (*psVar4 = 2, *psVar4 != 0)) {
        local_7fc = (int)local_7dc[iVar3 + 3];
        iVar8 = (int)local_7dc[iVar3 + 2];
        break;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1 + iVar7;
    } while (iVar6 != iVar2);
  }
  if (local_7fc < 0) {
    if (iVar8 < 0) {
      if (-1 < iVar9) {
        local_c = (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)(iVar9) /* =FUN_00411e68 */;
      }
    }
    else {
      local_4 = (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)(iVar8) /* =FUN_00411e68 */;
    }
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7a7c) /* -> FUN_00411e68 */)(iVar8) /* =FUN_00411e68 */;
    local_8 = *(undefined4 *)(*(int *)(local_4 + 0x10) + local_7fc * 4);
  }
  *param_1 = local_4;
  *param_2 = local_8;
  *param_3 = local_c;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042631c):
     * Function: FUN_0042631c
     *
     * ## Assembly Analysis
     * **1. What it does:**
     * This is the function epilogue of `pickLandscape`. If s6 >= 0, it calls a function via GP offset -31356 (likely `gselect` or similar GL picking function) with s6 as argument, storing result at sp+2108. Then it writes three output values through pointers (sp+2120, sp+2124, sp+2128) and restores saved registers before returning.
     * **2. C pseudocode:**
     * ```c
     * // At end of pickLandscape, before return:
     * // s6 = hits count, stack vars hold output pointer args
     * if (s6 >= 0) {
     * result = gselect(s6);  // GP[-31356] - end GL picking, get selection
     * sp_083c = result;      // store at sp+0x83c (2108)
     * }
     * // Write output parameters (passed by pointer to pickLandscape):
     * *out_param1 = local_0844;  // sp+2116 -> *(sp+2120)
     * *out_param2 = local_0840;  // sp+2112 -> *(sp+2124)
     * *out_param3 = sp_083c;     // sp+2108 -> *(sp+2128)
     * // Restore s0-s6, ra from stack and return
     * ```
     * The function signature likely includes output pointer parameters like:
     * `int pickLandscape(..., int *out1, int *out2, int *out3)`
     */
halt_baddata();
}
