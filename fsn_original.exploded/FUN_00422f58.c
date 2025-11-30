/**
 * FUN_00422f58
 *
 * Extracted from fsn.c lines 62464-62577
 * Ghidra address: 0x00422f58
 * Category: Other
 */

void FUN_00422f58(int param_1,undefined4 *param_2,char param_3,char param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  short sVar4;
  uint uVar3;
  int iVar5;
  int unaff_gp;
  uint extraout_var;
  undefined8 in_f4;
  double dVar6;
  undefined4 uVar7;
  char cStackX_f;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar7 = (undefined4)((ulonglong)in_f4 >> 0x20);
  iVar2 = param_2[10];
  if ((iVar2 << 5 < 0) && (-1 < iVar2 << 0xb)) {
    if (iVar2 << 10 < 0) {
      sVar4 = (**(code **)(unaff_gp + -0x78c8))();
      (**(code **)(unaff_gp + -0x7d1c))((int)sVar4);
    }
    bVar1 = *(char *)(**(int **)(unaff_gp + -0x7684) + 0xc50) != '\0';
    if ((bVar1) && (bVar1 = *(int *)(param_1 + 0x74) << 2 < 0, bVar1)) {
      bVar1 = *(char *)(*(int *)(unaff_gp + -0x75dc) + 5) != '\0';
    }
    cStackX_f = param_4;
    if (param_2[8] == 0) {
      cStackX_f = '\0';
    }
    (**(code **)(unaff_gp + -0x7b48))();
    (**(code **)(unaff_gp + -0x7b60))(param_2[5],param_2[6]);
    if (bVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_3 != '\0') {
      (**(code **)(unaff_gp + -0x7b9c))(0);
      (**(code **)(unaff_gp + -0x7b48))();
      iVar5 = *(int *)(unaff_gp + -0x75dc);
      iVar2 = param_2[1];
      if (*(int *)(iVar5 + 0x14) < (int)param_2[1]) {
        iVar2 = *(int *)(iVar5 + 0x14);
      }
      dVar6 = (double)iVar2 *
              (double)CONCAT44(uVar7,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x44ec));
      (**(code **)(unaff_gp + -0x7b60))
                ((float)dVar6,
                 (float)((double)-*(float *)(iVar5 + 0x70) /
                         (double)((ulonglong)(double)iVar2 & 0xffffffff00000000) -
                        (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                         *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x44e4))),
                 iVar2,iVar5,0x3cf5c28f);
      (**(code **)(unaff_gp + -0x7b68))((int)-*(short *)(**(int **)(unaff_gp + -0x7684) + 0xe),0x78)
      ;
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) + -0x44e0);
      (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
      iVar2 = *(int *)(*(int *)(unaff_gp + -0x75dc) + 0x14);
      if (iVar2 < (int)param_2[1]) {
        (**(code **)(unaff_gp + -0x7b6c))((float)iVar2 / (float)(int)param_2[1]);
      }
      (**(code **)(unaff_gp + -0x7a08))(*param_2);
      (**(code **)(unaff_gp + -0x7b28))();
    }
    if (cStackX_f != '\0') {
      (**(code **)(unaff_gp + -0x7d30))(0);
      (**(code **)(unaff_gp + -0x7b48))();
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
      uVar3 = param_2[10];
      if ((int)(uVar3 << 3) < 0) {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688)) + 0x10;
      }
      else {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688));
      }
      (**(code **)(unaff_gp + -0x794c))(iVar2,param_5,0x10);
      (**(code **)(unaff_gp + -0x7b28))();
      (**(code **)(unaff_gp + -0x7b48))();
      (**(code **)(unaff_gp + -0x77d8))(param_2[8],&local_4,&local_8,&local_c,&local_10);
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
      (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
      (**(code **)(unaff_gp + -0x7b60))(0xbf000000,0xbf000000);
      (**(code **)(unaff_gp + -0x7b6c))
                ((float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_c - (double)local_4)),
                 (float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_10 - (double)local_8)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) + 0x70);
    (**(code **)(unaff_gp + -0x7b6c))(uVar7,uVar7);
    uVar3 = param_2[10];
    if ((int)(uVar3 << 3) < 0) {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688)) + 0x10;
    }
    else {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688));
    }
    (**(code **)(unaff_gp + -0x794c))(iVar2,param_5,param_6);
    (**(code **)(unaff_gp + -0x7b28))();
    if ((int)(param_2[10] << 10) < 0) {
      (**(code **)(unaff_gp + -0x7d1c))(0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
