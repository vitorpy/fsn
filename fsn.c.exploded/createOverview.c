/**
 * createOverview
 *
 * Extracted from fsn.c lines 45866-45990
 * Category: UI
 */

void createOverview(void)

{
  float fVar1;
  int iVar2;
  char **ppcVar3;
  char *pcVar4;
  double dVar5;
  uint uVar6;
  undefined8 in_f18;
  uint in_fcsr;
  char *pcStack_b8;
  undefined4 auStack_b4 [3];
  undefined4 uStack_a8;
  int iStack_a4;
  char *apcStack_a0 [5];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  undefined4 *puStack_7c;
  char *pcStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  
  uVar6 = (uint)((ulonglong)in_f18 >> 0x20);
  if (overview_initialized == '\0') {
    XtAppAddActions(app_context,&overview_app_actions,4);
    overview_initialized = '\x01';
  }
  apcStack_a0[1] = (char *)auStack_b4;
  apcStack_a0[0] = (char *)0xf6615ba;
  iVar2 = init_display_mode();
  apcStack_a0[3] = (char *)&pcStack_b8;
  if (iVar2 == 0) {
    apcStack_a0[2] = "overlayColormap";
  }
  else {
    apcStack_a0[2] = "popupColormap";
  }
  XtGetValues(*(undefined4 *)(curcontextwindows + 8),apcStack_a0,2);
  apcStack_a0[0] = (char *)0xf662094;
  apcStack_a0[1] = (char *)0x1;
  overview_popup_shell = XtCreatePopupShell("overview",topLevelShellWidgetClass,toplevel,apcStack_a0,1);
  XtAddCallback(overview_popup_shell,0xf6615c9,overview_map_callback,0);
  uStack_a8 = XmCreateForm(overview_popup_shell,"overviewForm",apcStack_a0,0);
  XtManageChild(uStack_a8);
  install_help_callback(uStack_a8,&overviewHelp);
  iVar2 = init_display_mode();
  if (iVar2 != 0) {
    gl_buffer_size = 0x3000;
  }
  apcStack_a0[1] = (char *)0x1;
  apcStack_a0[0] = (char *)0xe3f4b1d;
  apcStack_a0[2] = (char *)0xe3f40cb;
  apcStack_a0[4] = (char *)0xe3f46dd;
  uStack_88 = 0xe3f3701;
  pcStack_80 = "glxConfig";
  puStack_7c = &gl_buffer_size;
  apcStack_a0[3] = (char *)0x1;
  uStack_8c = 1;
  uStack_84 = 1;
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    pcStack_78 = "useOverlay";
  }
  else {
    pcStack_78 = "usePopup";
  }
  uStack_74 = 1;
  uStack_70 = 0xf661888;
  dVar5 = ((double)maxx - (double)minx) * (double)((ulonglong)uVar6 << 0x20);
  uStack_68 = 0xf66160a;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar5 = ROUND(dVar5);
  }
  else {
    dVar5 = FLOOR(dVar5);
  }
  iStack_6c = (int)dVar5;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(maxy - miny);
  }
  else {
    fVar1 = FLOOR(maxy - miny);
  }
  iStack_64 = (int)fVar1;
  iStack_a4 = 8;
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    ppcVar3 = apcStack_a0 + iStack_a4 * 2;
    *ppcVar3 = "overlayColormap";
  }
  else {
    ppcVar3 = apcStack_a0 + iStack_a4 * 2;
    *ppcVar3 = "popupColormap";
  }
  ppcVar3[1] = pcStack_b8;
  overview_gl_widget = GlxCreateMDraw(uStack_a8,"overviewGlw",apcStack_a0,iStack_a4 + 1);
  XtAddCallback(overview_gl_widget,"exposeCallback",overview_expose_callback,0);
  iVar2 = init_display_mode();
  if (iVar2 == 0) {
    pcVar4 = "overlayExposeWindow";
  }
  else {
    pcVar4 = "popupExposeWindow";
  }
  XtAddCallback(overview_gl_widget,pcVar4,overview_input_callback,0);
  XtAddCallback(overview_gl_widget,"resizeCallback",overview_resize_callback,0);
  XtAddCallback(overview_gl_widget,"ginitCallback",overview_init_callback,0);
  XtManageChild(overview_gl_widget);
  if (overview_translations == 0) {
    overview_translations = XtParseTranslationTable(overviewGlw_translations);
  }
  XtOverrideTranslations(overview_gl_widget,overview_translations);
  apcStack_a0[0] = (char *)0xf6615ba;
  apcStack_a0[1] = (char *)auStack_b4[0];
  XtSetValues(overview_gl_widget,apcStack_a0,1);
  XtManageChild(overview_popup_shell);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
