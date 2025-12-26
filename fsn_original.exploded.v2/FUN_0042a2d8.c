/**
 * FUN_0042a2d8
 *
 * Extracted from fsn.c lines 66348-66377
 * Ghidra address: 0x0042a2d8
 * Category: Memory
 */

void FUN_0042a2d8(undefined4 param_1,undefined4 param_2)

{
  char *__s;
  size_t __n;
  int __fd;
  size_t sVar1;
  undefined4 local_4;
  
  set_gl_context(param_2,0);
  __s = (char *)XmTextGetString(*(undefined4 *)(curcontextwindows + 0x14));
  __n = strlen(__s);
  __fd = open(curcontext + 0x84c,0x301,0x1b6);
  if (__fd < 0) {
    show_error_dialog("cannot open",(int)curcontext + 0x84c);
  }
  else {
    sVar1 = write(__fd,__s,__n);
    if (sVar1 == __n) {
      close(__fd);
    }
    else {
      show_error_dialog("cannot write",local_4);
      close(__fd);
    }
  }
  XtFree(__s);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x0042a2d8):
     * Function: FUN_0042a2d8
     *
     * Looking at the GP offsets and call pattern:
     * **1. What it does:**
     * Calls sprintf with a format string (gp-32676 offset -5760) and an argument from stack, then calls free() on a pointer. There's a branch that skips directly to free() in some cases. Finally calls another function before returning.
     * **2. C pseudocode:**
     * ```c
     * // At 42a3cc-42a3e0: sprintf(buffer + offset, format_string, arg_from_stack)
     * sprintf((char*)(DAT_gp_805c - 5760), "%s", local_2c);  // -5760 = 0xe980 signed
     * // At 42a3ec-42a3f8: free(saved_a3)
     * free(local_24);
     * // Branch at 42a400 skips to 42a420
     * // (alternate path at 42a408 also calls free on a3)
     * // At 42a420-42a42c: final cleanup call, likely pclose() or fclose()
     * pclose(local_28);  // gp-32396 is likely pclose
     * return;
     * ```
     * **GP offset resolution (you'll want to verify):**
     * - gp-32676 (0x805c): likely a string buffer base
     * - gp-31372 (0x8574): sprintf
     * - gp-32164 (0x825c): free
     * - gp-32396 (0x8174): pclose or similar cleanup
     * The pattern suggests: format a string, free a temporary buffer, close a file handle, return. This matches `viewFile` cleanup code after reading/displaying file contents.
     */
halt_baddata();
}
