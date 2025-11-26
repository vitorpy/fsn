/**
 * picking.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "picking.h"
#include "fsn_types.h"
#include "fsn_state.h"

void gl_picking_setup_wrapper(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ca8))
            ((int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0x10),0x3f800000,0x3d4ccccd,0x43fa0000
            );
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void process_pick_item(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_f5;
  undefined4 uVar3;
  undefined4 in_f11;
  uint unaff_000010c0;
  
  pushmatrix();
  translate(0,(float)((double)-*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)unaff_000010c0 << 0x20)));
  uVar3 = 0x3fe00000;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      render_item_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  popmatrix();
  if (*(int *)(param_1 + 0x28) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x28),&child_dir_index_1,0,0,in_f11,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x2c),&child_dir_index_2,in_f5,SUB84((double)-item_spacing_x,0),in_f5,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x30),&child_dir_index_3,uVar3,SUB84((double)item_spacing_x,0),uVar3,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
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
  apply_context_changes(*(undefined4 *)(curcontext + 0x3c),1);
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

void pick_file_item(int param_1,undefined4 *param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char *pcVar1;
  char *__s1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  char acStack_464 [1124];
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    sprintf(acStack_464,"Don\'t know how to %s current selection",param_5);
    show_error_message(acStack_464);
  }
  else {
    pcVar1 = (char *)build_path_string(0,param_1);
    strcat(pcVar1,(char *)*param_2);
    if (param_2[8] == 0) {
      sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
      show_error_message(acStack_464);
    }
    else {
      __s1 = (char *)get_icon_attribute(param_2[8],param_3,param_5);
      if (__s1 == (char *)0x0) {
        sprintf(acStack_464,"Don\'t know how to %s %s",param_5,*param_2);
        show_error_message(acStack_464);
      }
      else {
        if ((param_4 != '\0') && (wineditor_enabled != '\0')) {
          sVar2 = strlen("$WINEDITOR ");
          iVar3 = strncmp(__s1,"$WINEDITOR ",sVar2);
          if (iVar3 == 0) {
            copy_file_item(param_1,param_2);
            halt_baddata();
          }
        }
        display_scan_status(param_6,pcVar1,2000);
        if (rest_mode_enabled != '\0') {
          sVar2 = strlen("REST=");
          XtMalloc(sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        sprintf(acStack_464,"LEADER=%s",pcVar1);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (current_dir_path != (char *)0x0) {
          XtFree(current_dir_path);
        }
        current_dir_path = pcVar1;
        uVar4 = get_icon_string(param_2[8]);
        sprintf(acStack_464,"LEADERTYPE=%s",uVar4);
        sVar2 = strlen(acStack_464);
        pcVar1 = (char *)XtMalloc(sVar2 + 1);
        pcVar1 = strcpy(pcVar1,acStack_464);
        putenv(pcVar1);
        if (current_file_path != (char *)0x0) {
          XtFree(current_file_path);
        }
        current_file_path = pcVar1;
        sprintf(acStack_464,"%s&",__s1);
        update_status_display(acStack_464);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void overviewPickPointer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_3e8 [500];
  
  picksize(2,2);
  pushmatrix();
  initnames();
  pick(asStack_3e8,500);
  ortho2(minx,maxx);
  setup_item_render(topdir,1);
  iVar1 = endpick(asStack_3e8);
  popmatrix();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = (int)asStack_3e8[iVar2];
      if (iVar4 == 1) {
        get_item_by_index((int)asStack_3e8[iVar2 + 1]);
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1 + iVar4;
    } while (iVar3 != iVar1);
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

void pickPointer(void)

{
  if (*(int *)(curcontext + 0x3c) == 0) {
    get_cursor_state();
  }
  else {
    get_selection_params();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
