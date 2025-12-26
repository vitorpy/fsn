/**
 * fileChanged
 *
 * Extracted from fsn.c lines 55409-55452
 * Category: Filesystem
 */

void fileChanged(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  stat sStack_90;
  char *pcStack_8;
  
  iVar1 = FUN_00413580();
  if (iVar1 != 0) {
    pcStack_8 = (char *)build_path_string(0,param_1);
    strcat(pcStack_8,param_2);
    iVar2 = lstat(pcStack_8,&sStack_90);
    if (-1 < iVar2) {
      if (((sStack_90.st_nlink != *(__nlink_t *)(iVar1 + 8)) ||
          (sStack_90.st_blksize != iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */)) ||
         (sStack_90.st_mtim.tv_sec != iVar1->file_array /* was: *(int *)(iVar1 + 0x10) */)) {
        param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ =
             (param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */ + sStack_90.st_blksize) - iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */;
        uVar3 = FUN_004118b0(param_1);
        param_1->_field_24 /* was: *(undefined4 *)(param_1 + 0x24) */ = uVar3;
        *(__nlink_t *)(iVar1 + 8) = sStack_90.st_nlink;
        iVar1->file_count /* was: *(__blksize_t *)(iVar1 + 0xc) */ = sStack_90.st_blksize;
        iVar1->file_array /* was: *(__time_t *)(iVar1 + 0x10) */ = sStack_90.st_mtim.tv_sec;
        uVar3 = FUN_00433b44(pcStack_8);
        iVar1->_field_20 /* was: *(undefined4 *)(iVar1 + 0x20) */ = uVar3;
        if (DAT_10000184 < iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */) {
          DAT_10000184 = iVar1->file_count /* was: *(int *)(iVar1 + 0xc) */;
        }
        if (DAT_1000018c < param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */) {
          DAT_1000018c = param_1->_field_1c /* was: *(int *)(param_1 + 0x1c) */;
        }
        FUN_00412400(iVar1);
        FUN_00412234(param_1);
                    // WARNING: Bad instruction - Truncating control flow here
            /*
     * BADDATA ANALYSIS (from binary @ 0x00417c20):
     * Function: fileChanged
     *
     * Looking at the assembly:
     * 1. **What it does:** Calls stat() on the filename (a0), if successful calls findDentry(0, filename) to locate the directory entry, then calls another function with the dentry and the stat buffer pointer (sp+48).
     * 2. **C pseudocode:**
     * ```c
     * void fileChanged(char *filename, void *param2) {
     * struct stat statbuf;
     * char flag = 0;
     * if (stat(filename) == NULL)  // GP-0x85a4 = stat or lstat
     * return;
     * void *dentry = findDentry(0, filename);  // GP-0x857c
     * somefunc(dentry, param2);                // GP-0x831c
     * anotherfunc(dentry, &statbuf);           // GP-0x8120
     * // ... continues
     * }
     * ```
     * **GP offset resolution:**
     * - GP-0x85a4 (at 417c30): likely `lstat` or `stat`
     * - GP-0x857c (at 417c60): `findDentry`
     * - GP-0x831c (at 417c78): unknown, takes dentry + param2
     * - GP-0x8120 (at 417c90): unknown, takes dentry + pointer to local buffer at sp+48
     * The function appears to handle file change notifications by stat'ing the file, finding its directory entry, and updating internal state. The 192-byte stack frame includes a stat buffer (starting at sp+48) and saved registers.
     */
halt_baddata();
      }
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) | 0x80;
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00417c20):
     * Function: fileChanged
     *
     * Looking at this assembly:
     * 1. **What it does:** Stores values at offsets 8, 12, 16 of s0 struct from stack locals. Calls a function via GP (strdup at -30696), stores result at offset 32. Then compares s0->field_0c against a global max at curcontext+388, updating the max and setting a flag if exceeded. Similar comparison for s1->field_1c against curcontext+396.
     * 2. **C pseudocode:**
     * ```c
     * s0->field_08 = local_60;
     * s0->field_0c = local_70;
     * s0->field_10 = local_b8;
     * s0->field_20 = strdup(arg_b8);
     * int *max_field_0c = (int*)((char*)curcontext + 388);
     * if (*max_field_0c < s0->field_0c) {
     * *max_field_0c = s0->field_0c;
     * needs_update = 1;
     * }
     * int *max_field_1c = (int*)((char*)curcontext + 396);
     * if (*max_field_1c < s1->field_1c) {
     * // similar update pattern continues...
     * }
     * ```
     * The GP offset -30696 (0x8818) resolves to strdup. The curcontext+388 and curcontext+396 appear to track maximum values for some file attributes (likely max file size or similar stats for the directory display).
     */
halt_baddata();
}
