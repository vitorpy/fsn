/**
 * draw_warp_directory
 *
 * Extracted from fsn.c lines 56529-56755
 * Category: Graphics
 */

void draw_warp_directory(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  double dVar15;
  double unaff_f20;
  double dVar16;
  uint unaff_000010b0;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fVar8;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_4 == '\0') {
    fVar8 = DAT_100175a0 * curcontext->scale_factor /* was: *(float *)(curcontext + 0x34) */;
    if (DAT_10017494 == '\0') {
      cpack(DAT_100175d8);
      bgnpolygon();
      unaff_f20 = (double)fVar8;
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)*(float *)(curcontext + 8) +
                         (double)((ulonglong)unaff_000010b0 << 0x20));
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)*(float *)(curcontext + 8) +
                         (double)((ulonglong)unaff_000010b0 << 0x20));
      v3f(&fStack_28);
      endpolygon();
    }
    else {
      shademodel(1);
      bgnpolygon();
      cpack(DAT_100175e0);
      unaff_f20 = (double)fVar8;
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      cpack(DAT_100175dc);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + DAT_1001759c;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + DAT_1001759c;
      v3f(&fStack_28);
      endpolygon();
      shademodel(0);
      bgnpolygon();
      cpack(DAT_100175dc);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + DAT_1001759c;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)*(float *)(curcontext + 8) +
                         (double)((ulonglong)unaff_000010b0 << 0x20));
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)*(float *)(curcontext + 8) +
                         (double)((ulonglong)unaff_000010b0 << 0x20));
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + DAT_1001759c;
      v3f(&fStack_28);
      endpolygon();
      shademodel(1);
      bgnpolygon();
      cpack(DAT_100175ec);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) - DAT_100175a8;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) - DAT_100175a8;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      cpack(DAT_100175e8);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      endpolygon();
      shademodel(0);
    }
  }
  fStack_18 = *(float *)(curcontext + 4) -
              curcontext->cos_z /* was: *(float *)(curcontext + 0x18) */ * curcontext->sin_x /* was: *(float *)(curcontext + 0x20) */ *
              *(float *)(curcontext + 8);
  loadname((int)*(short *)((int)param_3 + 0x5e));
  pushmatrix();
  dVar16 = (double)((ulonglong)unaff_f20 & 0xffffffff00000000);
  lVar6 = (ulonglong)uVar5 << 0x20;
  uVar7 = CONCAT44(uVar9,(float)((double)(float)param_3[0xf] / dVar16));
  translate(lVar6,uVar7);
  uVar10 = (uint)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)((ulonglong)lVar6 >> 0x20);
  if ((int)(param_3[0x1d] << 0xb) < 0) {
    pushmatrix();
    cpack(DAT_10017604);
    lVar6 = (ulonglong)uVar5 << 0x20;
    lVar12 = (ulonglong)uVar10 << 0x20;
    translate(lVar6,lVar12);
    fVar8 = (float)((double)-(float)param_3[0xf] / dVar16 - (double)DAT_100174f0);
    uVar7 = CONCAT44((int)((ulonglong)lVar6 >> 0x20),fVar8);
    uVar13 = CONCAT44((int)((ulonglong)lVar12 >> 0x20),fVar8);
    rectf(uVar7,uVar13);
    uVar10 = (uint)((ulonglong)uVar13 >> 0x20);
    uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
    popmatrix();
  }
  cpack(*(undefined4 *)(boxDir + 0x10));
  if ((int)(param_3[0x1d] << 0xd) < 0) {
    dVar15 = (double)-(float)param_3[0xf] / dVar16;
    uVar7 = CONCAT44(uVar5,(float)dVar15);
    uVar13 = CONCAT44(uVar10,(float)dVar15);
    rect(uVar7,uVar13);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  else {
    dVar15 = (double)-(float)param_3[0xf] / dVar16;
    uVar7 = CONCAT44(uVar5,(float)dVar15);
    uVar13 = CONCAT44(uVar10,(float)dVar15);
    rectf(uVar7,uVar13);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
  }
  pushmatrix();
  dVar15 = (double)(int)param_3[1] * (double)CONCAT44(uVar14,0x70a3d70a);
  uVar7 = CONCAT44(uVar9,(float)dVar15);
  uVar13 = CONCAT44(uVar11,(float)((double)-(float)param_3[0xf] / dVar16 -
                                  (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),0x9999999a)));
  translate(uVar7,uVar13);
  uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  rotate((int)-curcontext->rotation_x /* was: *(short *)(curcontext + 0xe) */,0x78);
  lVar6 = CONCAT44(uVar9,0x3cf5c28f);
  dVar15 = (double)CONCAT44(uVar11,0x3cf5c28f);
  scale(lVar6,dVar15);
  FUN_004189b0(*param_3);
  popmatrix();
  iVar3 = 0;
  if (0 < (int)param_3[3]) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_3[4] + iVar4);
      pushname((int)(short)iVar3);
      if (param_4 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00419418):
     * Function: draw_warp_directory
     *
     * Looking at this assembly:
     * 1. **What it does:** Function prologue saves registers, checks byte at offset 215 (the `param_2` flag byte - likely a visibility/skip flag), and if non-zero jumps to near-end (0x419be0). Otherwise loads curcontext pointer, gets context[0x110/4] (float at offset 272), multiplies by context->field_52 (float at offset 52), and checks byte at offset 4 of s3.
     * 2. **C pseudocode:**
     * ```c
     * void draw_warp_directory(DirNode *node, int flags) {
     * unsigned char skip_flag = (flags >> 24) & 0xff;  // high byte of param_2
     * if (skip_flag != 0) {
     * goto cleanup_return;  // skip drawing entirely
     * }
     * Context *ctx = *curcontext;
     * float scale_base = curcontext_globals[0x44];  // offset 0x110 = 272
     * float field_52 = ctx->field_0x34;             // offset 52
     * double scaled = (double)scale_base * (double)field_52;
     * unsigned char byte4 = curcontext_globals_byte[4];
     * // ... continues with warp effect calculations
     * ```
     * The `halt_baddata` likely occurred because Ghidra struggled with the mixed integer/float register usage and the early conditional branch that skips most of the function body. The offset 215 (0xd7) from sp corresponds to extracting a byte from the second parameter after it's stored at sp+212 (0xd4).
     */
