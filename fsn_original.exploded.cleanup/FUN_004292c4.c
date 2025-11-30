/**
 * FUN_004292c4
 *
 * Extracted from fsn.c lines 65636-65656
 * Ghidra address: 0x004292c4
 * Category: Other
 */

void FUN_004292c4(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  
  if (*(char *)(*(int *)(unaff_gp + -0x75dc) /* -> fsn_resources */ + 1) != '\0') {
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7988);
    *piVar1 = 1;
    do {
      (**(code **)(unaff_gp + -0x7acc) /* -> FUN_0040cad0 */)();
      (**(code **)(unaff_gp + -0x7880) /* -> FUN_0042a8e4 */)();
      iVar2 = *piVar1;
      *piVar1 = iVar2 + 1;
    } while (iVar2 + 1 < 4);
    *piVar1 = 3;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
