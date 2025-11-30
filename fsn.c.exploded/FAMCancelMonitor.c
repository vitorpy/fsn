/**
 * FAMCancelMonitor
 *
 * Extracted from fsn.c lines 62026-62041
 * Category: Other
 */

void FAMCancelMonitor(undefined4 *param_1,undefined4 *param_2)

{
  __uid_t _Var1;
  __gid_t _Var2;
  size_t sVar3;
  char acStack_bb8 [3000];
  
  _Var1 = getuid();
  _Var2 = getgid();
  sprintf(acStack_bb8,s_C_d__d__d_10009f14,*param_2,_Var1,_Var2);
  sVar3 = strlen(acStack_bb8);
  write_data_buffer(param_1[1],*param_1,acStack_bb8,sVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
