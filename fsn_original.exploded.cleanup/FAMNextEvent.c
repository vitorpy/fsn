/**
 * FAMNextEvent
 *
 * Extracted from fsn.c lines 77882-77901
 * Category: Other
 */

void FAMNextEvent(uint *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_c38 [3000];
  uint auStack_80 [32];
  
  bzero(auStack_80,0x80);
  auStack_80[*param_1 >> 5] = auStack_80[*param_1 >> 5] | 1 << (*param_1 & 0x1f);
  piVar2 = (int *)param_1[1];
  if (((*(int *)(*piVar2 + 0xc) != 0) ||
      (((iVar1 = FUN_0043b3b8(), iVar1 != -1 && (*(int *)(*piVar2 + 0x179c) == 0)) &&
       (*(int *)(*piVar2 + 0xc) != 0)))) &&
     (iVar1 = FUN_0043b538(piVar2,*param_1,auStack_c38,0x400), iVar1 != -1)) {
    FUN_0043a664(param_1,auStack_c38,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
