/**
 * process_pick_item
 *
 * Extracted from fsn.c lines 42502-42543
 * Category: Input
 */

void process_pick_item(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_f5;
  undefined4 uVar3;
  undefined4 in_f11;
  uint unaff_000010c0;
  
  pushmatrix();
  translate(0,(float)((double)-*(float *)(param_1 + 0x3c) /
                     (double)((ulonglong)unaff_000010c0 << 0x20)));
  uVar3 = 0x3fe00000;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      render_item_recursive(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  popmatrix();
  if (*(int *)(param_1 + 0x28) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x28),&child_dir_index_1,0,0,in_f11,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x2c),&child_dir_index_2,in_f5,SUB84((double)-item_spacing_x,0),in_f5,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    draw_directory_recursive(*(int *)(param_1 + 0x30),&child_dir_index_3,uVar3,SUB84((double)item_spacing_x,0),uVar3,
                 SUB84((double)*(float *)(param_1 + 0x3c) /
                       (double)((ulonglong)unaff_000010c0 << 0x20) + (double)layout_base_height,0));
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
