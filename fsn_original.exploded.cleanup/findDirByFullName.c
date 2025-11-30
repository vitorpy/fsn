/**
 * findDirByFullName
 *
 * Extracted from fsn.c lines 53306-53346
 * Category: Filesystem
 */

void findDirByFullName(char *param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  sVar2 = strlen(param_1);
  if (((uint)topdir[1] < sVar2) &&
     (iVar3 = strncmp(param_1,(char *)*topdir,topdir[1]), puVar5 = topdir, iVar3 == 0)) {
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
    if (*param_1 != '\0') {
      FUN_00413610(puVar5,param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
