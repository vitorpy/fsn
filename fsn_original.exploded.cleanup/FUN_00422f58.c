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
      sVar4 = (**(code **)(unaff_gp + -0x78c8) /* -> FUN_00429290 */)();
      (**(code **)(unaff_gp + -0x7d1c) /* -> EXTERNAL_0x0f125630 */)((int)sVar4);
    }
    bVar1 = *(char *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xc50) != '\0';
    if ((bVar1) && (bVar1 = *(int *)(param_1 + 0x74) << 2 < 0, bVar1)) {
      bVar1 = *(char *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 5) != '\0';
    }
    cStackX_f = param_4;
    if (param_2[8] == 0) {
      cStackX_f = '\0';
    }
    (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
    (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(param_2[5],param_2[6]);
    if (bVar1) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    if (param_3 != '\0') {
      (**(code **)(unaff_gp + -0x7b9c) /* -> EXTERNAL_0x0f124424 */)(0);
      (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      iVar5 = *(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */;
      iVar2 = param_2[1];
      if (*(int *)(iVar5 + 0x14) < (int)param_2[1]) {
        iVar2 = *(int *)(iVar5 + 0x14);
      }
      dVar6 = (double)iVar2 *
              (double)CONCAT44(uVar7,*(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x44ec));
      (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)
                ((float)dVar6,
                 (float)((double)-*(float *)(iVar5 + 0x70) /
                         (double)((ulonglong)(double)iVar2 & 0xffffffff00000000) -
                        (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                                         *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x44e4))),
                 iVar2,iVar5,0x3cf5c28f);
      (**(code **)(unaff_gp + -0x7b68) /* -> EXTERNAL_0x0f127214 */)((int)-*(short *)(**(int **)(unaff_gp + -0x7684) /* -> curcontext */ + 0xe),0x78)
      ;
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x44e0);
      (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
      iVar2 = *(int *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x14);
      if (iVar2 < (int)param_2[1]) {
        (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)((float)iVar2 / (float)(int)param_2[1]);
      }
      (**(code **)(unaff_gp + -0x7a08) /* -> FUN_004189b0 */)(*param_2);
      (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    }
    if (cStackX_f != '\0') {
      (**(code **)(unaff_gp + -0x7d30) /* -> EXTERNAL_0x0f12827c */)(0);
      (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x70);
      (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
      uVar3 = param_2[10];
      if ((int)(uVar3 << 3) < 0) {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688) /* -> dcolorBoxes */) + 0x10;
      }
      else {
        iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688) /* -> dcolorBoxes */);
      }
      (**(code **)(unaff_gp + -0x794c) /* -> FUN_00422284 */)(iVar2,param_5,0x10);
      (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
      (**(code **)(unaff_gp + -0x7b48) /* -> EXTERNAL_0x0f127d3c */)();
      (**(code **)(unaff_gp + -0x77d8) /* -> FUN_00433c3c */)(param_2[8],&local_4,&local_8,&local_c,&local_10);
      uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x70);
      (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
      (**(code **)(unaff_gp + -0x7b60) /* -> EXTERNAL_0x0f1264f4 */)(0xbf000000,0xbf000000);
      (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)
                ((float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_c - (double)local_4)),
                 (float)((double)((ulonglong)extraout_var << 0x20) /
                        ((double)local_10 - (double)local_8)));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    uVar7 = *(undefined4 *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 0x70);
    (**(code **)(unaff_gp + -0x7b6c) /* -> EXTERNAL_0x0f1268e4 */)(uVar7,uVar7);
    uVar3 = param_2[10];
    if ((int)(uVar3 << 3) < 0) {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688) /* -> dcolorBoxes */) + 0x10;
    }
    else {
      iVar2 = *(int *)((uVar3 >> 0x1d) * 4 + *(int *)(unaff_gp + -0x7688) /* -> dcolorBoxes */);
    }
    (**(code **)(unaff_gp + -0x794c) /* -> FUN_00422284 */)(iVar2,param_5,param_6);
    (**(code **)(unaff_gp + -0x7b28) /* -> EXTERNAL_0x0f1261ac */)();
    if ((int)(param_2[10] << 10) < 0) {
      (**(code **)(unaff_gp + -0x7d1c) /* -> EXTERNAL_0x0f125630 */)(0);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
