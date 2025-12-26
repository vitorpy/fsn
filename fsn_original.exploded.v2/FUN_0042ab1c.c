/**
 * FUN_0042ab1c
 *
 * Extracted from fsn.c lines 66916-67047
 * Ghidra address: 0x0042ab1c
 * Category: Other
 */

void FUN_0042ab1c(int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int unaff_gp;
  undefined4 *local_110;
  int *local_10c;
  char *local_108 [30];
  char **local_90;
  char *local_8c [30];
  char **local_14 [5];
  
  *param_2 = 0;
  *param_3 = 0;
  uVar2 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)();
  piVar9 = topdir /* was: *(int **)(unaff_gp + -0x76d4) */ /* -> topdir */;
  if (uVar2 <= (uint)((undefined4 *)*piVar9)[1]) {
    uVar3 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(param_1);
    iVar4 = /* TODO: GP:-0x7f10 */ (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(param_1,*(undefined4 *)*piVar9,uVar3);
    if (iVar4 != 0) {
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at this assembly:
     * 1. **What it does:** Initializes two output parameters to zero, calls a GP-indirect function (likely `strlen` or similar on the input string), loads a global struct pointer, gets a size/length field from it, and compares against the function result to decide whether to continue processing or branch to an early exit.
     * 2. **C pseudocode:**
     * ```c
     * void FUN_0042ab1c(char *input, int *out1, int *out2) {
     * *out1 = 0;
     * *out2 = 0;
     * int len = strlen(input);  // GP-indirect call at -31776(gp)
     * SomeStruct **global_ptr = DAT_at_gp_minus_30420;  // -30420(gp)
     * SomeStruct *obj = *global_ptr;
     * int limit = obj->field_4;  // offset 4 in struct
     * if (len >= limit) {
     * // continue processing (falls through)
     * } else {
     * goto early_exit;  // branch at 42abd4
     * }
     * // ... rest of function
     * }
     * ```
     * The GP offsets: -31776 is likely `strlen`, -30420 is a global pointer (possibly `curcontext` or similar file browser state). The comparison checks if input string length meets a minimum threshold stored in a global structure.
     */
halt_baddata();
    }
    *param_2 = *piVar9;
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-32528 (likely `strcmp` or string comparison) with s0 as first arg, gets second arg from a struct pointer chain (s2→[0]→[0]), and result v0 as third arg. If result is non-zero, jumps to exit. Otherwise stores s2's value through a stack pointer and branches to exit.
     * 2. **C pseudocode:**
     * ```c
     * // At 42ab90-42abc0:
     * result = strcmp(s0, (*s2)->name, previous_result);  // GP-32528 = strcmp variant
     * if (result != 0) {
     * goto exit_found;  // 42aea4
     * }
     * *outptr = *s2;  // store current node to output parameter at sp+348
     * goto exit;      // 42aea0
     * // At 42abd4-42ac04:
     * if (strcmp(s0, v1->name) != 0) {  // GP-32528 again
     * goto exit;
     * }
     * // a1 = '/' (0x2f)
     * v1 = *s2;
     * s1 = '/';
     * s0 += v1->field_4;  // advance string pointer by offset
     * char c = *s0;       // load next character
     * ```
     * This is path component matching in `findbestfile` - comparing path segments against directory entries, advancing past '/' separators.
     */
halt_baddata();
  }
  iVar4 = /* TODO: GP:-0x7f10 */ (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(param_1,*(undefined4 *)*piVar9);
  if (iVar4 != 0) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Skips consecutive separator characters (s1 = '/'), calls strchr to find next separator, null-terminates the path component, then calls a comparison function (likely strcmp or findfile) on that component.
     * **2. C pseudocode:**
     * ```c
     * // Skip consecutive '/' separators
     * while (*s0 == '/') s0++;
     * // Find next '/' separator
     * char *s2 = strchr(s0, '/');
     * if (s2 == NULL) goto end_search;
     * // Null-terminate this path component
     * *s2 = '\0';
     * // Compare/lookup this component (s3 = context, s0 = component name)
     * result = findfile(s3, s0);
     * if (result == NULL) {
     * *s2 = '/';  // restore separator
     * goto end_search;
     * }
     * s3 = result;
     * // Skip consecutive '/' after component
     * s0 = s2 + 1;
     * while (*s0 == '/') s0++;
     * ```
     * This is path traversal logic - walking a path like "/usr/lib/foo" by splitting on '/' and looking up each component in a directory structure. The GP-indirect calls at -32536(gp) and -31320(gp) are strchr and a directory lookup function respectively.
     */
halt_baddata();
  }
  iVar4 = *piVar9;
  pcVar7 = (char *)(param_1 + *(int *)(iVar4 + 4));
  cVar1 = *pcVar7;
  while (cVar1 == '/') {
    pcVar5 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar5;
  }
  pcVar5 = (char *)/* TODO: GP:-0x7f18 */ (**(code **)(unaff_gp + -0x7f18) /* -> EXTERNAL_0x0fabf574 */)(pcVar7,0x2f);
  while (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
    iVar4 = (**(code **)(unaff_gp + -0x7a58) /* -> FUN_00413610 */)(iVar4,pcVar7) /* =FUN_00413610 */;
    if (iVar4 == 0) {
      *pcVar5 = '/';
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at this assembly:
     * 1. **What it does**: Skips consecutive bytes matching s1 (likely '/'), then calls strchr(s0, '/') via GP indirect call. If no more '/' found and string empty, stores s3 to output param and returns. Otherwise continues processing child directories.
     * 2. **C pseudocode**:
     * ```c
     * // Skip consecutive '/' characters
     * while (*s0 == '/') s0++;
     * // Find next path component
     * char *next_slash = strchr(s0, '/');
     * if (next_slash == NULL) {
     * if (*s0 == '\0') {
     * *out_result = current_node;  // sp[348] = s3
     * goto done;
     * }
     * // Check if node has children (s3->children at offset 12)
     * if (current_node->children == NULL) {
     * result = NULL;
     * goto next_section;
     * }
     * // Setup for recursive search in children
     * // sp[200] points to local struct at sp[80]
     * // sp[80] = s0 (remaining path)
     * // Calls function at gp[-30840] with child list
     * }
     * ```
     * Key GP calls: `-32536(gp)` = strchr, `-30840(gp)` = likely a child search/iteration function. The code is parsing a path string component by component, navigating a directory tree structure where offset 12 is the children pointer and offset 16 is likely sibling/next.
     */
halt_baddata();
    }
    cVar1 = pcVar5[1];
    while (pcVar7 = pcVar5 + 1, cVar1 == '/') {
      cVar1 = pcVar5[2];
      pcVar5 = pcVar7;
    }
    pcVar5 = (char *)/* TODO: GP:-0x7f18 */ (**(code **)(unaff_gp + -0x7f18) /* -> EXTERNAL_0x0fabf574 */)(pcVar7,0x2f);
  }
  if (*pcVar7 == '\0') {
    *param_2 = iVar4;
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * After a function call (jalr t9), checks return value. If non-zero: stores s3 to output pointer at sp+348, copies result from sp+72 to output at sp+352, then jumps to exit. If zero: loads value from sp+72 into s2 (or sets s2=0 if null), then checks s3+20 field to decide whether to continue or set s1=0.
     * **C pseudocode:**
     * ```c
     * result = some_func(s3->field_0x10, ..., &local_48);
     * if (result != 0) {
     * *out_best_node = s3;           // sp+348
     * *out_best_score = local_48[0]; // sp+352
     * goto exit;
     * }
     * s2 = (local_48 != NULL) ? local_48[0] : 0;
     * if (s3->field_0x14 == NULL) {
     * s1 = 0;
     * goto next_section;
     * }
     * // continue processing with s0 stored to local_cc
     * ```
     * This appears to be inside `findbestfile` - iterating through file/directory nodes, calling a comparison function, and tracking the best match via output pointers.
     */
halt_baddata();
  }
  if (iVar4->file_count /* was: *(int *)(iVar4 + 0xc) */ != 0) {
    local_90 = local_108;
    local_108[0] = pcVar7;
    iVar6 = (**(code **)(unaff_gp + -0x7878) /* -> FUN_0042a9b4 */)
                      (&local_90,iVar4->file_array /* was: *(undefined4 *)(iVar4 + 0x10) */,iVar4->file_count /* was: *(undefined4 *)(iVar4 + 0xc) */,4,
                       *(undefined4 *)(unaff_gp + -0x7a64) /* -> compare_files */,&local_110) /* =FUN_0042a9b4 */;
    if (iVar6 != 0) {
      *param_2 = iVar4;
      *param_3 = *local_110;
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at this MIPS assembly:
     * **What it does:**
     * Calls a function via GP-31328 (likely XtVaGetValues or similar Xt function) with args from s3+20, s3+24, constant 4, and a stack buffer at sp+76. If call returns non-zero, copies result from buffer to output pointer at sp+348. Otherwise sets s1 from buffer contents (or zero if buffer is null) and continues processing.
     * **C pseudocode:**
     * ```c
     * void *result_ptr;
     * status = XtVaGetValues(widget, s3->field_20, s3->field_24,
     * XtNsomething, &result_ptr, NULL);  /* a3=4 might be resource type */
     * if (status != 0) {
     * *output_param = *result_ptr;  /* sp+348 is output param */
     * goto done;
     * }
     * s1 = (result_ptr != NULL) ? *result_ptr : NULL;
     * if (s1 == NULL || s2 == NULL) {
     * goto next_case;
     * }
     * /* continue processing with s1, s2 */
     * ```
     * **GP offsets to resolve:**
     * - GP-31328 (0x85a0): likely XtVaGetValues or widget query function
     * - GP-30840 (0x8788): the actual function being called via jalr t9
     * The pattern suggests this is part of findbestfile's widget/resource querying logic, extracting values from Motif widgets to find the best matching file entry.
     */
halt_baddata();
    }
    if (local_110 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)*local_110;
      iVar6 = iVar4->child_count /* was: *(int *)(iVar4 + 0x14) */;
      goto LAB_0042ad4c;
    }
  }
  puVar10 = (undefined4 *)0x0;
  iVar6 = iVar4->child_count /* was: *(int *)(iVar4 + 0x14) */;
