/**
 * findDirByFullName
 *
 * Extracted from fsn.c lines 53306-53346
 * Category: Filesystem
 */

void findDirByFullName(char *param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  sVar2 = strlen(param_1);
  if (((uint)topdir[1] < sVar2) &&
     (iVar3 = strncmp(param_1,(char *)*topdir,topdir[1]), puVar5 = topdir, iVar3 == 0)) {
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
     * BADDATA ANALYSIS (from binary @ 0x00413694):
     * Function: findDirByFullName
     *
     * Looking at this assembly:
     * 1. **What it does:** Calls `strlen(a0)` on the input path, then loads `topdir` global, gets `topdir->name_len` (offset +4), and returns NULL if `strlen >= name_len` (input path isn't longer than root name).
     * 2. **C pseudocode:**
     * ```c
     * int len = strlen(fullname);
     * DirNode *root = *topdir;  // GP-relative load at -30420
     * if (len >= root->name_len) {  // offset +4 in DirNode
     * return NULL;
     * }
     * // ... continues searching
     * ```
     * The GP-relative loads:
     * - `-31776(gp)` → `strlen`
     * - `-30420(gp)` → `topdir` global pointer
     * - `-32528(gp)` → likely `strncmp` for the path comparison that follows
     * This is a bounds check: if the full path length isn't greater than the root directory's name length, the path can't possibly be a subdirectory, so return NULL early.
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
    if (*param_1 != '\0') {
      FUN_00413610(puVar5,param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00413694):
     * Function: findDirByFullName
     *
     * Looking at the assembly:
     * 1. **What it does:** Tokenizes a path by slash '/', recursively looks up each path component in a directory tree. Uses strchr to find '/', temporarily null-terminates each component, calls a lookup function (likely findDirByName at gp-31320), then skips consecutive slashes before continuing.
     * 2. **C pseudocode:**
     * ```c
     * while ((slash = strchr(path, '/')) != NULL) {
     * *slash = '\0';                    // null-terminate component
     * result = findDirByName(dir, path);
     * if (result == NULL) {
     * *slash = '/';                 // restore slash
     * return NULL;
     * }
     * dir = result;
     * path = slash + 1;
     * while (*path == '/')              // skip consecutive slashes
     * path++;
     * slash = strchr(path, '/');
     * }
     * ```
     * Key register mapping: s0=path pointer, s1='/' (0x2f), s2=slash position, s3=current dir node. GP-31320 is findDirByName, GP-32536 is strchr.
     */
halt_baddata();
}
