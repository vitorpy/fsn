/**
 * FUN_00419424
 *
 * Extracted from fsn.c lines 56762-57006
 * Ghidra address: 0x00419424
 * Category: Other
 */

void FUN_00419424(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  float *pfVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_gp;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  double dVar16;
  double unaff_f20;
  double dVar17;
  uint unaff_000010b0;
  undefined4 uVar18;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float fVar10;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_4 == '\0') {
    piVar6 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
    iVar4 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
    fVar10 = *(float *)(iVar4 + 0x110) * *(float *)(*piVar6 + 0x34);
    if (*(char *)(iVar4 + 4) == '\0') {
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar4 + 0x148));
      /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
      unaff_f20 = (double)fVar10;
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      uVar18 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x50bc);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
    }
    else {
      /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(1);
      /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar4 + 0x150));
      unaff_f20 = (double)fVar10;
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar4 + 0x14c));
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
      /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(0);
      /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar4 + 0x14c));
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      uVar18 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x50c4);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
      /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(1);
      /* TODO: GP:-0x7dc4 */ (**(code **)(unaff_gp + -0x7dc4) /* -> EXTERNAL_0x0f124dfc */)();
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar4 + 0x15c));
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] - *(float *)(iVar4 + 0x118);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] - *(float *)(iVar4 + 0x118);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar4 + 0x158));
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      /* TODO: GP:-0x7dc0 */ (**(code **)(unaff_gp + -0x7dc0) /* -> EXTERNAL_0x0f124a60 */)(&local_28);
      /* TODO: GP:-0x7dbc */ (**(code **)(unaff_gp + -0x7dbc) /* -> EXTERNAL_0x0f1243d0 */)();
      /* TODO: GP:-0x7cc8 */ (**(code **)(unaff_gp + -0x7cc8) /* -> EXTERNAL_0x0f126938 */)(0);
    }
  }
  piVar6 = curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */;
  iVar4 = *piVar6;
  iVar5 = fsn_resources /* was: *(int *)(unaff_gp + -0x75dc) */ /* -> fsn_resources */;
  local_18 = *(float *)(iVar4 + 4) -
             iVar4->child_array /* was: *(float *)(iVar4 + 0x18) */ * iVar4->_field_20 /* was: *(float *)(iVar4 + 0x20) */ * *(float *)(iVar4 + 8);
  /* TODO: GP:-0x7e1c */ (**(code **)(unaff_gp + -0x7e1c) /* -> EXTERNAL_0x0f1283cc */)((int)*(short *)((int)param_3 + 0x5e));
  /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  dVar17 = (double)((ulonglong)unaff_f20 & 0xffffffff00000000);
  lVar8 = (ulonglong)uVar7 << 0x20;
  uVar9 = CONCAT44(uVar11,(float)((double)(float)param_3[0xf] / dVar17));
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(lVar8,uVar9);
  uVar12 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar7 = (uint)((ulonglong)lVar8 >> 0x20);
  if ((int)(param_3[0x1d] << 0xb) < 0) {
    /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(iVar5 + 0x174));
    lVar8 = (ulonglong)uVar7 << 0x20;
    lVar13 = (ulonglong)uVar12 << 0x20;
    /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(lVar8,lVar13);
    fVar10 = (float)((double)-(float)param_3[0xf] / dVar17 - (double)iVar5->_field_60 /* was: *(float *)(iVar5 + 0x60) */);
    uVar9 = CONCAT44((int)((ulonglong)lVar8 >> 0x20),fVar10);
    uVar14 = CONCAT44((int)((ulonglong)lVar13 >> 0x20),fVar10);
    /* TODO: GP:-0x7e20 */ (**(code **)(unaff_gp + -0x7e20) /* -> EXTERNAL_0x0f1273b8 */)(uVar9,uVar14);
    uVar12 = (uint)((ulonglong)uVar14 >> 0x20);
    uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
    /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  }
  /* TODO: GP:-0x7b9c */ (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(*(undefined4 *)(**(int **)(unaff_gp + -0x768c) /* -> boxDir */ + 0x10));
  if ((int)(param_3[0x1d] << 0xd) < 0) {
    dVar16 = (double)-(float)param_3[0xf] / dVar17;
    uVar9 = CONCAT44(uVar7,(float)dVar16);
    uVar14 = CONCAT44(uVar12,(float)dVar16);
    /* TODO: GP:-0x7df0 */ (**(code **)(unaff_gp + -0x7df0) /* -> EXTERNAL_0x0f1253e4 */)(uVar9,uVar14);
    uVar18 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  else {
    dVar16 = (double)-(float)param_3[0xf] / dVar17;
    uVar9 = CONCAT44(uVar7,(float)dVar16);
    uVar14 = CONCAT44(uVar12,(float)dVar16);
    /* TODO: GP:-0x7e20 */ (**(code **)(unaff_gp + -0x7e20) /* -> EXTERNAL_0x0f1273b8 */)(uVar9,uVar14);
    uVar18 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
  dVar16 = (double)(int)param_3[1] *
           (double)CONCAT44(uVar15,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x50b4));
  uVar9 = CONCAT44(uVar11,(float)dVar16);
  uVar14 = CONCAT44(uVar18,(float)((double)-(float)param_3[0xf] / dVar17 -
                                  (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                                   *(undefined4 *)
                                                    (*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x50ac))));
  /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(uVar9,uVar14);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  /* TODO: GP:-0x7b68 */ (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)-*(short *)(*piVar6 + 0xe),0x78);
  uVar18 = *(undefined4 *)(DAT_10010000 /* was: *(int *)(unaff_gp + -0x7fa4) */ /* -> DAT_10010000 */ + -0x50a8);
  lVar8 = CONCAT44(uVar11,uVar18);
  dVar16 = (double)CONCAT44(uVar15,uVar18);
  /* TODO: GP:-0x7b6c */ (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(lVar8,dVar16);
  (**(code **)(unaff_gp + -0x7a08) /* -> FUN_004189b0 */)(*param_3) /* =FUN_004189b0 */;
  /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
  iVar4 = 0;
  if (0 < (int)param_3[3]) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_3[4] + iVar5);
      /* TODO: GP:-0x7db0 */ (**(code **)(unaff_gp + -0x7db0) /* -> EXTERNAL_0x0f1276ac */)((int)(short)iVar4);
      if (param_4 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00419424):
     * Function: FUN_00419424
     *
     * Looking at this assembly:
     * 1. **What it does**: Function prologue saves registers, checks if byte arg a1[3] (high byte of second param) is non-zero to branch to address 0x419be0. If zero, loads globals via GP, fetches floats from curcontext[0]->offset_52 and another_global->offset_272, multiplies them (as doubles), converts result back to float in $f22.
     * 2. **C pseudocode**:
     * ```c
     * void FUN_00419424(void *a0, int a1) {
     * unsigned char flag = (a1 >> 24) & 0xff;  // high byte of a1
     * if (flag != 0) {
     * goto label_419be0;  // alternate code path
     * }
     * void **curcontext = *(void**)GP[-30340];  // s6 = curcontext
     * void *param_struct = *(void**)GP[-30172]; // s3 = some param struct
     * float scale = *(float*)(param_struct + 272);      // offset 0x110
     * float context_val = *(float*)((*curcontext) + 52); // offset 0x34
     * float f22 = (float)((double)scale * (double)context_val);
     * unsigned char another_flag = *(unsigned char*)(param_struct + 4);
     * if (another_flag == 0) {
     * goto label_419a30;  // another branch
     * }
     * // continues with f22 result...
     * }
     * ```
     * The GP offsets likely resolve to: -30340 → `curcontext`, -30172 → possibly `viewparams` or similar rendering parameters struct. The float at offset 272 (0x110) is likely a scale factor, and offset 52 (0x34) in the context is a view/zoom value.
     */
halt_baddata();
      }
      if (param_4 == '\0') {
        uVar2 = iVar3->child_center /* was: *(int *)(iVar3 + 0x28) */ << 9 < 0;
      }
      else {
        uVar2 = 4;
      }
      (**(code **)(unaff_gp + -0x7948) /* -> FUN_00422f58 */)(param_3,iVar3,0,param_4 == '\0',uVar2,0x1f) /* =FUN_00422f58 */;
      uVar11 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar7 = (uint)((ulonglong)lVar8 >> 0x20);
      if (iVar3->child_center /* was: *(int *)(iVar3 + 0x28) */ << 3 < 0) {
        /* TODO: GP:-0x7b48 */ (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
        /* TODO: GP:-0x7b60 */ (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
                  ((ulonglong)uVar7 << 0x20,
                   CONCAT44(uVar11,(float)((double)-(float)param_3[0xf] / dVar17)));
        dVar16 = (double)(float)param_3[0xf] * dVar17;
        lVar8 = (ulonglong)unaff_000010b0 << 0x20;
        (**(code **)(unaff_gp + -0x78f8) /* -> FUN_00427a3c */)(lVar8,dVar16) /* =FUN_00427a3c */;
        /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
        if (0 < iVar4) {
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00419424):
     * Function: FUN_00419424
     *
     * Looking at this assembly:
     * 1. **What it does:** Computes a 3D position by subtracting f20 from one coordinate and adding offsets from s3 (likely a context/node struct at offsets +276, +268) to coordinates from v0 (another struct at offsets +4, +8). Stores results to stack at sp+168/172/176 (likely a float[3] position array). Then makes two indirect calls via GP.
     * 2. **C pseudocode:**
     * ```c
     * float pos[3];
     * pos[0] = (float)((double)v0->x - f20_offset);           // sp+168
     * pos[1] = (float)((double)v0->y + (double)s3->offset_276); // sp+172, s3+0x114
     * pos[2] = (float)((double)v0->z + (double)s3->offset_268); // sp+176, s3+0x10c
     * some_func(s0);  // jalr t9 with a0=s0
     * another_func(); // jalr t9 via gp-32188
     * ```
     * The double conversions (cvt.d.s/cvt.s.d) are MIPS's way of doing float math with higher precision - common SGI compiler pattern. The s3 struct offsets (+268=0x10c, +276=0x114) suggest view/camera offset fields in a context structure.
     */
halt_baddata();
        }
        if (iVar4 < param_3[3] + -1) {
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00419424):
     * Function: FUN_00419424
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Loads 6 floats from a structure at offsets 0,4,8,20,24,32 (likely a camera/transform struct), converts to double precision, computes `result = struct[0] - (struct[20] * struct[32] * struct[8])`, then converts back to single precision float.
     * **C pseudocode:**
     * ```c
     * float *ctx = *(float **)curcontext;  // s6 = curcontext
     * float f0 = ctx[0];      // offset 0
     * float f4 = ctx[1];      // offset 4
     * float f8 = ctx[2];      // offset 8
     * float f20 = ctx[5];     // offset 20
     * float f32 = ctx[8];     // offset 32
     * // f22 = f0 - (f20 * f32 * f8)
     * float result = f0 - (f20 * f32 * f8);
     * ```
     * This looks like a camera/view calculation - possibly computing an adjusted X coordinate by subtracting a scaled offset (scale * aspect * something) from a base position. The offsets 8, 20, 32 suggest this is operating on curcontext camera fields (likely fov_x, aspect, and a zoom/distance factor).
     */
halt_baddata();
        }
      }
      iVar4 = iVar4 + 1;
      /* TODO: GP:-0x7de8 */ (**(code **)(unaff_gp + -0x7de8) /* -> EXTERNAL_0x0f1266ec */)();
      iVar5 = iVar5 + 4;
    } while (iVar4 < (int)param_3[3]);
  }
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x6e64))(param_3,param_4);
  /* TODO: GP:-0x7b28 */ (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00419424):
     * Function: FUN_00419424
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Calculates relative Z position by subtracting view offset and node height from a base value, takes absolute value. Loads parameters for a function call (a0=s4, a1=s0, a2/a3 from stack), then conditionally branches based on s5 to compare a node's Z coordinate against a threshold.
     * **C pseudocode:**
     * ```c
     * float base_z = (double)node->offset_60;
     * float rel_z = (float)((double)sp_128 - (base_z / scale_factor) - (double)item->height_24);
     * float abs_rel_z = fabsf(rel_z);
     * a0 = s4_node;
     * a1 = s0_item;
     * a2 = sp_152;
     * a3 = sp_156;
     * flag = sp_215;
     * if (s5 != 0) {
     * float threshold = context->field_176;
     * float node_z = (*s6_ptr)->z_coord;
     * if ((double)node_z < (double)threshold) {
     * a2 = 0;  // Clear parameter if behind threshold
     * }
     * }
     * ```
     * The code appears to be computing view-relative coordinates for culling/LOD decisions in the warp directory rendering, checking if child nodes are behind the camera or beyond a visibility threshold.
     */
halt_baddata();
}
