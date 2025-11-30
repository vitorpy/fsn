/**
 * init_directory_layout
 *
 * Extracted from fsn.c lines 39594-39666
 * Category: Filesystem
 */

void init_directory_layout(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_gp;
  double dVar4;
  float fVar5;
  float fVar6;
  uint unaff_000010b0;
  uint in_fcsr;
  
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x10;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar3 = 0;
  }
  else {
    dVar4 = (double)(**(code **)(unaff_gp + -0x7ef8))((double)(*(int *)(param_1 + 0xc) + -1));
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      dVar4 = ROUND(dVar4);
    }
    else {
      dVar4 = FLOOR(dVar4);
    }
    iVar3 = (int)dVar4 + 1;
  }
  if (iVar3 == 0) {
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    *(float *)(param_1 + 0x3c) =
         (float)((double)*(float *)(iVar2 + 0x70) +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)*(float *)(iVar2 + 0x74));
  }
  else {
    iVar2 = *(int *)(unaff_gp + -0x75dc);
    *(float *)(param_1 + 0x3c) =
         (float)((double)iVar3 *
                ((double)*(float *)(iVar2 + 0x70) +
                (double)((ulonglong)unaff_000010b0 << 0x20) * (double)*(float *)(iVar2 + 0x74)));
  }
  fVar5 = *(float *)(iVar2 + 0x74);
  fVar6 = *(float *)(iVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  fVar5 = (float)((double)(1 - iVar3) *
                  ((double)fVar6 + (double)((ulonglong)unaff_000010b0 << 0x20) * (double)fVar5) *
                 (double)((ulonglong)(double)fVar6 & 0xffffffff00000000));
  if (*(int *)(param_1 + 0xc) < 1) {
    iVar3 = *(int *)(unaff_gp + -0x7fe8);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
    (*(code *)(iVar3 + 0x2234))(param_1);
    piVar1 = (int *)(*(int *)(unaff_gp + -0x7f98) + 0x18c);
    if (*piVar1 < *(int *)(param_1 + 0x1c)) {
      *piVar1 = *(int *)(param_1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (0 < *(int *)(param_1 + 0x14)) {
      (**(code **)(unaff_gp + -0x7a70))(**(undefined4 **)(param_1 + 0x18));
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar3 = **(int **)(param_1 + 0x10);
  *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 4;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(iVar3 + 0xc);
  *(float *)(iVar3 + 0x14) = fVar5;
  *(float *)(iVar3 + 0x18) = fVar5;
  (**(code **)(unaff_gp + -0x7a74))(iVar3);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
