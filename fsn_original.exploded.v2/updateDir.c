/**
 * updateDir
 *
 * Extracted from fsn.c lines 55366-55381
 * Category: Filesystem
 */

void updateDir(int param_1)

{
  size_t sVar1;
  int iVar2;
  char acStack_400 [1024];
  
  build_path_string(acStack_400,param_1->child_center /* was: *(undefined4 *)(param_1 + 0x28) */);
  sVar1 = strlen(acStack_400);
  iVar2 = FUN_004138e8(param_1,acStack_400,acStack_400 + sVar1,0);
  if (iVar2 != 0) {
    FUN_004144ec(param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00417b7c):
     * Function: updateDir
     *
     * Looking at the GP offsets and call pattern:
     * **What it does:**
     * 1. Calls `strlen()` on a string buffer at sp+40
     * 2. Calls `readdir64()` (gp-32744 + 14568 = readdir64) with DIR* from sp+1064, buffer at sp+40, length from strlen, and 0
     * 3. If readdir64 returns non-zero, calls `closedir()` (gp-32744 + 17644) on the DIR*, returns low byte of result
     * **C pseudocode:**
     * ```c
     * char buf[1024];  // at sp+40
     * DIR *dirp = ...;  // at sp+1064
     * int len = strlen(buf);
     * int result = readdir64(dirp, buf, buf + len, 0);
     * if (result != 0) {
     * closedir(dirp);
     * return result & 0xff;
     * }
     * return 0;  // v1 was 0 from earlier
     * ```
     * Note: The `buf + len` as third arg suggests this is actually `getdents()` or similar syscall wrapper where arg3 is the end pointer. On IRIX, `readdir64_r` or `nftw` variants used this pattern. The function reads directory entries into a buffer, closes the directory handle on success, and returns a status byte.
     */
halt_baddata();
}
