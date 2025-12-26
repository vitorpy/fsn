/**
 * FUN_004277fc
 *
 * Extracted from fsn.c lines 64400-64413
 * Ghidra address: 0x004277fc
 * Category: Other
 */

void FUN_004277fc(void)

{
  int unaff_gp;
  
  if (*(int *)(*curcontext /* was: *(int **)(unaff_gp + -0x7684) */ /* -> curcontext */ + 0x3c) == 0) {
    (**(code **)(unaff_gp + -0x7904) /* -> FUN_0042757c */)() /* =FUN_0042757c */;
  }
  else {
    (**(code **)(unaff_gp + -0x79e8) /* -> FUN_0041ac8c */)() /* =FUN_0041ac8c */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004277fc):
     * Function: FUN_004277fc
     *
     * **Final answer for code comment:**
     * ```c
     * // FUN_004277fc / highlightFile - Ghidra couldn't decompile (halt_baddata)
     * // Assembly analysis: Checks curcontext[15] (selectedFile ptr at offset 0x3c)
     * // If file selected: calls highlightFileLandscape (renders highlight on file)
     * // If no file: calls highlightFileWarp (clears/resets highlight state)
     * void highlightFile(void) {
     * if (curcontext[15] != NULL) {
     * highlightFileLandscape();  // GP-31208 - highlight the selected file
     * } else {
     * highlightFileWarp();       // GP-30980 - no file to highlight
     * }
     * }
     * ```
     */
halt_baddata();
}
