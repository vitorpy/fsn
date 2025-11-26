/**
 * drawing.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "drawing.h"
#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_igl.h"

/* Note: draw2() is provided by fsn_igl library */

void draw_scene(void)

{
  timeval tStack_8;
  
  redraw_flag = 0;
  gettimeofday(&tStack_8,(__timezone_ptr_t)0x0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void redraw_gl_scene(void)

{
  code *pcVar1;
  int unaff_gp;
  undefined1 auStack_8 [8];
  
  pcVar1 = *(code **)(unaff_gp + -0x7b2c);
  *(undefined1 *)(*(int *)(unaff_gp + -0x7f94) + 0x6688) = 0;
  (*pcVar1)(auStack_8,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void checkRedrawScene(void)

{
  if (redraw_flag != '\0') {
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_warp(void)

{
  cpack(cpack_color);
  clear();
  swapbuffers();
  gflush();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_file_icon(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int unaff_gp;
  
  uVar3 = (uint)*param_1;
  if (uVar3 != 0) {
    iVar5 = *(int *)(unaff_gp + -0x76cc);
    do {
      iVar1 = *(int *)(iVar5 + uVar3 * 0xd8);
      if ((iVar1 != 0) && (iVar1 != 0)) {
        iVar4 = 0;
        do {
          if (iVar1 == 1) {
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
            (**(code **)(unaff_gp + -0x7b60))((float)*(int *)(iVar1 + 4),(float)*(int *)(iVar1 + 8))
            ;
            uVar3 = (uint)*param_1;
            iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
LAB_00418bcc:
            iVar1 = *(int *)(iVar1 + 0xc);
          }
          else {
            if (iVar1 == 2) {
              (**(code **)(unaff_gp + -0x7b7c))();
              (**(code **)(unaff_gp + -0x7c68))(iVar5 + (uint)*param_1 * 0xd8 + iVar4 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar2 = iVar5 + uVar3 * 0xd8 + iVar4;
            if (iVar1 == 3) {
              (**(code **)(unaff_gp + -0x7c68))(iVar2 + 4);
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            if (iVar1 == 4) {
              (**(code **)(unaff_gp + -0x7c68))(iVar2 + 4);
              (**(code **)(unaff_gp + -0x7b94))();
              uVar3 = (uint)*param_1;
              iVar1 = iVar5 + uVar3 * 0xd8 + iVar4;
              goto LAB_00418bcc;
            }
            iVar1 = *(int *)(iVar2 + 0xc);
          }
          iVar4 = iVar4 + 0xc;
        } while (iVar1 != 0);
      }
      uVar3 = (uint)param_1[1];
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_special(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined8 in_f4;
  double dVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  uint unaff_000010a0;
  
  uVar2 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    loadname((int)*(short *)((int)param_1 + 0x5e));
    pushmatrix();
    translate((float)(double)CONCAT44(unaff_000010a0,param_4),(float)(double)CONCAT44(uVar2,param_6)
             );
    rotate((int)-*(short *)(curcontext + 0xe),0x78);
    translate(0,translate_y_offset);
    cpack(rect_draw_color);
    dVar5 = (double)-rotation_factor_y;
    fVar6 = (float)(dVar5 / (double)((ulonglong)unaff_000010a0 << 0x20));
    rectf(fVar6,fVar6);
    uVar4 = (uint)((ulonglong)dVar5 >> 0x20);
    pushmatrix();
    dVar5 = (double)-rotation_factor_y;
    dVar3 = dVar5 / (double)((ulonglong)unaff_000010a0 << 0x20);
    translate((float)((double)(int)param_1[1] * (double)CONCAT44(uVar4,0x33333334)),
              (float)(dVar3 - (double)((ulonglong)uVar4 << 0x20)));
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
    uVar4 = (uint)((ulonglong)dVar5 >> 0x20);
    scale(0x3d4ccccd,0x3d4ccccd);
    draw_file_icon(*param_1);
    popmatrix();
    pushmatrix();
    sVar1 = strlen(param_2);
    dVar5 = (double)(int)sVar1;
    if ((int)sVar1 < 0) {
      dVar5 = dVar5 + (double)((ulonglong)uVar4 << 0x20);
    }
    translate((float)(dVar5 * (double)CONCAT44(uVar2,0x33333334)),
              (float)((double)rotation_factor_y / (double)((ulonglong)unaff_000010a0 << 0x20) +
                     (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),0x9999999a)));
    scale(0x3d4ccccd,0x3d4ccccd);
    draw_file_icon(param_2);
    popmatrix();
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_directory_recursive(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int unaff_gp;
  undefined8 in_f4;
  double dVar2;
  uint uVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint unaff_000010a0;
  
  uVar7 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)((int)param_1 + 0x5e));
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))
              ((float)(double)CONCAT44(unaff_000010a0,param_4),
               (float)(double)CONCAT44(uVar7,param_6));
    (**(code **)(unaff_gp + -0x7b68))((int)-*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78);
    (**(code **)(unaff_gp + -0x7b60))(0,*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0xe8));
    (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x170));
    dVar4 = (double)-*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe4);
    fVar5 = (float)(dVar4 / (double)((ulonglong)unaff_000010a0 << 0x20));
    (**(code **)(unaff_gp + -0x7e20))(fVar5,fVar5);
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20);
    (**(code **)(unaff_gp + -0x7b48))();
    dVar4 = (double)-*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe4);
    dVar2 = dVar4 / (double)((ulonglong)unaff_000010a0 << 0x20);
    (**(code **)(unaff_gp + -0x7b60))
              ((float)((double)(int)param_1[1] *
                      (double)CONCAT44(uVar3,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5124)
                                      )),(float)(dVar2 - (double)((ulonglong)uVar3 << 0x20)));
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20);
    uVar6 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5120);
    (**(code **)(unaff_gp + -0x7b6c))(uVar6,uVar6);
    (**(code **)(unaff_gp + -0x7a08))(*param_1);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b48))();
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(param_2);
    dVar4 = (double)iVar1;
    if (iVar1 < 0) {
      dVar4 = dVar4 + (double)((ulonglong)uVar3 << 0x20);
    }
    (**(code **)(unaff_gp + -0x7b60))
              ((float)(dVar4 * (double)CONCAT44(uVar7,*(undefined4 *)
                                                       (*(int *)(unaff_gp + -0x7fa4) + -0x5114))),
               (float)((double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe4) /
                       (double)((ulonglong)unaff_000010a0 << 0x20) +
                      (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),
                                       *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x510c))));
    uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x5108);
    (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
    (**(code **)(unaff_gp + -0x7a08))(param_2);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_dir(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             char param_5)

{
  undefined4 uVar1;
  undefined8 in_f4;
  
  uVar1 = (undefined4)((ulonglong)in_f4 >> 0x20);
  if ((int)(param_1[0x1d] << 3) < 0) {
    loadname((int)*(short *)((int)param_1 + 0x5e));
    pushmatrix();
    translate((float)(double)CONCAT44(uVar1,param_4));
    uVar1 = directory_color_normal;
    if ((int)(param_1[0x1d] << 0xd) < 0) {
      uVar1 = directory_color_active;
    }
    cpack(uVar1);
    pushmatrix();
    rotate(0xfffffc7c,0x7a);
    translate(0x3f333333,0xbde66666);
    if (param_5 == '\0') {
      rect(0xbca3d70a,0xbca3d70a);
      scale(0x3ccccccd,0x3ccccccd);
      draw_file_icon(*param_1);
    }
    else {
      rectf(0xbca3d70a,0xbca3d70a);
    }
    popmatrix();
    popmatrix();
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

void draw_positioned_item(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_gp;
  undefined8 in_f4;
  undefined8 in_f6;
  float fVar1;
  uint in_register_00001080;
  
  (**(code **)(unaff_gp + -0x7b60))
            ((float)(double)CONCAT44((int)((ulonglong)in_f4 >> 0x20),param_1),
             (float)(double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),param_2),param_3,param_4,0);
  (**(code **)(unaff_gp + -0x7b68))((int)-*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b60))(0,*(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0xe8));
  fVar1 = (float)((double)-*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe4) /
                 (double)((ulonglong)in_register_00001080 << 0x20));
  (**(code **)(unaff_gp + -0x7df0))(fVar1,fVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_item_recursive(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  uint in_register_00001090;
  undefined8 uVar8;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_3 != *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c)) {
    (**(code **)(unaff_gp + -0x7b48))();
    iVar4 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c);
    if (param_3 == *(int *)(iVar4 + 0x28)) {
      (**(code **)(unaff_gp + -0x79f0))
                ((ulonglong)uVar6 << 0x20,
                 (double)*(float *)(iVar4 + 0x3c) +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xdc));
    }
    else if (param_3 == *(int *)(iVar4 + 0x2c)) {
      (**(code **)(unaff_gp + -0x79f0))
                ((double)-*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe0),
                 (double)*(float *)(iVar4 + 0x3c) +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xdc));
    }
    else if (param_3 == *(int *)(iVar4 + 0x30)) {
      (**(code **)(unaff_gp + -0x79f0))
                ((double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xe0),
                 (double)*(float *)(iVar4 + 0x3c) +
                 (double)*(float *)(*(int *)(unaff_gp + -0x75dc) + 0xdc));
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar1 = 0;
      if (0 < iVar3) {
        piVar2 = *(int **)(iVar4 + 0x18);
        do {
          if (param_3 == *piVar2) {
            fVar5 = *(float *)(*(int *)(unaff_gp + -0x75dc) + 0xd0);
            uVar8 = CONCAT44(uVar6,(float)((double)-fVar5 *
                                           (double)((ulonglong)in_register_00001090 << 0x20) *
                                           (double)(iVar3 + -1) + (double)fVar5 * (double)iVar1));
            (**(code **)(unaff_gp + -0x7b60))(uVar8,iVar3,iVar4,0);
            uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
            (**(code **)(unaff_gp + -0x7b68))(0xfffffc7c,0x7a);
            (**(code **)(unaff_gp + -0x7b60))
                      (CONCAT44(uVar7,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50a4)),
                       CONCAT44(uVar9,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50a0)));
            uVar9 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x509c);
            (**(code **)(unaff_gp + -0x7df0))(uVar9,uVar9);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < iVar3);
      }
    }
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void prepare_draw_frame(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_100;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_cc;
  char acStack_c8 [200];
  
  if (*(int *)(curcontext + 0x48) == 0) {
    iVar4 = *(int *)(curcontext + 0x44);
    if (iVar4 == 0) {
      local_f0 = blankXmString;
      local_f4 = 0xe3f40b5;
      XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
    }
    else {
      if (*(int *)(iVar4 + 0x74) << 0xd < 0) {
        sprintf(acStack_c8,"pruned");
      }
      else {
        uVar1 = lookup_context_item(*(undefined4 *)(iVar4 + 8));
        iVar4 = *(int *)(curcontext + 0x44);
        if (*(int *)(iVar4 + 0x74) << 0xb < 0) {
          pcVar3 = ", monitored";
        }
        else {
          pcVar3 = "";
        }
        sprintf(acStack_c8,"%s %d directories, %d files %s",uVar1,*(undefined4 *)(iVar4 + 0x14),
                *(undefined4 *)(iVar4 + 0xc),pcVar3);
      }
      local_f0 = XmStringCreate(acStack_c8,&default_charset);
      local_f4 = 0xe3f40b5;
      local_cc = local_f0;
      XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
      XmStringFree(local_cc);
    }
  }
  else {
    uVar1 = lookup_context_item(*(undefined4 *)(*(int *)(curcontext + 0x48) + 8));
    uVar2 = count_directory_items(*(undefined4 *)(*(int *)(curcontext + 0x48) + 0x10));
    iVar4 = *(int *)(curcontext + 0x48);
    if ((*(uint *)(iVar4 + 8) & 0xf000) == 0xa000) {
      local_100 = "link to ";
    }
    else {
      local_100 = "";
    }
    if (*(int *)(iVar4 + 0x20) == 0) {
      pcVar3 = "unknown type";
      uVar5 = *(undefined4 *)(iVar4 + 0xc);
    }
    else {
      pcVar3 = (char *)get_icon_attribute(*(int *)(iVar4 + 0x20),3);
      uVar5 = *(undefined4 *)(*(int *)(curcontext + 0x48) + 0xc);
    }
    sprintf(acStack_c8,"%s   %d bytes, %d days old, %s%s",uVar1,uVar5,uVar2,local_100,pcVar3);
    local_f0 = XmStringCreate(acStack_c8,&default_charset);
    local_f4 = 0xe3f40b5;
    local_cc = local_f0;
    XtSetValues(*(undefined4 *)(curcontextwindows + 0x20),&local_f4,1);
    XmStringFree(local_cc);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void redrawSelectionNames(void)

{
  size_t sVar1;
  
  if ((curcontext[0xc51] != '\0') && (curcontext[0xc52] != '\0')) {
    mark_menu_widget = 0;
    if (*(int *)(curcontext + 0x48) == 0) {
      if (*(int *)(curcontext + 0x44) == 0) {
        XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),"No file");
      }
      else {
        XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),(int)curcontext + 0x4c);
        sVar1 = strlen(curcontext + 0x4c);
        XmTextFieldShowPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
        sVar1 = strlen(curcontext + 0x4c);
        XmTextFieldSetInsertionPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
      }
    }
    else {
      XmTextFieldSetString(*(undefined4 *)(curcontextwindows + 0x1c),(int)curcontext + 0x44c);
      sVar1 = strlen(curcontext + 0x44c);
      XmTextFieldShowPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
      sVar1 = strlen(curcontext + 0x44c);
      XmTextFieldSetInsertionPosition(*(undefined4 *)(curcontextwindows + 0x1c),sVar1);
    }
    prepare_draw_frame();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_mark_overlay(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if ((*(char *)(iVar1 + 0xc51) != '\0') && (*(char *)(iVar1 + 0xc52) != '\0')) {
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6e24) = 0;
    if (*(int *)(iVar1 + 0x48) == 0) {
      if (*(int *)(iVar1 + 0x44) == 0) {
        (**(code **)(unaff_gp + -0x7dec))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),
                   *(int *)(unaff_gp + -0x7fa4) + -0x4cc4);
      }
      else {
        (**(code **)(unaff_gp + -0x7dec))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),iVar1 + 0x4c);
        uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x4c);
        (**(code **)(unaff_gp + -0x7dcc))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
        uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x4c);
        (**(code **)(unaff_gp + -0x7db8))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
      }
    }
    else {
      (**(code **)(unaff_gp + -0x7dec))
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),iVar1 + 0x44c);
      uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x44c);
      (**(code **)(unaff_gp + -0x7dcc))
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
      uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x44c);
      (**(code **)(unaff_gp + -0x7db8))
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
    }
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x3c1c))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_draw_mode(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cVar1 = previous_state_char;
  if ((param_1 != previous_state_char) && (iVar2 = 0, cVar1 = param_1, 0 < array_index)) {
    puVar3 = &menu_items_array;
    do {
      XtSetSensitive(*puVar3,param_1);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      cVar1 = param_1;
    } while (iVar2 < array_index);
  }
  previous_state_char = cVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void finalize_draw_frame(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(curcontext + 0x44);
  if (iVar3 != 0) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if (((iVar2 != iVar3) && (-1 < *(int *)(iVar3 + 0x74) << 0xb)) &&
       (-1 < *(int *)(iVar3 + 0x74) << 0xe)) {
      if (*(int *)(iVar3 + 100) != 0) {
        XtRemoveTimeOut();
        iVar3 = *(int *)(curcontext + 0x44);
      }
      uVar1 = XtAppAddTimeOut(app_context,unmonitor_timeout_seconds * 1000,check_unmonitor_dp,iVar3);
      *(undefined4 *)(*(int *)(curcontext + 0x44) + 100) = uVar1;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_box(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_2 == 4) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnqstrip();
    v3f(vertex_idx_4 * 0xc + 0x10006f40);
    v3f(vertex_idx_5 * 0xc + 0x10006f40);
    v3f(vertex_idx_7 * 0xc + 0x10006f40);
    v3f(vertex_idx_6 * 0xc + 0x10006f40);
    endqstrip();
  }
  else if (param_2 == 3) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnline();
    v3f(&vertex_8_ptr);
    v3f(&vertex_9_ptr);
    endline();
  }
  else if (param_2 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      cpack(*param_1);
    }
    bgnqstrip();
    v3f(vertex_idx_0 * 0xc + 0x10006f40);
    v3f(vertex_idx_1 * 0xc + 0x10006f40);
    v3f(vertex_idx_3 * 0xc + 0x10006f40);
    v3f(vertex_idx_2 * 0xc + 0x10006f40);
    endqstrip();
  }
  else {
    bVar1 = param_2 != 1 && param_1 != (undefined4 *)0x0;
    if ((param_2 == 1) && (param_1 != (undefined4 *)0x0)) {
      cpack(param_1[1]);
    }
    if ((param_3 & 1) != 0) {
      if (bVar1) {
        cpack(param_1[1]);
      }
      if (param_2 == 1) {
        bgnclosedline();
        piVar2 = &vertex_array_start_idx;
        do {
          v3f(*piVar2 * 0xc + 0x10006f40);
          piVar2 = piVar2 + 1;
        } while (piVar2 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(vertex_array_start_idx * 0xc + 0x10006f40);
        v3f(face_vtx_0 * 0xc + 0x10006f40);
        v3f(face_vtx_2 * 0xc + 0x10006f40);
        v3f(face_vtx_1 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if (bVar1) {
      cpack(param_1[3]);
    }
    if ((param_3 & 2) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[4] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(vertex_array_end_idx * 0xc + 0x10006f40);
        v3f(face_vtx_4 * 0xc + 0x10006f40);
        v3f(face_vtx_6 * 0xc + 0x10006f40);
        v3f(face_vtx_5 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[8] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_7 * 0xc + 0x10006f40);
        v3f(face_vtx_8 * 0xc + 0x10006f40);
        v3f(face_vtx_10 * 0xc + 0x10006f40);
        v3f(face_vtx_9 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 8) != 0) {
      if (bVar1) {
        cpack(param_1[2]);
      }
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[0xc] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_11 * 0xc + 0x10006f40);
        v3f(face_vtx_12 * 0xc + 0x10006f40);
        v3f(face_vtx_14 * 0xc + 0x10006f40);
        v3f(face_vtx_13 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (bVar1) {
        cpack(*param_1);
      }
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[0x10] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_15 * 0xc + 0x10006f40);
        v3f(face_vtx_16 * 0xc + 0x10006f40);
        v3f(face_vtx_18 * 0xc + 0x10006f40);
        v3f(face_vtx_17 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_2 == 1) {
        bgnclosedline();
        puVar3 = &vertex_array_start_idx;
        do {
          v3f(puVar3[0x14] * 0xc + 0x10006f40);
          puVar3 = puVar3 + 1;
        } while (puVar3 != &vertex_array_end_idx);
        endclosedline();
      }
      else {
        bgnqstrip();
        v3f(face_vtx_19 * 0xc + 0x10006f40);
        v3f(face_vtx_20 * 0xc + 0x10006f40);
        v3f(face_vtx_22 * 0xc + 0x10006f40);
        v3f(face_vtx_21 * 0xc + 0x10006f40);
        endqstrip();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_legend_color_box(undefined4 *param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_2 == 4) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c))(*param_1);
    }
    (**(code **)(unaff_gp + -0x7d54))();
    iVar2 = *(int *)(unaff_gp + -0x7f98);
    iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7010) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7014) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x701c) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7018) * 0xc);
    (**(code **)(unaff_gp + -0x7d3c))();
  }
  else if (param_2 == 3) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c))(*param_1);
    }
    (**(code **)(unaff_gp + -0x7b7c))();
    (**(code **)(unaff_gp + -0x7dc0))(*(int *)(unaff_gp + -0x7f98) + 0x7020);
    (**(code **)(unaff_gp + -0x7dc0))(*(int *)(unaff_gp + -0x7f98) + 0x702c);
    (**(code **)(unaff_gp + -0x7b94))();
  }
  else if (param_2 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      (**(code **)(unaff_gp + -0x7b9c))(*param_1);
    }
    (**(code **)(unaff_gp + -0x7d54))();
    iVar2 = *(int *)(unaff_gp + -0x7f98);
    iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7000) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7004) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x700c) * 0xc);
    (**(code **)(unaff_gp + -0x7dc0))(iVar4 + *(int *)(iVar2 + 0x7008) * 0xc);
    (**(code **)(unaff_gp + -0x7d3c))();
  }
  else {
    bVar1 = param_2 != 1 && param_1 != (undefined4 *)0x0;
    if ((param_2 == 1) && (param_1 != (undefined4 *)0x0)) {
      (**(code **)(unaff_gp + -0x7b9c))(param_1[1]);
    }
    if ((param_3 & 1) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c))(param_1[1]);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar2 = *(int *)(unaff_gp + -0x7f98);
        piVar3 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa0);
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + 0x6f40 + *piVar3 * 0xc);
          piVar3 = piVar3 + 1;
        } while (piVar3 != (int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb0));
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        iVar2 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fac) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fa8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    iVar2 = *(int *)(unaff_gp + -0x7f98) + 0x6f40;
    if (bVar1) {
      (**(code **)(unaff_gp + -0x7b9c))(param_1[3]);
    }
    if ((param_3 & 2) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x10) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fbc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fb8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x20) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fc0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fc4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fcc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fc8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 8) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c))(param_1[2]);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x30) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fd0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fd4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fdc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fd8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (bVar1) {
        (**(code **)(unaff_gp + -0x7b9c))(*param_1);
      }
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x40) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fe0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fe4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fec) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6fe8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_2 == 1) {
        (**(code **)(unaff_gp + -0x7d24))();
        iVar4 = *(int *)(unaff_gp + -0x7f98) + 0x6fa0;
        do {
          (**(code **)(unaff_gp + -0x7dc0))(iVar2 + *(int *)(iVar4 + 0x50) * 0xc);
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(unaff_gp + -0x7f98) + 0x6fb0);
        (**(code **)(unaff_gp + -0x7d20))();
      }
      else {
        (**(code **)(unaff_gp + -0x7d54))();
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ff0) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ff4) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ffc) * 0xc);
        (**(code **)(unaff_gp + -0x7dc0))
                  (iVar2 + *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6ff8) * 0xc);
        (**(code **)(unaff_gp + -0x7d3c))();
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_file(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
              undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  undefined *puVar5;
  uint extraout_var;
  undefined4 uVar6;
  undefined8 in_f4;
  double dVar7;
  char cStackX_f;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar6 = (undefined4)((ulonglong)in_f4 >> 0x20);
  iVar2 = param_2[10];
  if ((iVar2 << 5 < 0) && (-1 < iVar2 << 0xb)) {
    if (iVar2 << 10 < 0) {
      sVar4 = get_selection_string();
      setpattern((int)sVar4);
    }
    bVar1 = curcontext[0xc50] != '\0';
    if ((bVar1) && (bVar1 = *(int *)(param_1 + 0x74) << 2 < 0, bVar1)) {
      bVar1 = overlay_mode_flag != '\0';
    }
    cStackX_f = param_4;
    if (param_2[8] == 0) {
      cStackX_f = '\0';
    }
    pushmatrix();
    translate(param_2[5],param_2[6]);
    if (bVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_3 != '\0') {
      cpack(0);
      pushmatrix();
      iVar2 = param_2[1];
      if (max_scale_limit < (int)param_2[1]) {
        iVar2 = max_scale_limit;
      }
      dVar7 = (double)iVar2 * (double)CONCAT44(uVar6,0xeb851eb8);
      translate((float)dVar7,
                (float)((double)-view_offset_x /
                        (double)((ulonglong)(double)iVar2 & 0xffffffff00000000) -
                       (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),0x9999999a)),iVar2,
                &fsn_resources,0x3cf5c28f);
      rotate((int)-*(short *)(curcontext + 0xe),0x78);
      scale(0x3c23d70a,0x3c23d70a);
      if (max_scale_limit < (int)param_2[1]) {
        scale((float)max_scale_limit / (float)(int)param_2[1]);
      }
      draw_file_icon(*param_2);
      popmatrix();
    }
    if (cStackX_f != '\0') {
      zwritemask(0);
      pushmatrix();
      scale(view_offset_x,view_offset_x);
      uVar3 = param_2[10];
      if ((int)(uVar3 << 3) < 0) {
        puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d] + 0x10;
      }
      else {
        puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d];
      }
      draw_legend_color_box(puVar5,param_5,0x10);
      popmatrix();
      pushmatrix();
      get_icon_bounds(param_2[8],&fStack_4,&fStack_8,&fStack_c,&fStack_10);
      scale(view_offset_x,view_offset_x);
      translate(0xbf000000,0xbf000000);
      scale((float)((double)((ulonglong)extraout_var << 0x20) /
                   ((double)fStack_c - (double)fStack_4)),
            (float)((double)((ulonglong)extraout_var << 0x20) /
                   ((double)fStack_10 - (double)fStack_8)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    scale(view_offset_x,view_offset_x);
    uVar3 = param_2[10];
    if ((int)(uVar3 << 3) < 0) {
      puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d] + 0x10;
    }
    else {
      puVar5 = (&dcolorBoxes)[uVar3 >> 0x1d];
    }
    draw_legend_color_box(puVar5,param_5,param_6);
    popmatrix();
    if ((int)(param_2[10] << 10) < 0) {
      setpattern(0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_file_pointers(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sStackX_6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + param_3 * 4);
  selected_id_1 = iVar4;
  selected_id_2 = iVar2;
  loadname((int)(short)param_3);
  pushmatrix();
  translate(*(float *)(iVar4 + 0x14) + view_offset_x + view_offset_adjustment,*(undefined4 *)(iVar4 + 0x18));
  scale(view_offset_x,view_offset_x);
  uVar1 = *(uint *)(iVar2 + 0x28);
  if ((int)(uVar1 << 3) < 0) {
    uVar3 = *(undefined4 *)((&dcolorBoxes)[uVar1 >> 0x1d] + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(&dcolorBoxes)[uVar1 >> 0x1d];
  }
  cpack(uVar3);
  bgntmesh();
  v2f(&matrix_buffer_0);
  v2f(&matrix_buffer_1);
  v2f(&matrix_buffer_2);
  endtmesh();
  popmatrix();
  sStackX_6 = (short)param_2;
  loadname((int)sStackX_6);
  pushmatrix();
  translate(*(float *)(iVar2 + 0x14) - (view_offset_x + view_offset_adjustment),*(undefined4 *)(iVar2 + 0x18));
  scale(view_offset_x,view_offset_x);
  uVar1 = *(uint *)(iVar4 + 0x28);
  if ((int)(uVar1 << 3) < 0) {
    uVar3 = *(undefined4 *)((&dcolorBoxes)[uVar1 >> 0x1d] + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(&dcolorBoxes)[uVar1 >> 0x1d];
  }
  cpack(uVar3);
  bgntmesh();
  v2f(&matrix_buffer_3);
  v2f(&current_matrix_ptr);
  v2f(&projection_matrix_ptr);
  endtmesh();
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_files(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      if (((param_2 != '\0') ||
          (uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + iVar3) + 0x28),
          param_3 != uVar1 >> 0x1d)) || (-1 < (int)(uVar1 << 0xd))) {
        pushname((int)(short)iVar2);
        if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_file_item(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      if (((param_2 != '\0') ||
          (uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + iVar3) + 0x28),
          param_3 != uVar1 >> 0x1d)) || (-1 < (int)(uVar1 << 0xd))) {
        (**(code **)(unaff_gp + -0x7db0))((int)(short)iVar2);
        if (param_2 != '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_directory(ulonglong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint extraout_var;
  double dVar5;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_2 + 0x74) << 3 < 0) {
    uStack_18 = 0xbd4ccccd;
    if ((((*(uint *)(param_2 + 0x74) >> 0x1e & curcontextflag) != 0) ||
        ((int)(*(uint *)(param_2 + 0x74) << 2) < 0)) || ((*(ushort *)(param_2 + 0x74) & 1) != 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uStack_c = uStack_18;
    if (*(short *)(param_2 + 0x76) < 0) {
      pushmatrix();
      draw_scaled_element(param_1 & 0xffffffff00000000,
                   (double)maxy * (double)((ulonglong)extraout_var << 0x20));
      popmatrix();
    }
    iVar1 = *(int *)(param_2 + 0x14);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_2 + 0x18) + iVar4);
        if (*(int *)(iVar3 + 0x74) << 3 < 0) {
          process_tree_node(iVar3,param_3);
          pushname((int)*(short *)(iVar3 + 0x5e));
          uVar2 = dir_type_icon;
          if ((-1 < *(int *)(iVar3 + 0x74) << 2) &&
             (uVar2 = file_type_icon, *(int *)(iVar3 + 0x74) << 0xd < 0)) {
            uVar2 = directory_color_active;
          }
          cpack(uVar2);
          dVar5 = (double)*(float *)(param_2 + 0x34) + (double)*(float *)(iVar3 + 0x4c);
          fStack_14 = (float)dVar5;
          fStack_10 = *(float *)(param_2 + 0x38) + *(float *)(iVar3 + 0x50);
          uStack_20 = *(undefined4 *)(iVar3 + 0x34);
          fStack_1c = (float)((double)*(float *)(iVar3 + 0x38) -
                             (double)*(float *)(iVar3 + 0x3c) /
                             (double)((ulonglong)dVar5 & 0xffffffff00000000));
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            linewidth(3);
          }
          bgnline();
          v3f(&fStack_14);
          v3f(&uStack_20);
          endline();
          if (*(int *)(iVar3 + 0x74) << 2 < 0) {
            linewidth(1);
          }
          if ((param_3 == '\0') &&
             ((*(int *)(param_2 + 0x74) << 2 < 0 || (*(int *)(iVar3 + 0x74) << 2 < 0)))) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          popname();
          iVar1 = *(int *)(param_2 + 0x14);
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < iVar1 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_directories(char param_1)

{
  float fVar1;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  selected_id_1 = 0;
  selected_id_2 = 0;
  if (*(int *)(curcontext + 0x3c) == 0) {
    if (topdir != 0) {
      if (param_1 == '\0') {
        fVar1 = powf(zoom_base_factor,
                     (*(float *)(curcontext + 4) -
                     *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                     *(float *)(curcontext + 8)) / zoom_reference_height);
        fVar1 = (icon_size_multiplier * *(float *)(curcontext + 0x34)) / fVar1;
        if (grid_display_flag == '\0') {
          cpack(highlight_packed_color);
          bgnpolygon();
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          endpolygon();
        }
        else {
          shademodel(1);
          bgnpolygon();
          cpack(graphics_state_mode);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(current_packed_color);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
          bgnpolygon();
          cpack(current_packed_color);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = (float)((double)*(float *)(curcontext + 4) + (double)view_offset_y);
          fStack_4 = (float)((double)*(float *)(curcontext + 8) +
                            (double)((ulonglong)(double)*(float *)(curcontext + 4) &
                                    0xffffffff00000000));
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = *(float *)(curcontext + 8) + view_offset_z;
          v3f(&fStack_c);
          endpolygon();
          shademodel(1);
          bgnpolygon();
          cpack(graphics_render_flags);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) - base_y_offset;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) - base_y_offset;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          cpack(highlight_color);
          fStack_c = *(float *)curcontext + fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          fStack_c = *(float *)curcontext - fVar1;
          fStack_8 = *(float *)(curcontext + 4) + view_offset_y;
          fStack_4 = -0.5;
          v3f(&fStack_c);
          endpolygon();
          shademodel(0);
        }
      }
      process_tree_node(topdir,param_1);
    }
  }
  else {
    apply_context_changes(*(int *)(curcontext + 0x3c),param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_visible_directory(int param_1)

{
  if ((int)(*(uint *)(param_1 + 0x74) << 3) < 0) {
    *(byte *)(param_1 + 0x74) =
         (byte)((*(uint *)(param_1 + 0x74) >> 0x1e & ~curcontextflag) << 6) |
         *(byte *)(param_1 + 0x74) & 0x3f;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_directory_tree(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  *(byte *)(param_1 + 0x74) =
       (byte)((*(uint *)(param_1 + 0x74) >> 0x1e | **(uint **)(unaff_gp + -0x7670)) << 6) |
       *(byte *)(param_1 + 0x74) & 0x3f;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      (**(code **)(unaff_gp + -0x7930))(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_visibility(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  undefined8 in_f4;
  short asStack_1000 [2048];
  
  uVar7 = (uint)((ulonglong)in_f4 >> 0x20);
  if (topdir != 0) {
    initnames();
    gselect(asStack_1000,0x800);
    scale((float)((double)((ulonglong)uVar7 << 0x20) / (double)*(float *)(curcontext + 0x34)));
    rotate((int)*(short *)(curcontext + 0xe),0x78);
    rotate((int)*(short *)(curcontext + 0xc),0x7a);
    fVar6 = powf(zoom_base_factor,
                 (*(float *)(curcontext + 4) -
                 *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
                 *(float *)(curcontext + 8)) / zoom_reference_height);
    scale(fVar6);
    translate(-*(float *)curcontext,-*(float *)(curcontext + 4));
    render_directory(topdir);
    iVar1 = endselect(asStack_1000);
    if (iVar1 < 0) {
      draw_directory_tree(topdir);
    }
    iVar3 = 0;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = (int)asStack_1000[iVar3];
        if (iVar4 == 1) {
          iVar2 = get_item_by_index((int)asStack_1000[iVar3 + 1]);
          *(byte *)(iVar2 + 0x74) =
               (byte)((*(uint *)(iVar2 + 0x74) >> 0x1e | curcontextflag) << 6) |
               *(byte *)(iVar2 + 0x74) & 0x3f;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 1 + iVar4;
      } while (iVar5 != iVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_second_pick(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint extraout_var;
  undefined4 uVar1;
  uint uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (*(int *)(param_3 + 0x74) << 3 < 0) {
    loadname(2);
    pushname((int)*(short *)(param_3 + 0x5e));
    if (*(short *)(param_3 + 0x76) < 0) {
      dVar3 = (double)maxy * (double)((ulonglong)extraout_var << 0x20);
      draw_scaled_element(0,dVar3);
      uVar1 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    pushmatrix();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x38));
    translate(*(undefined4 *)(param_3 + 0x34),uVar4);
    uVar1 = (undefined4)((ulonglong)uVar4 >> 0x20);
    scale(*(undefined4 *)(param_3 + 0x58));
    pushmatrix();
    uVar4 = CONCAT44(uVar1,*(undefined4 *)(param_3 + 0x3c));
    scale(*(undefined4 *)(param_3 + 0x3c),uVar4);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    draw_legend_color_box(0,0,0x1f);
    popmatrix();
    translate(0,(ulonglong)uVar2 << 0x20);
    draw_file_item(param_3,1,7,0x1f);
    popname();
    popmatrix();
    if (*(int *)(param_3 + 0x28) != 0) {
      loadname(1);
      pushname((int)*(short *)(param_3 + 0x5e));
      fStack_c = *(float *)(*(int *)(param_3 + 0x28) + 0x34) + *(float *)(param_3 + 0x4c);
      uStack_10 = 0xbd4ccccd;
      fStack_8 = (float)((double)*(float *)(*(int *)(param_3 + 0x28) + 0x38) +
                        (double)*(float *)(param_3 + 0x50));
      uStack_18 = *(undefined4 *)(param_3 + 0x34);
      fStack_14 = (float)((double)*(float *)(param_3 + 0x38) -
                         (double)*(float *)(param_3 + 0x3c) /
                         (double)((ulonglong)(double)*(float *)(param_3 + 0x50) & 0xffffffff00000000
                                 ));
      uStack_4 = uStack_10;
      bgnline();
      v3f(&fStack_c);
      v3f(&uStack_18);
      endline();
      popname();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_entry(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  undefined4 uVar3;
  
  if (param_1 == *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c60)) {
    (**(code **)(unaff_gp + -0x7b48))();
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    iVar1 = *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c64);
    (**(code **)(unaff_gp + -0x7b60))
              (*(float *)(iVar1 + 0x14) - (*(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x74)),
               *(undefined4 *)(iVar1 + 0x18),iVar2,param_2,0);
    uVar3 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar3,uVar3);
    (**(code **)(unaff_gp + -0x7d24))();
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f28);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f30);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f38);
    (**(code **)(unaff_gp + -0x7d20))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
  else if (param_1 == *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c64)) {
    (**(code **)(unaff_gp + -0x7b48))();
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    iVar1 = *(int *)(*(int *)(unaff_gp + -0x7f94) + 0x6c60);
    (**(code **)(unaff_gp + -0x7b60))
              (*(float *)(iVar1 + 0x14) + *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x74),
               *(undefined4 *)(iVar1 + 0x18),iVar2,param_2,0);
    uVar3 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar3,uVar3);
    (**(code **)(unaff_gp + -0x7d24))();
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f10);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f18);
    (**(code **)(unaff_gp + -0x7e08))(*(int *)(unaff_gp + -0x7f98) + 0x6f20);
    (**(code **)(unaff_gp + -0x7d20))();
    (**(code **)(unaff_gp + -0x7b28))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_scaled_element(double param_1,double param_2)

{
  int unaff_gp;
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  undefined4 in_register_00001040;
  undefined4 in_register_00001050;
  undefined8 in_f16;
  undefined4 in_register_00001090;
  undefined4 in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000034;
  char in_stack_0000003b;
  undefined4 in_stack_0000003c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = (float)param_1;
  dVar3 = (double)CONCAT44((int)((ulonglong)in_f16 >> 0x20),in_stack_0000001c);
  local_4 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
  local_8 = (float)param_2;
  local_18 = (float)(dVar3 - (double)CONCAT44(in_register_00001090,in_stack_00000034));
  dVar3 = dVar3 + (double)CONCAT44(in_register_00001090,in_stack_00000034);
  fVar1 = (float)(double)CONCAT44(in_register_00001040,in_stack_00000024);
  local_1c = (float)(double)CONCAT44(in_register_00001050,in_stack_0000002c);
  local_24 = (float)dVar3;
  local_20 = fVar1;
  local_14 = fVar1;
  local_10 = local_1c;
  if (in_stack_0000003b == '\0') {
    (**(code **)(unaff_gp + -0x7b9c))(in_stack_0000003c);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))(0,0);
    (**(code **)(unaff_gp + -0x7d68))((float)(double)CONCAT44(uVar2,in_stack_0000001c),fVar1);
    (**(code **)(unaff_gp + -0x7b28))();
    (**(code **)(unaff_gp + -0x7d64))(1);
    (**(code **)(unaff_gp + -0x7b7c))();
    (**(code **)(unaff_gp + -0x7dc0))(&local_18);
    (**(code **)(unaff_gp + -0x7dc0))(&local_c);
    (**(code **)(unaff_gp + -0x7dc0))(&local_24);
    (**(code **)(unaff_gp + -0x7b94))();
    (**(code **)(unaff_gp + -0x7d64))(0);
    (**(code **)(unaff_gp + -0x7d1c))(1);
    (**(code **)(unaff_gp + -0x7dc4))();
    (**(code **)(unaff_gp + -0x7dc0))(&local_18);
    (**(code **)(unaff_gp + -0x7dc0))(&local_c);
    (**(code **)(unaff_gp + -0x7dc0))(&local_24);
    (**(code **)(unaff_gp + -0x7dbc))();
    (**(code **)(unaff_gp + -0x7d1c))(0);
  }
  else {
    (**(code **)(unaff_gp + -0x7b7c))();
    (**(code **)(unaff_gp + -0x7dc0))(&local_18);
    (**(code **)(unaff_gp + -0x7dc0))(&local_c);
    (**(code **)(unaff_gp + -0x7dc0))(&local_24);
    (**(code **)(unaff_gp + -0x7b94))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_alt(void)

{
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    redraw_gl_scene();
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cIconDraw(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(short *)(*(int *)(param_1 + 0x60) + 8) + param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
