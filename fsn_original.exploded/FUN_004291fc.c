/**
 * FUN_004291fc
 *
 * Extracted from fsn.c lines 65561-65578
 * Ghidra address: 0x004291fc
 * Category: Other
 */

void FUN_004291fc(void)

{
  int iVar1;
  int iVar2;
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7ee4))(1,0x10,*(int *)(unaff_gp + -0x7f98) + 0x7908);
  iVar1 = 0;
  iVar2 = *(int *)(unaff_gp + -0x7f98) + 0x7928;
  do {
    (**(code **)(unaff_gp + -0x7ee4))((iVar1 + 2) * 0x10000 >> 0x10,0x10,iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x20;
  } while (iVar1 != 3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
