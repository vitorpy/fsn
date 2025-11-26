/**
 * visibility.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "visibility.h"
#include "fsn_types.h"
#include "fsn_state.h"

void show_controls(void)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  controlsShowing = 1;
  ui_layout_setup_wrapper();
  XtManageChild(copy_button_widget);
  local_48 = 0xe3f40f2;
  local_44 = copy_button_widget;
  local_50 = 0xe3f40cb;
  local_4c = 3;
  XtSetValues(panel_vsep_widget,&local_50,2);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void show_error_message(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_gp;
  int local_54;
  undefined4 local_50;
  undefined4 local_4;
  
  local_50 = (**(code **)(unaff_gp + -0x7c24))(param_1,*(undefined4 *)(unaff_gp + -0x7f60));
  local_54 = *(int *)(unaff_gp + -0x7f60) + 0x1f78;
  local_4 = local_50;
  uVar1 = (**(code **)(unaff_gp + -0x7ec0))
                    (**(undefined4 **)(unaff_gp + -0x75f0),*(int *)(unaff_gp + -0x7fa4) + -0x5934,
                     &local_54,1);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,2);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  uVar2 = (**(code **)(unaff_gp + -0x7eb0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar2);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f5c) + 0xa9,*(int *)(unaff_gp + -0x7fe8) + 0xf30,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x7e88))(local_4);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void show_error_dialog(undefined4 param_1,undefined4 param_2)

{
  int unaff_gp;
  undefined1 auStack_434 [1076];
  
  (**(code **)(unaff_gp + -0x7ecc))(auStack_434,param_1);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,*(int *)(unaff_gp + -0x7fa4) + -0x592c);
  (**(code **)(unaff_gp + -0x7ce4))(auStack_434,param_2);
  (**(code **)(unaff_gp + -0x7a90))(auStack_434);
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

void hideOverview(void)

{
  if (overview_popup_shell != 0) {
    overviewActive = 0;
    XtUnmanageChild();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void close_connections(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_gp;
  undefined1 auStack_cc [200];
  int local_4;
  
  (*(code *)(*(int *)(unaff_gp + -0x7fdc) + -0x531c))();
  local_4 = (**(code **)(unaff_gp + -0x7708))(0);
  param_1[1] = local_4;
  iVar1 = (**(code **)(unaff_gp + -0x7704))(local_4,0x7f000001,0x5f75a,1);
  *param_1 = iVar1;
  if ((-1 < iVar1) && (param_2 != 0)) {
    uVar2 = (**(code **)(unaff_gp + -0x7cec))();
    uVar3 = (**(code **)(unaff_gp + -0x7c30))();
    (**(code **)(unaff_gp + -0x7c1c))
              (auStack_cc,*(int *)(unaff_gp + -0x7f94) + -0x61b8,uVar2,uVar3,param_2);
    iVar1 = (**(code **)(unaff_gp + -0x7c20))(auStack_cc);
    (**(code **)(unaff_gp + -0x7700))(local_4,*param_1,auStack_cc,iVar1 + 1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void close_file_handle(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = string_buffer;
  if (0 < buffer_size) {
    do {
      iVar1 = iVar1 + 1;
      if (param_1 == *piVar2) {
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      piVar2 = piVar2 + 1;
    } while (iVar1 < buffer_size);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
