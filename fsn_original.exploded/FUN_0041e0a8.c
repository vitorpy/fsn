/**
 * FUN_0041e0a8
 *
 * Extracted from fsn.c lines 59446-59455
 * Ghidra address: 0x0041e0a8
 * Category: Other
 */

void FUN_0041e0a8(void)

{
  if ((*(int *)(curcontext + 0x44) != 0) &&
     (-1 < *(int *)(*(int *)(curcontext + 0x44) + 0x74) << 0xd)) {
    FUN_00415598();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
