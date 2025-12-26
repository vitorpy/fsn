/**
 * scanDatabase
 *
 * Extracted from fsn.c lines 54282-54309
 * Category: Filesystem
 */

void scanDatabase(int param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char acStack_400 [1024];
  
  acStack_400[0] = '\0';
  if (param_1->child_center /* was: *(int *)(param_1 + 0x28) */ != 0) {
    build_path_string(acStack_400);
  }
  sVar1 = strlen(acStack_400);
  iVar2 = FUN_004138e8(param_1,acStack_400,acStack_400 + sVar1,1);
  if (iVar2 != 0) {
    uVar3 = set_status_message("relaying out file system...please wait",0);
    FUN_00411998();
    FUN_004144ec(param_1);
    deleteMessage(uVar3);
    update_display();
  }
  FUN_0041dba0();
  redraw_gl_scene();
  FUN_0042a8e4();
  FUN_00414da4();
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0041558c):
     * Function: scanDatabase
     *
     * Looking at the GP offsets and calling pattern:
     * **1. What it does:**
     * This is the function epilogue of scanDatabase. It makes 4 function calls via GP-indirect addressing (offsets -31160, -31436, -30848, and -32744+19876), then restores ra/gp and returns with stack cleanup of 1072 bytes.
     * **2. C pseudocode:**
     * ```c
     * // End of scanDatabase function - cleanup sequence after halt_baddata marker
     * void scanDatabase_epilogue(void) {
     * // GP offset -31160 (0x8648) - likely a cleanup/finalization call
     * (*gp_func_8648)();
     * // GP offset -31436 (0x8534) - another cleanup call
     * (*gp_func_8534)();
     * // GP offset -30848 (0x8780) - third cleanup call
     * (*gp_func_8780)();
     * // GP offset -32744 (0x8018) + 19876 (0x4DA4) - computed function address
     * // This is unusual - adds offset to base, likely calling into middle of .text
     * (*gp_func_8018_plus_4da4)();
     * return;  // restores ra, cleans 1072 bytes of stack frame
     * }
     * ```
     * To resolve the actual function names, run:
     * ```
     * python3 analysis/resolve_got.py <<< "-31160 -31436 -30848 -32744"
     * ```
     * The addiu pattern at 0x4156e0 (adding 0x4DA4 to the GOT value) suggests it's computing an address into .text section rather than a standard PLT call - possibly calling a static function or jumping to a specific code location.
     */
halt_baddata();
}
