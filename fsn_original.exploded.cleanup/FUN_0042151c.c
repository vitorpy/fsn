/**
 * FUN_0042151c
 *
 * Extracted from fsn.c lines 61197-61227
 * Ghidra address: 0x0042151c
 * Category: Filesystem
 */

void FUN_0042151c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  uint uVar3;
  undefined8 in_f18;
  
  uVar3 = (uint)((ulonglong)in_f18 >> 0x20);
  FUN_0041fd70();
  iVar1 = FUN_004213c8();
  if (iVar1 == 0) {
    FUN_004211d4(param_1,param_2,param_3,param_4);
  }
  else {
    save_matrix_state();
    FUN_0041d69c(iVar1);
    if (*(int *)(curcontext + 0x3c) == 0) {
      dVar2 = (double)*(float *)(iVar1 + 0x3c) / (double)((ulonglong)uVar3 << 0x20) +
              (double)DAT_10017518;
      set_camera_lookat((double)*(float *)(iVar1 + 0x34) - (double)*(float *)(curcontext + 0x14) * dVar2,
                   (double)*(float *)(iVar1 + 0x38) - (double)*(float *)(curcontext + 0x18) * dVar2)
      ;
    }
    else if (iVar1 != *(int *)(curcontext + 0x3c)) {
      do_warp();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
