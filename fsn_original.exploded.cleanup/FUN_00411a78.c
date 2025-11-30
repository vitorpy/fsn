/**
 * FUN_00411a78
 *
 * Extracted from fsn.c lines 52478-52495
 * Ghidra address: 0x00411a78
 * Category: Other
 */

void FUN_00411a78(char *param_1,undefined4 *param_2)

{
  size_t sVar1;
  
  if (param_2[10] != 0) {
    FUN_00411a78(param_1,param_2[10]);
  }
  strcat(param_1,(char *)*param_2);
  sVar1 = strlen(param_1);
  param_1 = param_1 + sVar1;
  if (param_1[-1] != '/') {
    *param_1 = '/';
    param_1[1] = '\0';
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
