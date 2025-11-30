/**
 * FAMMonitorCollection
 *
 * Extracted from fsn.c lines 61911-61978
 * Category: Filesystem
 */

void FAMMonitorCollection
               (undefined4 *param_1,char *param_2,int *param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  size_t sVar1;
  int iVar2;
  __uid_t _Var3;
  size_t sVar4;
  char *pcVar5;
  __gid_t *p_Var6;
  char cStack_c88;
  char acStack_c87 [3007];
  __gid_t local_c8 [17];
  char local_84 [128];
  int local_4;
  
  local_4 = get_file_status();
  if (local_4 != -1) {
    *param_3 = local_4;
    sVar1 = strlen(param_2);
    if (sVar1 < 0x401) {
      if (param_4 != 0) {
        process_file_data(local_4,param_4);
      }
      iVar2 = getgroups(0x10,local_c8);
      local_84[0] = '\0';
      pcVar5 = local_84;
      if (1 < iVar2) {
        p_Var6 = local_c8 + 1;
        do {
          if (p_Var6 == local_c8 + 1) {
            sprintf(pcVar5,&db_format_4,iVar2 + -1);
            sVar1 = strlen(pcVar5);
            pcVar5 = pcVar5 + sVar1;
          }
          sprintf(pcVar5,&format_str_1,*p_Var6);
          sVar1 = strlen(pcVar5);
          p_Var6 = p_Var6 + 1;
          pcVar5 = pcVar5 + sVar1;
        } while (p_Var6 < local_c8 + iVar2);
      }
      if (local_84[0] == '\0') {
        _Var3 = getuid();
        sprintf(&cStack_c88,s_F_d__d__d__s_0__d__s_10009ebc,local_4,_Var3,local_c8[0],param_2);
        sVar1 = strlen(&cStack_c88);
        pcVar5 = acStack_c87 + sVar1;
        sprintf(pcVar5,s_0__d__s_10009ed4,param_5,param_6);
      }
      else {
        _Var3 = getuid();
        sprintf(&cStack_c88,s_F_d__d__d__s_10009ee0,local_4,_Var3,local_c8[0],param_2);
        sVar1 = strlen(&cStack_c88);
        pcVar5 = acStack_c87 + sVar1;
        sprintf(pcVar5,s__s__d__s_10009ef0,local_84,param_5,param_6);
      }
      sVar1 = strlen(pcVar5);
      sVar4 = strlen(&cStack_c88);
      write_data_buffer(param_1[1],*param_1,&cStack_c88,sVar4 + sVar1 + 2);
    }
    else {
      syslog(1,s_path_too_long_10009ea4);
      _operation_type_code = 0x4e;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
