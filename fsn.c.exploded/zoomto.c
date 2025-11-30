/**
 * zoomto
 *
 * Extracted from fsn.c lines 38427-38479
 * Category: Filesystem
 */

void zoomto(double param_1,double param_2)

{
  undefined4 in_register_00001040;
  undefined4 in_register_00001080;
  undefined4 in_stack_00000014;
  short in_stack_0000001a;
  short in_stack_0000001e;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  init_gl_state(0,0);
  set_main_gl_window();
  if (in_stack_00000020 == *(int *)(curcontext + 0x3c)) {
    zoom_stack_pointer = (float)param_1;
    zoom_stack_size = (float)param_2;
    zoom_stack_capacity = (float)(double)CONCAT44(in_register_00001080,in_stack_00000014);
    camera_position_x = in_stack_0000001a;
    camera_position_y = in_stack_0000001e;
    camera_position_z = in_stack_0000001a != *(short *)(curcontext + 0xc);
    camera_rotation_changed = in_stack_0000001e != *(short *)(curcontext + 0xe);
    if (in_stack_00000020 == 0) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    zoom_active_flag = 0;
    gettimeofday((timeval *)&zoom_start_time,(__timezone_ptr_t)0x0);
    zoom_param_x = in_stack_00000024;
    zoom_param_y = in_stack_00000028;
    zoom_saved_state = zoom_init_state;
    init_gl_state(zoom_gl_init_callback,&zoom_stack_pointer);
  }
  else {
    if (search_results_pending != '\0') {
      process_search_results();
    }
    *(int *)(curcontext + 0x3c) = in_stack_00000020;
    if (in_stack_00000020 != 0) {
      update_marked_item();
    }
    *(float *)curcontext = (float)param_1;
    *(float *)(curcontext + 4) = (float)param_2;
    *(float *)(curcontext + 8) = (float)(double)CONCAT44(in_register_00001040,in_stack_00000014);
    *(short *)(curcontext + 0xc) = in_stack_0000001a;
    init_view_transform();
    *(short *)(curcontext + 0xe) = in_stack_0000001e;
    init_camera_state();
    redraw_gl_scene();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
