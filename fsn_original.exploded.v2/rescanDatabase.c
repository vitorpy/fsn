/**
 * rescanDatabase
 *
 * Extracted from fsn.c lines 54348-54383
 * Category: Filesystem
 */

void rescanDatabase(void)

{
  int iVar1;
  char acStack_510 [1000];
  undefined4 local_128;
  statvfs asStack_124 [2];
  stat local_88;
  
  local_128 = set_status_message("rescanning file system",0);
  FUN_00411998();
  iVar1 = statvfs((char *)*topdir,asStack_124);
  if (iVar1 < 0) {
    sprintf(acStack_510,"cannot statvfs %s, leaving display unchanged",*topdir);
    set_status_message(acStack_510,1000);
    deleteMessage(local_128);
  }
  else {
    strcpy(fstyp,(char *)&asStack_124[0].__f_unused);
    localFlag = asStack_124[0].__f_spare[1] & 0x80000000;
    iVar1 = lstat((char *)*topdir,&local_88);
    if (iVar1 < 0) {
      sprintf(acStack_510,"cannot stat %s, leaving display unchanged",*topdir);
      set_status_message(acStack_510,1000);
      deleteMessage(local_128);
    }
    else {
      DAT_100166b8 = local_88.st_dev._0_4_;
      FUN_00415598(topdir);
      deleteMessage(local_128);
      set_status_message("file system update complete",2000);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004156fc):
     * Function: rescanDatabase
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Stores a value from stack (sp+1192) to a global at offset 0x100166b8, calls set_main_gl_window with curcontext, calls free on a stack pointer, then calls usleep with 2000 microseconds.
     * **2. C pseudocode:**
     * ```c
     * DAT_100166b8 = local_var_4a8;           // sp+1192 -> global
     * set_main_gl_window(curcontext);          // gp-30420 -> curcontext, gp-31300 -> set_main_gl_window
     * free(local_ptr_408);                     // sp+1032, gp-31388 -> free
     * usleep(2000);                            // gp-31384 -> usleep, literal 2000 (0x7d0)
     * ```
     * The `gp-32676 + (-22376)` computes a string address in .rodata, but usleep takes an int so this is likely just the usleep delay parameter setup. The branch at 415864 is the normal exit path; this block at 41586c is the "rescan complete" cleanup path.
     */
halt_baddata();
}
