/**
 * init_gl_state
 *
 * Extracted from fsn.c lines 38184-38196
 * Category: Init
 */

void init_gl_state(int param_1,undefined4 param_2)

{
  if (work_proc_id != 0) {
    XtRemoveWorkProc(work_proc_id);
    work_proc_id = 0;
  }
  if (param_1 != 0) {
    work_proc_id = XtAppAddWorkProc(app_context,param_1,param_2);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
