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
    iVar1 = /* TODO: GP:-0x7d40 */ (**(code **)(unaff_gp + -0x7d40) /* -> EXTERNAL_0x0fac6264 */)(param_2,0x2f);
    *(int *)(param_1 + 0x22c) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x228);
    }
    else {
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
    }
  }
  iVar1 = /* TODO: GP:-0x7e30 */ (**(code **)(unaff_gp + -0x7e30) /* -> EXTERNAL_0x0fac6694 */)(*(undefined4 *)(param_1 + 0x228),param_1 + 0x244);
  *(uint *)(param_1 + 0x230) = (uint)(iVar1 == 0);
  if (((iVar1 == 0) == 0) || ((*(uint *)(param_1 + 600) & 0xf000 | 0x8000) != 0x8000)) {
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  if (*(int *)(param_1 + 0x240) == 0) {
    iVar1 = /* TODO: GP:-0x7e34 */ (**(code **)(unaff_gp + -0x7e34) /* -> EXTERNAL_0x0facad64 */)(*(undefined4 *)(param_1 + 0x228),4);
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
    iVar1 = /* TODO: GP:-0x7e14 */ (**(code **)(unaff_gp + -0x7e14) /* -> EXTERNAL_0x0fac2404 */)(*(undefined4 *)(param_1 + 0x238),param_1 + 0x20,0x200)
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
      /*
     * BADDATA ANALYSIS (from binary @ 0x004357ec):
     * Function: FUN_004357ec
     *
     * Looking at this assembly:
     * **What it does:**
     * Compares v0 against 1 (at register). If v0 != 1, stores v0 at offset 568 and sets offset 572 to 1; otherwise sets 572 to 0. If offset 572 is non-zero, calls a function (likely readlink via GOT at gp-32276) with args (offset 568, s0+32, 512), storing result at offset 716. Sets offset 564 to 1 if result >= 0, else 0. Finally clears offset 544.
     * **C pseudocode:**
     * ```c
     * this->field_238 = fd;  // offset 568
     * if (fd != 1) {
     * this->is_symlink = 1;  // offset 572
     * } else {
     * this->is_symlink = 0;
     * }
     * if (this->is_symlink) {
     * int len = readlink(this->field_238, this->linkpath, 512);  // linkpath at +32
     * this->link_length = len;  // offset 716
     * this->link_valid = (len >= 0) ? 1 : 0;  // offset 564
     * } else {
     * this->link_valid = 0;
     * }
     * this->field_220 = 0;  // offset 544, cleanup/reset field
     * ```
     * Note: The comparison `v0 != 1` suggests checking if a file descriptor or type indicator equals some special value (possibly checking if it's a symlink based on prior stat/lstat call result).
     */
halt_baddata();
}
