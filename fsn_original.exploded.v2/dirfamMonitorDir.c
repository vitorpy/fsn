/**
 * dirfamMonitorDir
 *
 * Extracted from fsn.c lines 64722-64734
 * Category: Filesystem
 */

void dirfamMonitorDir(int param_1)

{
  undefined4 uVar1;
  
  if ((fsn_resources == '\0') && (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 10)) {
    uVar1 = build_path_string(0,param_1);
    FUN_00439eec(&DAT_10016c70,uVar1,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427e24):
     * Function: dirfamMonitorDir
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Checks if bit 21 of offset 0x74 is set (via shift-left-10, then shift-right-31 to extract single bit). If not set, calls a function via GP-0x857c with the struct pointer, then calls sprintf (GP-0x88e8) to format something into offset 0x60 of the struct, and sets bit 5 of the byte at offset 0x75.
     * 2. **C pseudocode:**
     * ```c
     * void dirfamMonitorDir(DirNode *dir) {
     * if (dir == NULL) return;
     * uint flags = dir->flags;  // offset 0x74
     * // Extract bit 21: (flags << 10) >> 31
     * if ((flags & 0x00200000) == 0) {
     * char *name = get_dir_name(dir);  // GP-0x857c call
     * sprintf(dir->path_buffer, format_string, name, &dir->something);  // offset 0x60
     * dir->status_byte |= 0x20;  // offset 0x75, set bit 5
     * }
     * }
     * ```
     * **GP offset resolution needed:** -31364 (0x857c) and -30488 (0x88e8) - the second is almost certainly sprintf based on the calling convention (format string in a0, result of previous call in a1, pointer+96 in a2).
     */
halt_baddata();
}
