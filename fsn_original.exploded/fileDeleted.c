/**
 * fileDeleted
 *
 * Extracted from fsn.c lines 55760-55799
 * Category: Filesystem
 */

void fileDeleted(int param_1,char *param_2)

{
  int iVar1;
  byte bVar2;
  stat sStack_94;
  char *pcStack_c;
  
  if (-1 < *(int *)(param_1 + 0x74) << 0xd) {
    pcStack_c = (char *)build_path_string(0,param_1);
    strcat(pcStack_c,param_2);
    iVar1 = lstat(pcStack_c,&sStack_94);
    if (iVar1 < 0) {
      bVar2 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar2 & 0x7f;
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe;
      *(byte *)(param_1 + 0x75) = bVar2 & 0x3f;
      iVar1 = FUN_00413580(param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = FUN_00413610(param_1,param_2);
        if (iVar1 != 0) {
          bVar2 = *(byte *)(iVar1 + 0x74) & 0xfd;
          *(byte *)(iVar1 + 0x74) = bVar2;
          *(byte *)(iVar1 + 0x74) = bVar2 | 4;
          *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0x7f | 0x80;
        }
      }
      else {
        *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0x7f;
        *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfe | 1;
        *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1;
      }
      if (((*(byte *)(param_1 + 0x74) & 1) != 0) || (*(char *)(param_1 + 0x75) < '\0')) {
        FUN_004144ec(param_1);
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
