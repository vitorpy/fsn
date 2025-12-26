/**
 * gotoFileName
 *
 * Extracted from fsn.c lines 60159-60175
 * Category: Filesystem
 */

void gotoFileName(undefined4 param_1)

{
  int iStack_8;
  int iStack_4;
  
  FUN_0042ab1c(param_1,&iStack_4,&iStack_8);
  if (iStack_4 != 0) {
    FUN_0041d69c();
    if (iStack_8 != 0) {
      FUN_0041da44();
    }
    FUN_0041fbb4();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041fc24):
     * Function: gotoFileName
     *
     * Looking at the assembly:
     * 1. **What it does**: Calls a function via GP-31172 with args (a0=sp+36, a2=sp+32). If sp+32 result is non-null, calls GP-31164 with it. Then unconditionally calls GP-31144. Returns 1 on success, 0 if initial a0 was null.
     * 2. **C pseudocode**:
     * ```c
     * int gotoFileName_tail(char *filename, /* other args */) {
     * char *result;
     * if (filename == NULL)
     * return 0;
     * /* GP-31172: likely findFileByName or similar */
     * result = find_file_func(filename, &result);
     * if (result != NULL) {
     * /* GP-31164: likely selectFile or gotoFile */
     * select_func(result);
     * }
     * /* GP-31144: likely refresh/redraw */
     * refresh_func();
     * return 1;
     * }
     * ```
     * **GP offset resolution needed**: Check GP_MAPPING.md or run `python3 analysis/resolve_got.py` with offsets -31172 (0x863c), -31164 (0x8644), -31144 (0x8658) to identify the actual functions being called.
     */
halt_baddata();
}
