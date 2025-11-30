/**
 * FUN_0042e3bc
 *
 * Extracted from fsn.c lines 68685-68743
 * Ghidra address: 0x0042e3bc
 * Category: Other
 */

void FUN_0042e3bc(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_gp;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  short local_4;
  short local_2;
  
  (**(code **)(unaff_gp + -0x7844))
            (param_1,&local_2,&local_4,&local_8,&local_c,&local_10,&local_14,&local_18,&local_1c,
             **(int **)(unaff_gp + -0x7684) + 0xc50);
  piVar3 = *(int **)(unaff_gp + -0x7684);
  puVar1 = (undefined4 *)*piVar3;
  if (local_2 != *(short *)(puVar1 + 3)) {
    *(short *)(puVar1 + 3) = local_2;
    (**(code **)(unaff_gp + -0x7ad8))();
    piVar3 = *(int **)(unaff_gp + -0x7684);
    puVar1 = (undefined4 *)*piVar3;
  }
  if (local_4 != *(short *)((int)puVar1 + 0xe)) {
    *(short *)((int)puVar1 + 0xe) = local_4;
    (**(code **)(unaff_gp + -0x7ad4))();
    piVar3 = *(int **)(unaff_gp + -0x7684);
    puVar1 = (undefined4 *)*piVar3;
  }
  *puVar1 = local_8;
  *(undefined4 *)(*piVar3 + 4) = local_c;
  *(undefined4 *)(*piVar3 + 8) = local_10;
  *(undefined4 *)(*piVar3 + 0x3c) = local_14;
  iVar2 = *piVar3;
  if (local_18 != *(int *)(iVar2 + 0x44)) {
    if (local_18 == 0) {
      (**(code **)(unaff_gp + -0x79c8))(0);
      iVar2 = **(int **)(unaff_gp + -0x7684);
    }
    else {
      (**(code **)(unaff_gp + -0x79c4))();
      iVar2 = **(int **)(unaff_gp + -0x7684);
    }
  }
  if (local_1c != *(int *)(iVar2 + 0x48)) {
    if (local_1c == 0) {
      (**(code **)(unaff_gp + -0x79c0))(0);
    }
    else {
      (**(code **)(unaff_gp + -0x79bc))();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
