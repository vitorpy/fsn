/**
 * FUN_0041dba0
 *
 * Extracted from fsn.c lines 59322-59360
 * Ghidra address: 0x0041dba0
 * Category: Other
 */

void FUN_0041dba0(void)

{
  int iVar1;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
    (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)();
    iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  }
  if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x79c8) /* -> FUN_0041d54c */)();
    iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
  }
  if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
    (**(code **)(unaff_gp + -0x7ac0) /* -> reset_eye */)();
  }
  if (*(char *)(**(int **)(unaff_gp + -0x7680) /* -> altcontext */ + 0xc51) != '\0') {
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1);
    iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
    if ((*(int *)(iVar1 + 0x48) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x48) + 0x28) << 5)) {
      (**(code **)(unaff_gp + -0x79c0) /* -> FUN_0041d920 */)();
      iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
    }
    if ((*(int *)(iVar1 + 0x44) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x44) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x79c8) /* -> FUN_0041d54c */)();
      iVar1 = **(int **)(unaff_gp + -0x7684) /* -> curcontext */;
    }
    if ((*(int *)(iVar1 + 0x3c) != 0) && (-1 < *(int *)(*(int *)(iVar1 + 0x3c) + 0x74) << 3)) {
      (**(code **)(unaff_gp + -0x7ac0) /* -> reset_eye */)();
    }
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(1);
  }
  (**(code **)(unaff_gp + -0x79d0) /* -> FUN_0041c9e8 */)();
  (*(code *)(*(int *)(unaff_gp + -0x7fe4) /* -> FUN_00420000 */ + -0x3c1c))();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
