/**
 * rescaleOverview
 *
 * Extracted from fsn.c lines 46676-46715
 * Category: UI
 */

void rescaleOverview(void)

{
  float fVar1;
  byte in_fcsr;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  if (overviewActive != '\0') {
    uStack_48 = 0xf66160a;
    fVar1 = (maxx - minx) * window_scale_x;
    uStack_50 = 0xf661888;
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    iStack_4c = (int)fVar1;
    fVar1 = (maxy - miny) * window_scale_y;
    if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
      fVar1 = ROUND(fVar1);
    }
    else {
      fVar1 = FLOOR(fVar1);
    }
    iStack_44 = (int)fVar1;
    XtSetValues(overview_gl_widget,&uStack_50,2);
    glx_switch_context_wrapper();
    ortho2(minx,maxx);
    refresh_display();
    begin_overview_render();
    ortho2(minx,maxx);
    draw_overview_content();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
