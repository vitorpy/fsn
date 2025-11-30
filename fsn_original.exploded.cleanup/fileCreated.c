/**
 * fileCreated
 *
 * Extracted from fsn.c lines 55513-55624
 * Category: UI
 */

void fileCreated(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  byte bVar6;
  bool bVar7;
  char *__dest;
  stat sStack_94;
  char *pcStack_c;
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    pcStack_c = (char *)build_path_string(0,param_1);
    sVar1 = strlen(pcStack_c);
    __dest = pcStack_c + sVar1;
    strcpy(__dest,param_2);
    iVar2 = lstat(pcStack_c,&sStack_94);
    if (-1 < iVar2) {
      bVar6 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar6 & 0x7f;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar6 & 0x3f;
      if ((sStack_94.st_nlink & 0xf000) == 0x4000) {
        iVar2 = FUN_00413610(param_1,param_2);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)FUN_00411c04();
          if (*(int *)(param_1 + 0x14) == 0) {
            pvVar4 = malloc(4);
            *(void **)(param_1 + 0x18) = pvVar4;
          }
          else {
            pvVar4 = realloc(*(void **)(param_1 + 0x18),*(int *)(param_1 + 0x14) * 4 + 4);
            *(void **)(param_1 + 0x18) = pvVar4;
          }
          *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14) * 4) = puVar3;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          bVar6 = *(byte *)(puVar3 + 0x1d);
          *(byte *)(puVar3 + 0x1d) = bVar6 | 8;
          *(byte *)(puVar3 + 0x1d) = bVar6 | 10;
          uVar5 = FUN_00411d68(param_2);
          *puVar3 = uVar5;
          sVar1 = strlen(param_2);
          puVar3[1] = sVar1;
          puVar3[3] = 0;
          puVar3[5] = 0;
          puVar3[10] = param_1;
          puVar3[2] = sStack_94.st_nlink;
          bVar7 = DAT_10017493 != '\0';
          if (bVar7) {
            bVar7 = *(int *)(param_1 + 0x74) << 0xb < 0;
          }
          *(byte *)((int)puVar3 + 0x75) = bVar7 << 4 | *(byte *)((int)puVar3 + 0x75) & 0xef;
          if ((int)(puVar3[0x1d] << 0xb) < 0) {
            FUN_00427e30(puVar3);
          }
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x80;
          bVar6 = FUN_004138e8(puVar3,pcStack_c,__dest,0);
          *(byte *)(param_1 + 0x75) = (bVar6 & 1) << 6 | *(byte *)(param_1 + 0x75) & 0xbf;
          if (((*(byte *)(param_1 + 0x74) & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
            FUN_004144ec(param_1);
          }
        }
      }
      else {
        FUN_0042df08();
        iVar2 = FUN_00413580(param_1,param_2);
        if (iVar2 == 0) {
          puVar3 = (undefined4 *)FUN_00411b84();
          if (*(int *)(param_1 + 0xc) == 0) {
            pvVar4 = malloc(4);
            *(void **)(param_1 + 0x10) = pvVar4;
          }
          else {
            pvVar4 = realloc(*(void **)(param_1 + 0x10),*(int *)(param_1 + 0xc) * 4 + 4);
            *(void **)(param_1 + 0x10) = pvVar4;
          }
          *(undefined4 **)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 4) = puVar3;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) | 2;
          *(byte *)((int)puVar3 + 0x29) = *(byte *)((int)puVar3 + 0x29) | 0x80;
          uVar5 = FUN_00411d68(param_2);
          *puVar3 = uVar5;
          sVar1 = strlen(param_2);
          puVar3[1] = sVar1;
          puVar3[2] = sStack_94.st_nlink;
          uVar5 = FUN_00433b44(pcStack_c);
          puVar3[8] = uVar5;
          *(int *)(param_1 + 0x1c) = (*(int *)(param_1 + 0x1c) + sStack_94.st_blksize) - puVar3[3];
          uVar5 = FUN_004118b0(param_1);
          *(undefined4 *)(param_1 + 0x24) = uVar5;
          puVar3[3] = sStack_94.st_blksize;
          if (DAT_10000184 < sStack_94.st_blksize) {
            DAT_10000184 = sStack_94.st_blksize;
          }
          if (DAT_1000018c < *(int *)(param_1 + 0x1c)) {
            DAT_1000018c = *(int *)(param_1 + 0x1c);
          }
          puVar3[4] = sStack_94.st_mtim.tv_sec;
          FUN_00412400(puVar3);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        FUN_00417c2c(param_1,param_2);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
