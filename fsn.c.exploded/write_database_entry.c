/**
 * write_database_entry
 *
 * Extracted from fsn.c lines 40670-40681
 * Category: Filesystem
 */

void write_database_entry(undefined4 param_1)

{
  gl_push_state();
  set_context_state(0,1);
  write_file_entry(param_1);
  set_context_state(1,1);
  write_file_entry(param_1);
  gl_pop_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
