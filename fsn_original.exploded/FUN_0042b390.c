/**
 * FUN_0042b390
 *
 * Extracted from fsn.c lines 67317-67326
 * Ghidra address: 0x0042b390
 * Category: UI
 */

void FUN_0042b390(int param_1)

{
  XtDestroyWidget();
  if (param_1 == DAT_100079c0) {
    DAT_100079c0 = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
