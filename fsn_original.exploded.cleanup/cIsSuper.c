/**
 * cIsSuper
 *
 * Extracted from fsn.c lines 72061-72073
 * Category: Other
 */

void cIsSuper(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x14) + 0x30);
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp((char *)*puVar2,param_2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[1];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
