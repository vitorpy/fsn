/**
 * FUN_004357ec
 *
 * Extracted from fsn.c lines 73814-73869
 * Ghidra address: 0x004357ec
 * Category: Other
 */

void FUN_004357ec(int param_1,int param_2)

{
  int iVar1;
  int unaff_gp;
  
  *(int *)(param_1 + 0x228) = param_2;
  if (param_2 != 0) {
    iVar1 = (**(code **)(unaff_gp + -0x7d40) /* -> EXTERNAL_0x0fac6264 */)(param_2,0x2f);
    *(int *)(param_1 + 0x22c) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x228);
    }
    else {
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
    }
  }
  iVar1 = (**(code **)(unaff_gp + -0x7e30) /* -> EXTERNAL_0x0fac6694 */)(*(undefined4 *)(param_1 + 0x228),param_1 + 0x244);
  *(uint *)(param_1 + 0x230) = (uint)(iVar1 == 0);
  if (((iVar1 == 0) == 0) || ((*(uint *)(param_1 + 600) & 0xf000 | 0x8000) != 0x8000)) {
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  if (*(int *)(param_1 + 0x240) == 0) {
    iVar1 = (**(code **)(unaff_gp + -0x7e34) /* -> EXTERNAL_0x0facad64 */)(*(undefined4 *)(param_1 + 0x228),4);
    *(int *)(param_1 + 0x238) = iVar1;
    if (iVar1 == -1) {
      *(undefined4 *)(param_1 + 0x23c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x23c) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  if (*(int *)(param_1 + 0x23c) == 0) {
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  else {
    iVar1 = (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(*(undefined4 *)(param_1 + 0x238),param_1 + 0x20,0x200)
    ;
    *(int *)(param_1 + 0x2cc) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x234) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
