/**
 * setup_window_state
 *
 * Extracted from fsn.c lines 46993-47019
 * Category: Init
 */

void setup_window_state(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_gp;
  
  piVar5 = *(int **)(unaff_gp + -0x76b8);
  iVar4 = *piVar5;
  if (0 < iVar4) {
    iVar3 = *(int *)(unaff_gp + -0x7f94);
    puVar1 = (undefined4 *)(iVar4 * 4 + *(int *)(unaff_gp + -0x7f94) + 0x6c38);
    do {
      puVar2 = puVar1 + -1;
      *puVar1 = puVar1[-1];
      puVar1 = puVar2;
    } while ((undefined4 *)(iVar3 + 0x6c3cU) <= puVar2);
  }
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c38) = param_1;
  *piVar5 = iVar4 + 1;
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0x1c14))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
