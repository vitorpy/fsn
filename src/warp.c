/**
 * warp.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "warp.h"
#include "window.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

void draw_warp(void)
{
  cpack(cpack_color);
  clear();
  swapbuffers();
  gflush();
}

void do_warp(int param_1)

{
  undefined1 local_c [4];
  float local_8;
  float local_4;
  
  set_main_gl_window();
  save_matrix_state();
  if (param_1 == 0) {
    if (*(int *)(curcontext + 0x3c) == 0) {
      set_camera_lookat((double)view_init_x,(double)view_init_y);
    }
    else {
      get_view_extents((void *)(long)*(int *)(curcontext + 0x3c),&local_4,&local_8,(int)(long)local_c);
      set_camera_lookat((double)local_4,(double)local_8);
    }
  }
  else {
    set_camera_lookat((double)camera_lookat_x,(double)camera_lookat_y);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)*(float *)(curcontext + 8) +
                         (double)((ulonglong)unaff_000010b0 << 0x20));
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)*(float *)(curcontext + 8) +
                         (double)((ulonglong)unaff_000010b0 << 0x20));
      v3f((float*)&fStack_28);
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
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f((float*)&fStack_28);
      cpack(current_packed_color);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
      v3f((float*)&fStack_28);
      endpolygon();
      shademodel(0);
      bgnpolygon();
      cpack(current_packed_color);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)*(float *)(curcontext + 8) +
                         (double)((ulonglong)unaff_000010b0 << 0x20));
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = (float)((double)((ulonglong)unaff_000010b0 << 0x20) +
                         (double)*(float *)(curcontext + 8));
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = *(float *)(curcontext + 8) + view_offset_z;
      v3f((float*)&fStack_28);
      endpolygon();
      shademodel(1);
      bgnpolygon();
      cpack(graphics_render_flags);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) - base_y_offset;
      fStack_20 = -0.5;
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) - base_y_offset;
      fStack_20 = -0.5;
      v3f((float*)&fStack_28);
      cpack(highlight_color);
      fStack_28 = (float)((double)*(float *)curcontext + unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f((float*)&fStack_28);
      fStack_28 = (float)((double)*(float *)curcontext - unaff_f20);
      fStack_24 = *(float *)(curcontext + 4) + view_offset_y;
      fStack_20 = -0.5;
      v3f((float*)&fStack_28);
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
  draw_file_icon((void *)(long)*param_3);
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
      render_file_icon((int)(long)param_3,iVar2,0,param_4 == '\0',uVar1,0x1f);
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
  process_pick_item((int)(long)param_3,param_4);
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void pickWarp(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_register_00001020;
  int iStack_40c;
  short asStack_3f0 [500];
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0;
  uStack_8 = 0;
  iVar5 = -1;
  iStack_40c = -1;
  pushmatrix();
  initnames();
  picksize(10,10);
  pick(asStack_3f0,500);
  gl_picking_setup_wrapper();
  scale((float)((double)((ulonglong)in_register_00001020 << 0x20) /
               (double)*(float *)(curcontext + 0x34)));
  rotate((int)*(short *)(curcontext + 0xe),0x78);
  rotate((int)*(short *)(curcontext + 0xc),0x7a);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  apply_context_changes((void *)(long)*(undefined4 *)(curcontext + 0x3c),1);
  iVar1 = endpick(asStack_3f0);
  popmatrix();
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (int)asStack_3f0[iVar3];
      if ((iVar2 == 1) && (iVar5 < 0)) {
        iVar5 = (int)asStack_3f0[iVar3 + 1];
      }
      iVar4 = iVar4 + 1;
      if (iVar2 == 2) {
        iStack_40c = (int)asStack_3f0[iVar3 + 2];
        iVar5 = (int)asStack_3f0[iVar3 + 1];
        break;
      }
      iVar3 = iVar3 + 1 + iVar2;
    } while (iVar4 != iVar1);
  }
  if ((-1 < iVar5) && (iStack_4 = get_item_by_index(iVar5), -1 < iStack_40c)) {
    if (iStack_4 == *(int *)(curcontext + 0x3c)) {
      uStack_8 = *(undefined4 *)(*(int *)(iStack_4 + 0x10) + iStack_40c * 4);
    }
    else {
      fprintf((FILE *)0xfb52904,"found file in another dir\n");
      iStack_4 = 0;
    }
  }
  *param_1 = iStack_4;
  *param_2 = uStack_8;
  *param_3 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findzoom_warp(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                  undefined2 *param_5,int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  float fVar1;
  undefined1 auStack_c [4];
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_7 = 0;
  *param_8 = 0;
  get_selection_params(&iStack_4,&iStack_8,(int)(long)auStack_c);
  if (iStack_4 == 0) {
    *param_7 = 1;
    *param_6 = 0;
  }
  else if (iStack_8 == 0) {
    if (iStack_4 == *(int *)(curcontext + 0x3c)) {
      clear_current_selection();
      *param_1 = camera_lookat_x;
      *param_2 = camera_lookat_y;
      *param_3 = camera_lookat_z;
      *param_4 = (short)camera_rotation_angle;
      *param_6 = *(int *)(curcontext + 0x3c);
    }
    else {
      *param_7 = 1;
      *param_6 = iStack_4;
    }
  }
  else if (iStack_4 == *(int *)(curcontext + 0x3c)) {
    get_item_screen_coords((undefined4*)iStack_8);
    fVar1 = *(float *)(iStack_8 + 0x14);
    *param_1 = (float)((double)fVar1 - (double)*(float *)(curcontext + 0x14) * (double)database_version)
    ;
    *param_2 = (float)(((double)*(float *)(iStack_8 + 0x18) +
                       (double)*(float *)(iStack_4 + 0x3c) /
                       (double)((ulonglong)(double)fVar1 & 0xffffffff00000000)) -
                      (double)*(float *)(curcontext + 0x18) * (double)database_version);
    if (overlay_mode_flag == '\0') {
      *param_3 = overlay_position_offset + *(float *)(iStack_8 + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = layout_offset_base + layout_height_adjust;
    }
    *param_4 = (short)layout_short_value;
    *param_6 = *(int *)(curcontext + 0x3c);
    *param_8 = 1;
  }
  else {
    fprintf((FILE *)0xfb52904,"found file in another dir\n");
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/* highlightDirWarp and highlightFileWarp are defined in highlight.c */

void warpZoomToFile(int param_1,int param_2)

{
  uint uVar1;
  undefined8 in_f18;
  
  uVar1 = (uint)((ulonglong)in_f18 >> 0x20);
  if (param_1 != 0) {
    if (param_1 != *(int *)(curcontext + 0x3c)) {
      do_warp(param_1);
    }
    if (param_2 != 0) {
      set_camera_lookat((double)*(float *)(param_2 + 0x14) -
                   (double)*(float *)(curcontext + 0x14) * (double)database_version,
                   ((double)*(float *)(param_2 + 0x18) +
                   (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar1 << 0x20)) -
                   (double)*(float *)(curcontext + 0x18) * (double)database_version);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_warp_entry(int param_1,float *param_2,float *param_3)

{
  uint in_register_00001000;
  
  *param_2 = (float)((double)*(float *)(param_1 + 0x34) -
                    (double)*(float *)(curcontext + 0x14) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)layout_spacing_height));
  *param_3 = (float)((double)*(float *)(param_1 + 0x38) -
                    (double)*(float *)(curcontext + 0x18) *
                    ((double)*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)in_register_00001000 << 0x20) + (double)layout_spacing_height));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
