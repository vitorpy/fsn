/**
 * state.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "state.h"
#include "fsn_types.h"
#include "fsn_state.h"

void init_app_state(void)

{
  size_t sVar1;
  char *__s;
  char *__s_00;
  
  __s_00 = *(char **)(display + 0x80);
  sVar1 = strlen(__s_00);
  __s = (char *)malloc(sVar1 + 9);
  sprintf(__s,"DISPLAY=%s",__s_00);
  putenv(__s);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_camera_state(void)

{
  int unaff_gp;
  undefined4 uVar1;
  undefined4 in_register_00001040;
  float fVar2;
  undefined4 in_register_00001080;
  
  fVar2 = (float)(((double)(int)*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe) /
                  (double)CONCAT44(in_register_00001040,
                                   *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58d4))) *
                 (double)CONCAT44(in_register_00001080,
                                  *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x58cc)));
  uVar1 = (**(code **)(unaff_gp + -0x7ca4))();
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x20) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ca0))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x24) = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7c90))(fVar2);
  *(undefined4 *)(**(int **)(unaff_gp + -0x7684) + 0x28) = uVar1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void reset_view_state(void)

{
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f94) + 0x6688) != '\0') {
    (**(code **)(unaff_gp + -0x7acc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_gl_state(int param_1,undefined4 param_2)

{
  if (work_proc_id != 0) {
    XtRemoveWorkProc(work_proc_id);
    work_proc_id = 0;
  }
  if (param_1 != 0) {
    work_proc_id = XtAppAddWorkProc(app_context,param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void save_matrix_state(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int unaff_gp;
  undefined4 local_38 [12];
  undefined4 auStack_8 [2];
  
  (**(code **)(unaff_gp + -0x784c))(local_38);
  iVar2 = (**(code **)(unaff_gp + -0x7834))
                    (local_38,*(int *)(**(int **)(unaff_gp + -0x767c) + 0x34) +
                              *(int *)(**(int **)(unaff_gp + -0x7684) + 0x40) * 0x38);
  piVar4 = *(int **)(unaff_gp + -0x7684);
  if (iVar2 == 0) {
    iVar2 = *piVar4;
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
    iVar2 = *piVar4;
    iVar3 = *(int *)(iVar2 + 0x40);
    if (9 < iVar3) {
      piVar4 = *(int **)(unaff_gp + -0x7684);
      *(undefined4 *)(iVar2 + 0x40) = 0;
      iVar3 = *(int *)(*piVar4 + 0x40);
    }
    puVar1 = (undefined4 *)(*(int *)(**(int **)(unaff_gp + -0x767c) + 0x34) + iVar3 * 0x38);
    puVar7 = local_38;
    do {
      puVar6 = puVar7;
      puVar5 = puVar1;
      puVar7 = puVar6 + 3;
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar5[2] = puVar6[2];
      puVar1 = puVar5 + 3;
    } while (puVar7 != auStack_8);
    puVar5[3] = *puVar7;
    puVar5[4] = puVar6[4];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_database_state(void)

{
  char *pcVar1;
  size_t sVar2;
  char acStack_104 [260];
  
  pcVar1 = getenv("WINEDITOR");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = getenv("EDITOR");
    if (pcVar1 == (char *)0x0) {
      putenv("WINEDITOR=jot");
    }
    else {
      sprintf(acStack_104,"WINEDITOR=winterm -c %s",pcVar1);
      sVar2 = strlen(acStack_104);
      pcVar1 = (char *)XtMalloc(sVar2 + 1);
      pcVar1 = strcpy(pcVar1,acStack_104);
      putenv(pcVar1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_directory_state(void)

{
  size_t sVar1;
  int iVar2;
  char acStack_8 [8];
  
  sVar1 = fread(acStack_8,1,6,current_file);
  if ((sVar1 == 6) && (iVar2 = strncmp(acStack_8,"FuSioN",6), iVar2 == 0)) {
    if (__iob_func_result == 0) {
      current_file->_flags = current_file->_flags + -1;
      if (current_file->_flags < 0) {
        current_input_byte = __filbuf();
      }
      else {
        current_input_byte = (uint)(byte)*current_file->_IO_read_ptr;
        current_file->_IO_read_ptr = current_file->_IO_read_ptr + 1;
      }
    }
    else {
      current_input_byte = __semgetc(current_file);
    }
    if ((2 < (int)current_input_byte) || ((int)current_input_byte < 0)) {
      fprintf((FILE *)0xfb52904,"unknown database version %d, quitting\n");
                    // WARNING: Subroutine does not return
      exit(1);
    }
  }
  else {
    rewind(current_file);
    current_input_byte = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void reset_display_state(void)

{
  int iVar1;
  
  init_directory_state();
  iVar1 = (*(code *)*vinfop)();
  if (iVar1 == -1) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (iVar1 - 1U < 8) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  fprintf((FILE *)0xfb52904,"garbage in database, quitting\n");
                    // WARNING: Subroutine does not return
  exit(1);
}

void update_item_state(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = *(int **)(param_1 + 0x10);
    do {
      iVar1 = iVar1 + 1;
      if (*(int *)(*piVar2 + 0x28) << 0xc < 0) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfd;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void clear_marked_state(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x44) != 0) {
    iVar2 = *(int *)(unaff_gp + -0x7fe4);
    *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
    (*(code *)(iVar2 + -0x2be8))();
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),0);
    (**(code **)(unaff_gp + -0x79c0))();
    piVar1 = *(int **)(unaff_gp + -0x7684);
    *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) = *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) & 0xdf;
    *(undefined4 *)(*piVar1 + 0x44) = 0;
    *(undefined1 *)(*piVar1 + 0x4c) = 0;
    (**(code **)(unaff_gp + -0x79d4))();
    local_24 = **(undefined4 **)(unaff_gp + -0x75f8);
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x20),&local_28,1);
    (**(code **)(unaff_gp + -0x79d0))();
    (**(code **)(unaff_gp + -0x798c))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void get_cursor_state(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int unaff_gp;
  undefined4 uVar10;
  uint uVar11;
  undefined8 in_f4;
  int local_7fc;
  short local_7dc [500];
  short local_3f4 [500];
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar11 = (uint)((ulonglong)in_f4 >> 0x20);
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  iVar9 = -1;
  iVar8 = -1;
  local_7fc = -1;
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7de0))();
  (**(code **)(unaff_gp + -0x7dd0))(5,5);
  (**(code **)(unaff_gp + -0x7dd4))(local_3f4,500);
  (**(code **)(unaff_gp + -0x7adc))();
  piVar5 = *(int **)(unaff_gp + -0x7684);
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(*piVar5 + 0x34)));
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xc),0x7a);
  iVar2 = *piVar5;
  iVar6 = *(int *)(unaff_gp + -0x75dc);
  uVar10 = (**(code **)(unaff_gp + -0x7b64))
                     (*(undefined4 *)(iVar6 + 0x104),
                      (*(float *)(iVar2 + 4) -
                      *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 8)) /
                      *(float *)(iVar6 + 0x108));
  (**(code **)(unaff_gp + -0x7b6c))(uVar10);
  (**(code **)(unaff_gp + -0x7b60))(-*(float *)*piVar5,-((float *)*piVar5)[1]);
  (**(code **)(unaff_gp + -0x7938))(1);
  iVar2 = (**(code **)(unaff_gp + -0x7dd8))(local_3f4);
  (**(code **)(unaff_gp + -0x7b28))();
  (**(code **)(unaff_gp + -0x7b48))();
  (**(code **)(unaff_gp + -0x7de0))();
  (**(code **)(unaff_gp + -0x7dd4))(local_7dc,500);
  uVar11 = 0;
  (**(code **)(unaff_gp + -0x7adc))();
  (**(code **)(unaff_gp + -0x7b6c))
            ((float)((double)((ulonglong)uVar11 << 0x20) / (double)*(float *)(*piVar5 + 0x34)));
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xe),0x78);
  (**(code **)(unaff_gp + -0x7b68))((int)*(short *)(*piVar5 + 0xc),0x7a);
  iVar3 = *piVar5;
  uVar10 = (**(code **)(unaff_gp + -0x7b64))
                     (*(undefined4 *)(iVar6 + 0x104),
                      (*(float *)(iVar3 + 4) -
                      *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 8)) /
                      *(float *)(iVar6 + 0x108));
  (**(code **)(unaff_gp + -0x7b6c))(uVar10,0x3f800000);
  (**(code **)(unaff_gp + -0x7b60))(-*(float *)*piVar5,-((float *)*piVar5)[1]);
  iVar3 = 0;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      sVar1 = local_3f4[iVar3];
      if (sVar1 == 1) {
        uVar10 = (**(code **)(unaff_gp + -0x7a7c))((int)local_3f4[iVar3 + 1]);
        (**(code **)(unaff_gp + -0x7928))(uVar10);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1 + (int)sVar1;
    } while (iVar6 != iVar2);
  }
  iVar6 = 0;
  iVar3 = 0;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0x6244))(**(undefined4 **)(unaff_gp + -0x76d4));
  iVar2 = (**(code **)(unaff_gp + -0x7dd8))(local_7dc);
  (**(code **)(unaff_gp + -0x7b28))();
  if (0 < iVar2) {
    do {
      iVar7 = (int)local_7dc[iVar3];
      psVar4 = local_7dc + iVar3 + 1;
      if (iVar7 == 2) {
        if (*psVar4 == 1) {
          if (iVar9 < 0) {
            iVar9 = (int)local_7dc[iVar3 + 2];
          }
        }
        else if ((*psVar4 == 2) && (iVar8 < 0)) {
          iVar8 = (int)local_7dc[iVar3 + 2];
        }
      }
      if ((iVar7 == 3) && (*psVar4 = 2, *psVar4 != 0)) {
        local_7fc = (int)local_7dc[iVar3 + 3];
        iVar8 = (int)local_7dc[iVar3 + 2];
        break;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 1 + iVar7;
    } while (iVar6 != iVar2);
  }
  if (local_7fc < 0) {
    if (iVar8 < 0) {
      if (-1 < iVar9) {
        local_c = (**(code **)(unaff_gp + -0x7a7c))(iVar9);
      }
    }
    else {
      local_4 = (**(code **)(unaff_gp + -0x7a7c))(iVar8);
    }
  }
  else {
    local_4 = (**(code **)(unaff_gp + -0x7a7c))(iVar8);
    local_8 = *(undefined4 *)(*(int *)(local_4 + 0x10) + local_7fc * 4);
  }
  *param_1 = local_4;
  *param_2 = local_8;
  *param_3 = local_c;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_render_state(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_gp;
  undefined4 local_30 [2];
  int local_28;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  
  local_24 = local_30;
  local_28 = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
  (**(code **)(unaff_gp + -0x7c9c))(**(undefined4 **)(unaff_gp + -0x75f0),&local_28,1);
  puVar1 = *(undefined4 **)(unaff_gp + -0x75e8);
  piVar2 = *(int **)(unaff_gp + -0x7688);
  iVar3 = *(int *)(unaff_gp + -0x75c4);
  puVar4 = puVar1 + 7;
  do {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(*piVar2 + 4),iVar3,*puVar1,local_30[0]);
    puVar1 = puVar1 + 1;
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 0x10;
  } while (puVar1 != puVar4);
  iVar3 = *(int *)(unaff_gp + -0x75dc);
  if (*(char *)(iVar3 + 4) == '\0') {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8);
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(iVar3 + 0x148),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x2c),local_30[0]);
  }
  else {
    puVar1 = *(undefined4 **)(unaff_gp + -0x75d8);
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
              (*(undefined4 *)(iVar3 + 0x14c),puVar1,
               *(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x2c),local_30[0]);
  }
  if (*(int *)(**(int **)(unaff_gp + -0x7678) + 0x2c) != 0) {
    local_24 = (undefined4 *)puVar1[1];
    local_1c = *puVar1;
    local_28 = *(int *)(unaff_gp + -0x7f5c) + 0xd6;
    local_20 = *(int *)(unaff_gp + -0x7f5c) + 0x34;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) + 0x2c),&local_28,2);
  }
  (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7340))
            (*(undefined4 *)(iVar3 + 0x174),*(undefined4 *)(unaff_gp + -0x75c0),
             **(undefined4 **)(unaff_gp + -0x75ec),local_30[0]);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_list_state(void)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = blankXmString;
  local_8 = 0xe3f40b5;
  XtSetValues(*(undefined4 *)(curcontextwindows + 0x2c),&local_8,1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void reset_list_state(void)

{
  int unaff_gp;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  (**(code **)(unaff_gp + -0x7ae4))();
  (**(code **)(unaff_gp + -31000))(&local_4,&local_c,&local_8);
  (**(code **)(unaff_gp + -0x78b4))(local_4,local_c,local_8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void set_context_state(uint param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  int unaff_gp;
  
  puVar6 = *(uint **)(unaff_gp + -0x7674);
  if (param_1 != *puVar6) {
    piVar7 = *(int **)(unaff_gp + -0x7684);
    iVar5 = *piVar7;
    iVar2 = *(int *)(iVar5 + 0x44);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x74) = *(byte *)(iVar2 + 0x74) & 0xdf;
      iVar5 = *piVar7;
    }
    iVar2 = *(int *)(iVar5 + 0x48);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) & 0xef;
    }
    iVar2 = *(int *)(unaff_gp + -0x75a8);
    iVar5 = *(int *)(unaff_gp + -0x75a4);
    piVar1 = *(int **)(unaff_gp + -0x767c);
    *piVar7 = iVar2 + param_1 * 0xc54;
    *piVar1 = iVar5 + param_1 * 0x38;
    **(int **)(unaff_gp + -0x7680) = iVar2 + (1 - param_1) * 0xc54;
    piVar8 = *(int **)(unaff_gp + -0x7678);
    piVar1 = *(int **)(unaff_gp + -0x7670);
    *puVar6 = param_1;
    *piVar8 = iVar5 + (1 - param_1) * 0x38;
    *piVar1 = 1 << (param_1 & 0x1f);
    iVar5 = *piVar7;
    iVar2 = *(int *)(iVar5 + 0x44);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x74) = *(byte *)(iVar2 + 0x74) | 0x20;
      iVar5 = *piVar7;
    }
    iVar2 = *(int *)(iVar5 + 0x48);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x10;
    }
    if (param_2 == '\0') {
      uVar3 = (**(code **)(unaff_gp + -0x7c04))(*(undefined4 *)(*piVar8 + 0x28));
      uVar4 = (**(code **)(unaff_gp + -0x7c98))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x7678) + 0x28));
      (**(code **)(unaff_gp + -0x7ebc))(uVar3,uVar4);
      uVar3 = (**(code **)(unaff_gp + -0x7c04))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x28));
      uVar4 = (**(code **)(unaff_gp + -0x7c98))
                        (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x28));
      (**(code **)(unaff_gp + -0x7e50))(uVar3,uVar4);
      (**(code **)(unaff_gp + -0x79d0))();
      (**(code **)(unaff_gp + -0x798c))();
      piVar7 = *(int **)(unaff_gp + -0x7680);
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc53) = 0;
      *(undefined1 *)(*piVar7 + 0xc53) = 1;
      (**(code **)(unaff_gp + -0x7abc))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gl_push_state(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void gl_pop_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7898))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e00),1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_display_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ec8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void clear_selection_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x784c))(*(int *)(unaff_gp + -0x7f94) + 0x6e50);
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x784c))(*(int *)(unaff_gp + -0x7f94) + 0x6e88);
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void sync_fam_state(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  short local_4;
  short local_2;
  
  (**(code **)(unaff_gp + -0x7844))
            (param_1,&local_2,&local_4,&local_8,&local_c,&local_10,&local_14,&local_18,&local_1c,
             **(int **)(unaff_gp + -0x7684) + 0xc50);
  piVar3 = *(int **)(unaff_gp + -0x7684);
  puVar1 = (undefined4 *)*piVar3;
  if (local_2 != *(short *)(puVar1 + 3)) {
    *(short *)(puVar1 + 3) = local_2;
    (**(code **)(unaff_gp + -0x7ad8))();
    piVar3 = *(int **)(unaff_gp + -0x7684);
    puVar1 = (undefined4 *)*piVar3;
  }
  if (local_4 != *(short *)((int)puVar1 + 0xe)) {
    *(short *)((int)puVar1 + 0xe) = local_4;
    (**(code **)(unaff_gp + -0x7ad4))();
    piVar3 = *(int **)(unaff_gp + -0x7684);
    puVar1 = (undefined4 *)*piVar3;
  }
  *puVar1 = local_8;
  *(undefined4 *)(*piVar3 + 4) = local_c;
  *(undefined4 *)(*piVar3 + 8) = local_10;
  *(undefined4 *)(*piVar3 + 0x3c) = local_14;
  iVar2 = *piVar3;
  if (local_18 != *(int *)(iVar2 + 0x44)) {
    if (local_18 == 0) {
      (**(code **)(unaff_gp + -0x79c8))(0);
      iVar2 = **(int **)(unaff_gp + -0x7684);
    }
    else {
      (**(code **)(unaff_gp + -0x79c4))();
      iVar2 = **(int **)(unaff_gp + -0x7684);
    }
  }
  if (local_1c != *(int *)(iVar2 + 0x48)) {
    if (local_1c == 0) {
      (**(code **)(unaff_gp + -0x79c0))(0);
    }
    else {
      (**(code **)(unaff_gp + -0x79bc))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void refresh_fam_state(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7840))(*(int *)(unaff_gp + -0x7f94) + 0x6e50);
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    (**(code **)(unaff_gp + -0x7840))(*(int *)(unaff_gp + -0x7f94) + 0x6e88);
    (**(code **)(unaff_gp + -0x7894))(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_network_state(void)

{
  int iVar1;
  int iVar2;
  
  if (buffer_initialized_flag != 0) {
    buffer_pointer_array = malloc(buffer_size << 2);
    string_buffer = malloc(buffer_size << 2);
    path_buffer = malloc(buffer_size << 2);
    iVar2 = 0;
    iVar1 = 0;
    if (0 < buffer_size) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)((int)string_buffer + iVar1) = 0xffffffff;
        iVar1 = iVar1 + 4;
      } while (iVar2 < buffer_size);
    }
    buffer_initialized_flag = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
