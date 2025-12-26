/**
 * FUN_00422f58
 *
 * Extracted from fsn.c lines 62464-62577
 * Ghidra address: 0x00422f58
 * Category: Other
 */

void FUN_00422f58(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  int iVar5;
  int unaff_gp;
  uint extraout_var;
  undefined8 in_f4;
  double dVar6;
  undefined4 uVar7;
  char cStackX_f;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar7 = (undefined4)((ulonglong)in_f4 >> 0x20);
  iVar2 = param_2[10];
  if ((iVar2 << 5 < 0) && (-1 < iVar2 << 0xb)) {
    if (iVar2 << 10 < 0) {
      sVar4 = (**(code **)(unaff_gp + -0x78c8) /* -> FUN_00429290 */)() /* =FUN_00429290 */;
      /* TODO: GP:-0x7d1c */ (**(code **)(unaff_gp + -0x7d1c) /* -> EXTERNAL_0x0f125630 */)((int)sVar4);
    }
    bVar1 = *(char *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0xc50) != '\0';
    if ((bVar1) && (bVar1 = param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 2 < 0, bVar1)) {
      bVar1 = *(char *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 5) != '\0';
    }
    cStackX_f = param_4;
    if (param_2[8] == 0) {
      cStackX_f = '\0';
    }
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(param_2[5],param_2[6]);
    if (bVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00422f58):
     * Function: FUN_00422f58
     *
     * Looking at this assembly:
     * 1. **What it does:** Checks bit flags at offset 40 of param a1 (file node). Tests bits 26, 20, and 21 to determine visibility/draw state. If bit 26 set, returns early. If bit 20 set, returns early. If bit 21 set, calls two GP-indirect functions (likely getgdesc/gselect for picking).
     * 2. **C pseudocode:**
     * ```c
     * void draw_file(void *param0, FileNode *node, int param2, int param3) {
     * uint flags = node->flags;  // offset 40
     * if (flags & 0x04000000)    // bit 26: hidden/skip flag
     * return;
     * if (flags & 0x00100000)    // bit 20: another skip condition
     * return;
     * if (flags & 0x00200000) {  // bit 21: picking/selection active
     * short gd = (short)getgdesc(GD_PICK_DETECTED);  // GP-0x8738
     * gselect(gd);                                    // GP-0x82e4
     * }
     * // continues with drawing...
     * }
     * ```
     * The bit shifts (sll by 5, 11, 10) followed by branch-on-sign are an IRIX/MIPS idiom to test specific bits - shifting the target bit into the sign position then branching on negative.
     */
halt_baddata();
    }
    if (param_3 != '\0') {
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(0);
      /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      iVar5 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
      iVar2 = param_2[1];
      if (iVar5->child_count /* was: *(int *)(iVar5 + 0x14) */ < (int)param_2[1]) {
        iVar2 = iVar5->child_count /* was: *(int *)(iVar5 + 0x14) */;
      }
      dVar6 = (double)iVar2 *
              (double)CONCAT44(uVar7,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x44ec));
      /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
                ((float)dVar6,
                 (float)((double)-iVar5->initial_val /* was: *(float *)(iVar5 + 0x70) */ /
                         (double)((ulonglong)(double)iVar2 & 0xffffffff00000000) -
                        (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                         *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x44e4))),
                 iVar2,iVar5,0x3cf5c28f);
      /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)-*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78)
      ;
      uVar7 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x44e0);
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
      iVar2 = *(int *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x14);
      if (iVar2 < (int)param_2[1]) {
        /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)((float)iVar2 / (float)(int)param_2[1]);
      }
      (**(code **)(unaff_gp + -0x7a08) /* -> FUN_004189b0 */)(*param_2) /* =FUN_004189b0 */;
      /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    }
    if (cStackX_f != '\0') {
      /* TODO: GP:-0x7d30 */ (**(code **)(unaff_gp + -0x7d30) /* -> EXTERNAL_0x0f12827c */)(0);
      /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      uVar7 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
      uVar3 = param_2[10];
      if ((int)(uVar3 << 3) < 0) {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + dcolorBoxes /* was: *(int *)(unaff_gp + -0x7688) */ /* -> dcolorBoxes */) + 0x10;
      }
      else {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + dcolorBoxes /* was: *(int *)(unaff_gp + -0x7688) */ /* -> dcolorBoxes */);
      }
      (**(code **)(unaff_gp + -0x794c) /* -> FUN_00422284 */)(iVar2,param_5,0x10) /* =FUN_00422284 */;
      /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
      /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      (**(code **)(unaff_gp + -0x77d8) /* -> FUN_00433c3c */)(param_2[8],&local_4,&local_8,&local_c,&local_10) /* =FUN_00433c3c */;
      uVar7 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
      /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(0xbf000000,0xbf000000);
      /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
                ((float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_c - (double)local_4)),
                 (float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_10 - (double)local_8)));
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00422f58):
     * Function: FUN_00422f58
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Converts an integer parameter (a0) to double, multiplies by a constant from GP-relative memory, negates a float from offset 112 of a1 (likely a struct field), divides by 2.0, subtracts another constant, then calls a function (likely `perspective` or similar GL setup) with the computed FOV parameters.
     * **C pseudocode:**
     * ```c
     * double scaled = (double)param_a0 * *(double*)(&gp_const_bb10);  // bb10/bb14 = double constant
     * float neg_fov = -*(float*)(a1 + 112);  // negate struct field at offset 0x70
     * double adjusted = ((double)neg_fov / 2.0) - *(double*)(&gp_const_bb18);  // bb18/bb1c = double constant
     * some_gl_func((float)scaled, (float)adjusted, 0.03f);  // 0x3cf5c28f ≈ 0.03
     * ```
     * The 0x4000_0000 loaded into $f18/$f19 is the double 2.0. The `lui a2,0x3cf5; ori a2,0xc28f` loads the float constant 0.03 (aspect ratio or near plane). This appears to be FOV/perspective calculation code, likely setting up the camera frustum based on window dimensions and a view angle from the context structure.
     */
