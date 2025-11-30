/**
 * draw_warp_directory
 *
 * Extracted from fsn.c lines 42550-42776
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
    fVar8 = icon_size_multiplier * *(float *)(curcontext + 0x34);
    if (grid_display_flag == '\0') {
      cpack(highlight_packed_color);
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
      cpack(graphics_state_mode);
      unaff_f20 = (double)fVar8;
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      cpack(current_packed_color);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
      v3f(&fStack_28);
      endpolygon();
      shademodel(0);
      bgnpolygon();
      cpack(current_packed_color);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
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
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
      v3f(&fStack_28);
      endpolygon();
      shademodel(1);
      bgnpolygon();
      cpack(graphics_render_flags);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) - base_y_offset;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) - base_y_offset;
      fStack_20 = -0.5;
      v3f(&fStack_28);
      cpack(highlight_color);
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
              *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
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
    cpack(monitor_label_color);
    lVar6 = (ulonglong)uVar5 << 0x20;
    lVar12 = (ulonglong)uVar10 << 0x20;
    translate(lVar6,lVar12);
    fVar8 = (float)((double)-(float)param_3[0xf] / dVar16 - (double)layout_z_offset);
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
  rotate((int)-*(short *)(curcontext + 0xe),0x78);
  lVar6 = CONCAT44(uVar9,0x3cf5c28f);
  dVar15 = (double)CONCAT44(uVar11,0x3cf5c28f);
  scale(lVar6,dVar15);
  draw_file_icon(*param_3);
  popmatrix();
  iVar3 = 0;
  if (0 < (int)param_3[3]) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_3[4] + iVar4);
      pushname((int)(short)iVar3);
      if (param_4 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (param_4 == '\0') {
        uVar1 = *(int *)(iVar2 + 0x28) << 9 < 0;
      }
      else {
        uVar1 = 4;
      }
      render_file_icon(param_3,iVar2,0,param_4 == '\0',uVar1,0x1f);
      uVar9 = (undefined4)((ulonglong)dVar15 >> 0x20);
      uVar5 = (uint)((ulonglong)lVar6 >> 0x20);
      if (*(int *)(iVar2 + 0x28) << 3 < 0) {
        pushmatrix();
        translate((ulonglong)uVar5 << 0x20,
                  CONCAT44(uVar9,(float)((double)-(float)param_3[0xf] / dVar16)));
        dVar15 = (double)(float)param_3[0xf] * dVar16;
        lVar6 = (ulonglong)unaff_000010b0 << 0x20;
        draw_scaled_element(lVar6,dVar15);
        popmatrix();
        if (0 < iVar3) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        if (iVar3 < param_3[3] + -1) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
      }
      iVar3 = iVar3 + 1;
      popname();
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)param_3[3]);
  }
  process_pick_item(param_3,param_4);
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
