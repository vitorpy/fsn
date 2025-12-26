/**
 * FUN_00427ec8
 *
 * Extracted from fsn.c lines 64775-64787
 * Ghidra address: 0x00427ec8
 * Category: Other
 */

void FUN_00427ec8(int param_1)

{
  int unaff_gp;
  
  if ((*fsn_resources /* was: *(char **)(unaff_gp + -0x75dc) */ /* -> fsn_resources */ == '\0') && (param_1->render_flags /* was: *(int *)(param_1 + 0x74) */ << 10 < 0)) {
    (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(0,param_1) /* =FUN_00411b30 */;
    (**(code **)(unaff_gp + -0x7714) /* -> FUN_0043a5bc */)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6c70,param_1 + 0x60) /* =FUN_0043a5bc */;
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xdf;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00427ec8):
     * Function: FUN_00427ec8
     *
     * Looking at this assembly:
     * 1. **What it does:**
     * Checks if bit 5 of byte at offset 0x74 (the "monitored" flag) is set. If set, calls FAMCancelMonitor(0, dir+96) and clears bit 5 of byte at offset 0x75.
     * 2. **C pseudocode:**
     * ```c
     * void dirfamUnmonitorDir(DirNode *dir) {
     * if (dir == NULL) return;
     * uint flags = *(uint*)(dir + 0x74);  // flags word
     * if ((flags >> 21) & 1) {            // bit 21 of word = bit 5 of byte 0x74
     * FAMCancelMonitor(0, &dir->fam_request);  // dir+0x60 (96)
     * dir->byte_0x75 &= ~0x20;        // clear bit 5 of status byte
     * }
     * }
     * ```
     * The key insight: `sll 0xa` then `srl 0x1f` extracts bit 21 from the 32-bit word at offset 0x74, which corresponds to bit 5 of the high byte. The `andi 0xffdf` clears bit 5 (0x20) of byte 0x75.
     * GP offsets: -31364 (0x857c) = FAMCancelMonitor, -30484 (0x88ec) = likely a hash table remove function.
     */
halt_baddata();
}
