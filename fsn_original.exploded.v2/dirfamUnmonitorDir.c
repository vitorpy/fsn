/**
 * dirfamUnmonitorDir
 *
 * Extracted from fsn.c lines 64759-64769
 * Category: Filesystem
 */

void dirfamUnmonitorDir(int param_1)

{
  if ((fsn_resources == '\0') && (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 10 < 0)) {
    build_path_string(0,param_1);
    FUN_0043a5bc(&DAT_10016c70,param_1 + 0x60);
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xdf;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427ebc):
     * Function: dirfamUnmonitorDir
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Checks if bit 21 of the flags field (offset 0x74) is set. If so, calls FAMCancelMonitor() on the directory, then calls XtFree() on the name string at offset 0x60, and clears bit 5 of the byte at offset 0x75.
     * **2. C pseudocode:**
     * ```c
     * void dirfamUnmonitorDir(DirNode *dir) {
     * if (dir == NULL) return;
     * uint flags = dir->flags;  // offset 0x74
     * // Extract bit 21: (flags << 10) >> 31 == (flags >> 21) & 1
     * if ((flags >> 21) & 1) {
     * FAMCancelMonitor(&famconn, dir);           // GP offset -31364
     * XtFree(dir->name);                          // GP offset -30484, dir+0x60
     * dir->flags_byte &= ~0x20;                   // offset 0x75, clear bit 5
     * }
     * }
     * ```
     * GP offsets: -31364 = FAMCancelMonitor, -30484 = XtFree, -32660 = famconn (global FAMConnection)
     */
halt_baddata();
}
