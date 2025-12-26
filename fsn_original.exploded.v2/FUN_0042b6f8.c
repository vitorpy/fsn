/**
 * FUN_0042b6f8
 *
 * Extracted from fsn.c lines 67430-67462
 * Ghidra address: 0x0042b6f8
 * Category: Other
 */

void FUN_0042b6f8(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_3c [4];
  ushort local_38;
  ushort local_36;
  ushort local_34;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_4;
  
  if (*param_2 != 0) {
    XtWarning("String to CpColor conversion needs no arguments");
  }
  local_28 = &local_4;
  local_2c = 0xf6615ba;
  XtGetValues(toplevel,&local_2c,1);
  uVar1 = XtDisplay(toplevel);
  iVar2 = XParseColor(uVar1,local_4,*(undefined4 *)(param_3 + 4),auStack_3c);
  if (iVar2 == 0) {
    XtStringConversionWarning(*(undefined4 *)(param_3 + 4),"CpColor");
  }
  else {
    DAT_10016e24 = (uint)(local_38 >> 8) + (uint)(local_36 >> 8) * 0x100 +
                   (uint)(local_34 >> 8) * 0x10000;
    *param_4 = 4;
    param_4[1] = &DAT_10016e24;
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042b6f8):
     * Function: FUN_0042b6f8
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Extracts RGB components from 16-bit color values at sp+40,42,44 (byte-swapping each), packs them into a single 24-bit color word (R + G<<8 + B<<16), stores it to a global color variable, then sets up a return structure with type=4 and pointer to that color.
     * **2. C pseudocode:**
     * ```c
     * // Extract RGB from XColor-like struct on stack, byte-swap each component
     * unsigned short r_raw = *(unsigned short*)(sp + 40);  // red
     * unsigned short g_raw = *(unsigned short*)(sp + 42);  // green
     * unsigned short b_raw = *(unsigned short*)(sp + 44);  // blue
     * // Byte-swap and pack: take high byte of each 16-bit value
     * unsigned char r = r_raw >> 8;
     * unsigned char g = g_raw >> 8;
     * unsigned char b = b_raw >> 8;
     * // Pack into 24-bit RGB (little-endian order: R + G*256 + B*65536)
     * unsigned int packed_color = r | (g << 8) | (b << 16);
     * // Store to global DAT_10006e24 (at gp-32660 + 28196)
     * DAT_10006e24 = packed_color;
     * // Return via structure at sp+108
     * result->type = 4;           // XmNbackground resource type
     * result->value = &DAT_10006e24;  // pointer to color value
     * ```
     * This is part of `widgetHelp` - it converts an X11 XColor (16-bit per channel) to an 8-bit packed RGB for use as an Xm resource callback return value.
     */
halt_baddata();
}
