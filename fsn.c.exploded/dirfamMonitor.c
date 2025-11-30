/**
 * dirfamMonitor
 *
 * Extracted from fsn.c lines 50075-50083
 * Category: Filesystem
 */

void dirfamMonitor(void)

{
  if ((fsn_resources == '\0') && (database_loaded_flag == 0)) {
    database_loaded_flag = XtAppAddInput(app_context,database_root_node,1,database_input_handler,0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
