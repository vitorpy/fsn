/**
 * FUN_00439c0c
 *
 * Extracted from fsn.c lines 77366-77374
 * Ghidra address: 0x00439c0c
 * Category: Other
 */

void FUN_00439c0c(int param_1)

{
  int unaff_gp;
  
  /* TODO: GP:-0x7b34 */ (**(code **)(unaff_gp + -0x7b34) /* -> EXTERNAL_0x0f8b5a50 */)(*(undefined4 *)(param_1 + 4));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00439c0c):
     * Function: FUN_00439c0c
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
