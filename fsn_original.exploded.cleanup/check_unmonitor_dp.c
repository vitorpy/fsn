/**
 * check_unmonitor_dp
 *
 * Extracted from fsn.c lines 58923-58943
 * Category: Other
 */

void check_unmonitor_dp(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 100) = 0;
  if ((((iVar1 << 3 < 0) && (iVar1 << 10 < 0)) && (-1 < iVar1 << 0xb)) &&
     (param_1 != *(int *)(curcontext + 0x44))) {
    iVar2 = 0;
    if (altcontext[0xc51] != '\0') {
      iVar2 = *(int *)(altcontext + 0x44);
    }
    if ((iVar2 != param_1) && (-1 < iVar1 << 0xe)) {
      FUN_00427ec8(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
