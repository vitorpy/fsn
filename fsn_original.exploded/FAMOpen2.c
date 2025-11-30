/**
 * FAMOpen2
 *
 * Extracted from fsn.c lines 77267-77291
 * Category: Other
 */

void FAMOpen2(int *param_1,int param_2)

{
  int iVar1;
  __uid_t _Var2;
  __gid_t _Var3;
  size_t sVar4;
  char acStack_cc [200];
  int iStack_4;
  
  FUN_0043ace4();
  iStack_4 = FUN_0043b178(0);
  param_1[1] = iStack_4;
  iVar1 = FUN_0043b1c8(iStack_4,0x7f000001,0x5f75a,1);
  *param_1 = iVar1;
  if ((-1 < iVar1) && (param_2 != 0)) {
    _Var2 = getuid();
    _Var3 = getgid();
    sprintf(acStack_cc,s_dN0__d__d__s_10009e47 + 1,_Var2,_Var3,param_2);
    sVar4 = strlen(acStack_cc);
    FUN_0043b318(iStack_4,*param_1,acStack_cc,sVar4 + 1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
