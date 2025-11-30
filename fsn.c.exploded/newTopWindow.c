/**
 * newTopWindow
 *
 * Extracted from fsn.c lines 46908-46916
 * Category: Other
 */

void newTopWindow(undefined4 param_1)

{
  (&colormap_window_list)[numtop] = param_1;
  numtop = numtop + 1;
  update_colormap_windows();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
