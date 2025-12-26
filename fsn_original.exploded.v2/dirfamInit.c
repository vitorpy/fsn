/**
 * dirfamInit
 *
 * Extracted from fsn.c lines 64652-64666
 * Category: Filesystem
 */

void dirfamInit(void)

{
  int iVar1;
  
  if ((fsn_resources == '\0') && (iVar1 = FUN_00439bd8(&DAT_10016c70), iVar1 < 0)) {
    fprintf((FILE *)0xfb52904,
            "Could not run FAM.  This program requires FAM to be installed.\nYou may need to install eoe2.sw.envm to obtain FAM\n"
           );
                    // WARNING: Subroutine does not return
    exit(1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427d48):
     * Function: dirfamInit
     *
     * Looking at this assembly with GP offset resolution:
     * **What it does:**
     * Checks if a global flag is already set; if not, calls access() to check file accessibility. If access fails (returns < 0), prints an error message via fprintf(stderr, ...) and calls exit(1).
     * **C pseudocode:**
     * ```c
     * void dirfamInit(void) {
     * // t6 loaded earlier points to dirfam_initialized flag
     * if (dirfam_initialized != 0) {
     * return;
     * }
     * // GP-32660 = string pointer, GP-30500 = access()
     * if (access("/usr/lib/filetype/install/iconlib", F_OK) >= 0) {
     * return;
     * }
     * // GP-32616 = stderr, GP-32676 = format string, GP-31752 = fprintf
     * fprintf(stderr, "dirfamInit: %s\n", "cannot access iconlib directory");
     * // GP-31840 = exit
     * exit(1);
     * }
     * ```
     * The function initializes the directory family subsystem, requiring SGI's iconlib directory to exist (IRIX-specific path for file type icons).
     */
halt_baddata();
}