LAB_0042ad4c:
  if (iVar6 == 0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    local_8c[0] = pcVar7;
    local_14[0] = local_8c;
    iVar6 = (**(code **)(unaff_gp + -0x7878) /* -> FUN_0042a9b4 */)
                      (local_14,iVar4->child_array /* was: *(undefined4 *)(iVar4 + 0x18) */,iVar4->child_count /* was: *(undefined4 *)(iVar4 + 0x14) */,4,
                       *(undefined4 *)(unaff_gp + -0x7a60) /* -> compare_dirs */,&local_10c) /* =FUN_0042a9b4 */;
    if (iVar6 != 0) {
      *param_2 = *local_10c;
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at the GP offsets and control flow:
     * **1. What it does:**
     * Compares two strings (from s2 and s1), then if result < 0 clears s1, else clears s2. If s2 is non-null, calls strlen on s0, then strncmp on s2's string vs s0 with that length. If match (returns 0), stores s3 to output pointer.
     * **2. C pseudocode:**
     * ```c
     * // GP -32564 (0x80cc) = strcmp, GP -31776 (0x83e0) = strlen, GP -32528 (0x80f0) = strncmp
     * if (strcmp(*s2, *s1) < 0) {
     * s1 = NULL;
     * } else {
     * s2 = NULL;
     * }
     * if (s2 != NULL) {
     * int len = strlen(s0);
     * if (strncmp(*s2, s0, len) == 0) {
     * *output_ptr = s3;  // sp+348 holds output pointer, store s3 (best match) there
     * }
     * }
     * ```
     * This is part of a "find best file" search - comparing filename prefixes and tracking the best alphabetical match. The strcmp picks which candidate (s1 or s2) to eliminate, then strncmp confirms if the remaining candidate's name starts with the search string (s0).
     */
halt_baddata();
    }
    puVar8 = (undefined4 *)0x0;
    if (local_10c != (int *)0x0) {
      puVar8 = (undefined4 *)*local_10c;
    }
  }
  if ((puVar8 != (undefined4 *)0x0) && (puVar10 != (undefined4 *)0x0)) {
    iVar6 = /* TODO: GP:-0x7f34 */ (**(code **)(unaff_gp + -0x7f34) /* -> EXTERNAL_0x0fabf768 */)(*puVar10,*puVar8);
    if (iVar6 < 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar10 = (undefined4 *)0x0;
    }
  }
  if (puVar10 == (undefined4 *)0x0) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar3 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(pcVar7);
      iVar4 = /* TODO: GP:-0x7f10 */ (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(*puVar8,pcVar7,uVar3);
      if (iVar4 == 0) {
        *param_2 = (int)puVar8;
      }
    }
  }
  else {
    uVar3 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)(pcVar7);
    iVar6 = /* TODO: GP:-0x7f10 */ (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(*puVar10,pcVar7,uVar3);
    if (iVar6 == 0) {
      *param_2 = iVar4;
      *param_3 = puVar10;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab1c):
     * Function: FUN_0042ab1c
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * This is the epilogue of `findbestfile()`. It stores results to output parameters (via pointers at sp+348 and sp+352), calls `strlen(s0)` then `strncmp(*(s1), s0, len)`, and if strncmp returns 0, stores s1 to another output param. Then restores saved registers and returns.
     * **2. C pseudocode:**
     * ```c
     * // At 42ae48-42ae54: Store results to output params
     * *out_param_352 = s3;  // sw s3,0(t5)
     * *out_param_348 = s2;  // sw s2,0(t6)
     * goto epilogue;
     * // At 42ae58-42ae9c: Conditional string comparison block
     * if (s1 != NULL) {
     * int len = strlen(s0);           // jalr at 42ae68, GP offset -31776
     * if (strncmp(*s1, s0, len) == 0) {  // jalr at 42ae80, GP offset -32528
     * *out_param_348 = s1;        // sw s1,0(t7)
     * }
     * }
     * epilogue:
     * // Restore s0-s3, ra from stack and return
     * // Stack frame size: 344 bytes (0x158)
     * ```
     * GP offsets: -31776 (0x83e0) = `strlen`, -32528 (0x80f0) = `strncmp`
     */
halt_baddata();
}
