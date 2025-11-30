/**
 * FAMMonitorFile
 *
 * Extracted from fsn.c lines 77575-77595
 * Category: Filesystem
 */

void FAMMonitorFile(undefined4 param_1,char *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = FUN_0043ade8();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    sVar2 = strlen(param_2);
    if (sVar2 < 0x401) {
      FUN_00439c48(param_1,param_2,param_3,param_4,0x57);
    }
    else {
      syslog(1,s_path_too_long_10009e94);
      _DAT_0fb52720 = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
