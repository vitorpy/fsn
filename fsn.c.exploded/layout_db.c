/**
 * layout_db
 *
 * Extracted from fsn.c lines 39263-39326
 * Category: Filesystem
 */

void layout_db(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  uint in_register_00001010;
  double dVar2;
  undefined4 uVar3;
  double in_f6;
  undefined4 in_f11;
  
  clear_selection_state();
  time(&last_operation_time);
  miny = 0.0;
  maxy = 0.0;
  minx = 0.0;
  maxx = 0.0;
  if (displayHeight == 0) {
    in_f6 = (double)CONCAT44((int)((ulonglong)in_f6 >> 0x20),0x3f800000);
    horizontal_scale_factor = 1.0;
  }
  else {
    fVar1 = (float)process_directory_data(window_width);
    horizontal_scale_factor = horizontal_scale_base / fVar1;
  }
  *(undefined4 *)(topdir + 0x2c) = 0;
  *(undefined4 *)(topdir + 0x30) = 0;
  init_directory_layout(topdir);
  uVar3 = (undefined4)((ulonglong)in_f6 >> 0x20);
  if (displayHeight == 0) {
    horizontal_scale_factor = 1.0;
  }
  else if (displayDirectoryHeight == 0) {
    vertical_scale_factor = 1.0;
  }
  else if ((displayDirectoryHeight == 1) || (displayDirectoryHeight != 2)) {
    fVar1 = (float)process_directory_data(window_height);
    in_f6 = (double)CONCAT44(uVar3,reference_dimension);
    vertical_scale_factor = reference_dimension / fVar1;
  }
  else {
    fVar1 = (float)process_directory_data(*(undefined4 *)(topdir + 0x20));
    in_f6 = (double)reference_dimension;
    vertical_scale_factor = (float)(in_f6 / (double)fVar1);
  }
  dVar2 = (double)*(float *)(topdir + 0x3c);
  fVar1 = powf(zoom_base_factor,
               (float)((dVar2 / (double)((ulonglong)in_f6 & 0xffffffff00000000)) /
                      (double)zoom_reference_height));
  calculate_tree_layout(topdir,param_2,0,0,in_f11,
               SUB84((double)((ulonglong)dVar2 & 0xffffffff00000000) / (double)fVar1,0));
  layout_tree_recursive(topdir,param_2,0,0);
  maxShrinkage = powf(zoom_base_factor,maxy / zoom_reference_height);
  maxx = (float)((double)maxx + (double)((ulonglong)in_register_00001010 << 0x20));
  minx = (float)((double)minx - (double)((ulonglong)in_register_00001010 << 0x20));
  dVar2 = (double)maxy;
  maxy = (float)(dVar2 + (double)((ulonglong)in_register_00001010 << 0x20));
  miny = (float)((double)-*(float *)(topdir + 0x3c) /
                 (double)((ulonglong)dVar2 & 0xffffffff00000000) -
                (double)((ulonglong)in_register_00001010 << 0x20));
  refresh_fam_state();
  update_fam_display();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