halt_baddata();
    }
    uVar7 = *(undefined4 *)(fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ + 0x70);
    /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
    uVar3 = param_2[10];
    if ((int)(uVar3 << 3) < 0) {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + dcolorBoxes /* was: *(int *)(unaff_gp + -0x7688) */ /* -> dcolorBoxes */) + 0x10;
    }
    else {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + dcolorBoxes /* was: *(int *)(unaff_gp + -0x7688) */ /* -> dcolorBoxes */);
    }
    (**(code **)(unaff_gp + -0x794c) /* -> FUN_00422284 */)(iVar2,param_5,param_6) /* =FUN_00422284 */;
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    if ((int)(param_2[10] << 10) < 0) {
      /* TODO: GP:-0x7d1c */ (**(code **)(unaff_gp + -0x7d1c) /* -> EXTERNAL_0x0f125630 */)(0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00422f58):
     * Function: FUN_00422f58
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-31596 with f12=cvt.s.d(f16) and f14=cvt.s.d(f16/f8), then checks if stack values at sp+76 and sp+72 are both zero. If not both zero, calls GP-31584 with negated versions of those values.
     * 2. **C pseudocode:**
     * ```c
     * /* GP-31596 = translate() based on offset */
     * translate((float)some_double, (float)(f0_val / f8_val), 1.0f);
     * float rot_x = *(float*)(sp + 76);  /* rotation angle X */
     * float rot_y = *(float*)(sp + 72);  /* rotation angle Y */
     * if (!(rot_x == 0.0f && rot_y == 0.0f)) {
     * /* GP-31584 = rot() - apply rotation if any angle is non-zero */
     * rot(-rot_x, 'x');  /* or similar rotation call with negated angles */
     * /* Note: a2 = 0.0f passed as 3rd arg, f14 = -rot_y */
     * }
     * ```
     * The pattern suggests: after translating to position, apply rotation only if rotation angles are non-zero (optimization to skip identity rotation).
     */
halt_baddata();
}
