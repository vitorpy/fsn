/**
 * FUN_004136a0
 *
 * Extracted from fsn.c lines 53352-53398
 * Ghidra address: 0x004136a0
 * Category: Other
 */

void FUN_004136a0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int unaff_gp;
  
  uVar2 = (**(code **)(unaff_gp + -0x7c20))();
  piVar7 = *(int **)(unaff_gp + -0x76d4);
  puVar5 = (undefined4 *)*piVar7;
  if (((uint)puVar5[1] < uVar2) &&
     (iVar3 = (**(code **)(unaff_gp + -0x7f10))(param_1,*puVar5), iVar3 == 0)) {
    iVar3 = *piVar7;
    pcVar6 = (char *)(param_1 + *(int *)(iVar3 + 4));
    cVar1 = *pcVar6;
    while (cVar1 == '/') {
      pcVar4 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar4;
    }
    pcVar4 = (char *)(**(code **)(unaff_gp + -0x7f18))(pcVar6,0x2f);
    while (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      iVar3 = (**(code **)(unaff_gp + -0x7a58))(iVar3,pcVar6);
      if (iVar3 == 0) {
        *pcVar4 = '/';
        halt_baddata();
      }
      cVar1 = pcVar4[1];
      while (pcVar6 = pcVar4 + 1, cVar1 == '/') {
        cVar1 = pcVar4[2];
        pcVar4 = pcVar6;
      }
      pcVar4 = (char *)(**(code **)(unaff_gp + -0x7f18))(pcVar6,0x2f);
    }
    if (*pcVar6 != '\0') {
      (**(code **)(unaff_gp + -0x7a58))(iVar3,pcVar6);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
