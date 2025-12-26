/**
 * FUN_0042fd50
 *
 * Extracted from fsn.c lines 69854-69864
 * Ghidra address: 0x0042fd50
 * Category: Other
 */

void FUN_0042fd50(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = /* TODO: GP:-0x7c98 */ (**(code **)(unaff_gp + -0x7c98) /* -> EXTERNAL_0x0f67f534 */)();
  /* TODO: GP:-0x7bb8 */ (**(code **)(unaff_gp + -0x7bb8) /* -> EXTERNAL_0x0f58acc8 */)(**(undefined4 **)(unaff_gp + -0x75fc) /* -> display */,uVar1);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042fd50):
     * Function: FUN_0042fd50
     *
     * [Claude timeout after 120s]
     */
halt_baddata();
}
