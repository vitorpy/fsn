/**
 * FUN_004294cc
 *
 * Extracted from fsn.c lines 65765-65783
 * Ghidra address: 0x004294cc
 * Category: Other
 */

void FUN_004294cc(void)

{
  code *pcVar1;
  int unaff_gp;
  
  if (*(int *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x6b9c))();
    (**(code **)(unaff_gp + -0x7ae0))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    pcVar1 = *(code **)(unaff_gp + -0x7984);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7990) = 0;
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7994) = 0;
    (*pcVar1)();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
