/**
 * pickLandscape
 *
 * Extracted from fsn.c lines 63534-63654
 * Category: Input
 */

void pickLandscape(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  undefined8 in_f4;
  int iStack_7fc;
  short asStack_7dc [500];
  short asStack_3f4 [500];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  uVar11 = (uint)((ulonglong)in_f4 >> 0x20);
  iStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  iVar9 = -1;
  iVar8 = -1;
  iStack_7fc = -1;
  pushmatrix();
  initnames();
  picksize(5,5);
  pick(asStack_3f4,500);
  FUN_0040bfa0();
  scale((float)((double)((ulonglong)uVar11 << 0x20) / (double)curcontext->scale_factor /* was: *(float *)(curcontext + 0x34) */));
  rotate((int)curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */,0x78);
  rotate((int)curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */,0x7a);
  fVar10 = powf(DAT_10017594,
                (*(float *)(curcontext + 4) -
                curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                *(float *)(curcontext + 8)) / DAT_10017598);
  scale(fVar10);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  FUN_0042510c(1);
  iVar2 = endpick(asStack_3f4);
  popmatrix();
  pushmatrix();
  initnames();
  pick(asStack_7dc,500);
  uVar11 = 0;
  FUN_0040bfa0();
  scale((float)((double)((ulonglong)uVar11 << 0x20) / (double)curcontext->scale_factor /* was: *(float *)(curcontext + 0x34) */));
  rotate((int)curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */,0x78);
  rotate((int)curcontext->rotation_z /* was: *(short *)(curcontext + 0xc) */,0x7a);
  fVar10 = powf(DAT_10017594,
                (*(float *)(curcontext + 4) -
                curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
                *(float *)(curcontext + 8)) / DAT_10017598);
  scale(fVar10,0x3f800000);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  iVar5 = 0;
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = asStack_3f4[iVar5];
      if (sVar1 == 1) {
        uVar3 = FUN_00411e68((int)asStack_3f4[iVar5 + 1]);
        FUN_00425ee4(uVar3);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 1 + (int)sVar1;
    } while (iVar7 != iVar2);
  }
  iVar7 = 0;
  iVar5 = 0;
  FUN_00426244(topdir);
  iVar2 = endpick(asStack_7dc);
  popmatrix();
  if (0 < iVar2) {
    do {
      iVar6 = (int)asStack_7dc[iVar5];
      psVar4 = asStack_7dc + iVar5 + 1;
      if (iVar6 == 2) {
        if (*psVar4 == 1) {
          if (iVar9 < 0) {
            iVar9 = (int)asStack_7dc[iVar5 + 2];
          }
        }
        else if ((*psVar4 == 2) && (iVar8 < 0)) {
          iVar8 = (int)asStack_7dc[iVar5 + 2];
        }
      }
      if ((iVar6 == 3) && (*psVar4 = 2, *psVar4 != 0)) {
        iStack_7fc = (int)asStack_7dc[iVar5 + 3];
        iVar8 = (int)asStack_7dc[iVar5 + 2];
        break;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 1 + iVar6;
    } while (iVar7 != iVar2);
  }
  if (iStack_7fc < 0) {
    if (iVar8 < 0) {
      if (-1 < iVar9) {
        uStack_c = FUN_00411e68(iVar9);
      }
    }
    else {
      iStack_4 = FUN_00411e68(iVar8);
    }
  }
  else {
    iStack_4 = FUN_00411e68(iVar8);
    uStack_8 = *(undefined4 *)(*(int *)(iStack_4 + 0x10) + iStack_7fc * 4);
  }
  *param_1 = iStack_4;
  *param_2 = uStack_8;
  *param_3 = uStack_c;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426310):
     * Function: pickLandscape
     *
     * ## Analysis
     * **What the assembly does:**
     * Conditional call to a function via GP offset -31356 if s6 >= 0, storing result. Then stores three output values through pointers from stack (sp+2120, sp+2124, sp+2128) and restores callee-saved registers before returning.
     * **C pseudocode:**
     * ```c
     * // At function epilogue of pickLandscape:
     * // s6 = some computed value (likely pick result or node pointer)
     * // sp+2116 (t4), sp+2112 (t6), sp+2108 (result) are computed values
     * // sp+2120, sp+2124, sp+2128 are output pointer parameters
     * if (s6 >= 0) {
     * result = gp_func_31356(s6);  // GP[-31356] - likely endpick() or similar
     * sp_083c = result;            // store at sp+2108
     * }
     * // Store output values through pointer parameters
     * *out_param1 = sp_0844;  // sp+2120 points to output, sp+2116 is value
     * *out_param2 = sp_0840;  // sp+2124 points to output, sp+2112 is value
     * *out_param3 = sp_083c;  // sp+2128 points to output, sp+2108 is result
     * // Restore s0-s6, ra and return
     * ```
     * **GP offset -31356 (0x8584):** This is likely `endpick()` or `gselect()` - GL picking functions that return hit count. The pattern of conditionally calling it when s6 >= 0 suggests s6 holds a buffer/selection parameter, and the function returns pick results through the three output pointers (likely: hit_count, picked_item, pick_distance or similar).
     */
halt_baddata();
}
