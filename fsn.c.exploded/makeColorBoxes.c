/**
 * makeColorBoxes
 *
 * Extracted from fsn.c lines 50532-50550
 * Category: Filesystem
 */

void makeColorBoxes(void)

{
  if (current_color_index == '\0') {
    setup_toplevel_window(toplevel);
    current_color_index = '\x01';
  }
  create_color_legend_box(legend_color_dir,boxDir,7);
  create_color_legend_box(legend_color_red,boxRed,0);
  create_color_legend_box(legend_color_orange,boxOrange,1);
  create_color_legend_box(legend_color_yellow,boxYellow,2);
  create_color_legend_box(legend_color_green,boxGreen,3);
  create_color_legend_box(legend_color_cyan,boxCyan,4);
  create_color_legend_box(legend_color_blue,boxBlue,5);
  create_color_legend_box(legend_color_magenta,boxMagenta,6);
  init_render_state();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
