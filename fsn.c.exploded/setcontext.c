/**
 * setcontext
 *
 * Extracted from fsn.c lines 51729-51738
 * Category: Other
 */

void setcontext(int param_1,undefined1 param_2)

{
  if ((param_1 == *(int *)(altcontextwindows + 8)) || (param_1 == *(int *)(altcontextwindows + 0xc))
     ) {
    gl_swap_buffers(param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
