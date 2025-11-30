/**
 * FUN_00432a34
 *
 * Extracted from fsn.c lines 71431-71447
 * Ghidra address: 0x00432a34
 * Category: Other
 */

void FUN_00432a34(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *local_408;
  char *local_404;
  char acStack_400 [1024];
  
  local_404 = "UNKNOWN PROGRAM";
  local_408 = "UNKNOWN CLASS";
  XtGetApplicationNameAndClass(param_1,&local_404,&local_408);
  sprintf(acStack_400,param_2,param_3,param_4,param_5,param_6);
  fprintf((FILE *)0xfb52904,(char *)_imsgs._176_4_,local_404,local_408,acStack_400);
  fflush((FILE *)0xfb52904);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
