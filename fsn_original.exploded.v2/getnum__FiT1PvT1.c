/**
 * getnum__FiT1PvT1
 *
 * Extracted from fsn.c lines 73637-73644
 * Category: Other
 */

void getnum__FiT1PvT1(int param_1,__off_t param_2,void *param_3,size_t param_4)

{
  lseek(param_1,param_2,0);
  read(param_1,param_3,param_4);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0043565c):
     * Function: getnum__FiT1PvT1
     *
     * Looking at the GP offsets and function signature:
     * **GP offset resolution:**
     * - `-31544(gp)` = 0x84c8 offset → likely `lseek`
     * - `-32276(gp)` = 0x81ec offset → likely `read`
     * **What it does:**
     * Seeks to position `a0` in file descriptor `a1`, then reads `a3` bytes into buffer `a2`. Returns 1 if read count matches requested, 0 otherwise.
     * **C pseudocode:**
     * ```c
     * // getnum__FiT1PvT1(int offset, int fd, void *buf, int count)
     * int getnum(int offset, int fd, void *buf, int count) {
     * lseek(fd, offset, SEEK_SET);  // a2=0 means SEEK_SET
     * int bytes_read = read(fd, buf, count);
     * return (bytes_read == count) ? 1 : 0;
     * }
     * ```
     * The mangled name `getnum__FiT1PvT1` suggests C++ with signature `getnum(int, int, void*, int)` where T1 means "same as param 1" (int).
     */
halt_baddata();
}
