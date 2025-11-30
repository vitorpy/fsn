/**
 * apply_context_changes
 *
 * Extracted from fsn.c lines 42783-43027
 * Category: Other
 */

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
