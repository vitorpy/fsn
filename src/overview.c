/**
 * overview.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "overview.h"
#include "fsn_types.h"
#include "fsn_state.h"

void setOverviewWindow(void)

{
  GLXwinset(display,main_gl_window);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void setOverviewOverlayWindow(void)

{
  GLXwinset(display,overview_gl_context);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void begin_overview_render(void)

{
  int unaff_gp;
  
  (**(code **)(unaff_gp + -0x7d0c))
            (**(undefined4 **)(unaff_gp + -0x75fc),
             *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c04));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void render_overview_frame(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int unaff_gp;
  double dVar6;
  uint uVar7;
  undefined8 in_f18;
  uint in_fcsr;
  int local_b8;
  undefined4 local_b4 [3];
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 *local_9c;
  int local_98;
  int *local_94;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  uVar7 = (uint)((ulonglong)in_f18 >> 0x20);
  if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x6ebc) == '\0') {
    (**(code **)(unaff_gp + -0x7c3c))
              (**(undefined4 **)(unaff_gp + -0x7600),*(int *)(unaff_gp + -0x7f98) + 0x6e94,4);
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6ebc) = 1;
  }
  local_9c = local_b4;
  local_a0 = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  local_94 = &local_b8;
  if (iVar2 == 0) {
    local_98 = *(int *)(unaff_gp + -0x7fa4) + -0x469c;
  }
  else {
    local_98 = *(int *)(unaff_gp + -0x7fa4) + -0x46ac;
  }
  (**(code **)(unaff_gp + -0x7c9c))(*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 8),&local_a0,2)
  ;
  local_a0 = *(int *)(unaff_gp + -0x7f80) + 0x118;
  local_9c = (undefined4 *)0x1;
  uVar3 = (**(code **)(unaff_gp + -0x7df4))
                    (*(int *)(unaff_gp + -0x7fa4) + -0x468c,**(undefined4 **)(unaff_gp + -0x7f74),
                     **(undefined4 **)(unaff_gp + -0x75f0),&local_a0,1);
  iVar2 = *(int *)(unaff_gp + -0x7f5c);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6eb4) = uVar3;
  (**(code **)(unaff_gp + -0x7c54))(uVar3,iVar2 + 0xa9,*(int *)(unaff_gp + -0x7fe4) + 0x1180,0);
  local_a8 = (**(code **)(unaff_gp + -0x7c84))
                       (*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6eb4),
                        *(int *)(unaff_gp + -0x7fa4) + -0x4680,&local_a0,0);
  (**(code **)(unaff_gp + -0x7c78))(local_a8);
  (**(code **)(unaff_gp + -0x785c))(local_a8,*(undefined4 *)(unaff_gp + -0x76c0));
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 != 0) {
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6e64) = 0x3000;
  }
  local_9c = (undefined4 *)0x1;
  local_a0 = *(int *)(unaff_gp + -0x7f60) + 0x27b5;
  local_98 = *(int *)(unaff_gp + -0x7f60) + 0x1d63;
  local_90 = *(int *)(unaff_gp + -0x7f60) + 0x2375;
  local_88 = *(int *)(unaff_gp + -0x7f60) + 0x1399;
  local_80 = *(int *)(unaff_gp + -0x7fa4) + -0x4670;
  local_7c = *(int *)(unaff_gp + -0x7f98) + 0x6e64;
  local_94 = (int *)0x1;
  local_8c = 1;
  local_84 = 1;
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 == 0) {
    local_78 = *(int *)(unaff_gp + -0x7fa4) + -0x4658;
  }
  else {
    local_78 = *(int *)(unaff_gp + -0x7fa4) + -0x4664;
  }
  local_74 = 1;
  local_70 = *(int *)(unaff_gp + -0x7f5c) + 0x368;
  dVar6 = ((double)**(float **)(unaff_gp + -0x75d0) - (double)**(float **)(unaff_gp + -0x75d4)) *
          (double)((ulonglong)uVar7 << 0x20);
  local_68 = *(int *)(unaff_gp + -0x7f5c) + 0xea;
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    dVar6 = ROUND(dVar6);
  }
  else {
    dVar6 = FLOOR(dVar6);
  }
  local_6c = (int)dVar6;
  fVar1 = **(float **)(unaff_gp + -0x75c8) - **(float **)(unaff_gp + -0x75cc);
  if ((((in_fcsr | 3) ^ 2) & 3) == 0) {
    fVar1 = ROUND(fVar1);
  }
  else {
    fVar1 = FLOOR(fVar1);
  }
  local_64 = (int)fVar1;
  local_a4 = 8;
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 == 0) {
    piVar4 = &local_a0 + local_a4 * 2;
    *piVar4 = *(int *)(unaff_gp + -0x7fa4) + -0x463c;
  }
  else {
    piVar4 = &local_a0 + local_a4 * 2;
    *piVar4 = *(int *)(unaff_gp + -0x7fa4) + -0x464c;
  }
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  pcVar5 = *(code **)(unaff_gp + -0x7e04);
  piVar4[1] = local_b8;
  uVar3 = (*pcVar5)(local_a8,iVar2 + -0x462c,&local_a0,local_a4 + 1);
  iVar2 = *(int *)(unaff_gp + -0x7fa4);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c) = uVar3;
  (**(code **)(unaff_gp + -0x7c54))(uVar3,iVar2 + -0x4620,*(int *)(unaff_gp + -0x7fe4) + 0xbfc,0);
  iVar2 = (**(code **)(unaff_gp + -0x7960))();
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_gp + -0x7fa4) + -0x45fc;
  }
  else {
    iVar2 = *(int *)(unaff_gp + -0x7fa4) + -0x4610;
  }
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),iVar2,
             *(int *)(unaff_gp + -0x7fe4) + 0xc50,0);
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),
             *(int *)(unaff_gp + -0x7fa4) + -0x45e8,*(int *)(unaff_gp + -0x7fe4) + 0xca4,0);
  (**(code **)(unaff_gp + -0x7c54))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),
             *(int *)(unaff_gp + -0x7fa4) + -0x45d8,*(int *)(unaff_gp + -0x7fe4) + 0xe74,0);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c));
  iVar2 = *(int *)(*(int *)(unaff_gp + -0x7f98) + 0x6e60);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(unaff_gp + -0x7c10))(*(undefined4 *)(unaff_gp + -0x76ac));
    iVar2 = *(int *)(unaff_gp + -0x7f98);
    *(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6e60) = uVar3;
    iVar2 = *(int *)(iVar2 + 0x6e60);
  }
  (**(code **)(unaff_gp + -0x7c58))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),iVar2);
  local_a0 = *(int *)(unaff_gp + -0x7f5c) + 0x9a;
  local_9c = (undefined4 *)local_b4[0];
  (**(code **)(unaff_gp + -0x7cc0))
            (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6c0c),&local_a0,1);
  (**(code **)(unaff_gp + -0x7c78))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f98) + 0x6eb4));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void showOverview(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (overview_popup_shell == 0) {
    render_overview_frame();
  }
  else {
    XtManageChild();
    uVar1 = XtDisplay(overview_popup_shell);
    uVar2 = XtWindow(overview_popup_shell);
    XMapWindow(uVar1,uVar2);
    XRaiseWindow(display,overview_x_window);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void drawOverviewDirectory(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  uint unaff_000010a0;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(int *)(param_1 + 0x74) << 3 < 0) {
    loadname((int)*(short *)(param_1 + 0x5e));
    if (*(int *)(param_1 + 0x74) << 2 < 0) {
      uVar3 = *(undefined4 *)(boxDir + 0x10);
    }
    else {
      uVar3 = *(undefined4 *)boxDir;
    }
    cpack(uVar3);
    if (*(int *)(param_1 + 0x74) << 0xd < 0) {
      dVar6 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      rect((float)((double)*(float *)(param_1 + 0x34) - dVar6 * (double)*(float *)(param_1 + 0x58)),
           (float)((double)*(float *)(param_1 + 0x38) - dVar6));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    else {
      dVar6 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)unaff_000010a0 << 0x20);
      rectf((float)((double)*(float *)(param_1 + 0x34) - dVar6 * (double)*(float *)(param_1 + 0x58))
            ,(float)((double)*(float *)(param_1 + 0x38) - dVar6));
      iVar2 = *(int *)(param_1 + 0x14);
    }
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar5);
        iVar1 = *(int *)(iVar4 + 0x74);
        if (iVar1 << 3 < 0) {
          if (param_2 != '\0') {
            setup_item_render(iVar4,1);
            loadname((int)*(short *)(iVar4 + 0x5e));
            iVar1 = *(int *)(iVar4 + 0x74);
          }
          uVar3 = file_type_icon;
          if (iVar1 << 2 < 0) {
            uVar3 = dir_type_icon;
          }
          cpack(uVar3);
          fStack_10 = *(float *)(param_1 + 0x34) +
                      *(float *)(iVar4 + 0x4c) * *(float *)(param_1 + 0x58);
          fStack_c = *(float *)(param_1 + 0x38) + *(float *)(iVar4 + 0x50);
          uStack_18 = *(undefined4 *)(iVar4 + 0x34);
          fStack_14 = (float)((double)*(float *)(iVar4 + 0x38) +
                             (double)-*(float *)(iVar4 + 0x3c) /
                             (double)((ulonglong)unaff_000010a0 << 0x20));
          bgnline();
          v2f(&fStack_10);
          v2f(&uStack_18);
          endline();
          if (param_2 == '\0') {
            setup_item_render(iVar4,0);
          }
          iVar2 = *(int *)(param_1 + 0x14);
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 < iVar2 << 2);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void drawOverview(void)

{
  if (overviewActive != '\0') {
    glx_switch_context_wrapper();
    cpack(overview_bg_color);
    clear();
    if (topdir != 0) {
      setup_item_render(topdir,0);
    }
    swapbuffers();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void drawOverviewOverlayCursor(void)

{
  int iVar1;
  uint extraout_var;
  uint extraout_var_00;
  uint uVar2;
  
  color(*(undefined2 *)(curcontextwindows + 0x32));
  pushmatrix();
  iVar1 = *(int *)(curcontext + 0x3c);
  if (iVar1 == 0) {
    translate(*(float *)curcontext -
              *(float *)(curcontext + 0x14) * *(float *)(curcontext + 0x20) *
              *(float *)(curcontext + 8),
              *(float *)(curcontext + 4) -
              *(float *)(curcontext + 0x18) * *(float *)(curcontext + 0x20) *
              *(float *)(curcontext + 8));
    uVar2 = extraout_var_00;
  }
  else {
    translate(*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38));
    uVar2 = extraout_var;
  }
  scale((float)((double)((ulonglong)uVar2 << 0x20) / (double)window_scale_x),
        (float)((double)((ulonglong)uVar2 << 0x20) / (double)window_scale_y));
  linewidth(3);
  bgnline();
  v2i(&viewport_x);
  v2i(&viewport_y);
  endline();
  bgnline();
  v2i(&matrix_stack_index);
  v2i(&matrix_stack_capacity);
  endline();
  linewidth(1);
  popmatrix();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void drawOverviewOverlay(void)

{
  if (overviewActive != '\0') {
    begin_overview_render();
    color(0);
    clear();
    end_rendering();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_overview_content(void)

{
  int unaff_gp;
  
  if (**(char **)(unaff_gp + -0x76c4) != '\0') {
    (**(code **)(unaff_gp + -0x799c))();
    (**(code **)(unaff_gp + -0x7cfc))(0);
    (**(code **)(unaff_gp + -0x7cf8))();
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) + 0xacc))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void hideOverview(void)

{
  if (overview_popup_shell != 0) {
    overviewActive = 0;
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void overviewPickPointer(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_3e8 [500];
  
  picksize(2,2);
  pushmatrix();
  initnames();
  pick(asStack_3e8,500);
  ortho2(minx,maxx);
  setup_item_render(topdir,1);
  iVar1 = endpick(asStack_3e8);
  popmatrix();
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = (int)asStack_3e8[iVar2];
      if (iVar4 == 1) {
        get_item_by_index((int)asStack_3e8[iVar2 + 1]);
        halt_baddata();
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1 + iVar4;
    } while (iVar3 != iVar1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

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

void highlightOverviewDir(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  undefined8 in_f10;
  undefined4 uStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  uVar4 = (uint)((ulonglong)in_f10 >> 0x20);
  if (overviewActive != '\0') {
    begin_overview_render();
    color(0);
    clear();
    color(overlayHighlightColor._2_2_);
    dVar3 = (double)*(float *)(param_1 + 0x3c) / (double)((ulonglong)uVar4 << 0x20);
    rectf((float)((double)*(float *)(param_1 + 0x34) - dVar3 * (double)*(float *)(param_1 + 0x58)),
          (float)((double)*(float *)(param_1 + 0x38) - dVar3));
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 != 0) {
      fStack_c = *(float *)(iVar2 + 0x34) + *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x58);
      fStack_8 = (float)((double)*(float *)(iVar2 + 0x38) + (double)*(float *)(param_1 + 0x50));
      uStack_14 = *(undefined4 *)(param_1 + 0x34);
      fStack_10 = (float)((double)*(float *)(param_1 + 0x38) +
                         (double)-*(float *)(param_1 + 0x3c) /
                         (double)((ulonglong)(double)*(float *)(iVar2 + 0x38) & 0xffffffff00000000))
      ;
      bgnline();
      v2f(&fStack_c);
      v2f(&uStack_14);
      endline();
    }
    pushmatrix();
    ortho2();
    cmov2(0xbf733333,0xbf666666);
    uVar1 = build_path_string(0,param_1);
    charstr(uVar1);
    popmatrix();
    end_rendering();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void overviewLocateHighlight(void)

{
  undefined4 uVar1;
  
  glx_switch_context_wrapper();
  uVar1 = get_current_time();
  configure_viewport(uVar1,0,0);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
