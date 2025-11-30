/**
 * FAMMonitorDirectory
 *
 * Extracted from fsn.c lines 61806-61826
 * Category: Filesystem
 */

void FAMMonitorDirectory(undefined4 param_1,char *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = get_file_status();
  if (iVar1 != -1) {
    *param_3 = iVar1;
    sVar2 = strlen(param_2);
    if (sVar2 < 0x401) {
      fam_monitor_request(param_1,param_2,param_3,param_4,0x4d);
    }
    else {
      syslog(1,s_path_too_long_10009e84);
      _operation_type_code = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
