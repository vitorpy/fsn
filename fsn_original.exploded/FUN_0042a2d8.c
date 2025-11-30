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
  halt_baddata();
}
