/**
 * FUN_0042425c
 *
 * Extracted from fsn.c lines 62791-62875
 * Ghidra address: 0x0042425c
 * Category: Other
 */

void FUN_0042425c(ulonglong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  uint extraout_var;
  double dVar6;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  if (param_2->render_flags /* was: *(int *)(param_2 + 0x74) */ << 3 < 0) {
    local_18 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x44dc);
    if ((((param_2->render_flags /* was: *(uint *)(param_2 + 0x74) */ >> 0x1e & *curcontextflag /* was: *(uint **)(unaff_gp + -0x7670) */ /* -> curcontextflag */) != 0) ||
        ((int)(param_2->render_flags /* was: *(uint *)(param_2 + 0x74) */ << 2) < 0)) || ((param_2->render_flags /* was: *(ushort *)(param_2 + 0x74) */ & 1) != 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042425c):
     * Function: FUN_0042425c
     *
     * Looking at this assembly:
     * 1. **What it does:** Function prologue saves registers (ra, gp, s0-s3, f20-f29), checks if bit 28 of param->offset_0x74 is set (the `sll t8,t6,0x3` + `bgez` tests bit 28). If clear, jumps to end. If set, loads curcontext pointer, fetches floats from offsets 0x18 and 0x20, and begins float conversion.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042425c(DirNode *node, int param2) {
     * int flags = node->flags;  // offset 0x74
     * // Test bit 28: (flags << 3) >= 0 means bit 28 is clear
     * if (!(flags & 0x10000000)) {
     * return;  // jump to 0x4250bc (function end)
     * }
     * Context *ctx = *curcontext;  // gp-relative load
     * float f20 = some_global_float;  // from gp-0x805c offset -17628
     * float val1 = ctx->field_0x18;   // likely X or Y coordinate
     * float val2 = ctx->field_0x20;   // likely Z coordinate
     * double d6 = (double)val1;       // cvt.d.s conversion
     * // ... continues with drawing operations
     * }
     * ```
     * The bit 28 check is likely testing a "visible" or "needs_draw" flag - if not set, skip drawing entirely. The float loads from curcontext offsets 0x18/0x20 are camera or view position values used for drawing calculations.
     */
halt_baddata();
    }
    iVar5 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    local_c = local_18;
    if (param_2->depth_indicator /* was: *(short *)(param_2 + 0x76) */ < 0) {
      /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      (**(code **)(unaff_gp + -0x78f8) /* -> FUN_00427a3c */)
                (param_1 & 0xffffffff00000000,
                 (double)**(float **)(unaff_gp + -0x75c8) /* -> maxy */ *
                 (double)((ulonglong)extraout_var << 0x20)) /* =FUN_00427a3c */;
      /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    }
    iVar1 = param_2->child_count /* was: *(int *)(param_2 + 0x14) */;
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(param_2->child_array /* was: *(int *)(param_2 + 0x18) */ + iVar4);
        if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 3 < 0) {
          (**(code **)(unaff_gp + -0x793c) /* -> FUN_0042425c */)(iVar3,param_3) /* =FUN_0042425c */;
          /* TODO: GP:-0x7db0 */ (**(code **)(unaff_gp + -0x7db0) /* -> EXTERNAL_0x0f1276ac */)((int)iVar3->name_index /* was: *(short *)(iVar3 + 0x5e) */);
          if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2 < 0) {
            uVar2 = *(undefined4 *)(iVar5 + 0x178);
          }
          else if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 0xd < 0) {
            uVar2 = *(undefined4 *)(iVar5 + 0x168);
          }
          else {
            uVar2 = *(undefined4 *)(iVar5 + 0x17c);
          }
          /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(uVar2);
          dVar6 = (double)param_2->pos_x /* was: *(float *)(param_2 + 0x34) */ + (double)iVar3->offset_x /* was: *(float *)(iVar3 + 0x4c) */;
          local_14 = (float)dVar6;
          local_10 = param_2->pos_y /* was: *(float *)(param_2 + 0x38) */ + iVar3->offset_y /* was: *(float *)(iVar3 + 0x50) */;
          local_20 = iVar3->pos_x /* was: *(undefined4 *)(iVar3 + 0x34) */;
          local_1c = (float)((double)iVar3->pos_y /* was: *(float *)(iVar3 + 0x38) */ -
                            (double)iVar3->height /* was: *(float *)(iVar3 + 0x3c) */ /
                            (double)((ulonglong)dVar6 & 0xffffffff00000000));
          if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2 < 0) {
            /* TODO: GP:-0x7e0c */ (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(3);
          }
          /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_14);
          /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_20);
          /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
          if (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2 < 0) {
            /* TODO: GP:-0x7e0c */ (**(code **)(unaff_gp + -0x7e0c) /* -> EXTERNAL_0x0f126158 */)(1);
          }
          if ((param_3 == '\0') &&
             ((param_2->render_flags /* was: *(int *)(param_2 + 0x74) */ << 2 < 0 || (iVar3->render_flags /* was: *(int *)(iVar3 + 0x74) */ << 2 < 0)))) {
                    // WARNING: Bad instruction - Truncating control flow here
                /*
     * BADDATA ANALYSIS (from binary @ 0x0042425c):
     * Function: FUN_0042425c
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * 1. Conditional branch based on FP comparison, then calls a function at GP-31052 with args (a1=0, a2=a3)
     * 2. At 0x42476c: Loads float from offset 36 of s1, converts to double, compares if > 0.0
     * 3. If positive, checks bit 29 of s1[116], then loads either a global pointer+16 or continues
     * **C pseudocode:**
     * ```c
     * // At 0x424740: after bc1f/branch sequence
     * if (fp_condition) {
     * a3 = s0;
     * }
     * czcmd(0, a3);  // GP-31052 = czcmd
     * goto label_42481c;
     * // At 0x42476c: separate block
     * if ((double)node->field_0x24 > 0.0) {
     * int flags = node->field_0x74;
     * if (flags & 0x20000000) {  // bit 29 set (sll by 2, then bgez checks sign)
     * a3 = *global_ptr + 16;  // GP-30348
     * }
     * // continues...
     * }
     * ```
     * GP-31052 is likely `czcmd` (color/z command). GP-30348 appears to be a global context pointer. The bit 29 check (sll 2 then bgez) tests a flag in the node's flags field at offset 0x74.
     */
halt_baddata();
          }
          /* TODO: GP:-0x7de8 */ (**(code **)(unaff_gp + -0x7de8) /* -> EXTERNAL_0x0f1266ec */)();
          iVar1 = param_2->child_count /* was: *(int *)(param_2 + 0x14) */;
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar1 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042425c):
     * Function: FUN_0042425c
     *
     * Looking at this MIPS assembly snippet:
     * **What it does:**
     * Calculates 3D coordinates by adding offsets from two structures (s0 and s1), stores results to stack variables at sp+208/212/220/224. Also computes a scaled value by dividing s0[0x3c] by 2.0 and subtracting from s0[0x38].
     * **C pseudocode:**
     * ```c
     * // s0 = some node/item struct, s1 = parent/context struct
     * float x = s0->field_34;                           // sp+208 (0xd0)
     * float y = s0->field_38 - (s0->field_3c / 2.0f);   // sp+212 (0xd4) - center offset
     * float z = s0->field_4c + s1->field_30;            // sp+220 (0xdc) - depth sum
     * float w = s0->field_50 + s1->field_38;            // sp+224 (0xe0) - height sum
     * // t5 = s0->field_74, then t7 = t5 << 2 (multiply by 4, likely array index)
     * ```
     * Note: The `lui at,0x4000` + `mtc1 at,$f7` + `mtc1 zero,$f6` sequence loads the double 2.0 into f6:f7 for the division. The struct offsets suggest this is processing a tree node with position/size fields, possibly for drawing file blocks or calculating bounding boxes.
     */
halt_baddata();
}
