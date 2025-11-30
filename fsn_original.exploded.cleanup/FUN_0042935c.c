/**
 * FUN_0042935c
 *
 * Extracted from fsn.c lines 65682-65702
 * Ghidra address: 0x0042935c
 * Category: Other
 */

void FUN_0042935c(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 1) != '\0') {
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7988);
    *piVar1 = 3;
    do {
      (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)();
      (**(code **)(unaff_gp + -0x7880) /* -> FUN_0042a8e4 */)();
      iVar2 = *piVar1;
      *piVar1 = iVar2 + -1;
    } while (-1 < iVar2 + -1);
    *piVar1 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
