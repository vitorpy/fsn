/**
 * marks.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "marks.h"
#include "fsn_types.h"
#include "fsn_state.h"

void mark_directory_item(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x10) + iVar1);
      iVar1 = iVar1 + 4;
      *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = iVar1 + 1;
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar3 + 0x74) = *(byte *)(iVar3 + 0x74) | 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void draw_mark_overlay(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_gp;
  
  iVar1 = **(int **)(unaff_gp + -0x7684);
  if ((*(char *)(iVar1 + 0xc51) != '\0') && (*(char *)(iVar1 + 0xc52) != '\0')) {
    *(undefined1 *)(*(int *)(unaff_gp + -0x7f98) + 0x6e24) = 0;
    if (*(int *)(iVar1 + 0x48) == 0) {
      if (*(int *)(iVar1 + 0x44) == 0) {
        (**(code **)(unaff_gp + -0x7dec))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),
                   *(int *)(unaff_gp + -0x7fa4) + -0x4cc4);
      }
      else {
        (**(code **)(unaff_gp + -0x7dec))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),iVar1 + 0x4c);
        uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x4c);
        (**(code **)(unaff_gp + -0x7dcc))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
        uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x4c);
        (**(code **)(unaff_gp + -0x7db8))
                  (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
      }
    }
    else {
      (**(code **)(unaff_gp + -0x7dec))
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),iVar1 + 0x44c);
      uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x44c);
      (**(code **)(unaff_gp + -0x7dcc))
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
      uVar2 = (**(code **)(unaff_gp + -0x7c20))(**(int **)(unaff_gp + -0x7684) + 0x44c);
      (**(code **)(unaff_gp + -0x7db8))
                (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x1c),uVar2);
    }
    (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x3c1c))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void clear_marked_state(void)

{
  int *piVar1;
  int iVar2;
  int unaff_gp;
  int local_28;
  undefined4 local_24;
  
  if (*(int *)(**(int **)(unaff_gp + -0x7684) + 0x44) != 0) {
    iVar2 = *(int *)(unaff_gp + -0x7fe4);
    *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
    (*(code *)(iVar2 + -0x2be8))();
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),0);
    (**(code **)(unaff_gp + -0x79c0))();
    piVar1 = *(int **)(unaff_gp + -0x7684);
    *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) = *(byte *)(*(int *)(*piVar1 + 0x44) + 0x74) & 0xdf;
    *(undefined4 *)(*piVar1 + 0x44) = 0;
    *(undefined1 *)(*piVar1 + 0x4c) = 0;
    (**(code **)(unaff_gp + -0x79d4))();
    local_24 = **(undefined4 **)(unaff_gp + -0x75f8);
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x1d4d;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(**(int **)(unaff_gp + -0x767c) + 0x20),&local_28,1);
    (**(code **)(unaff_gp + -0x79d0))();
    (**(code **)(unaff_gp + -0x798c))();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void update_marked_item(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_gp;
  int local_28;
  uint local_24;
  
  iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44);
  if (param_1 == iVar1) {
    (**(code **)(unaff_gp + -0x79c0))();
    if (*(char *)(*(int *)(unaff_gp + -0x7f98) + 0x6e24) != '\0') {
      (**(code **)(unaff_gp + -0x79d4))();
    }
  }
  else {
    if (iVar1 != 0) {
      (*(code *)(*(int *)(unaff_gp + -0x7fe4) + -0x2be8))();
      iVar1 = *(int *)(**(int **)(unaff_gp + -0x7684) + 0x44);
      *(byte *)(iVar1 + 0x74) = *(byte *)(iVar1 + 0x74) & 0xdf;
      (**(code **)(unaff_gp + -0x79c0))();
      *(undefined1 *)(**(int **)(unaff_gp + -0x7684) + 0xc50) = 0;
    }
    (**(code **)(unaff_gp + -0x7ce8))(*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b98),1);
    piVar2 = *(int **)(unaff_gp + -0x7684);
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 0x20;
    *(int *)(*piVar2 + 0x44) = param_1;
    (**(code **)(unaff_gp + -0x7a84))(*piVar2 + 0x4c,param_1);
    (**(code **)(unaff_gp + -0x79d4))();
    (**(code **)(unaff_gp + -0x798c))();
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    local_24 = (uint)(*(int *)(param_1 + 0x74) << 0xb) >> 0x1f;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54),&local_28,1);
    local_28 = *(int *)(unaff_gp + -0x7f60) + 0x2589;
    local_24 = (uint)(*(int *)(param_1 + 0x74) << 0xd) >> 0x1f;
    (**(code **)(unaff_gp + -0x7cc0))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b58),&local_28,1);
    (**(code **)(unaff_gp + -0x7ce8))
              (*(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6b54),
               -1 < *(int *)(param_1 + 0x74) << 0xd);
    (**(code **)(unaff_gp + -0x79d0))();
    if (*(int *)(param_1 + 100) != 0) {
      (**(code **)(unaff_gp + -0x7db4))();
      *(undefined4 *)(param_1 + 100) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      (**(code **)(unaff_gp + -0x78ec))(param_1);
    }
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void unmark_items_recursive(int param_1)

{
  char *__dest;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x74) << 0xc < 0) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar3 = 0;
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3);
        if ((int)(puVar2[10] << 9) < 0) {
          __dest = (char *)build_path_string(0,param_1);
          strcat(__dest,(char *)*puVar2);
          iVar1 = unlink(__dest);
          if (iVar1 < 0) {
            show_error_dialog("cannot delete",__dest);
            *(byte *)((int)puVar2 + 0x29) = *(byte *)((int)puVar2 + 0x29) & 0xbf;
          }
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0xc));
    }
    if (-1 < *(int *)(param_1 + 0x74) << 10) {
      refresh_directory_view(param_1);
    }
  }
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      unmark_items_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void mark_items_recursive(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(int *)(param_1 + 0x74) << 0xc < 0) &&
     (*(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf7, 0 < *(int *)(param_1 + 0xc))) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + iVar2);
      iVar2 = iVar2 + 4;
      *(byte *)(iVar1 + 0x29) = *(byte *)(iVar1 + 0x29) & 0xbf;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      mark_items_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar3));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void markAllVisible(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x74) =
       (byte)((*(uint *)(param_1 + 0x74) >> 0x1e | curcontextflag) << 6) |
       *(byte *)(param_1 + 0x74) & 0x3f;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      draw_directory_tree(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void addMark(char *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (selection_count == selection_array_capacity) {
    if (selection_array_capacity == 0) {
      selection_array_capacity = 8;
      selection_buffer = XtMalloc(0x200);
    }
    else {
      selection_array_capacity = selection_array_capacity + 8;
    }
    selection_buffer = XtRealloc(selection_buffer,selection_array_capacity << 6);
  }
  puVar1 = (undefined4 *)(selection_buffer + selection_count * 0x40);
  puVar7 = param_2;
  do {
    puVar6 = puVar7;
    puVar5 = puVar1;
    puVar7 = puVar6 + 3;
    *puVar5 = *puVar6;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar1 = puVar5 + 3;
  } while (puVar7 != param_2 + 0xc);
  puVar5[3] = *puVar7;
  puVar5[4] = puVar6[4];
  if (param_1 == (char *)0x0) {
    *(undefined4 *)(selection_buffer + selection_count * 0x40 + 0x38) = 0;
  }
  else {
    sVar2 = strlen(param_1);
    pcVar3 = (char *)XtMalloc(sVar2 + 1);
    pcVar3 = strcpy(pcVar3,param_1);
    *(char **)(selection_buffer + selection_count * 0x40 + 0x38) = pcVar3;
  }
  uVar4 = XmStringCreateSimple(param_1);
  *(undefined4 *)(selection_buffer + selection_count * 0x40 + 0x3c) = uVar4;
  XmListAddItem(mark_selector_list,*(undefined4 *)(selection_buffer + selection_count * 0x40 + 0x3c),0);
  selection_count = selection_count + 1;
  if (selection_count == 1) {
    XtSetSensitive(mark_selector_dialog,1);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void createMarkControls(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  uStack_54 = 0xf6617e7;
  uStack_50 = 0;
  mark_selector_dialog = XmCreateSelectionBox(param_1,"markSelector",&uStack_54,1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,7);
  XtUnmanageChild(uVar1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,0xd);
  XtUnmanageChild(uVar1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,0xb);
  XtUnmanageChild(uVar1);
  uVar1 = XmSelectionBoxGetChild(mark_selector_dialog,0xe);
  XtUnmanageChild(uVar1);
  mark_selector_list = XmSelectionBoxGetChild(mark_selector_dialog,8);
  XtAddCallback(mark_selector_dialog,0xe3f44b6,mark_dialog_value_callback,0);
  XtAddCallback(mark_selector_dialog,0xe3f380d,mark_dialog_focus_callback,0);
  XtManageChild(mark_selector_dialog);
  install_help_callback(mark_selector_dialog,&markHelp);
  uVar1 = XmCreatePushButton(param_1,&search_label_type,&uStack_54,0);
  XtAddCallback(uVar1,0xe3f35b3,mark_select_callback,0);
  XtManageChild(uVar1);
  install_help_callback(uVar1,&markHelp);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void init_mark_panel(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int unaff_gp;
  int local_54 [21];
  
  local_54[0] = *(int *)(unaff_gp + -0x7f5c) + 0x2c7;
  local_54[1] = 0;
  uVar1 = (**(code **)(unaff_gp + -0x7ba4))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x3c30,local_54,1);
  puVar4 = (undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec0);
  *puVar4 = uVar1;
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(uVar1,7);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xd);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xb);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,0xe);
  (**(code **)(unaff_gp + -0x7b70))(uVar1);
  uVar1 = (**(code **)(unaff_gp + -0x7ba0))(*puVar4,8);
  iVar2 = *(int *)(unaff_gp + -0x7f60);
  iVar3 = *(int *)(unaff_gp + -0x7fe0);
  pcVar5 = *(code **)(unaff_gp + -0x7c54);
  *(undefined4 *)(*(int *)(unaff_gp + -0x7f94) + 0x6ec4) = uVar1;
  (*pcVar5)(*puVar4,iVar2 + 0x214e,iVar3 + -0xb28,0);
  (**(code **)(unaff_gp + -0x7c54))
            (*puVar4,*(int *)(unaff_gp + -0x7f60) + 0x14a5,*(int *)(unaff_gp + -0x7fe0) + -0xa30,0);
  (**(code **)(unaff_gp + -0x7c78))(*puVar4);
  (**(code **)(unaff_gp + -0x785c))(*puVar4,*(undefined4 *)(unaff_gp + -0x7644));
  uVar1 = (**(code **)(unaff_gp + -0x7b20))
                    (param_1,*(int *)(unaff_gp + -0x7fa4) + 0x3c40,local_54,0);
  (**(code **)(unaff_gp + -0x7c54))
            (uVar1,*(int *)(unaff_gp + -0x7f60) + 0x124b,*(int *)(unaff_gp + -0x7fe0) + -0x8c4,0);
  (**(code **)(unaff_gp + -0x7c78))(uVar1);
  (**(code **)(unaff_gp + -0x785c))(uVar1,*(undefined4 *)(unaff_gp + -0x7644));
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void dumpMarks(FILE *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short asStack_8 [4];
  
  iVar3 = 0;
  if (0 < selection_count) {
    iVar2 = 0;
    do {
      if (__iob_func_result == 0) {
        iVar4 = param_1->_flags + -1;
        param_1->_flags = iVar4;
        if (iVar4 < 0) {
          __flsbuf(7,param_1);
        }
        else {
          *param_1->_IO_read_ptr = '\a';
          param_1->_IO_read_ptr = param_1->_IO_read_ptr + 1;
        }
      }
      else {
        __semputc(7,param_1);
      }
      sVar1 = strlen(*(char **)(selection_buffer + iVar2 + 0x38));
      asStack_8[0] = (short)sVar1;
      fwrite(asStack_8,2,1,param_1);
      fwrite(*(void **)(selection_buffer + iVar2 + 0x38),1,(int)asStack_8[0],param_1);
      copy_selection_data(iVar3 * 0x40 + selection_buffer,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < selection_count);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void readMark(FILE *param_1)

{
  size_t sVar1;
  undefined1 auStack_43c [56];
  short local_404 [2];
  undefined1 auStack_400 [1024];
  
  sVar1 = fread(local_404,2,1,param_1);
  if (sVar1 != 1) {
    fprintf((FILE *)0xfb52904,"syntax error in reading mark from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  sVar1 = fread(auStack_400,1,(int)local_404[0],param_1);
  if (sVar1 != (int)local_404[0]) {
    fprintf((FILE *)0xfb52904,"syntax error in reading mark name from database\n");
                    // WARNING: Subroutine does not return
    exit(1);
  }
  auStack_400[local_404[0]] = 0;
  write_selection_file(auStack_43c,param_1);
  copy_buffer_data(auStack_400,auStack_43c);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
