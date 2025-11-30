/**
 * update_directory_layout
 *
 * Extracted from fsn.c lines 39429-39486
 * Category: Filesystem
 */

void update_directory_layout(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  byte in_fcsr;
  int local_1c [7];
  
  fVar1 = (float)*(int *)(param_1 + 0xc) * item_scale_factor;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar1);
  }
  else {
    fVar1 = FLOOR(fVar1);
  }
  iVar5 = (int)fVar1;
  bzero(local_1c,0x1c);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      piVar4 = (int *)(*(int *)(param_1 + 0x10) + iVar3);
      iVar3 = iVar3 + 4;
      piVar4 = local_1c + (*(uint *)(*piVar4 + 0x28) >> 0x1d);
      *piVar4 = *piVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  if (iVar5 < local_1c[0]) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else if (iVar5 < local_1c[1]) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  else if (iVar5 < local_1c[2]) {
    *(undefined4 *)(param_1 + 0x68) = 2;
  }
  else if (iVar5 < local_1c[3]) {
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  else if (iVar5 < local_1c[4]) {
    *(undefined4 *)(param_1 + 0x68) = 4;
  }
  else if (iVar5 < local_1c[5]) {
    *(undefined4 *)(param_1 + 0x68) = 5;
  }
  else if (iVar5 < local_1c[6]) {
    *(undefined4 *)(param_1 + 0x68) = 6;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 7;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
