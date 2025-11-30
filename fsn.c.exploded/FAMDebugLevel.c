/**
 * FAMDebugLevel
 *
 * Extracted from fsn.c lines 62232-62256
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
  sprintf(acStack_c8,&format_str_4,uVar1);
  sVar2 = strlen(acStack_c8);
  write_data_buffer(param_1[1],*param_1,acStack_c8,sVar2 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
