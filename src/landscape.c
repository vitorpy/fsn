/**
 * landscape.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "landscape.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

void pickLandscape(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  undefined8 in_f4;
  int iStack_7fc;
  short asStack_7dc [500];
  short asStack_3f4 [500];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  uVar11 = (uint)((ulonglong)in_f4 >> 0x20);
  iStack_4 = 0;
  uStack_8 = 0;
  uStack_c = 0;
  iVar9 = -1;
  iVar8 = -1;
  iStack_7fc = -1;
  pushmatrix();
  initnames();
  picksize(5,5);
  pick(asStack_3f4,500);
  gl_picking_setup_wrapper();
  scale((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(curcontext + 0x34)));
  rotate((int)*(short *)(curcontext + 0xe),0x78);
  rotate((int)*(short *)(curcontext + 0xc),0x7a);
  fVar10 = powf(zoom_base_factor,
                (*(float *)(curcontext + 4) -
                *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                *(float *)(curcontext + 8)) / zoom_reference_height);
  scale(fVar10);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  set_render_flag(1);
  iVar2 = endpick(asStack_3f4);
  popmatrix();
  pushmatrix();
  initnames();
  pick(asStack_7dc,500);
  uVar11 = 0;
  gl_picking_setup_wrapper();
  scale((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(curcontext + 0x34)));
  rotate((int)*(short *)(curcontext + 0xe),0x78);
  rotate((int)*(short *)(curcontext + 0xc),0x7a);
  fVar10 = powf(zoom_base_factor,
                (*(float *)(curcontext + 4) -
                *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                *(float *)(curcontext + 8)) / zoom_reference_height);
  scale(fVar10,0x3f800000);
  translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
  iVar5 = 0;
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = asStack_3f4[iVar5];
      if (sVar1 == 1) {
        uVar3 = get_item_by_index((int)asStack_3f4[iVar5 + 1]);
        render_tree_level(uVar3);
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 1 + (int)sVar1;
    } while (iVar7 != iVar2);
  }
  iVar7 = 0;
  iVar5 = 0;
  traverse_directories(topdir);
  iVar2 = endpick(asStack_7dc);
  popmatrix();
  if (0 < iVar2) {
    do {
      iVar6 = (int)asStack_7dc[iVar5];
      psVar4 = asStack_7dc + iVar5 + 1;
      if (iVar6 == 2) {
        if (*psVar4 == 1) {
          if (iVar9 < 0) {
            iVar9 = (int)asStack_7dc[iVar5 + 2];
          }
        }
        else if ((*psVar4 == 2) && (iVar8 < 0)) {
          iVar8 = (int)asStack_7dc[iVar5 + 2];
        }
      }
      if ((iVar6 == 3) && (*psVar4 = 2, *psVar4 != 0)) {
        iStack_7fc = (int)asStack_7dc[iVar5 + 3];
        iVar8 = (int)asStack_7dc[iVar5 + 2];
        break;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 1 + iVar6;
    } while (iVar7 != iVar2);
  }
  if (iStack_7fc < 0) {
    if (iVar8 < 0) {
      if (-1 < iVar9) {
        uStack_c = get_item_by_index(iVar9);
      }
    }
    else {
      iStack_4 = get_item_by_index(iVar8);
    }
  }
  else {
    iStack_4 = get_item_by_index(iVar8);
    uStack_8 = *(undefined4 *)(*(int *)(iStack_4 + 0x10) + iStack_7fc * 4);
  }
  *param_1 = iStack_4;
  *param_2 = uStack_8;
  *param_3 = uStack_c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void findzoom_landscape(float *param_1,float *param_2,float *param_3,undefined2 *param_4,
                       undefined2 *param_5,undefined4 *param_6,undefined1 *param_7,
                       undefined1 *param_8)

{
  uint extraout_var;
  uint extraout_var_00;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *param_5 = 0;
  *param_8 = 0;
  *param_7 = 0;
  get_cursor_state(&iStack_4,&iStack_c,&iStack_8);
  if (iStack_c == 0) {
    if (iStack_4 == 0) {
      if (iStack_8 == 0) {
        clear_marked_state();
      }
      else {
        iStack_4 = iStack_8;
        if ((iStack_8 == *(int *)(curcontext + 0x44)) && (*(int *)(iStack_8 + 0x28) != 0)) {
          iStack_4 = *(int *)(iStack_8 + 0x28);
        }
        update_marked_item(iStack_4);
        *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                          (double)*(float *)(curcontext + 0x14) *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)layout_spacing_height));
        *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                          (double)*(float *)(curcontext + 0x18) *
                          ((double)*(float *)(iStack_4 + 0x3c) /
                           (double)((ulonglong)extraout_var_00 << 0x20) + (double)layout_spacing_height));
        *param_3 = item_height_offset + *(float *)(iStack_4 + 0x24);
        *param_4 = (short)default_item_type;
        *param_6 = 0;
      }
    }
    else {
      clear_current_selection();
      update_marked_item(iStack_4);
      *param_1 = (float)((double)*(float *)(iStack_4 + 0x34) -
                        (double)*(float *)(curcontext + 0x14) *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)layout_spacing_height));
      *param_2 = (float)((double)*(float *)(iStack_4 + 0x38) -
                        (double)*(float *)(curcontext + 0x18) *
                        ((double)*(float *)(iStack_4 + 0x3c) /
                         (double)((ulonglong)extraout_var << 0x20) + (double)layout_spacing_height));
      *param_3 = item_height_offset + *(float *)(iStack_4 + 0x24);
      *param_4 = (short)default_item_type;
      *param_6 = 0;
    }
  }
  else {
    update_marked_item(iStack_4);
    get_item_screen_coords((undefined4*)iStack_c);
    *param_1 = (*(float *)(iStack_4 + 0x34) +
               *(float *)(iStack_c + 0x14) * *(float *)(iStack_4 + 0x58)) -
               *(float *)(curcontext + 0x14) * view_scale_factor;
    *param_2 = (*(float *)(iStack_4 + 0x38) + *(float *)(iStack_c + 0x18)) -
               *(float *)(curcontext + 0x18) * view_scale_factor;
    if (overlay_mode_flag == '\0') {
      *param_3 = layout_offset_base + *(float *)(iStack_4 + 0x24) + *(float *)(iStack_c + 0x1c);
    }
    else {
      *param_8 = 1;
      *param_3 = layout_offset_base + *(float *)(iStack_4 + 0x24) + layout_height_adjust;
    }
    *param_6 = 0;
    *param_4 = (short)layout_rotation_value;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

/* highlightDirLandscape and highlightFileLandscape are defined in highlight.c */

void landscapeZoomToFile(int param_1,int param_2)

{
  double dVar1;
  ulonglong in_f4;
  float fVar2;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      dVar1 = (double)*(float *)(param_1 + 0x3c) / (double)(in_f4 & 0xffffffff00000000) +
              (double)layout_spacing_height;
      set_camera_lookat((double)*(float *)(param_1 + 0x34) -
                   (double)*(float *)(curcontext + 0x14) * dVar1,
                   (double)*(float *)(param_1 + 0x38) -
                   (double)*(float *)(curcontext + 0x18) * dVar1);
    }
    else {
      if (overlay_mode_flag == '\0') {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      else {
        fVar2 = *(float *)(param_2 + 0x14);
      }
      set_camera_lookat(((double)*(float *)(param_1 + 0x34) +
                   (double)fVar2 * (double)*(float *)(param_1 + 0x58)) -
                   (double)*(float *)(curcontext + 0x14) * (double)view_scale_factor,
                   ((double)*(float *)(param_1 + 0x38) + (double)*(float *)(param_2 + 0x18)) -
                   (double)*(float *)(curcontext + 0x18) * (double)view_scale_factor);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
