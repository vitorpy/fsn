/**
 * drawOverviewDirectory
 *
 * Extracted from fsn.c lines 60598-60672
 * Category: Graphics
 */

void drawOverviewDirectory(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint unaff_000010a0;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 3 < 0) {
    loadname((int)param_1->name_index /* was: *(short *)(param_1 + 0x5e) */);
    if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 2 < 0) {
      uVar3 = *(undefined4 *)(boxDir + 0x10);
    }
    else {
      uVar3 = *(undefined4 *)boxDir;
    }
    cpack(uVar3);
    if (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd < 0) {
      dVar6 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)unaff_000010a0 << 0x20);
      rect((float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ - dVar6 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */),
           (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ - dVar6));
      iVar2 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
    }
    else {
      dVar6 = (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ / (double)((ulonglong)unaff_000010a0 << 0x20);
      rectf((float)((double)param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ - dVar6 * (double)param_1->scale /* was: *(float *)(param_1 + 0x58) */)
            ,(float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ - dVar6));
      iVar2 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
    }
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = *(int *)(param_1->child_array /* was: *(int *)(param_1 + 0x18) */ + iVar5);
        iVar1 = iVar4->render_flags /* was: *(int *)(iVar4 + 0x74) */;
        if (iVar1 << 3 < 0) {
          if (param_2 != '\0') {
            FUN_00420408(iVar4,1);
            loadname((int)iVar4->name_index /* was: *(short *)(iVar4 + 0x5e) */);
            iVar1 = iVar4->render_flags /* was: *(int *)(iVar4 + 0x74) */;
          }
          uVar3 = DAT_1001760c;
          if (iVar1 << 2 < 0) {
            uVar3 = DAT_10017608;
          }
          cpack(uVar3);
          fStack_10 = param_1->pos_x /* was: *(float *)(param_1 + 0x34) */ +
                      iVar4->offset_x /* was: *(float *)(iVar4 + 0x4c) */ * param_1->scale /* was: *(float *)(param_1 + 0x58) */;
          fStack_c = param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ + iVar4->offset_y /* was: *(float *)(iVar4 + 0x50) */;
          uStack_18 = iVar4->pos_x /* was: *(undefined4 *)(iVar4 + 0x34) */;
          fStack_14 = (float)((double)iVar4->pos_y /* was: *(float *)(iVar4 + 0x38) */ +
                             (double)-iVar4->height /* was: *(float *)(iVar4 + 0x3c) */ /
                             (double)((ulonglong)unaff_000010a0 << 0x20));
          bgnline();
          v2f(&fStack_10);
          v2f(&uStack_18);
          endline();
          if (param_2 == '\0') {
            FUN_00420408(iVar4,0);
          }
          iVar2 = param_1->child_count /* was: *(int *)(param_1 + 0x14) */;
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < iVar2 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004203fc):
     * Function: drawOverviewDirectory
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. After a function call (jalr t9), checks if s4 is zero. If zero, calls another function at gp-31120 with args (s0, 0).
     * 2. Loads s1[5] (offset 20), multiplies by 4, increments loop counter s2, loops back if s2 < s1[5]*4.
     * 3. Epilogue: restores saved registers (f20, f21, s0-s6, ra) and returns.
     * **C pseudocode:**
     * ```c
     * // ... after previous call
     * if (s4 == 0) {
     * draw_child_node(s0, 0);  // gp-31120 = draw_child_node
     * }
     * s2 += 4;  // advance to next child (4 bytes per pointer)
     * } while (s2 < s1->numChildren * 4);  // s1[5] = numChildren at offset 20
     * // function epilogue - return
     * ```
     * This is the end of a child directory iteration loop. The `s4` flag likely indicates whether to draw child nodes, and the loop processes `numChildren` entries (offset 20 in the directory struct = field index 5).
     */
halt_baddata();
}
