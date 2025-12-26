/**
 * FUN_004158d4
 *
 * Extracted from fsn.c lines 54389-54435
 * Ghidra address: 0x004158d4
 * Category: Filesystem
 */

void FUN_004158d4(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  statvfs asStack_124 [2];
  stat local_88;
  
  uVar1 = set_status_message("no database available...building...please wait",0);
  FUN_00411998();
  iVar2 = lstat(param_1,&local_88);
  if (iVar2 < 0) {
    fprintf((FILE *)0xfb52904,"cannot stat %s, giving up\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  if ((local_88.st_nlink & 0xf000) != 0x4000) {
    fprintf((FILE *)0xfb52904,"%s must be a directory\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  DAT_100166b8 = local_88.st_dev._0_4_;
  iVar2 = statvfs(param_1,asStack_124);
  if (iVar2 < 0) {
    fprintf((FILE *)0xfb52904,"cannot statvfs %s, giving up\n",param_1);
                    // WARNING: Subroutine does not return
    exit(1);
  }
  strcpy(fstyp,(char *)&asStack_124[0].__f_unused);
  localFlag = asStack_124[0].__f_spare[1] & 0x80000000;
  topdir = (undefined4 *)FUN_00411c04();
  uVar3 = FUN_00411d68(param_1);
  *topdir = uVar3;
  sVar4 = strlen(param_1);
  topdir[1] = sVar4;
  topdir[3] = 0;
  topdir[5] = 0;
  topdir[10] = 0;
  *(byte *)(topdir + 0x1d) = *(byte *)(topdir + 0x1d) | 2;
  FUN_00415598(topdir);
  set_status_message("file system database built",2000);
  deleteMessage(uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004158d4):
     * Function: FUN_004158d4
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * 1. Sets flag bit 0x02 in a structure field at offset 116 (0x74)
     * 2. Calls a function via GP-31300 with that structure as argument
     * 3. Calls XtAppAddTimeOut (GP-31384) with 2000ms timeout and callback from rodata
     * 4. Calls XtDestroyWidget (GP-31388) on a widget from stack, then returns the structure
     * **C pseudocode:**
     * ```c
     * // At end of FUN_004158d4, after halt_baddata region:
     * node = *s0_ptr;
     * node->flags_0x74 |= 0x02;           // Set bit in byte at offset 116
     * some_func(node);                     // GP-31300 call
     * XtAppAddTimeOut(app_context, 2000, timeout_callback, NULL);  // 2 second timer
     * XtDestroyWidget(widget_from_stack);
     * return node;
     * ```
     * The GP offsets likely resolve to:
     * - GP-31300 (0x85bc): probably a node update/redraw function
     * - GP-31384 (0x8568): XtAppAddTimeOut
     * - GP-31388 (0x8564): XtDestroyWidget
     */
halt_baddata();
}
