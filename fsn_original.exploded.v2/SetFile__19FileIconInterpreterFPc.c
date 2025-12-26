/**
 * SetFile__19FileIconInterpreterFPc
 *
 * Extracted from fsn.c lines 73753-73808
 * Category: Filesystem
 */

void SetFile__19FileIconInterpreterFPc(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  ssize_t sVar3;
  
  *(char **)(param_1 + 0x228) = param_2;
  if (param_2 != (char *)0x0) {
    pcVar1 = strrchr(param_2,0x2f);
    *(char **)(param_1 + 0x22c) = pcVar1;
    if (pcVar1 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0x228);
    }
    else {
      *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
    }
  }
  iVar2 = stat(*(char **)(param_1 + 0x228),(stat *)(param_1 + 0x244));
  *(uint *)(param_1 + 0x230) = (uint)(iVar2 == 0);
  if (((iVar2 == 0) == 0) || ((*(uint *)(param_1 + 600) & 0xf000 | 0x8000) != 0x8000)) {
    *(undefined4 *)(param_1 + 0x240) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
  if (*(int *)(param_1 + 0x240) == 0) {
    iVar2 = open(*(char **)(param_1 + 0x228),4);
    *(int *)(param_1 + 0x238) = iVar2;
    if (iVar2 == -1) {
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
    sVar3 = read(*(int *)(param_1 + 0x238),(void *)(param_1 + 0x20),0x200);
    *(ssize_t *)(param_1 + 0x2cc) = sVar3;
    if (sVar3 < 0) {
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x234) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004357e0):
     * Function: SetFile__19FileIconInterpreterFPc
     *
     * Looking at this assembly:
     * 1. **What it does:** Compares v0 to 1 (at=1), sets offset 572 to 1 if not equal, 0 if equal. If offset 572 is non-zero, calls a function via GP (likely readlink) with fd from offset 568, buffer at s0+32, size 512. Stores result at offset 716, sets offset 564 to 1 on success, 0 on failure. Finally clears offset 544.
     * 2. **C pseudocode:**
     * ```c
     * this->fd = result;  // offset 568
     * if (result != 1) {
     * this->is_symlink = 1;  // offset 572
     * } else {
     * this->is_symlink = 0;
     * }
     * if (this->is_symlink) {
     * int len = readlink(this->fd, this->link_target, 512);  // link_target at offset 32
     * this->link_len = len;  // offset 716
     * this->link_valid = (len >= 0) ? 1 : 0;  // offset 564
     * } else {
     * this->link_valid = 0;
     * }
     * this->field_544 = 0;  // offset 544, some state reset
     * ```
     * The GP call at -32276 is likely `readlink()` based on the signature (fd, buffer, size) and the symlink context from the class name FileIconInterpreter.
     */
halt_baddata();
}
