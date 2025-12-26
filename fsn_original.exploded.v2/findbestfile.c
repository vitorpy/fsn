/**
 * findbestfile
 *
 * Extracted from fsn.c lines 66788-66910
 * Category: Filesystem
 */

void findbestfile(char *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puStack_110;
  int *piStack_10c;
  char *apcStack_108 [30];
  char **ppcStack_90;
  char *apcStack_8c [30];
  char **appcStack_14 [5];
  
  *param_2 = 0;
  *param_3 = 0;
  sVar2 = strlen(param_1);
  if (sVar2 <= (uint)topdir[1]) {
    sVar2 = strlen(param_1);
    iVar3 = strncmp(param_1,(char *)*topdir,sVar2);
    if (iVar3 != 0) {
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly:
     * 1. **What it does**: Initializes function (saves registers), zeroes out the two output parameters (*a1 = 0, *a2 = 0), calls a function via GP-31776 (likely `getgdesc` or similar GL query), loads a global context pointer from GP-30420, then compares context[0]->field_4 against the return value.
     * 2. **C pseudocode**:
     * ```c
     * void findbestfile(void *param1, int *out_best, int *out_score) {
     * *out_best = 0;
     * *out_score = 0;
     * int v0 = some_gl_query();  // GP-31776 call
     * void **context = *(void***)GP_MINUS_30420;  // likely curcontext
     * void *node = context[0];
     * int field4 = ((int*)node)[1];  // offset 4
     * if (field4 < v0) {
     * goto handle_case;  // branch at 42abd4
     * }
     * // ... continues
     * }
     * ```
     * **GP offsets to resolve**:
     * - GP-31776 (0x83e0): Function call - check with `resolve_got.py`
     * - GP-30420 (0x892c): Global pointer - likely `curcontext` based on pattern
     * The function appears to be finding the "best" file match, initializing output params to zero, querying some display/context value, then iterating through a data structure comparing values.
     */
halt_baddata();
    }
    *param_2 = (int)topdir;
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP offset -31776 with s0 as arg, then calls strcmp (GP offset -32528) comparing s0 against a string from s2's first child. If strcmp returns 0, stores s2's value to output pointer at sp+348.
     * 2. **C pseudocode:**
     * ```c
     * // At 42ab8c: branch was NOT taken (at == 0), meaning we had exact match so far
     * char *suffix = strrchr(s0, '/');  // GP-31776 = strrchr
     * if (strcmp(s0, (*s2)->name, suffix) == 0) {  // GP-32528 = strcmp
     * *result = *s2;  // result at sp+348
     * return 0;
     * }
     * // At 42abd4: branch WAS taken, try strcmp directly
     * if (strcmp(s0, v1->name) == 0) {
     * return 0;  // found match
     * }
     * // Continue searching, s1 = '/' (0x2f)
     * ```
     * The GP offsets: -32528 (0x80f0) = strcmp, -31776 (0x83e0) = likely strrchr. This is path component matching logic - comparing filename against directory entries, handling both full paths and basenames.
     */
halt_baddata();
  }
  iVar3 = strncmp(param_1,(char *)*topdir,topdir[1]);
  puVar5 = topdir;
  if (iVar3 != 0) {
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly:
     * 1. **What it does:** Skips leading characters matching s1 (likely spaces/delimiters), calls strchr (gp-0x80e8) to find a character, null-terminates at that position, then calls findfile (gp-0x85a8) to look up the filename. If not found, restores the delimiter and returns.
     * 2. **C pseudocode:**
     * ```c
     * ptr = node->name + offset;           // lw t1,4(v1); addu s0,s0,t1
     * while (*ptr == skip_char) ptr++;     // the lbu/beq loop at 42ac14
     * saved_node = node;
     * delim_pos = strchr(ptr, delim);      // jalr at 42ac2c
     * if (delim_pos == NULL) goto cleanup;
     * *delim_pos = '\0';                   // sb zero,0(s2)
     * result = findfile(saved_node, ptr);  // jalr at 42ac4c
     * if (result == NULL) {
     * *delim_pos = skip_char;          // sb s1,0(s2) - restore delimiter
     * return;
     * }
     * ptr = delim_pos + 1;                 // addiu s0,s2,1
     * ```
     * The s1 register holds a character to skip (probably '/'), and this parses path components by finding delimiters, temporarily null-terminating, calling findfile, then continuing to the next component.
     */
halt_baddata();
  }
  param_1 = param_1 + topdir[1];
  cVar1 = *param_1;
  while (cVar1 == '/') {
    pcVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = strchr(param_1,0x2f);
  while (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    puVar5 = (undefined4 *)FUN_00413610(puVar5,param_1);
    if (puVar5 == (undefined4 *)0x0) {
      *pcVar4 = '/';
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly:
     * 1. **What it does:** Skips leading '/' characters in a path string, then calls strchr() to find the next '/', and handles directory traversal logic based on whether path components remain.
     * 2. **C pseudocode:**
     * ```c
     * s0 = s2 + 1;                    // advance past current char
     * if (s1 == t4) {                 // if char matches '/'
     * while (*s0 == '/') s0++;    // skip consecutive slashes (42ac78-42ac84 loop)
     * }
     * s2 = strchr(s0, '/');           // find next slash (jalr at 42ac90, a1=47='/')
     * if (s2 != NULL) goto continue_parse;  // more path components
     * if (*s0 == '\0') {              // end of path string
     * *result_ptr = s3;           // store found node (adf30000: sw s3,0(t7))
     * goto done;
     * }
     * if (s3->child == NULL) {        // 8e78000c: lw t8,12(s3) - offset 12 is child ptr
     * s2 = 0;                     // no children to search
     * goto next_section;
     * }
     * // setup for child directory search...
     * ```
     * The key insight: This is path component parsing - skipping duplicate slashes, finding next path separator, and traversing directory tree nodes. GP offset -32536 (0x80e8) resolves to `strchr`.
     */
halt_baddata();
    }
    cVar1 = pcVar4[1];
    while (param_1 = pcVar4 + 1, cVar1 == '/') {
      cVar1 = pcVar4[2];
      pcVar4 = param_1;
    }
    pcVar4 = strchr(param_1,0x2f);
  }
  if (*param_1 == '\0') {
    *param_2 = (int)puVar5;
        /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-indirect (likely `pickfilename` at gp-30840), passing s3's fields as args. If result is non-zero, stores s3 to output param at sp+348 and the pick result to sp+352, then returns. Otherwise sets s2=0 or loads from pick result, then loads s3+20 for next check.
     * 2. **C pseudocode:**
     * ```c
     * pick_result_t pick_out;
     * result = pickfilename(curcontext, s3->x, s3->y, &pick_out);  // gp-30840
     * if (result != 0) {
     * *best_file_out = s3;           // sp+348
     * *best_distance_out = pick_out.distance;  // sp+352
     * return;
     * }
     * if (pick_out.node != NULL) {
     * s2 = pick_out.node->value;
     * } else {
     * s2 = 0;
     * }
     * next_child = s3->child;  // offset 20 = child pointer
     * ```
     * The gp-30840 offset likely resolves to `pickfilename` or similar picking/hit-test function. The sp+72 is a local struct for pick output, sp+348/352 are output parameters passed to findbestfile.
     */
halt_baddata();
  }
  if (puVar5[3] != 0) {
    ppcStack_90 = apcStack_108;
    apcStack_108[0] = param_1;
    iVar3 = FUN_0042a9b4(&ppcStack_90,puVar5[4],puVar5[3],4,compare_files,&puStack_110);
    if (iVar3 != 0) {
      *param_2 = (int)puVar5;
      *param_3 = *puStack_110;
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls a function via GP-30840 (likely `regexec` based on the pattern - args include pattern at s3+20, string at s3+24, match count=4, and output buffer at sp+76). If match succeeds (v0!=0), copies the match result to output. Otherwise extracts result from match buffer if non-null.
     * 2. **C pseudocode:**
     * ```c
     * int result;
     * void *match_ptr = NULL;
     * sw(s0, sp+204);      // save s0
     * sw(t8, sp+324);      // save pattern/flags
     * result = regexec(sp+324, s3->string /*off 24*/, s3->pattern /*off 20*/,
     * 4 /*nmatch*/, &match_ptr /*sp+76*/, DAT_gp_85a0);
     * if (result != 0) {
     * // Match found - copy result to output
     * *output = match_ptr->data;  // output at sp+348
     * goto done;
     * }
     * s1 = 0;
     * if (match_ptr != NULL) {
     * s1 = *match_ptr;  // extract first match
     * }
     * // continues to check s1...
     * ```
     * The GP-30840 call signature (6 args with match buffer output) strongly suggests `regexec()` for regex matching on filenames. The function searches for best matching file using regex patterns stored in the s3 structure.
     */
halt_baddata();
    }
    if (puStack_110 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)*puStack_110;
      iVar3 = puVar5[5];
      goto LAB_0042ad4c;
    }
  }
  puVar7 = (undefined4 *)0x0;
  iVar3 = puVar5[5];
LAB_0042ad4c:
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    apcStack_8c[0] = param_1;
    appcStack_14[0] = apcStack_8c;
    iVar3 = FUN_0042a9b4(appcStack_14,puVar5[6],puVar5[5],4,compare_dirs,&piStack_10c);
    if (iVar3 != 0) {
      *param_2 = *piStack_10c;
          /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly:
     * **1. What it does:**
     * Compares two filename strings (from s1 and s2 structs). If s1's name comes before s2's alphabetically, s1 is cleared. Otherwise s2 is cleared. Then if s2 is still valid, calls strlen on s0 and strncmp to compare s2's name against s0.
     * **2. C pseudocode:**
     * ```c
     * // GP-0x80cc = strcmp, GP-0x83e0 = strlen, GP-0x80f0 = strncmp
     * if (s1 != NULL && s2 != NULL) {
     * if (strcmp(s2->name, s1->name) < 0) {
     * s1 = NULL;
     * } else {
     * s2 = NULL;
     * }
     * }
     * if (s2 != NULL) {
     * int len = strlen(s0);  // s0 is search pattern
     * if (strncmp(s2->name, s0, len) == 0) {
     * // match found - jump to return with s2
     * goto found;
     * }
     * }
     * ```
     * This is part of a "best match" search - finding the alphabetically best filename that matches a prefix. s1 and s2 are two candidates being compared; the "worse" one is eliminated, then the survivor is checked against the search pattern s0.
     */
halt_baddata();
    }
    puVar6 = (undefined4 *)0x0;
    if (piStack_10c != (int *)0x0) {
      puVar6 = (undefined4 *)*piStack_10c;
    }
  }
  if ((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
    iVar3 = strcmp((char *)*puVar7,(char *)*puVar6);
    if (iVar3 < 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)0x0;
    }
  }
  if (puVar7 == (undefined4 *)0x0) {
    if (puVar6 != (undefined4 *)0x0) {
      sVar2 = strlen(param_1);
      iVar3 = strncmp((char *)*puVar6,param_1,sVar2);
      if (iVar3 == 0) {
        *param_2 = (int)puVar6;
      }
    }
  }
  else {
    sVar2 = strlen(param_1);
    iVar3 = strncmp((char *)*puVar7,param_1,sVar2);
    if (iVar3 == 0) {
      *param_2 = (int)puVar5;
      *param_3 = puVar7;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042ab10):
     * Function: findbestfile
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * This is the function epilogue with two exit paths. Path 1 (at 0x42ae3c): stores s3 and s2 to output parameters and returns. Path 2 (at 0x42ae58): if s1 is non-null, calls strlen(s0), then strncmp(*(char**)s1, s0, len) - if match fails, stores s1 to output parameter.
     * **C pseudocode:**
     * ```c
     * // Exit path 1 (success case):
     * *out_param1 = s3;  // sp+348 is output ptr
     * *out_param2 = s2;  // sp+352 is output ptr
     * goto epilogue;
     * // Exit path 2 (string comparison case):
     * if (s1 != NULL) {
     * int len = strlen(s0);           // gp-31776 = strlen
     * if (strncmp(*s1, s0, len) == 0) // gp-32528 = strncmp
     * *out_param1 = s1;
     * }
     * // epilogue: restore s0-s3, ra and return
     * ```
     * The GP offsets resolve to: -31776 → strlen, -32528 → strncmp. This appears to be checking if a filename prefix matches, storing the best matching file node to an output parameter.
     */
halt_baddata();
}
