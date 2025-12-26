/**
 * FUN_004136a0
 *
 * Extracted from fsn.c lines 53352-53398
 * Ghidra address: 0x004136a0
 * Category: Other
 */

void FUN_004136a0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  int unaff_gp;
  
  uVar2 = /* TODO: GP:-0x7c20 */ (**(code **)(unaff_gp + -0x7c20) /* -> EXTERNAL_0x0fabeea8 */)();
  piVar7 = topdir /* was: *(int **)(unaff_gp + -0x76d4) */ /* -> topdir */;
  puVar5 = (undefined4 *)*piVar7;
  if (((uint)puVar5[1] < uVar2) &&
     (iVar3 = /* TODO: GP:-0x7f10 */ (**(code **)(unaff_gp + -0x7f10) /* -> EXTERNAL_0x0fac0df4 */)(param_1,*puVar5), iVar3 == 0)) {
    iVar3 = *piVar7;
    pcVar6 = (char *)(param_1 + *(int *)(iVar3 + 4));
    cVar1 = *pcVar6;
    while (cVar1 == '/') {
      pcVar4 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar1 = *pcVar4;
    }
    pcVar4 = (char *)/* TODO: GP:-0x7f18 */ (**(code **)(unaff_gp + -0x7f18) /* -> EXTERNAL_0x0fabf574 */)(pcVar6,0x2f);
    while (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      iVar3 = (**(code **)(unaff_gp + -0x7a58) /* -> FUN_00413610 */)(iVar3,pcVar6) /* =FUN_00413610 */;
      if (iVar3 == 0) {
        *pcVar4 = '/';
            /*
     * BADDATA ANALYSIS (from binary @ 0x004136a0):
     * Function: FUN_004136a0
     *
     * Looking at this assembly:
     * 1. **What it does**: Calls strlen(a0), loads a global pointer (topdir), checks if strlen result >= topdir->field_4 (path length), returns NULL if so. Otherwise calls strncmp(input_path, topdir->field_0, ...) to match path prefix.
     * 2. **C pseudocode**:
     * ```c
     * DirNode* findDirByFullName(char *path) {
     * int len = strlen(path);
     * DirNode *root = *topdir;  // GP-30420 = topdir
     * if (len >= root->path_len) {  // field_4 = path length
     * return NULL;
     * }
     * if (strncmp(path, root->path, ...) != 0) {  // GP-32528 = strncmp
     * // continues searching...
     * }
     * // '/' check at 0x2f suggests path component parsing
     * }
     * ```
     * Key observations:
     * - GP-31776 = strlen
     * - GP-30420 = topdir (global directory root pointer)
     * - GP-32528 = strncmp
     * - The 0x2f (47) is ASCII '/' - used for path separator detection
     * - Returns NULL (move v0,zero) if path length check fails
     */
halt_baddata();
      }
      cVar1 = pcVar4[1];
      while (pcVar6 = pcVar4 + 1, cVar1 == '/') {
        cVar1 = pcVar4[2];
        pcVar4 = pcVar6;
      }
      pcVar4 = (char *)/* TODO: GP:-0x7f18 */ (**(code **)(unaff_gp + -0x7f18) /* -> EXTERNAL_0x0fabf574 */)(pcVar6,0x2f);
    }
    if (*pcVar6 != '\0') {
      (**(code **)(unaff_gp + -0x7a58) /* -> FUN_00413610 */)(iVar3,pcVar6) /* =FUN_00413610 */;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x004136a0):
     * Function: FUN_004136a0
     *
     * ## Assembly Analysis
     * **What it does:**
     * Parses a path string component-by-component, looking up each directory segment. For each '/' found, it temporarily null-terminates the string, calls a lookup function (likely `findChildByName` at gp-31320), restores the separator, skips consecutive slashes, then finds the next '/' using `strchr` (at gp-32536). Returns NULL if any component not found, otherwise returns the final directory node.
     * **C pseudocode:**
     * ```c
     * // s0 = current position in path, s1 = '/' (0x2f), s2 = slash position, s3 = current dir node
     * while ((s2 = strchr(s0, '/')) != NULL) {
     * *s2 = '\0';                          // null-terminate component
     * s3 = findChildByName(s3, s0);        // lookup in current dir
     * if (s3 == NULL) {
     * *s2 = '/';                        // restore slash
     * return NULL;                      // component not found
     * }
     * s0 = s2 + 1;                         // move past the slash
     * while (*s0 == '/')                   // skip consecutive slashes
     * s0++;
     * }
     * // continues to handle final component after loop...
     * ```
     */
halt_baddata();
}