halt_baddata();
      }
      if (param_4 == '\0') {
        uVar1 = iVar2->child_center /* was: *(int *)(iVar2 + 0x28) */ << 9 < 0;
      }
      else {
        uVar1 = 4;
      }
      FUN_00422f58(param_3,iVar2,0,param_4 == '\0',uVar1,0x1f);
      uVar9 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar5 = (uint)((ulonglong)lVar6 >> 0x20);
      if (iVar2->child_center /* was: *(int *)(iVar2 + 0x28) */ << 3 < 0) {
        pushmatrix();
        translate((ulonglong)uVar5 << 0x20,
                  CONCAT44(uVar9,(float)((double)-(float)param_3[0xf] / dVar16)));
        dVar15 = (double)(float)param_3[0xf] * dVar16;
        lVar6 = (ulonglong)unaff_000010b0 << 0x20;
        FUN_00427a3c(lVar6,dVar15);
        popmatrix();
        if (0 < iVar3) {
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00419418):
     * Function: draw_warp_directory
     *
     * ## Analysis
     * **What it does:**
     * Loads a 3D position from pointer in v0, applies coordinate transformations using offsets from s3 (context), stores result at sp+168/172/176 (local float array), then calls two functions via GP (likely pushmatrix and translate or similar GL setup).
     * **C pseudocode:**
     * ```c
     * float *pos = (float *)v0;  // source position
     * float transformed[3];
     * transformed[0] = pos[0] - warp_offset_x;           // sp+168: X minus f20 (double precision intermediate)
     * transformed[1] = pos[1] + s3->field_0x114;         // sp+172: Y plus context offset 276
     * transformed[2] = pos[2] + s3->field_0x10c;         // sp+176: Z plus context offset 268
     * pushmatrix();              // GP-0x7dc0 = gp[-32192]
     * translate(s0, ...);        // GP-0x7dbc = gp[-32188], a0=s0, likely uses transformed coords
     * ```
     * Note: f20 register holds a double value subtracted from X coord. The s3 struct offsets 0x10c (268) and 0x114 (276) are likely view/warp offset floats. The pattern of cvt.d.s/operation/cvt.s.d shows double-precision arithmetic for accuracy before storing as single floats.
     */
halt_baddata();
        }
        if (iVar3 < param_3[3] + -1) {
                    // WARNING: Bad instruction - Truncating control flow here
              /*
     * BADDATA ANALYSIS (from binary @ 0x00419418):
     * Function: draw_warp_directory
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Loads a context pointer from global (s6), extracts float values from offsets 0, 4, 8, 20, 24, 32 of the context struct, converts to double precision, and computes: `result = context->x - (context->scale_y * context->scale_z * context->offset_x)` (approximate - computing a transformed coordinate).
     * **C pseudocode:**
     * ```c
     * /* After jalr call, reload gp and call another function at gp-32188 (likely endline) */
     * endline();
     * /* Load curcontext and compute warp position */
     * ctx = *curcontext;  /* s6 = curcontext global */
     * f2 = (double)ctx[8];   /* offset 32 - likely scale or warp factor */
     * f0 = (double)ctx[2];   /* offset 8 */
     * f4 = (double)ctx[5];   /* offset 20 */
     * f10 = f4 * f2;         /* scale product */
     * f6 = f10 * f0;         /* triple product */
     * x_base = (double)ctx[0];  /* offset 0 */
     * y_base = (double)ctx[1];  /* offset 4 */
     * result = x_base - f6;     /* subtract scaled offset */
     * /* continues loading offset 24... */
     * ```
     * The pattern suggests computing a warped/transformed 3D coordinate from the context's position and scale fields, likely for the directory warp animation effect.
     */
halt_baddata();
        }
      }
      iVar3 = iVar3 + 1;
      popname();
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)param_3[3]);
  }
  FUN_0041919c(param_3,param_4);
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00419418):
     * Function: draw_warp_directory
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Computes interpolated Z position during warp animation. Calculates delta from node offset (s4+60) divided by time factor (f20), subtracts from base position (sp+132) and current node Z (s0+24). Takes absolute values for comparison, then branches based on s5 flag.
     * **C pseudocode:**
     * ```c
     * float node_offset = *(float*)(s4 + 60);  // lwc1 f8,60(s4)
     * double delta = (double)node_offset / time_factor;  // div.d f10,f6,f20
     * float base_z = *(float*)(sp + 132);  // lwc1 f18,132(sp)
     * float cur_z = *(float*)(s0 + 24);    // lwc1 f8,24(s0)
     * float abs_delta1 = fabsf((float)(prev_diff));  // abs.s f2,f0
     * double interp_z = (double)base_z - delta - (double)cur_z;  // sub.d sequence
     * float abs_delta2 = fabsf((float)interp_z);  // abs.s f0,f0
     * if (s5 != 0) {  // beqz s5 branches to skip
     * t5 = *s6;
     * float threshold = *(float*)(s3 + 0xb0);  // 176
     * float node_val = *(float*)(t5 + 8);
     * if ((double)node_val < (double)threshold) {
     * a2 = 0;
     * }
     * }
     * ```
     * The code interpolates a Z coordinate for warp animation, comparing node positions against a threshold (likely visibility/culling check).
     */
halt_baddata();
}
