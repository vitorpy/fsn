/**
 * layout.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "layout.h"
#include "fsn_types.h"
#include "fsn_state.h"

void ui_layout_setup_wrapper(void)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  int local_50;
  int local_4c;
  
  if ((**(char **)(unaff_gp + -0x75e0) != '\0') &&
     (iVar1 = **(int **)(unaff_gp + -0x7684), *(char *)(iVar1 + 0xc53) == '\0')) {
    if (*(short *)(*(int *)(unaff_gp + -0x7f98) + 0x148) != *(short *)(iVar1 + 0xc)) {
      local_50 = *(int *)(unaff_gp + -0x7f5c) + 0x35b;
      iVar2 = *(int *)(unaff_gp + -0x7f94);
      *(short *)(*(int *)(unaff_gp + -0x7f98) + 0x148) = *(short *)(iVar1 + 0xc);
      local_4c = (int)*(short *)(iVar1 + 0xc);
      (**(code **)(unaff_gp + -0x7cc0))(*(undefined4 *)(iVar2 + 0x663c),&local_50,1);
      iVar1 = **(int **)(unaff_gp + -0x7684);
    }
    if (*(short *)(*(int *)(unaff_gp + -0x7f98) + 0x14c) != *(short *)(iVar1 + 0xe)) {
      local_50 = *(int *)(unaff_gp + -0x7f5c) + 0x35b;
      iVar2 = *(int *)(unaff_gp + -0x7f94);
      *(short *)(*(int *)(unaff_gp + -0x7f98) + 0x14c) = *(short *)(iVar1 + 0xe);
      local_4c = (int)*(short *)(iVar1 + 0xe);
      (**(code **)(unaff_gp + -0x7cc0))(*(undefined4 *)(iVar2 + 0x6640),&local_50,1);
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void calculate_layout_position(int param_1)

{
  if ((displayHeight != 0) && (displayDirectoryHeight != 0)) {
    if (displayDirectoryHeight == 2) {
      process_directory_data(*(undefined4 *)(param_1 + 0x20));
    }
    else {
      process_directory_data(*(undefined4 *)(param_1 + 0x1c));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void layout_db(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  uint in_register_00001010;
  double dVar2;
  undefined4 uVar3;
  double in_f6;
  undefined4 in_f11;
  
  clear_selection_state();
  time(&last_operation_time);
  miny = 0.0;
  maxy = 0.0;
  minx = 0.0;
  maxx = 0.0;
  if (displayHeight == 0) {
    in_f6 = (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0x3f800000);
    horizontal_scale_factor = 1.0;
  }
  else {
    fVar1 = (float)process_directory_data(window_width);
    horizontal_scale_factor = horizontal_scale_base / fVar1;
  }
  *(undefined4 *)(topdir + 0x2c) = 0;
  *(undefined4 *)(topdir + 0x30) = 0;
  init_directory_layout(topdir);
  uVar3 = (undefined4)((ulonglong)in_f6 >> 0x20);
  if (displayHeight == 0) {
    horizontal_scale_factor = 1.0;
  }
  else if (displayDirectoryHeight == 0) {
    vertical_scale_factor = 1.0;
  }
  else if ((displayDirectoryHeight == 1) || (displayDirectoryHeight != 2)) {
    fVar1 = (float)process_directory_data(window_height);
    in_f6 = (double)CONCAT44(uVar3,reference_dimension);
    vertical_scale_factor = reference_dimension / fVar1;
  }
  else {
    fVar1 = (float)process_directory_data(*(undefined4 *)(topdir + 0x20));
    in_f6 = (double)reference_dimension;
    vertical_scale_factor = (float)(in_f6 / (double)fVar1);
  }
  dVar2 = (double)*(float *)(topdir + 0x3c);
  fVar1 = powf(zoom_base_factor,
               (float)((dVar2 / (double)((ulonglong)in_f6 & 0xffffffff00000000)) /
                      (double)zoom_reference_height));
  calculate_tree_layout(topdir,param_2,0,0,in_f11,
               SUB84((double)((ulonglong)dVar2 & 0xffffffff00000000) / (double)fVar1,0));
  layout_tree_recursive(topdir,param_2,0,0);
  maxShrinkage = powf(zoom_base_factor,maxy / zoom_reference_height);
  maxx = (float)((double)maxx + (double)((ulonglong)in_register_00001010 << 0x20));
  minx = (float)((double)minx - (double)((ulonglong)in_register_00001010 << 0x20));
  dVar2 = (double)maxy;
  maxy = (float)(dVar2 + (double)((ulonglong)in_register_00001010 << 0x20));
  miny = (float)((double)-*(float *)(topdir + 0x3c) /
                 (double)((ulonglong)dVar2 & 0xffffffff00000000) -
                (double)((ulonglong)in_register_00001010 << 0x20));
  refresh_fam_state();
  update_fam_display();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_directory_layout(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte in_fcsr;
  int local_1c [7];
  
  fVar1 = (float)*(int *)(param_1 + 0xc) * item_scale_factor;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar1);
  }
  else {
    fVar1 = FLOOR(fVar1);
  }
  iVar5 = (int)fVar1;
  bzero(local_1c,0x1c);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(*(int *)(param_1 + 0x10) + iVar3);
      iVar3 = iVar3 + 4;
      piVar4 = local_1c + (*(uint *)(*piVar4 + 0x28) >> 0x1d);
      *piVar4 = *piVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  if (iVar5 < local_1c[0]) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else if (iVar5 < local_1c[1]) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  else if (iVar5 < local_1c[2]) {
    *(undefined4 *)(param_1 + 0x68) = 2;
  }
  else if (iVar5 < local_1c[3]) {
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  else if (iVar5 < local_1c[4]) {
    *(undefined4 *)(param_1 + 0x68) = 4;
  }
  else if (iVar5 < local_1c[5]) {
    *(undefined4 *)(param_1 + 0x68) = 5;
  }
  else if (iVar5 < local_1c[6]) {
    *(undefined4 *)(param_1 + 0x68) = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 7;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_directory_layout(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  double dVar4;
  float fVar5;
  float fVar6;
  uint unaff_000010b0;
  uint in_fcsr;
  
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x10;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    dVar4 = (double)(**(code **)(unaff_gp + -0x7ef8))((double)(*(int *)(param_1 + 0xc) + -1));
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar4 = ROUND(dVar4);
    }
    else {
      dVar4 = FLOOR(dVar4);
    }
    iVar3 = (int)dVar4 + 1;
  }
  if (iVar3 == 0) {
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    *(float *)(param_1 + 0x3c) =
         (float)((double)*(float *)(iVar2 + 0x70) +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)*(float *)(iVar2 + 0x74));
  }
  else {
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    *(float *)(param_1 + 0x3c) =
         (float)((double)iVar3 *
                ((double)*(float *)(iVar2 + 0x70) +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)*(float *)(iVar2 + 0x74)));
  }
  fVar5 = *(float *)(iVar2 + 0x74);
  fVar6 = *(float *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  fVar5 = (float)((double)(1 - iVar3) *
                  ((double)fVar6 + (double)((ulonglong)unaff_000010b0 << 0x20) * (double)fVar5) *
                 (double)((ulonglong)(double)fVar6 & 0xffffffff00000000));
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar3 = *(int *)(unaff_gp + -0x7fe8);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    (*(code *)(iVar3 + 0x2234))(param_1);
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x18c);
    if (*piVar1 < *(int *)(param_1 + 0x1c)) {
      *piVar1 = *(int *)(param_1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      (**(code **)(unaff_gp + -0x7a70))(**(undefined4 **)(param_1 + 0x18));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar3 = **(int **)(param_1 + 0x10);
  *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 4;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(iVar3 + 0xc);
  *(float *)(iVar3 + 0x14) = fVar5;
  *(float *)(iVar3 + 0x18) = fVar5;
  (**(code **)(unaff_gp + -0x7a74))(iVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void recalc_layout(void)

{
  int unaff_gp;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7904))();
  }
  else {
    (**(code **)(unaff_gp + -0x79e8))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
