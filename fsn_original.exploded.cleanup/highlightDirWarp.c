/**
 * highlightDirWarp
 *
 * Extracted from fsn.c lines 57333-57388
 * Category: Filesystem
 */

void highlightDirWarp(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  uint in_register_00001090;
  undefined8 uVar7;
  
  uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar5 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_3 != *(int *)(curcontext + 0x3c)) {
    pushmatrix();
    iVar4 = *(int *)(curcontext + 0x3c);
    if (param_3 == *(int *)(iVar4 + 0x28)) {
      FUN_0041a908((ulonglong)uVar5 << 0x20,(double)*(float *)(iVar4 + 0x3c) + (double)DAT_1001756c)
      ;
    }
    else if (param_3 == *(int *)(iVar4 + 0x2c)) {
      FUN_0041a908((double)-DAT_10017570,(double)*(float *)(iVar4 + 0x3c) + (double)DAT_1001756c);
    }
    else if (param_3 == *(int *)(iVar4 + 0x30)) {
      FUN_0041a908((double)DAT_10017570,(double)*(float *)(iVar4 + 0x3c) + (double)DAT_1001756c);
    }
    else {
      iVar3 = *(int *)(iVar4 + 0x14);
      iVar1 = 0;
      if (0 < iVar3) {
        piVar2 = *(int **)(iVar4 + 0x18);
        do {
          if (param_3 == *piVar2) {
            uVar7 = CONCAT44(uVar5,(float)((double)-DAT_10017560 *
                                           (double)((ulonglong)in_register_00001090 << 0x20) *
                                           (double)(iVar3 + -1) +
                                          (double)DAT_10017560 * (double)iVar1));
            translate(uVar7,iVar3,iVar4,0);
            uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
            rotate(0xfffffc7c,0x7a);
            translate(CONCAT44(uVar6,0x3f333333),CONCAT44(uVar8,0xbde66666));
            rect(0xbca3d70a,0xbca3d70a);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar1 < iVar3);
      }
    }
    popmatrix();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
