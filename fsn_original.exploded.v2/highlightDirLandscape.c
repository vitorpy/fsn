/**
 * highlightDirLandscape
 *
 * Extracted from fsn.c lines 64090-64142
 * Category: Filesystem
 */

void highlightDirLandscape(int param_1)

{
  int iVar1;
  double dVar2;
  float fVar3;
  uint in_register_00001080;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if (param_1 != curcontext->current_dir /* was: *(int *)(curcontext + 0x44) */) {
    pushmatrix();
    translate(param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */,param_1->pos_y /* was: *(undefined4 *)(param_1 + 0x38) */);
    scale(param_1->scale /* was: *(undefined4 *)(param_1 + 0x58) */);
    if (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 0xd) {
      scale(param_1->height /* was: *(undefined4 *)(param_1 + 0x3c) */,param_1->height /* was: *(undefined4 *)(param_1 + 0x3c) */);
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00426ee8):
     * Function: highlightDirLandscape
     *
     * Looking at this assembly:
     * 1. **What it does**: Compares input node (a0) against curcontext->highlightedDir (offset 0x44). If equal, returns early. Otherwise calls pushmatrix(), then translate3d() with node's X/Y coords (offsets 0x34, 0x38) and Z=0, then calls scale() with node's scale factor (offset 0x58) and 1.0f for Y.
     * 2. **C pseudocode**:
     * ```c
     * void highlightDirLandscape(DirNode *node) {
     * if (node == curcontext->highlightedDir)  // offset 0x44
     * return;
     * pushmatrix();
     * translate(node->x, node->y, 0.0f);  // offsets 0x34, 0x38
     * scale(node->scale, 1.0f, ...);      // offset 0x58
     * // ... continues with highlight drawing
     * }
     * ```
     * Key GP lookups:
     * - GP-30340 (0x897c): curcontext pointer
     * - GP-31560 (0x84b8): pushmatrix
     * - GP-31584 (0x84a0): translate (3 floats)
     * - GP-31596 (0x8494): scale
     */
halt_baddata();
    }
    fVar3 = (float)((double)-param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                   (double)((ulonglong)in_register_00001080 << 0x20));
    rect(fVar3,fVar3);
    popmatrix();
    iVar1 = param_1->child_center /* was: *(int *)(param_1 + 0x28) */;
    if (iVar1 != 0) {
      fStack_c = iVar1->pos_x /* was: *(float *)(iVar1 + 0x34) */ + param_1->offset_x /* was: *(float *)(param_1 + 0x4c) */;
      uStack_10 = 0xbd4ccccd;
      dVar2 = (double)iVar1->pos_y /* was: *(float *)(iVar1 + 0x38) */ + (double)param_1->offset_y /* was: *(float *)(param_1 + 0x50) */;
      fStack_8 = (float)dVar2;
      uStack_18 = param_1->pos_x /* was: *(undefined4 *)(param_1 + 0x34) */;
      fStack_14 = (float)((double)param_1->pos_y /* was: *(float *)(param_1 + 0x38) */ -
                         (double)param_1->height /* was: *(float *)(param_1 + 0x3c) */ /
                         (double)((ulonglong)dVar2 & 0xffffffff00000000));
      uStack_4 = uStack_10;
      bgnline();
      v3f(&fStack_c);
      v3f(&uStack_18);
      endline();
      color(0);
      pushmatrix();
      translate(iVar1->pos_x /* was: *(undefined4 *)(iVar1 + 0x34) */,iVar1->pos_y /* was: *(undefined4 *)(iVar1 + 0x38) */);
      scale(iVar1->height /* was: *(float *)(iVar1 + 0x3c) */ * iVar1->scale /* was: *(float *)(iVar1 + 0x58) */);
      FUN_00422284(0,0,0x1f);
      popmatrix();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00426ee8):
     * Function: highlightDirLandscape
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function at GP-31052 with args (a0, 1, t4), then calls endline() at GP-31528. If s0->child (offset 40) is non-null, computes spotlight position by adding child's position (offsets 52, 56) to parent's position (offsets 76, 80), and loads a global float from GP-32676 offset -17532.
     * 2. **C pseudocode:**
     * ```c
     * some_func(a0, 1, t4);  // GP-31052 - likely cpack() or similar
     * endline();             // GP-31528
     * child = s0->child;     // offset 0x28 = 40
     * if (child != NULL) {
     * spotlight_x = child->x + s0->offset_x;  // offsets 52+76
     * spotlight_z = child->z + s0->offset_z;  // offsets 56+80
     * height = global_spotlight_height;       // GP-32676, -17532
     * // continues to draw spotlight at (spotlight_x, height, spotlight_z)
     * }
     * ```
     * The GP-31052 call is likely `cpack(color, 1, t4)` setting spotlight color before the geometry. The structure offsets match FSN's directory node layout where 0x28 is child pointer, 0x34/0x38 are child coords, 0x4C/0x50 are parent offsets.
     */
halt_baddata();
}
