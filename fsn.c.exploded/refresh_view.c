/**
 * refresh_view
 *
 * Extracted from fsn.c lines 45343-45381
 * Category: Other
 */

void refresh_view(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
    (**(code **)(unaff_gp + -0x79c0))();
    iVar1 = **(int **)(unaff_gp + -0x7684);
  }
  if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x79c8))();
    iVar1 = **(int **)(unaff_gp + -0x7684);
  }
  if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x7ac0))();
  }
  if (*(char *)(**(int **)(unaff_gp + -0x7680) + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894))(1);
    iVar1 = **(int **)(unaff_gp + -0x7684);
    if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
      (**(code **)(unaff_gp + -0x79c0))();
      iVar1 = **(int **)(unaff_gp + -0x7684);
    }
    if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x79c8))();
      iVar1 = **(int **)(unaff_gp + -0x7684);
    }
    if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x7ac0))();
    }
    (**(code **)(unaff_gp + -0x7894))(1);
  }
  (**(code **)(unaff_gp + -0x79d0))();
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x3c1c))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
