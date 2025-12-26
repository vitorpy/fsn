/**
 * FUN_00428288
 *
 * Extracted from fsn.c lines 64895-64923
 * Ghidra address: 0x00428288
 * Category: Other
 */

void FUN_00428288(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  char *local_14 [4];
  int local_4;
  
  uVar1 = XtDisplay();
  local_4 = XInternAtom(uVar1,"_SGI_GAMMA_FLAG",1);
  if (local_4 != 0) {
    uVar1 = XtDisplay(param_1);
    iVar2 = XtDisplay(param_1);
    iVar3 = XtDisplay(param_1);
    iVar2 = XGetTextProperty(uVar1,*(undefined4 *)
                                    (*(int *)(iVar2 + 0x8c) + *(int *)(iVar3 + 0x84) * 0x50 + 8),
                             local_14,local_4);
    if (iVar2 != 0) {
      dVar4 = atof(local_14[0]);
      DAT_100078fc = (float)dVar4;
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x00428288):
     * Function: FUN_00428288
     *
     * Looking at this assembly with GP offset resolution:
     * **GP Offsets (from your GP_MAPPING.md):**
     * - `-31748 (0x83fc)` = `strlen`
     * - `-32676 (0x805c)` = string table base (rodata)
     * - `-32524 (0x80f4)` = `strstr`
     * **What it does:**
     * Searches for a substring pattern in a string. First calls strlen on input, then calls strstr to find a match. If strstr returns NULL, jumps to exit. Otherwise continues processing (likely extracting/copying matched portion).
     * **C pseudocode:**
     * ```c
     * char* FUN_00428288(char *input) {
     * int len = strlen(input);
     * char *match = strstr(input, "some_pattern");  // pattern at rodata-5968
     * if (match == NULL) {
     * return NULL;  // or goto cleanup at 0x4283a8
     * }
     * // Additional processing follows...
     * int len2 = strlen(input);  // called again at 0x4282d4
     * // ... rest of function processes the match
     * }
     * ```
     * The double strlen calls suggest it may be measuring before/after or calculating offsets within the matched string. The `-5968` offset from rodata base points to a literal string constant used as the search pattern.
     */
halt_baddata();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00428288):
     * Function: FUN_00428288
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-0x8104 (likely `stat()` or `lstat()`) with path from stack, then if successful calls GP-0x80fc (likely `atof()` on some result), converts double→float, stores to a global at GP-0x8068+30972, and skips ahead if result is zero.
     * 2. **C pseudocode:**
     * ```c
     * // t0 = some_array[index] computed earlier
     * char *path = t0->field_8;  // offset 8 in struct
     * char buffer[...];  // at sp+44
     * int result = stat(path, buffer, some_arg);  // GP-0x8104, args: a0=sp+32, a1=path, a2=&buffer, a3=sp+60
     * if (result != 0) {
     * double d = atof(buffer);  // GP-0x80fc
     * float f = (float)d;
     * *(float *)(global_base + 30972) = f;  // 30972 = 0x78fc
     * if (f == 0.0f) goto skip;
     * // ... continues
     * }
     * ```
     * The 30972 (0x78fc) offset suggests this is storing to a file size or timestamp global after stat'ing a file.
     */
halt_baddata();
}
