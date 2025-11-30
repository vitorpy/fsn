/**
 * FUN_00428b6c
 *
 * Extracted from fsn.c lines 65301-65331
 * Ghidra address: 0x00428b6c
 * Category: Other
 */

void FUN_00428b6c(void)

{
  int iVar1;
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x7904) == '\0') {
    (*(code *)(*(int *)(unaff_gp + -0x7fe0) + -0x7d78))(**(undefined4 **)(unaff_gp + -0x75f0));
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x7904) = 1;
  }
  iVar1 = *(int *)(unaff_gp + -0x75dc);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x164),**(undefined4 **)(unaff_gp + -0x768c),7);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x18c),**(undefined4 **)(unaff_gp + -0x76a8),0);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 400),**(undefined4 **)(unaff_gp + -0x76a4),1);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x194),**(undefined4 **)(unaff_gp + -0x76a0),2);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x198),**(undefined4 **)(unaff_gp + -0x769c),3);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x19c),**(undefined4 **)(unaff_gp + -0x7698),4);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x1a0),**(undefined4 **)(unaff_gp + -0x7694),5);
  (**(code **)(unaff_gp + -0x78d8))
            (*(undefined4 *)(iVar1 + 0x1a4),**(undefined4 **)(unaff_gp + -0x7690),6);
  (**(code **)(unaff_gp + -0x78d0))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
