/**
 * findbestfile
 *
 * Extracted from fsn.c lines 66788-66910
 * Category: Filesystem
 */

void findbestfile(char *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_110;
  int *piStack_10c;
  char *apcStack_108 [30];
  char **ppcStack_90;
  char *apcStack_8c [30];
  char **appcStack_14 [5];
  
  *param_2 = 0;
  *param_3 = 0;
  sVar2 = strlen(param_1);
  if (sVar2 <= (uint)topdir[1]) {
    sVar2 = strlen(param_1);
    iVar3 = strncmp(param_1,(char *)*topdir,sVar2);
    if (iVar3 != 0) {
      halt_baddata();
    }
    *param_2 = (int)topdir;
    halt_baddata();
  }
  iVar3 = strncmp(param_1,(char *)*topdir,topdir[1]);
  puVar5 = topdir;
  if (iVar3 != 0) {
    halt_baddata();
  }
  param_1 = param_1 + topdir[1];
  cVar1 = *param_1;
  while (cVar1 == '/') {
    pcVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = strchr(param_1,0x2f);
  while (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    puVar5 = (undefined4 *)FUN_00413610(puVar5,param_1);
    if (puVar5 == (undefined4 *)0x0) {
      *pcVar4 = '/';
      halt_baddata();
    }
    cVar1 = pcVar4[1];
    while (param_1 = pcVar4 + 1, cVar1 == '/') {
      cVar1 = pcVar4[2];
      pcVar4 = param_1;
    }
    pcVar4 = strchr(param_1,0x2f);
  }
  if (*param_1 == '\0') {
    *param_2 = (int)puVar5;
    halt_baddata();
  }
  if (puVar5[3] != 0) {
    ppcStack_90 = apcStack_108;
    apcStack_108[0] = param_1;
    iVar3 = FUN_0042a9b4(&ppcStack_90,puVar5[4],puVar5[3],4,compare_files,&puStack_110);
    if (iVar3 != 0) {
      *param_2 = (int)puVar5;
      *param_3 = *puStack_110;
      halt_baddata();
    }
    if (puStack_110 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puStack_110;
      iVar3 = puVar5[5];
      goto LAB_0042ad4c;
    }
  }
  puVar7 = (undefined4 *)0x0;
  iVar3 = puVar5[5];
LAB_0042ad4c:
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    apcStack_8c[0] = param_1;
    appcStack_14[0] = apcStack_8c;
    iVar3 = FUN_0042a9b4(appcStack_14,puVar5[6],puVar5[5],4,compare_dirs,&piStack_10c);
    if (iVar3 != 0) {
      *param_2 = *piStack_10c;
      halt_baddata();
    }
    puVar6 = (undefined4 *)0x0;
    if (piStack_10c != (int *)0x0) {
      puVar6 = (undefined4 *)*piStack_10c;
    }
  }
  if ((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
    iVar3 = strcmp((char *)*puVar7,(char *)*puVar6);
    if (iVar3 < 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)0x0;
    }
  }
  if (puVar7 == (undefined4 *)0x0) {
    if (puVar6 != (undefined4 *)0x0) {
      sVar2 = strlen(param_1);
      iVar3 = strncmp((char *)*puVar6,param_1,sVar2);
      if (iVar3 == 0) {
        *param_2 = (int)puVar6;
      }
    }
  }
  else {
    sVar2 = strlen(param_1);
    iVar3 = strncmp((char *)*puVar7,param_1,sVar2);
    if (iVar3 == 0) {
      *param_2 = (int)puVar5;
      *param_3 = puVar7;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
