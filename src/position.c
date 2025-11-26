/**
 * position.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "position.h"
#include "fsn_types.h"
#include "fsn_state.h"

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

void get_position_coords(int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int unaff_gp;
  undefined4 *local_110;
  int *local_10c;
  char *local_108 [30];
  char **local_90;
  char *local_8c [30];
  char **local_14 [5];
  
  *param_2 = 0;
  *param_3 = 0;
  uVar2 = (**(code **)(unaff_gp + -0x7c20))();
  piVar9 = *(int **)(unaff_gp + -0x76d4);
  if (uVar2 <= (uint)((undefined4 *)*piVar9)[1]) {
    uVar3 = (**(code **)(unaff_gp + -0x7c20))(param_1);
    iVar4 = (**(code **)(unaff_gp + -0x7f10))(param_1,*(undefined4 *)*piVar9,uVar3);
    if (iVar4 != 0) {
      halt_baddata();
    }
    *param_2 = *piVar9;
    halt_baddata();
  }
  iVar4 = (**(code **)(unaff_gp + -0x7f10))(param_1,*(undefined4 *)*piVar9);
  if (iVar4 != 0) {
    halt_baddata();
  }
  iVar4 = *piVar9;
  pcVar7 = (char *)(param_1 + *(int *)(iVar4 + 4));
  cVar1 = *pcVar7;
  while (cVar1 == '/') {
    pcVar5 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar5;
  }
  pcVar5 = (char *)(**(code **)(unaff_gp + -0x7f18))(pcVar7,0x2f);
  while (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
    iVar4 = (**(code **)(unaff_gp + -0x7a58))(iVar4,pcVar7);
    if (iVar4 == 0) {
      *pcVar5 = '/';
      halt_baddata();
    }
    cVar1 = pcVar5[1];
    while (pcVar7 = pcVar5 + 1, cVar1 == '/') {
      cVar1 = pcVar5[2];
      pcVar5 = pcVar7;
    }
    pcVar5 = (char *)(**(code **)(unaff_gp + -0x7f18))(pcVar7,0x2f);
  }
  if (*pcVar7 == '\0') {
    *param_2 = iVar4;
    halt_baddata();
  }
  if (*(int *)(iVar4 + 0xc) != 0) {
    local_90 = local_108;
    local_108[0] = pcVar7;
    iVar6 = (**(code **)(unaff_gp + -0x7878))
                      (&local_90,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0xc),4,
                       *(undefined4 *)(unaff_gp + -0x7a64),&local_110);
    if (iVar6 != 0) {
      *param_2 = iVar4;
      *param_3 = *local_110;
      halt_baddata();
    }
    if (local_110 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)*local_110;
      iVar6 = *(int *)(iVar4 + 0x14);
      goto LAB_0042ad4c;
    }
  }
  puVar10 = (undefined4 *)0x0;
  iVar6 = *(int *)(iVar4 + 0x14);
LAB_0042ad4c:
  if (iVar6 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_8c[0] = pcVar7;
    local_14[0] = local_8c;
    iVar6 = (**(code **)(unaff_gp + -0x7878))
                      (local_14,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x14),4,
                       *(undefined4 *)(unaff_gp + -0x7a60),&local_10c);
    if (iVar6 != 0) {
      *param_2 = *local_10c;
      halt_baddata();
    }
    puVar8 = (undefined4 *)0x0;
    if (local_10c != (int *)0x0) {
      puVar8 = (undefined4 *)*local_10c;
    }
  }
  if ((puVar8 != (undefined4 *)0x0) && (puVar10 != (undefined4 *)0x0)) {
    iVar6 = (**(code **)(unaff_gp + -0x7f34))(*puVar10,*puVar8);
    if (iVar6 < 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)0x0;
    }
  }
  if (puVar10 == (undefined4 *)0x0) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar3 = (**(code **)(unaff_gp + -0x7c20))(pcVar7);
      iVar4 = (**(code **)(unaff_gp + -0x7f10))(*puVar8,pcVar7,uVar3);
      if (iVar4 == 0) {
        *param_2 = (int)puVar8;
      }
    }
  }
  else {
    uVar3 = (**(code **)(unaff_gp + -0x7c20))(pcVar7);
    iVar6 = (**(code **)(unaff_gp + -0x7f10))(*puVar10,pcVar7,uVar3);
    if (iVar6 == 0) {
      *param_2 = iVar4;
      *param_3 = puVar10;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void savePosition(undefined2 *param_1)

{
  *param_1 = *(undefined2 *)(curcontext + 0xc);
  param_1[1] = *(undefined2 *)(curcontext + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)curcontext;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(curcontext + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(curcontext + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(curcontext + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(curcontext + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(curcontext + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = curcontext[0xc50];
  if (*(int *)(curcontext + 0x44) != 0) {
    if (*(int *)(curcontext + 0x3c) == 0) {
      *(float *)(param_1 + 0xc) =
           *(float *)curcontext - *(float *)(*(int *)(curcontext + 0x44) + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(curcontext + 4) - *(float *)(*(int *)(curcontext + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           *(float *)(curcontext + 8) - *(float *)(*(int *)(curcontext + 0x44) + 0x24);
      if (*(int *)(curcontext + 0x48) != 0) {
        *(float *)(param_1 + 0x14) =
             *(float *)curcontext -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x34) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x14) *
             *(float *)(*(int *)(curcontext + 0x44) + 0x58));
        *(float *)(param_1 + 0x16) =
             *(float *)(curcontext + 4) -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x38) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x18));
        *(float *)(param_1 + 0x18) =
             *(float *)(curcontext + 8) -
             (*(float *)(*(int *)(curcontext + 0x44) + 0x24) +
             *(float *)(*(int *)(curcontext + 0x48) + 0x1c));
      }
    }
    else if (*(int *)(curcontext + 0x48) != 0) {
      *(float *)(param_1 + 0x14) =
           *(float *)curcontext - *(float *)(*(int *)(curcontext + 0x48) + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(curcontext + 4) - *(float *)(*(int *)(curcontext + 0x48) + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_view_position(undefined2 *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  
  piVar3 = *(int **)(unaff_gp + -0x7684);
  *param_1 = *(undefined2 *)(*piVar3 + 0xc);
  param_1[1] = *(undefined2 *)(*piVar3 + 0xe);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)*piVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(*piVar3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*piVar3 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(*piVar3 + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(*piVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(*piVar3 + 0x48);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(*piVar3 + 0xc50);
  pfVar1 = (float *)*piVar3;
  if (pfVar1[0x11] != 0.0) {
    if (pfVar1[0xf] == 0.0) {
      *(float *)(param_1 + 0xc) = *pfVar1 - *(float *)((int)pfVar1[0x11] + 0x34);
      *(float *)(param_1 + 0xe) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x38);
      *(float *)(param_1 + 0x10) =
           *(float *)(*piVar3 + 8) - *(float *)(*(int *)(*piVar3 + 0x44) + 0x24);
      pfVar1 = (float *)*piVar3;
      if (pfVar1[0x12] != 0.0) {
        *(float *)(param_1 + 0x14) =
             *pfVar1 - (*(float *)((int)pfVar1[0x11] + 0x34) +
                       *(float *)((int)pfVar1[0x12] + 0x14) * *(float *)((int)pfVar1[0x11] + 0x58));
        iVar2 = *piVar3;
        *(float *)(param_1 + 0x16) =
             *(float *)(iVar2 + 4) -
             (*(float *)(*(int *)(iVar2 + 0x44) + 0x38) + *(float *)(*(int *)(iVar2 + 0x48) + 0x18))
        ;
        iVar2 = *piVar3;
        *(float *)(param_1 + 0x18) =
             *(float *)(iVar2 + 8) -
             (*(float *)(*(int *)(iVar2 + 0x44) + 0x24) + *(float *)(*(int *)(iVar2 + 0x48) + 0x1c))
        ;
      }
    }
    else if (pfVar1[0x12] != 0.0) {
      *(float *)(param_1 + 0x14) = *pfVar1 - *(float *)((int)pfVar1[0x12] + 0x14);
      *(float *)(param_1 + 0x16) =
           *(float *)(*piVar3 + 4) - *(float *)(*(int *)(*piVar3 + 0x48) + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void savePositions(void)

{
  get_view_position(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    get_view_position(&fam_request_id);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void getPosition(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                undefined1 *param_10)

{
  int iVar1;
  
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_10 = *(undefined1 *)(param_1 + 0x1a);
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 == 0) {
    *param_7 = 0;
    iVar1 = *(int *)(param_1 + 10);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x74) << 3 < 0) {
        *param_8 = iVar1;
        iVar1 = *(int *)(param_1 + 0x12);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x28) << 5 < 0) {
            *param_9 = iVar1;
            *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x14) *
                       *(float *)(*(int *)(param_1 + 10) + 0x58) + *(float *)(param_1 + 0x14);
            *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
            *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
        }
        *param_9 = 0;
        *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) + *(float *)(param_1 + 0xc);
        *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) + *(float *)(param_1 + 0xe);
        *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) + *(float *)(param_1 + 0x10);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(param_1 + 4);
    *param_5 = *(float *)(param_1 + 6);
    *param_6 = *(float *)(param_1 + 8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (-1 < *(int *)(iVar1 + 0x74) << 3) {
    *param_7 = 0;
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = view_init_x;
    *param_5 = view_init_y;
    *param_6 = view_init_z;
    *param_2 = 0;
    *param_3 = (short)view_init_rotation_x;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_7 = iVar1;
  *param_8 = iVar1;
  iVar1 = *(int *)(param_1 + 0x12);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x28) << 5 < 0)) {
    *param_9 = iVar1;
    *param_4 = *(float *)(*(int *)(param_1 + 0x12) + 0x14) + *(float *)(param_1 + 0x14);
    *param_5 = *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
    *param_6 = *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_9 = 0;
  *param_4 = *(float *)(param_1 + 4);
  *param_5 = *(float *)(param_1 + 6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void extract_position_data(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,float *param_4,
                 float *param_5,float *param_6,int *param_7,int *param_8,int *param_9,
                 undefined1 *param_10)

{
  int iVar1;
  int unaff_gp;
  
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_10 = *(undefined1 *)(param_1 + 0x1a);
  iVar1 = *(int *)(param_1 + 2);
  if (iVar1 == 0) {
    *param_7 = 0;
    iVar1 = *(int *)(param_1 + 10);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x74) << 3 < 0) {
        *param_8 = iVar1;
        iVar1 = *(int *)(param_1 + 0x12);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x28) << 5 < 0) {
            *param_9 = iVar1;
            *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x14) *
                       *(float *)(*(int *)(param_1 + 10) + 0x58) + *(float *)(param_1 + 0x14);
            *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
            *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) +
                       *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
        }
        *param_9 = 0;
        *param_4 = *(float *)(*(int *)(param_1 + 10) + 0x34) + *(float *)(param_1 + 0xc);
        *param_5 = *(float *)(*(int *)(param_1 + 10) + 0x38) + *(float *)(param_1 + 0xe);
        *param_6 = *(float *)(*(int *)(param_1 + 10) + 0x24) + *(float *)(param_1 + 0x10);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
    }
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(param_1 + 4);
    *param_5 = *(float *)(param_1 + 6);
    *param_6 = *(float *)(param_1 + 8);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (-1 < *(int *)(iVar1 + 0x74) << 3) {
    *param_7 = 0;
    iVar1 = *(int *)(unaff_gp + -0x75dc);
    *param_8 = 0;
    *param_9 = 0;
    *param_4 = *(float *)(iVar1 + 0x18);
    *param_5 = *(float *)(iVar1 + 0x1c);
    *param_6 = *(float *)(iVar1 + 0x20);
    *param_2 = 0;
    *param_3 = (short)*(undefined4 *)(iVar1 + 0x28);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_7 = iVar1;
  *param_8 = iVar1;
  iVar1 = *(int *)(param_1 + 0x12);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x28) << 5 < 0)) {
    *param_9 = iVar1;
    *param_4 = *(float *)(*(int *)(param_1 + 0x12) + 0x14) + *(float *)(param_1 + 0x14);
    *param_5 = *(float *)(*(int *)(param_1 + 0x12) + 0x18) + *(float *)(param_1 + 0x16);
    *param_6 = *(float *)(*(int *)(param_1 + 0x12) + 0x1c) + *(float *)(param_1 + 0x18);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  *param_9 = 0;
  *param_4 = *(float *)(param_1 + 4);
  *param_5 = *(float *)(param_1 + 6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void restorePosition(undefined4 param_1)

{
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  short sStack_4;
  short sStack_2;
  
  extract_position_data(param_1,&sStack_2,&sStack_4,&uStack_8,&uStack_c,&uStack_10,&uStack_14,&iStack_18,
               &iStack_1c,(int)curcontext + 0xc50);
  if (sStack_2 != *(short *)(curcontext + 0xc)) {
    *(short *)(curcontext + 0xc) = sStack_2;
    init_view_transform();
  }
  if (sStack_4 != *(short *)(curcontext + 0xe)) {
    *(short *)(curcontext + 0xe) = sStack_4;
    init_camera_state();
  }
  *(undefined4 *)curcontext = uStack_8;
  *(undefined4 *)(curcontext + 4) = uStack_c;
  *(undefined4 *)(curcontext + 8) = uStack_10;
  *(undefined4 *)(curcontext + 0x3c) = uStack_14;
  if (iStack_18 != *(int *)(curcontext + 0x44)) {
    if (iStack_18 == 0) {
      clear_marked_state();
    }
    else {
      update_marked_item(0);
    }
  }
  if (iStack_1c != *(int *)(curcontext + 0x48)) {
    if (iStack_1c == 0) {
      clear_current_selection();
    }
    else {
      get_item_screen_coords(NULL);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void restorePositions(void)

{
  sync_fam_state(&fam_connection);
  if (altcontext[0xc51] != '\0') {
    gl_swap_buffers(1);
    sync_fam_state(&fam_request_id);
    gl_swap_buffers(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void zoomPosition(undefined4 param_1)

{
  int iVar1;
  char cStack_1d;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  float fStack_c;
  float fStack_8;
  undefined1 auStack_4 [2];
  undefined1 auStack_2 [2];
  
  iVar1 = extract_position_data(param_1,auStack_2,auStack_4,&fStack_8,&fStack_c,auStack_10,auStack_14,
                       &iStack_18,&iStack_1c,&cStack_1d);
  if (iVar1 != 0) {
    if (iStack_18 != *(int *)(curcontext + 0x44)) {
      if (iStack_18 == 0) {
        clear_marked_state();
      }
      else {
        update_marked_item(0);
      }
    }
    if (iStack_1c != *(int *)(curcontext + 0x48)) {
      if (iStack_1c == 0) {
        clear_current_selection();
      }
      else {
        get_item_screen_coords(NULL);
      }
    }
    if (cStack_1d == '\0') {
      curcontext[0xc50] = 0;
      set_camera_lookat((double)fStack_8,(double)fStack_c);
    }
    else {
      set_camera_lookat((double)fStack_8,(double)fStack_c);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void equalPositions(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void writePosition(undefined2 *param_1,FILE *param_2)

{
  char *pcVar1;
  size_t sVar2;
  void *pvVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  undefined1 uStack_2;
  
  uStack_30 = *(undefined4 *)(param_1 + 4);
  uStack_2c = *(undefined4 *)(param_1 + 6);
  uStack_28 = *(undefined4 *)(param_1 + 8);
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 0xe);
  uStack_1c = *(undefined4 *)(param_1 + 0x10);
  uStack_18 = *(undefined4 *)(param_1 + 0x14);
  uStack_14 = *(undefined4 *)(param_1 + 0x16);
  uStack_10 = *(undefined4 *)(param_1 + 0x18);
  uStack_c = *param_1;
  uStack_a = param_1[1];
  uStack_2 = *(undefined1 *)(param_1 + 0x1a);
  if (*(int *)(param_1 + 2) == 0) {
    uStack_8 = 0;
  }
  else {
    pcVar1 = (char *)build_path_string(0,*(int *)(param_1 + 2));
    sVar2 = strlen(pcVar1);
    uStack_8 = (short)sVar2;
  }
  if (*(int *)(param_1 + 10) == 0) {
    uStack_6 = 0;
  }
  else {
    pcVar1 = (char *)build_path_string(0, NULL);
    sVar2 = strlen(pcVar1);
    uStack_6 = (short)sVar2;
  }
  if (*(undefined4 **)(param_1 + 0x12) == (undefined4 *)0x0) {
    uStack_4 = 0;
  }
  else {
    sVar2 = strlen((char *)**(undefined4 **)(param_1 + 0x12));
    uStack_4 = (short)sVar2;
  }
  fwrite(&uStack_30,0x30,1,param_2);
  if (*(int *)(param_1 + 2) != 0) {
    pvVar3 = (void *)build_path_string(0,*(int *)(param_1 + 2));
    fwrite(pvVar3,1,(size_t)uStack_8,param_2);
  }
  if (*(int *)(param_1 + 10) != 0) {
    pvVar3 = (void *)build_path_string(0, NULL);
    fwrite(pvVar3,1,(size_t)uStack_6,param_2);
  }
  if (*(undefined4 **)(param_1 + 0x12) != (undefined4 *)0x0) {
    fwrite((void *)**(undefined4 **)(param_1 + 0x12),1,(size_t)uStack_4,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void readPosition(undefined2 *param_1,FILE *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined1 auStack_430 [1024];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  undefined2 uStack_a;
  ushort uStack_8;
  ushort uStack_6;
  ushort uStack_4;
  undefined1 uStack_2;
  
  sVar1 = fread(&uStack_30,0x30,1,param_2);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading position from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  *(undefined4 *)(param_1 + 4) = uStack_30;
  *(undefined4 *)(param_1 + 6) = uStack_2c;
  *(undefined4 *)(param_1 + 8) = uStack_28;
  *(undefined4 *)(param_1 + 0xc) = uStack_24;
  *(undefined4 *)(param_1 + 0xe) = uStack_20;
  *(undefined4 *)(param_1 + 0x10) = uStack_1c;
  *(undefined4 *)(param_1 + 0x14) = uStack_18;
  *(undefined4 *)(param_1 + 0x16) = uStack_14;
  *(undefined4 *)(param_1 + 0x18) = uStack_10;
  *param_1 = uStack_c;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[1] = uStack_a;
  *(undefined1 *)(param_1 + 0x1a) = uStack_2;
  if (uStack_8 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)uStack_8,param_2);
    if (sVar1 != uStack_8) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position warpdp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    uVar2 = get_path_entry(auStack_430);
    *(undefined4 *)(param_1 + 2) = uVar2;
    auStack_430[uStack_8] = 0;
  }
  if (uStack_6 == 0) {
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)uStack_6,param_2);
    if (sVar1 != uStack_6) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selecteddp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[uStack_6] = 0;
    uVar2 = get_path_entry();
    *(undefined4 *)(param_1 + 10) = uVar2;
  }
  if (uStack_4 == 0) {
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  else {
    sVar1 = fread(auStack_430,1,(uint)uStack_4,param_2);
    if (sVar1 != uStack_4) {
      fprintf((FILE *)0xfb52904,"syntax error in reading position selectedfp from database\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
    auStack_430[uStack_4] = 0;
    if (*(int *)(param_1 + 10) == 0) {
      *(undefined4 *)(param_1 + 0x12) = 0;
    }
    else {
      uVar2 = validate_directory_access(*(int *)(param_1 + 10),auStack_430);
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
