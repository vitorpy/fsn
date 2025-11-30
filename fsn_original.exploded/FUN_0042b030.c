/**
 * FUN_0042b030
 *
 * Extracted from fsn.c lines 67164-67176
 * Ghidra address: 0x0042b030
 * Category: Other
 */

void FUN_0042b030(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = (**(code **)(unaff_gp + -0x7e6c))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10));
  (**(code **)(unaff_gp + -0x7e70))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6e10),uVar1,
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x7b64));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
