/**
 * FUN_0042b030
 *
 * Extracted from fsn.c lines 67164-67176
 * Ghidra address: 0x0042b030
 * Category: Other
 */

void FUN_0042b030(void)

{
  undefined4 uVar1;
  int unaff_gp;
  
  uVar1 = /* TODO: GP:-0x7e6c */ (**(code **)(unaff_gp + -0x7e6c) /* -> EXTERNAL_0x0e320d18 */)(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e10));
  /* TODO: GP:-0x7e70 */ (**(code **)(unaff_gp + -0x7e70) /* -> EXTERNAL_0x0e321898 */)
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) /* -> DAT_10010000 */ + 0x6e10),uVar1,
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7b64));
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b030):
     * Function: FUN_0042b030
     *
     * Looking at the GP offsets and the assembly structure:
     * **1. What it does:**
     * Calls XmTextGetString on a text widget (offset 0x6e10 from a global), then calls XmTextSetString on the same widget with that string and another global value (offset 0x7b64). Essentially copies/refreshes text content.
     * **2. C pseudocode:**
     * ```c
     * void FUN_0042b030(void) {
     * char *text;
     * Widget textWidget;
     * // GP-32660 is likely curcontextwindows or similar global
     * // offset 0x6e10 (28176) into it is a text widget
     * textWidget = ((Widget *)DAT_gp_806c)[0x6e10/4];  // or byte offset
     * text = XmTextGetString(textWidget);
     * // GP-32664 at offset 0x7b64 (31588) is some string/data
     * XmTextSetString(textWidget, text, DAT_gp_8068[0x7b64/4]);
     * }
     * ```
     * Note: The second call takes 3 args (a0=widget, a1=string from first call, a2=value from another global). This might be XmTextSetString with an extra parameter, or a wrapper function. The GP offsets -32660, -32664, -32368, -32364 resolve to the actual function/data addresses via the GOT.
     */
halt_baddata();
}
