/**
 * FUN_00420408
 *
 * Extracted from fsn.c lines 60678-60761
 * Ghidra address: 0x00420408
 * Category: Other
 */

void FUN_00420408(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_gp;
  double dVar7;
  uint unaff_000010a0;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 3 < 0) {
    /* TODO: GP:-0x7e1c */ (**(code **)(unaff_gp + -0x7e1c) /* -> EXTERNAL_0x0f1283cc */)((int)param_1->name_index /* was: *(short *)(param_1 + 0x5e) */);
    if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 2 < 0) {
      uVar3 = *(undefined4 *)(*boxDir /* was: *(int **)(unaff_gp + -0x768c) */ /* -> boxDir */ + 0x10);
    }
    else {
      uVar3 = *(undefined4 *)*boxDir /* was: *(undefined4 **)(unaff_gp + -0x768c) */ /* -> boxDir */;
    }
    /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(uVar3);
    if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd < 0) {
      dVar7 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)unaff_000010a0 << 0x20);
      /* TODO: GP:-0x7df0 */ (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)
                ((float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ -
                        dVar7 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */),
                 (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ - dVar7));
      iVar2 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
    }
    else {
      dVar7 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)unaff_000010a0 << 0x20);
      /* TODO: GP:-0x7e20 */ (**(code **)(unaff_gp + -0x7e20) /* -> EXTERNAL_0x0f1273b8 */)
                ((float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ -
                        dVar7 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */),
                 (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ - dVar7));
      iVar2 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
    }
    iVar5 = 0;
    if (0 < iVar2) {
      iVar6 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
      do {
        iVar4 = *(int *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar5);
        iVar1 = iVar4->render_flags /* was: *(int *)(iVar4 + 0x74) */;
        if (iVar1 << 3 < 0) {
          if (param_2 != '\0') {
            (**(code **)(unaff_gp + -0x7990) /* -> FUN_00420408 */)(iVar4,1) /* =FUN_00420408 */;
            /* TODO: GP:-0x7e1c */ (**(code **)(unaff_gp + -0x7e1c) /* -> EXTERNAL_0x0f1283cc */)((int)iVar4->name_index /* was: *(short *)(iVar4 + 0x5e) */);
            iVar1 = iVar4->render_flags /* was: *(int *)(iVar4 + 0x74) */;
          }
          if (iVar1 << 2 < 0) {
            uVar3 = *(undefined4 *)(iVar6 + 0x178);
          }
          else {
            uVar3 = *(undefined4 *)(iVar6 + 0x17c);
          }
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(uVar3);
          local_10 = param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ +
                     iVar4->offset_x /* was: *(float *)(iVar4 + 0x4c) */ * param_1->scale /* was: *(float *)(param_1 + 0x58) */;
          local_c = param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ + iVar4->offset_y /* was: *(float *)(iVar4 + 0x50) */;
          local_18 = iVar4->pos_x /* was: *(undefined4 *)(iVar4 + 0x34) */;
          local_14 = (float)((double)iVar4->pos_y /* was: *(float *)(iVar4 + 0x38) */ +
                            (double)-iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ /
                            (double)((ulonglong)unaff_000010a0 << 0x20));
          /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
          /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(&local_10);
          /* TODO: GP:-0x7e08 */ (**(code **)(unaff_gp + -0x7e08) /* -> EXTERNAL_0x0f123f38 */)(&local_18);
          /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
          if (param_2 == '\0') {
            (**(code **)(unaff_gp + -0x7990) /* -> FUN_00420408 */)(iVar4,0) /* =FUN_00420408 */;
          }
          iVar2 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < iVar2 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00420408):
     * Function: FUN_00420408
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. After a jalr call returns, if s4 is zero, calls another function at GP-31120 with args (s0, 0)
     * 2. Then loops: loads count from s1+20, multiplies by 4, increments s2 by 4, loops back to 0x4205d0 while s2 < count*4
     * 3. Epilogue restores callee-saved registers (f20-f21, s0-s6, ra) and returns
     * **C pseudocode:**
     * ```c
     * // ... after previous call returns
     * if (s4 == 0) {
     * func_gp_8670(s0, 0);  // GP-31120 offset, likely popmatrix or similar
     * }
     * // Loop continuation - s2 is child index * 4, s1 points to directory node
     * s2 += 4;  // next child
     * if (s2 < s1->num_children * 4) {
     * goto loop_body;  // back to 0x4205d0
     * }
     * // Function epilogue - restore and return
     * ```
     * **GP offset -31120 (0x8670):** This is likely `popmatrix` based on the pattern of being called with a widget/context pointer and 0, typically used to end a transformation scope after drawing children in the overview.
     */
halt_baddata();
}
