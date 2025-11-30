/**
 * destroyCopyright
 *
 * Extracted from fsn.c lines 52312-52318
 * Category: UI
 */

void destroyCopyright(void)

{
  XtDestroyWidget(active_file_list);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
