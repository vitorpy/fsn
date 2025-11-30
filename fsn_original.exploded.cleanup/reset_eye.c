/**
 * reset_eye
 *
 * Extracted from fsn.c lines 50574-50581
 * Category: Filesystem
 */

void reset_eye(void)

{
  save_matrix_state();
  set_camera_lookat((double)view_init_x,(double)view_init_y);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
