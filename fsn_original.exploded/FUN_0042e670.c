/**
 * FUN_0042e670
 *
 * Extracted from fsn.c lines 68834-68882
 * Ghidra address: 0x0042e670
 * Category: Other
 */

void FUN_0042e670(undefined4 param_1)

{
  int iVar1;
  int unaff_gp;
  char local_1d;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  float local_c;
  float local_8;
  undefined1 local_4 [2];
  undefined1 local_2 [2];
  
  iVar1 = (**(code **)(unaff_gp + -0x7844))
                    (param_1,local_2,local_4,&local_8,&local_c,local_10,local_14,&local_18,&local_1c
                     ,&local_1d);
  if (iVar1 != 0) {
    iVar1 = **(int **)(unaff_gp + -0x7684);
    if (local_18 != *(int *)(iVar1 + 0x44)) {
      if (local_18 == 0) {
        (**(code **)(unaff_gp + -0x79c8))(0);
        iVar1 = **(int **)(unaff_gp + -0x7684);
      }
      else {
        (**(code **)(unaff_gp + -0x79c4))();
        iVar1 = **(int **)(unaff_gp + -0x7684);
      }
    }
    if (local_1c != *(int *)(iVar1 + 0x48)) {
      if (local_1c == 0) {
        (**(code **)(unaff_gp + -0x79c0))(0);
      }
      else {
        (**(code **)(unaff_gp + -0x79bc))();
      }
    }
    if (local_1d == '\0') {
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
      (**(code **)(unaff_gp + -0x7aa8))((double)local_8,(double)local_c);
    }
    else {
      (**(code **)(unaff_gp + -0x7aa8))((double)local_8,(double)local_c);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
