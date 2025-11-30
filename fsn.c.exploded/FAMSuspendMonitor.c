/**
 * FAMSuspendMonitor
 *
 * Extracted from fsn.c lines 61984-61999
 * Category: Other
 */

void FAMSuspendMonitor(undefined4 *param_1,undefined4 *param_2)

{
  __uid_t _Var1;
  __gid_t _Var2;
  size_t sVar3;
  char acStack_bb8 [3000];
  
  _Var1 = getuid();
  _Var2 = getgid();
  sprintf(acStack_bb8,s_S_d__d__d_10009efc,*param_2,_Var1,_Var2);
  sVar3 = strlen(acStack_bb8);
  write_data_buffer(param_1[1],*param_1,acStack_bb8,sVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
