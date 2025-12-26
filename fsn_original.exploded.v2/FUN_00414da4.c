/**
 * FUN_00414da4
 *
 * Extracted from fsn.c lines 54071-54224
 * Ghidra address: 0x00414da4
 * Category: Filesystem
 */

void FUN_00414da4(void)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  char *__s;
  FILE *__s_00;
  undefined4 local_1c;
  undefined4 local_18;
  ushort local_14 [2];
  undefined4 local_10;
  char *local_4;
  
  if (((topdir != 0) && (*(int *)(topdir + 0x74) << 3 < 0)) && (fsn_resources == '\0')) {
    FUN_00427fe0();
    local_10 = set_status_message("updating on disk database",0);
    FUN_00411998();
    sVar2 = strlen(home_directory);
    local_4 = (char *)malloc(sVar2 + 0xc);
    strcpy(local_4,home_directory);
    strcat(local_4,"/.FSNXXXXXX");
    iVar3 = mkstemp(local_4);
    if (iVar3 < 0) {
      FUN_00410f74("could not open tmp file, not updating");
      free(local_4);
      deleteMessage(local_10);
    }
    else {
      if (DAT_10017497 == '\0') {
        bVar1 = false;
        __s_00 = fdopen(iVar3,"a");
      }
      else {
        close(iVar3);
        sVar2 = strlen(local_4);
        __s = (char *)malloc(sVar2 + 10);
        sprintf(__s,"compress>%s",local_4);
        __s_00 = popen(__s,"w");
        free(__s);
        if (__s_00 == (FILE *)0x0) {
          __s_00 = fopen(local_4,"w");
          if (__s_00 == (FILE *)0x0) {
            FUN_00410f74("could not open tmp file, not updating");
            free(local_4);
            deleteMessage(local_10);
                /*
     * BADDATA ANALYSIS (from binary @ 0x00414da4):
     * Function: FUN_00414da4
     *
     * Looking at this assembly:
     * 1. **What it does**: Checks if `curcontext` is NULL, then checks bit 28 of `curcontext[29]` (offset 116), then checks a global byte flag. If all conditions pass, calls a function (likely `pushmatrix` or similar GL setup) and continues with drawing setup using a string constant.
     * 2. **C pseudocode**:
     * ```c
     * void FUN_00414da4(void) {
     * if (curcontext == NULL) return;
     * int flags = curcontext[29];  // offset 0x74 = 116
     * if ((flags << 3) >= 0) return;  // test bit 28: if (!(flags & 0x10000000))
     * if (DAT_xxxxxxxx != 0) return;  // global byte flag check
     * pushmatrix();  // or similar GL function at gp-30944
     * // continues with string at gp-32676 offset -22684 (likely a format string or label)
     * // ... more drawing code follows
     * }
     * ```
     * The bit test `(t8 << 3) >= 0` is checking if bit 28 is set in the flags word - this is likely a "needs redraw" or "visible" flag in the context structure at offset 116 (0x74).
     */
halt_baddata();
          }
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      fwrite("FuSioN",6,1,__s_00);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(2,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x02';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(2,__s_00);
      }
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(1,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x01';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(1,__s_00);
      }
      FUN_00414870(__s_00,topdir,0);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(4,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x04';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(4,__s_00);
      }
      FUN_00414cf0(__s_00);
      FUN_0042f8bc(__s_00);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(6,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\x06';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(6,__s_00);
      }
      local_14[0] = (ushort)(overviewActive != '\0');
      if (legendShowing != '\0') {
        local_14[0] = overviewActive != '\0' | 2;
      }
      if (controlsShowing != '\0') {
        local_14[0] = local_14[0] | 4;
      }
      fwrite(local_14,2,1,__s_00);
      if (_DAT_0fb51f00 == 0) {
        iVar3 = __s_00->_flags + -1;
        __s_00->_flags = iVar3;
        if (iVar3 < 0) {
          __flsbuf(8,__s_00);
        }
        else {
          *__s_00->_IO_read_ptr = '\b';
          __s_00->_IO_read_ptr = __s_00->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(8,__s_00);
      }
      local_1c = displayHeight;
      local_18 = displayDirectoryHeight;
      fwrite(&local_1c,8,1,__s_00);
      if (bVar1) {
        pclose(__s_00);
      }
      else {
        fclose(__s_00);
      }
      rename(local_4,db_filepath);
      free(local_4);
      deleteMessage(local_10);
      FUN_00427f5c();
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00414da4):
     * Function: FUN_00414da4
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * This is reference counting logic for a string/buffer object. It decrements a refcount at offset 0, and if it goes negative, calls a free function. Otherwise, it marks the buffer as "in use" by writing 1 to the byte pointed to by offset 4, then increments that pointer.
     * **C pseudocode:**
     * ```c
     * // s0 = string object pointer
     * int refcount = s0->refcount;  // offset 0
     * refcount--;
     * s0->refcount = refcount;
     * if (refcount < 0) {
     * // GP-0x7d78 = likely XtFree or similar
     * free_func(1, s0);
     * } else {
     * char *data = s0->data;    // offset 4
     * *data = 1;                // mark byte as used
     * s0->data = data + 1;      // advance pointer
     * }
     * // Then continues to call another function with (s0, global_string)
     * // GP-0x76d4 + 0x4870 = some string operation
     * ```
     * This pattern is consistent with SGI's internal string buffer management - a refcounted buffer where offset 0 is the refcount and offset 4 is a data pointer that gets advanced as characters are written.
     */
halt_baddata();
}
