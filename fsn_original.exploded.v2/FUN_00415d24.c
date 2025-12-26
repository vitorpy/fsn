/**
 * FUN_00415d24
 *
 * Extracted from fsn.c lines 54483-54500
 * Ghidra address: 0x00415d24
 * Category: Other
 */

void FUN_00415d24(void)

{
  if (_DAT_0fb51f00 == 0) {
    *current_file = *current_file + -1;
    if (*current_file < 0) {
      __filbuf();
    }
    else {
      current_file[1] = current_file[1] + 1;
    }
  }
  else {
    __semgetc(current_file);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00415d24):
     * Function: FUN_00415d24
     *
     * Looking at this assembly:
     * 1. **What it does:** Decrements a reference count at `*(*ptr)`, then either calls a function via GP offset -32040 if count went negative, OR reads and advances a byte pointer at `(*ptr)+4`, returning the byte value.
     * 2. **C pseudocode:**
     * ```c
     * // GP offset 0x6690 = some global pointer (likely a FILE* or stream struct)
     * void **stream = *(void**)(gp + 0x6690);
     * int *refcount = (int*)*stream;
     * (*refcount)--;
     * int result;
     * if (*refcount < 0) {
     * // GP-32040 = likely _filbuf or __srget (refill buffer)
     * result = _filbuf(stream);
     * } else {
     * unsigned char **bufptr = (unsigned char**)(*stream + 4);
     * result = **bufptr;
     * (*bufptr)++;
     * }
     * return result;
     * ```
     * This is the classic **getc() / getchar() macro expansion** - it's the inlined stdio macro that decrements `_cnt`, checks for buffer underflow, and either returns the next buffered byte or calls `_filbuf()` to refill. The structure matches IRIX's `FILE` struct: offset 0 = `_cnt` (chars remaining), offset 4 = `_ptr` (current position).
     */
halt_baddata();
}
