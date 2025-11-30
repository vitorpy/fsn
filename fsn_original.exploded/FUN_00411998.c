/**
 * FUN_00411998
 *
 * Extracted from fsn.c lines 52446-52472
 * Ghidra address: 0x00411998
 * Category: Other
 */

void FUN_00411998(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  undefined1 auStack_60 [96];
  
  puVar2 = *(undefined4 **)(unaff_gp + -0x7600);
  iVar1 = (**(code **)(unaff_gp + -0x7cdc))(*puVar2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(unaff_gp + -0x7ab8))();
    if (iVar1 == 0) goto LAB_00411a50;
  }
  do {
    do {
      (**(code **)(unaff_gp + -0x7cf4))(*puVar2,auStack_60);
      (**(code **)(unaff_gp + -0x7d10))(auStack_60);
      iVar1 = (**(code **)(unaff_gp + -0x7cdc))(*puVar2);
    } while (iVar1 != 0);
    iVar1 = (**(code **)(unaff_gp + -0x7ab8))();
  } while (iVar1 != 0);
LAB_00411a50:
  (**(code **)(unaff_gp + -0x7ac8))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
