/**
 * FAMDebugLevel
 *
 * Extracted from fsn.c lines 77970-77994
 * Category: Other
 */

void FAMDebugLevel(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  char acStack_c8 [200];
  
  if (param_2 == 0) {
    uVar1 = 0x45;
  }
  else if (param_2 == 1) {
    uVar1 = 0x44;
  }
  else {
    if (param_2 != 2) {
      halt_baddata();
    }
    uVar1 = 0x56;
  }
  sprintf(acStack_c8,&DAT_10009f3c,uVar1);
  sVar2 = strlen(acStack_c8);
  FUN_0043b318(param_1[1],*param_1,acStack_c8,sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
