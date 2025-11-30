/**
 * save_matrix_state
 *
 * Extracted from fsn.c lines 38307-38352
 * Category: Filesystem
 */

void save_matrix_state(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int unaff_gp;
  undefined4 local_38 [12];
  undefined4 auStack_8 [2];
  
  (**(code **)(unaff_gp + -0x784c))(local_38);
  iVar2 = (**(code **)(unaff_gp + -0x7834))
                    (local_38,*(int *)(**(int **)(unaff_gp + -0x767c) + 0x34) +
                              *(int *)(**(int **)(unaff_gp + -0x7684) + 0x40) * 0x38);
  piVar4 = *(int **)(unaff_gp + -0x7684);
  if (iVar2 == 0) {
    iVar2 = *piVar4;
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
    iVar2 = *piVar4;
    iVar3 = *(int *)(iVar2 + 0x40);
    if (9 < iVar3) {
      piVar4 = *(int **)(unaff_gp + -0x7684);
      *(undefined4 *)(iVar2 + 0x40) = 0;
      iVar3 = *(int *)(*piVar4 + 0x40);
    }
    puVar1 = (undefined4 *)(*(int *)(**(int **)(unaff_gp + -0x767c) + 0x34) + iVar3 * 0x38);
    puVar7 = local_38;
    do {
      puVar6 = puVar7;
      puVar5 = puVar1;
      puVar7 = puVar6 + 3;
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar5[2] = puVar6[2];
      puVar1 = puVar5 + 3;
    } while (puVar7 != auStack_8);
    puVar5[3] = *puVar7;
    puVar5[4] = puVar6[4];
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
