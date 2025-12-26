/**
 * set_gl_context
 *
 * Extracted from fsn.c lines 66614-66625
 * Category: Other
 */

void set_gl_context(int param_1,undefined1 param_2)

{
  int unaff_gp;
  
  if ((param_1 == *(int *)(*altcontextwindows /* was: *(int **)(unaff_gp + -0x7678) */ /* -> altcontextwindows */ + 8)) ||
     (param_1 == *(int *)(*altcontextwindows /* was: *(int **)(unaff_gp + -0x7678) */ /* -> altcontextwindows */ + 0xc))) {
    (**(code **)(unaff_gp + -0x7894) /* -> FUN_0042a788 */)(param_2) /* =FUN_0042a788 */;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
