/**
 * FUN_00411d68
 *
 * Extracted from fsn.c lines 52583-52596
 * Ghidra address: 0x00411d68
 * Category: Memory
 */

void FUN_00411d68(char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  if ((DAT_10000200 == (void *)0x0) || (DAT_10016b1c <= (int)DAT_10000200 + sVar1 + 1)) {
    DAT_10000200 = malloc(10000);
    DAT_10016b1c = (int)DAT_10000200 + 10000;
  }
  bcopy(param_1,DAT_10000200,sVar1 + 1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
