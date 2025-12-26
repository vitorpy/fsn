/**
 * FUN_0041c1c4
 *
 * Extracted from fsn.c lines 58220-58281
 * Ghidra address: 0x0041c1c4
 * Category: Other
 */

void FUN_0041c1c4(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf000;
  if (uVar1 == 0x1000) {
    DAT_10016bd0 = 0x70;
  }
  else if (uVar1 == 0x2000) {
    DAT_10016bd0 = 99;
  }
  else if (uVar1 == 0x4000) {
    DAT_10016bd0 = 100;
  }
  else if (uVar1 == 0x6000) {
    DAT_10016bd0 = 0x62;
  }
  else if (uVar1 == 0x8000) {
    DAT_10016bd0 = 0x2d;
  }
  else if (uVar1 == 0xa000) {
    DAT_10016bd0 = 0x6c;
  }
  else if (uVar1 == 0xc000) {
    DAT_10016bd0 = 0x73;
  }
  else {
    DAT_10016bd0 = 0x3f;
  }
  strcpy(&DAT_10016bd1,(&PTR_DAT_10006e34)[param_1 >> 6 & 7]);
  strcpy(&DAT_10016bd4,(&PTR_DAT_10006e34)[param_1 >> 3 & 7]);
  strcpy(&DAT_10016bd7,(&PTR_DAT_10006e34)[param_1 & 7]);
  if ((param_1 & 0x800 | 0x600) != 0) {
    if ((param_1 & 0x800) != 0) {
      if ((param_1 & 0x40) == 0) {
        DAT_10016bd3 = 0x53;
      }
      else {
        DAT_10016bd3 = 0x73;
      }
    }
    if ((param_1 & 0x400) != 0) {
      if ((param_1 & 8) == 0) {
        DAT_10016bd6 = 0x6c;
      }
      else {
        DAT_10016bd6 = 0x73;
      }
    }
    if ((param_1 & 0x200) != 0) {
      if ((param_1 & 1) == 0) {
        DAT_10016bd9 = 0x54;
      }
      else {
        DAT_10016bd9 = 0x74;
      }
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041c1c4):
     * Function: FUN_0041c1c4
     *
     * Looking at this assembly:
     * **What it does:**
     * Builds a Unix permission string (like "rwxrwxrwx") by checking mode bits and storing lowercase letters for set bits, uppercase for unset bits at specific string offsets (3, 6, 9 = the 'x' positions for user/group/other).
     * **C pseudocode:**
     * ```c
     * // v0 = mode has S_IXUSR, a2 = full mode, v1 = permission string buffer
     * if (mode & S_IXUSR) {           // 0x40 = user execute
     * if (mode & S_ISUID)         // 0x800 implied from earlier code
     * buf[3] = 's';           // setuid + execute
     * else
     * buf[3] = 'S';           // setuid, no execute
     * }
     * if (mode & 0x400) {             // S_ISGID check
     * if (mode & S_IXGRP)         // 0x8 = group execute
     * buf[6] = 's';           // setgid + execute
     * else
     * buf[6] = 'l';           // setgid, no execute (mandatory locking)
     * }
     * if (mode & 0x200) {             // S_ISVTX (sticky bit)
     * if (mode & S_IXOTH)         // 0x1 = other execute
     * buf[9] = 't';           // sticky + execute
     * else
     * buf[9] = 'T';           // sticky, no execute
     * }
     * return buf;
     * ```
     * This is the special permission bit handling (setuid/setgid/sticky) for `ls -l` style output, storing at offsets 3/6/9 which are the execute positions in "rwxrwxrwx".
     */
halt_baddata();
}
