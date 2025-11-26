/**
 * io.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "io.h"
#include "fsn_types.h"
#include "fsn_state.h"

void write_database_entry(undefined4 param_1)

{
  gl_push_state();
  set_context_state(0,1);
  write_file_entry(param_1);
  set_context_state(1,1);
  write_file_entry(param_1);
  gl_pop_state();
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

void readingDatabaseMessage(void)

{
  undefined4 uVar1;
  
  uVar1 = XmTextGetLastPosition(active_file_list);
  XmTextInsert(active_file_list,uVar1,PTR_s_Please_be_patient_while_the_file_10007b60);
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

void readMark(FILE *param_1)

{
  size_t sVar1;
  undefined1 auStack_43c [56];
  short local_404 [2];
  undefined1 auStack_400 [1024];
  
  sVar1 = fread(local_404,2,1,param_1);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading mark from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sVar1 = fread(auStack_400,1,(int)local_404[0],param_1);
  if (sVar1 != (int)local_404[0]) {
    fprintf((FILE *)0xfb52904,"syntax error in reading mark name from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  auStack_400[local_404[0]] = 0;
  write_selection_file(auStack_43c,param_1);
  copy_buffer_data(auStack_400,auStack_43c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void read_data_section(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_gp;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 0x84);
    }
    iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe0) + 0x25fc))(param_1,param_2);
    iVar4 = 0;
    if (param_4 == 0) {
      param_4 = *(int *)(iVar1 + 0x24);
    }
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x18)) {
      do {
        if ((((param_3 == (int *)0x0) ||
             (*(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0x10) == *param_3)) &&
            (param_4 == *(int *)(*(int *)(iVar1 + 0x20) + iVar2 * 4))) &&
           (iVar3 = *(int *)(*(int *)(iVar1 + 0x14) + iVar2 * 0x28 + 0xc), iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(iVar1 + 0x18));
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void read_context_value(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != (undefined4 *)0x0 &&
         (iVar1 = (**(code **)(unaff_gp + -0x7f34))(param_2,*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void apply_context_changes(undefined8 param_1,undefined8 param_2,undefined4 *param_3,char param_4)

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
    piVar6 = *(int **)(unaff_gp + -0x7684);
    iVar4 = *(int *)(unaff_gp + -0x75dc);
    fVar10 = *(float *)(iVar4 + 0x110) * *(float *)(*piVar6 + 0x34);
    if (*(char *)(iVar4 + 4) == '\0') {
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x148));
      (**(code **)(unaff_gp + -0x7dc4))();
      unaff_f20 = (double)fVar10;
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      uVar18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50bc);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
    }
    else {
      (**(code **)(unaff_gp + -0x7cc8))(1);
      (**(code **)(unaff_gp + -0x7dc4))();
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x150));
      unaff_f20 = (double)fVar10;
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x14c));
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
      (**(code **)(unaff_gp + -0x7cc8))(0);
      (**(code **)(unaff_gp + -0x7dc4))();
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x14c));
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 + unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      uVar18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50c4);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = (float)((double)pfVar1[2] + (double)CONCAT44(unaff_000010b0,uVar18));
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      pfVar1 = (float *)*piVar6;
      local_28 = (float)((double)*pfVar1 - unaff_f20);
      local_24 = pfVar1[1] + *(float *)(iVar4 + 0x114);
      local_20 = pfVar1[2] + *(float *)(iVar4 + 0x10c);
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
      (**(code **)(unaff_gp + -0x7cc8))(1);
      (**(code **)(unaff_gp + -0x7dc4))();
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x15c));
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] - *(float *)(iVar4 + 0x118);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] - *(float *)(iVar4 + 0x118);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar4 + 0x158));
      local_28 = (float)((double)*(float *)*piVar6 + unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      local_28 = (float)((double)*(float *)*piVar6 - unaff_f20);
      local_24 = ((float *)*piVar6)[1] + *(float *)(iVar4 + 0x114);
      local_20 = -0.5;
      (**(code **)(unaff_gp + -0x7dc0))(&local_28);
      (**(code **)(unaff_gp + -0x7dbc))();
      (**(code **)(unaff_gp + -0x7cc8))(0);
    }
  }
  piVar6 = *(int **)(unaff_gp + -0x7684);
  iVar4 = *piVar6;
  iVar5 = *(int *)(unaff_gp + -0x75dc);
  local_18 = *(float *)(iVar4 + 4) -
             *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 8);
  (**(code **)(unaff_gp + -0x7e1c))((int)*(short *)((int)param_3 + 0x5e));
  (**(code **)(unaff_gp + -0x7b48))();
  dVar17 = (double)((ulonglong)unaff_f20 & 0xffffffff00000000);
  lVar8 = (ulonglong)uVar7 << 0x20;
  uVar9 = CONCAT44(uVar11,(float)((double)(float)param_3[0xf] / dVar17));
  (**(code **)(unaff_gp + -0x7b60))(lVar8,uVar9);
  uVar12 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar7 = (uint)((ulonglong)lVar8 >> 0x20);
  if ((int)(param_3[0x1d] << 0xb) < 0) {
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(iVar5 + 0x174));
    lVar8 = (ulonglong)uVar7 << 0x20;
    lVar13 = (ulonglong)uVar12 << 0x20;
    (**(code **)(unaff_gp + -0x7b60))(lVar8,lVar13);
    fVar10 = (float)((double)-(float)param_3[0xf] / dVar17 - (double)*(float *)(iVar5 + 0x60));
    uVar9 = CONCAT44((int)((ulonglong)lVar8 >> 0x20),fVar10);
    uVar14 = CONCAT44((int)((ulonglong)lVar13 >> 0x20),fVar10);
    (**(code **)(unaff_gp + -0x7e20))(uVar9,uVar14);
    uVar12 = (uint)((ulonglong)uVar14 >> 0x20);
    uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
    (**(code **)(unaff_gp + -0x7b28))();
  }
  (**(code **)(unaff_gp + -0x7b9c))(*(undefined4 *)(**(int **)(unaff_gp + -0x768c) + 0x10));
  if ((int)(param_3[0x1d] << 0xd) < 0) {
    dVar16 = (double)-(float)param_3[0xf] / dVar17;
    uVar9 = CONCAT44(uVar7,(float)dVar16);
    uVar14 = CONCAT44(uVar12,(float)dVar16);
    (**(code **)(unaff_gp + -0x7df0))(uVar9,uVar14);
    uVar18 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  else {
    dVar16 = (double)-(float)param_3[0xf] / dVar17;
    uVar9 = CONCAT44(uVar7,(float)dVar16);
    uVar14 = CONCAT44(uVar12,(float)dVar16);
    (**(code **)(unaff_gp + -0x7e20))(uVar9,uVar14);
    uVar18 = (undefined4)((ulonglong)uVar14 >> 0x20);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar15 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  (**(code **)(unaff_gp + -0x7b48))();
  dVar16 = (double)(int)param_3[1] *
           (double)CONCAT44(uVar15,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50b4));
  uVar9 = CONCAT44(uVar11,(float)dVar16);
  uVar14 = CONCAT44(uVar18,(float)((double)-(float)param_3[0xf] / dVar17 -
                                  (double)CONCAT44((int)((ulonglong)dVar16 >> 0x20),
                                                   *(undefined4 *)
                                                    (*(int *)(unaff_gp + -0x7fa4) + -0x50ac))));
  (**(code **)(unaff_gp + -0x7b60))(uVar9,uVar14);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  (**(code **)(unaff_gp + -0x7b68))((int)-*(short *)(*piVar6 + 0xe),0x78);
  uVar18 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x50a8);
  lVar8 = CONCAT44(uVar11,uVar18);
  dVar16 = (double)CONCAT44(uVar15,uVar18);
  (**(code **)(unaff_gp + -0x7b6c))(lVar8,dVar16);
  (**(code **)(unaff_gp + -0x7a08))(*param_3);
  (**(code **)(unaff_gp + -0x7b28))();
  iVar4 = 0;
  if (0 < (int)param_3[3]) {
    iVar5 = 0;
    do {
      iVar3 = *(int *)(param_3[4] + iVar5);
      (**(code **)(unaff_gp + -0x7db0))((int)(short)iVar4);
      if (param_4 == '\0') {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      if (param_4 == '\0') {
        uVar2 = *(int *)(iVar3 + 0x28) << 9 < 0;
      }
      else {
        uVar2 = 4;
      }
      (**(code **)(unaff_gp + -0x7948))(param_3,iVar3,0,param_4 == '\0',uVar2,0x1f);
      uVar11 = (undefined4)((ulonglong)dVar16 >> 0x20);
      uVar7 = (uint)((ulonglong)lVar8 >> 0x20);
      if (*(int *)(iVar3 + 0x28) << 3 < 0) {
        (**(code **)(unaff_gp + -0x7b48))();
        (**(code **)(unaff_gp + -0x7b60))
                  ((ulonglong)uVar7 << 0x20,
                   CONCAT44(uVar11,(float)((double)-(float)param_3[0xf] / dVar17)));
        dVar16 = (double)(float)param_3[0xf] * dVar17;
        lVar8 = (ulonglong)unaff_000010b0 << 0x20;
        (**(code **)(unaff_gp + -0x78f8))(lVar8,dVar16);
        (**(code **)(unaff_gp + -0x7b28))();
        if (0 < iVar4) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        if (iVar4 < param_3[3] + -1) {
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
      }
      iVar4 = iVar4 + 1;
      (**(code **)(unaff_gp + -0x7de8))();
      iVar5 = iVar5 + 4;
    } while (iVar4 < (int)param_3[3]);
  }
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x6e64))(param_3,param_4);
  (**(code **)(unaff_gp + -0x7b28))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void apply_label_color(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined4 local_48 [3];
  code *local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_c;
  undefined2 local_8;
  ushort local_6;
  undefined2 local_4;
  undefined1 local_2;
  
  local_3c = (code *)XmGetColorCalculation();
  if ((param_2[2] != 0) && (param_1 == param_2[3])) {
    halt_baddata();
  }
  local_6 = (ushort)param_1 & 0xff00;
  local_8 = (undefined2)((param_1 & 0xff) << 8);
  local_4 = (undefined2)((param_1 >> 0x10) << 8);
  local_2 = 7;
  iVar1 = param_2[2];
  if (iVar1 == 0) {
    iVar1 = XAllocColor(display,param_4,&local_c);
    if (iVar1 == 0) {
      fprintf((FILE *)0xfb52904,"cannot allocate colors for label\n");
      *param_2 = *(undefined4 *)(*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
      param_2[1] = *(undefined4 *)
                    (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
    }
    else {
      *param_2 = local_c;
      (*local_3c)(&local_c,local_48,auStack_54,auStack_60,auStack_6c);
      iVar1 = XAllocColor(display,param_4,local_48);
      if (iVar1 == 0) {
        param_2[1] = *(undefined4 *)
                      (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
      }
      else {
        param_2[1] = local_48[0];
      }
      param_2[2] = 1;
      param_2[3] = param_1;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = XAllocColorCells(display,param_4,0,auStack_70,1,&local_74,1);
      if (iVar1 == 0) {
        fprintf((FILE *)0xfb52904,"cannot allocate colors for label\n");
        goto code_r0x00428fd8;
      }
      param_2[2] = 2;
      *param_2 = local_74;
    }
    else if (iVar1 != 2) goto code_r0x00428fd8;
    local_c = *param_2;
    XStoreColor(display,param_4,&local_c);
    *param_2 = local_c;
    param_2[3] = param_1;
    (*local_3c)(&local_c,local_48,auStack_54,auStack_60,auStack_6c);
    iVar1 = XAllocColor(display,param_4,local_48);
    if (iVar1 == 0) {
      param_2[1] = *(undefined4 *)
                    (*(int *)(display + 0x8c) + *(int *)(display + 0x84) * 0x50 + 0x38);
    }
    else {
      param_2[1] = local_48[0];
    }
  }
code_r0x00428fd8:
  if (param_3 != 0) {
    local_34 = 0xf6615f6;
    local_30 = param_2[1];
    local_2c = 0xf661554;
    local_28 = *param_2;
    XtSetValues(param_3,&local_34,2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void apply_pending_updates(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7e6c))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10));
  (**(code **)(unaff_gp + -0x7e70))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10),uVar1,
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7b60));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
