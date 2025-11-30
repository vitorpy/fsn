/**
 * FAMResumeMonitor
 *
 * Extracted from fsn.c lines 77708-77723
 * Category: Other
 */

void FAMResumeMonitor(undefined4 *param_1,undefined4 *param_2)

{
  __uid_t _Var1;
  __gid_t _Var2;
  size_t sVar3;
  char acStack_bb8 [3000];
  
  _Var1 = getuid();
  _Var2 = getgid();
  sprintf(acStack_bb8,s_U_d__d__d_10009f08,*param_2,_Var1,_Var2);
  sVar3 = strlen(acStack_bb8);
  FUN_0043b318(param_1[1],*param_1,acStack_bb8,sVar3 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
