/**
 * FUN_0041d69c
 *
 * Extracted from fsn.c lines 59095-59148
 * Ghidra address: 0x0041d69c
 * Category: Other
 */

void FUN_0041d69c(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_28;
  uint local_24;
  
  iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44);
  if (param_1 == iVar1) {
    (**(code **)(unaff_gp + -0x79c0))();
    if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x6e24) != '\0') {
      (**(code **)(unaff_gp + -0x79d4))();
    }
  }
  else {
    if (iVar1 != 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x2be8))();
      iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44);
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xdf;
      (**(code **)(unaff_gp + -0x79c0))();
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
    }
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),1);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x20;
    *(int *)(*piVar2 + 0x44) = param_1;
    (**(code **)(unaff_gp + -0x7a84))(*piVar2 + 0x4c,param_1);
    (**(code **)(unaff_gp + -0x79d4))();
    (**(code **)(unaff_gp + -0x798c))();
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    local_24 = (uint)(*(int *)(param_1 + 0x74) << 0xb) >> 0x1f;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54),&local_28,1);
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    local_24 = (uint)(*(int *)(param_1 + 0x74) << 0xd) >> 0x1f;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58),&local_28,1);
    (**(code **)(unaff_gp + -0x7ce8))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54),
               -1 < *(int *)(param_1 + 0x74) << 0xd);
    (**(code **)(unaff_gp + -0x79d0))();
    if (*(int *)(param_1 + 100) != 0) {
      (**(code **)(unaff_gp + -0x7db4))();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      (**(code **)(unaff_gp + -0x78ec))(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
