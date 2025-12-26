/**
 * FUN_00427e30
 *
 * Extracted from fsn.c lines 64740-64753
 * Ghidra address: 0x00427e30
 * Category: Other
 */

void FUN_00427e30(int param_1)

{
  undefined4 uVar1;
  int unaff_gp;
  
  if ((*fsn_resources /* was: *(char **)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ == '\0') && (-1 < param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 10)) {
    uVar1 = (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1) /* =FUN_00411b30 */;
    (**(code **)(unaff_gp + -0x7718) /* -> FUN_00439eec */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c70,uVar1,param_1 + 0x60) /* =FUN_00439eec */;
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427e30):
     * Function: FUN_00427e30
     *
     * Looking at this assembly:
     * 1. **What it does**: Checks if bit 21 of `param[116]` (offset 0x74) is set. If not set, calls a function via GOT[-31364] with (0, param), then calls another function via GOT[-30488] with (string+27760, result, param+96). Finally sets bit 5 (0x20) in byte at param[117] (offset 0x75).
     * 2. **C pseudocode**:
     * ```c
     * void dirfamMonitorDir(DirNode *dir) {
     * if (some_condition != 0) goto done;
     * uint flags = dir->flags;  // offset 0x74
     * // Extract bit 21: (flags << 10) >> 31
     * if ((flags & 0x00200000) != 0) return;
     * void *result = some_func(0, dir);           // GOT[-31364], likely stat() or opendir()
     * other_func(string_base + 27760, result, &dir->field_96);  // GOT[-30488], likely XtAddInput or monitor registration
     * dir->status_byte |= 0x20;  // offset 0x75, set "monitoring" flag
     * done:
     * return;
     * }
     * ```
     * **GP offset lookup needed**: -31364 (0x857c) and -30488 (0x88e8) to identify the actual functions. The 27760 offset into a string table suggests a format string or resource name. This appears to be setting up file system monitoring on a directory node.
     */
halt_baddata();
}
