/**
 * FUN_00426ef4
 *
 * Extracted from fsn.c lines 64148-64204
 * Ghidra address: 0x00426ef4
 * Category: Other
 */

void FUN_00426ef4(int param_1)

{
  int iVar1;
  int unaff_gp;
  double dVar2;
  float fVar3;
  uint in_register_00001080;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_1 != *(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x44)) {
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
              (param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */,param_1->pos_y /* was: *(undefined4 *)(param_1 + 0x38) */);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(param_1->scale /* was: *(undefined4 *)(param_1 + 0x58) */);
    if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) {
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
                (param_1->height /* was: *(undefined4 *)(param_1 + 0x3c) */,param_1->height /* was: *(undefined4 *)(param_1 + 0x3c) */);
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00426ef4):
     * Function: FUN_00426ef4
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Compares input node (a0) against curcontext->highlightedDir (offset 0x44). If same, exits early. Otherwise calls pushmatrix(), then translate(node->x, node->y, 0), then translate(node->z, 1.0, 1.0).
     * 2. **C pseudocode:**
     * ```c
     * void highlightDirLandscape(DirNode *node) {
     * if (node == curcontext->highlightedDir)  // offset 0x44
     * return;
     * pushmatrix();
     * translate(node->x, node->y, 0.0f);      // offsets 0x34, 0x38
     * translate(node->z, 1.0f, 1.0f);          // offset 0x58 (z/height)
     * // ... continues with highlight rendering
     * int flags = node->field_0x74;            // offset 116
     * ```
     * GP offsets: -30340 = curcontext, -31560 = pushmatrix, -31584 = translate (first call), -31596 = translate (second call)
     */
halt_baddata();
    }
    fVar3 = (float)((double)-param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                   (double)((ulonglong)in_register_00001080 << 0x20));
    /* TODO: GP:-0x7df0 */ (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)(fVar3,fVar3);
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    iVar1 = param_1->child_center /* was: *(int *)(param_1 + 0x28) */;
    if (iVar1 != 0) {
      local_c = iVar1->pos_x /* was: *(float *)(iVar1 + 0x34) */ + param_1->offset_x /* was: *(float *)(param_1 + 0x4c) */;
      local_10 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x447c);
      dVar2 = (double)iVar1->pos_y /* was: *(float *)(iVar1 + 0x38) */ + (double)param_1->offset_y /* was: *(float *)(param_1 + 0x50) */;
      local_8 = (float)dVar2;
      local_18 = param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */;
      local_14 = (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ -
                        (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                        (double)((ulonglong)dVar2 & 0xffffffff00000000));
      local_4 = local_10;
      /* TODO: GP:-0x7b7c */ (**(code **)(unaff_gp + -0x7b7c) /* -> EXTERNAL_0x0f1247c0 */)();
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_c);
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_18);
      /* TODO: GP:-0x7b94 */ (**(code **)(unaff_gp + -0x7b94) /* -> EXTERNAL_0x0f124574 */)();
      /* TODO: GP:-0x7cfc */ (**(code **)(unaff_gp + -0x7cfc) /* -> EXTERNAL_0x0f124670 */)(0);
      /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(iVar1->pos_x /* was: *(undefined4 *)(iVar1 + 0x34) */,iVar1->pos_y /* was: *(undefined4 *)(iVar1 + 0x38) */)
      ;
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(iVar1->height /* was: *(float *)(iVar1 + 0x3c) */ * iVar1->scale /* was: *(float *)(iVar1 + 0x58) */);
      (**(code **)(unaff_gp + -0x794c) /* -> FUN_00422284 */)(0,0,0x1f) /* =FUN_00422284 */;
      /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426ef4):
     * Function: FUN_00426ef4
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls two functions via GP (offsets -31052 and -31528), then if s0->child (offset 40) is non-null, computes position by adding child's coords (offsets 52, 56) to parent's coords (offsets 76, 80), storing results to stack variables. Also loads a global float from GP offset -32676 into stack.
     * 2. **C pseudocode:**
     * ```c
     * // GP[-31052] and GP[-31528] are likely bgnline(1, a3) and some GL call
     * bgnline(1, a3_value);
     * some_gl_func();
     * child = s0->child;  // offset 40
     * if (child != NULL) {
     * float x = child->x + s0->parent_x;  // offsets 52 + 76
     * float y = child->y + s0->parent_y;  // offsets 56 + 80
     * float global_val = *(float*)GP[-32676];  // likely a constant like spotlight_height
     * // stores x at sp+100, global_val at sp+108, y continues...
     * }
     * ```
     * The double-precision conversions (cvt.d.s/cvt.s.d) are MIPS float addition idiom - add in double precision for accuracy, convert back to single.
     */
halt_baddata();
}
