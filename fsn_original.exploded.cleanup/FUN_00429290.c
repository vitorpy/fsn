/**
 * FUN_00429290
 *
 * Extracted from fsn.c lines 65599-65610
 * Ghidra address: 0x00429290
 * Category: Other
 */

void FUN_00429290(void)

{
  int unaff_gp;
  
  if (*(int *)(*(int *)(unaff_gp + -0x7f98) /* -> small */ + 0x7988) != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
