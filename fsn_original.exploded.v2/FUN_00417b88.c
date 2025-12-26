/**
 * FUN_00417b88
 *
 * Extracted from fsn.c lines 55387-55403
 * Ghidra address: 0x00417b88
 * Category: Other
 */

void FUN_00417b88(int param_1)

{
  int iVar1;
  int unaff_gp;
  undefined1 auStack_400 [1024];
  
  (**(code **)(unaff_gp + -0x7a84) /* -> FUN_00411b30 */)(auStack_400,param_1->child_center /* was: *(undefined4 *)(param_1 + 0x28) */) /* =FUN_00411b30 */;
  iVar1 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(auStack_400);
  iVar1 = (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x38e8))
                    (param_1,auStack_400,auStack_400 + iVar1,0);
  if (iVar1 != 0) {
    (*(code *)(*(int *)(unaff_gp + -0x7fe8) /* -> FUN_00410000 */ + 0x44ec))(param_1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00417b88):
     * Function: FUN_00417b88
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls `strlen(buffer)` on a stack buffer at sp+40, then calls `readlink(path, buffer, strlen_result + buffer, 0)` to read a symlink. If readlink succeeds, stores the low byte of result and calls another function (likely null-terminates or processes the link target).
     * **2. C pseudocode:**
     * ```c
     * char buffer[1024];  // at sp+40, frame is 1064 bytes
     * // ... earlier code fills buffer ...
     * int len = strlen(buffer);           // GP-0x7c20 = strlen
     * int result = readlink(path, buffer + len, 0);  // GP-0x7fe8 + 0x38e8 = readlink
     * if (result != 0) {
     * char c = (char)(result & 0xff);
     * buffer[len-1] = c;              // sb v1,39(sp) - store byte
     * some_func(path);                // GP-0x7fe8 + 0x44ec - likely lstat or similar
     * return c;
     * }
     * return v1;  // previous value
     * ```
     * Note: The `addiu t9,t9,14568` (0x38e8) and `addiu t9,t9,17644` (0x44ec) are offsets into libc - likely `readlink` and `lstat` respectively. The a2 register gets `v0 + a1` = strlen result + buffer pointer, suggesting it's appending to the path or calculating remaining buffer space.
     */
halt_baddata();
}
