/**
 * FUN_00410e7c
 *
 * Extracted from fsn.c lines 52085-52107
 * Ghidra address: 0x00410e7c
 * Category: Other
 */

void FUN_00410e7c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int unaff_gp;
  undefined1 auStack_434 [1076];
  
  if (*param_2 == '/') {
    cVar2 = param_2[1];
    while (cVar2 == '/') {
      pcVar1 = param_2 + 2;
      param_2 = param_2 + 1;
      cVar2 = *pcVar1;
    }
  }
  (**(code **)(unaff_gp + -0x7ecc) /* -> EXTERNAL_0x0fabf7b8 */)(auStack_434,param_1);
  (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(auStack_434,*(int *)(unaff_gp + -0x7fa4) /* -> DAT_10010000 */ + -0x5938);
  (**(code **)(unaff_gp + -0x7ce4) /* -> EXTERNAL_0x0fac11fc */)(auStack_434,param_2);
  (**(code **)(unaff_gp + -0x7a98) /* -> FUN_00410da4 */)(auStack_434,param_3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
