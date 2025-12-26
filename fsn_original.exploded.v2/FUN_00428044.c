/**
 * FUN_00428044
 *
 * Extracted from fsn.c lines 64863-64889
 * Ghidra address: 0x00428044
 * Category: Other
 */

void FUN_00428044(void)

{
  int iVar1;
  undefined1 auStack_414 [1036];
  int local_8;
  uint local_4;
  
  if (fsn_resources == '\0') {
    FUN_00427fe0();
    iVar1 = FUN_0043ab5c(&DAT_10016c70);
    while (iVar1 != 0) {
      FUN_0043aa18(&DAT_10016c70,auStack_414);
      if ((local_8 != 0) && (local_4 < 10)) {
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00428044):
     * Function: FUN_00428044
     *
     * Looking at this assembly:
     * 1. **What it does**: Checks a global flag (likely "debug_mode" at GP-30172). If zero, calls two functions via GP (likely getuid() at GP-30944, then sprintf/access at GP-30476) with a path string (GP-32660 + 27760 offset). Allocates 1096 bytes stack frame, saves s0-s2/ra/gp.
     * 2. **C pseudocode**:
     * ```c
     * void FUN_00428044(void) {
     * char buffer[1024];  // sp+64, size ~1032
     * if (*debug_flag != 0) {  // GP-30172, early exit
     * return;
     * }
     * int uid = getuid();  // GP-30944 call
     * char *base_path = (char*)(&DAT_base + 27760);  // GP-32660 + 0x6c70
     * if (access(base_path, ...) != 0) {  // GP-30480 call, or stat/opendir
     * // continues at 4281e4...
     * }
     * // GP-30480 call with s2 (path) as arg
     * // ... more processing with buffer at sp+64
     * }
     * ```
     * The GP offsets suggest: -30944 = getuid, -30476/-30480 = file access functions (stat/access/opendir), -32660+27760 = a path string in .data section (likely "/usr/lib/filetype" or similar IRIX path).
     */
halt_baddata();
      }
      iVar1 = FUN_0043ab5c(&DAT_10016c70);
    }
    FUN_0041dba0();
    redraw_gl_scene();
    FUN_0042a8e4();
    FUN_00427f5c();
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00428044):
     * Function: FUN_00428044
     *
     * Looking at this assembly:
     * 1. **What it does:** This is a switch/case continuation for FAM (File Alteration Monitor) event handling. Each branch calls a different GP-indirect function (at offsets -31260, -31268, -31264) then converges at 0x4281c8 which calls another function (offset -30476) with s2 as argument. The `andi $t0,$s0,0xff` masks to byte - likely extracting an event code.
     * 2. **C pseudocode:**
     * ```c
     * // Switch cases continuing from earlier code
     * case SOME_EVENT:
     * result = func_gp_85e4();  // GP offset -31260 (0x85e4)
     * s0 = (s0 | result) & 0xff;
     * break;
     * case ANOTHER_EVENT:
     * func_gp_85dc(s1);  // GP offset -31268 (0x85dc) - takes filename/path arg
     * break;
     * case YET_ANOTHER:
     * func_gp_85e0(s1);  // GP offset -31264 (0x85e0) - takes filename/path arg
     * break;
     * // Common exit path - all cases converge here
     * func_gp_88f4(s2);  // GP offset -30476 (0x88f4) - likely fam_request cleanup
     * ```
     * To resolve the actual function names, run:
     * ```bash
     * python3 analysis/resolve_got.py <<< "-31260
     * -31268
     * -31264
     * -30476"
     * ```
     */
halt_baddata();
}
