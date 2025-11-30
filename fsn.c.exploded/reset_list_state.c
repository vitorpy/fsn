/**
 * reset_list_state
 *
 * Extracted from fsn.c lines 51176-51189
 * Category: Filesystem
 */

void reset_list_state(void)

{
  int unaff_gp;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  (**(code **)(unaff_gp + -0x7ae4))();
  (**(code **)(unaff_gp + -31000))(&local_4,&local_c,&local_8);
  (**(code **)(unaff_gp + -0x78b4))(local_4,local_c,local_8);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
