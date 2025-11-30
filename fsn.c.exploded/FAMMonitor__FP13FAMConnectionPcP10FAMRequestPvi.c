/**
 * FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi
 *
 * Extracted from fsn.c lines 61677-61731
 * Category: Other
 */

void FAMMonitor__FP13FAMConnectionPcP10FAMRequestPvi
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  size_t sVar2;
  __uid_t _Var3;
  size_t sVar4;
  char *__s;
  __gid_t *p_Var5;
  char cStack_c88;
  char acStack_c87 [3007];
  __gid_t a_Stack_c8 [17];
  char acStack_84 [128];
  undefined4 uStack_4;
  
  uStack_4 = *param_3;
  process_file_data(uStack_4,param_4);
  iVar1 = getgroups(0x10,a_Stack_c8);
  acStack_84[0] = '\0';
  __s = acStack_84;
  if (1 < iVar1) {
    p_Var5 = a_Stack_c8 + 1;
    do {
      if (p_Var5 == a_Stack_c8 + 1) {
        sprintf(__s,&db_format_1,iVar1 + -1);
        sVar2 = strlen(__s);
        __s = __s + sVar2;
      }
      sprintf(__s,&db_format_2,*p_Var5);
      sVar2 = strlen(__s);
      p_Var5 = p_Var5 + 1;
      __s = __s + sVar2;
    } while (p_Var5 < a_Stack_c8 + iVar1);
  }
  if (acStack_84[0] == '\0') {
    _Var3 = getuid();
    sprintf(&cStack_c88,s__c_d__d__d__s_10009e74,param_5,uStack_4,_Var3,a_Stack_c8[0],param_2);
    sVar2 = strlen(&cStack_c88);
    iVar1 = sVar2 + 1;
  }
  else {
    _Var3 = getuid();
    sprintf(&cStack_c88,s__c_d__d__d__s_10009e60,param_5,uStack_4,_Var3,a_Stack_c8[0],param_2);
    sVar2 = strlen(&cStack_c88);
    sprintf(acStack_c87 + sVar2,&db_format_3,acStack_84);
    sVar2 = strlen(acStack_c87 + sVar2);
    sVar4 = strlen(&cStack_c88);
    iVar1 = sVar4 + sVar2 + 2;
  }
  write_data_buffer(param_1[1],*param_1,&cStack_c88,iVar1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
