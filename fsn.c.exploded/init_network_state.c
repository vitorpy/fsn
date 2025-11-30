/**
 * init_network_state
 *
 * Extracted from fsn.c lines 62262-62285
 * Category: Init
 */

void init_network_state(void)

{
  int iVar1;
  int iVar2;
  
  if (buffer_initialized_flag != 0) {
    buffer_pointer_array = malloc(buffer_size << 2);
    string_buffer = malloc(buffer_size << 2);
    path_buffer = malloc(buffer_size << 2);
    iVar2 = 0;
    iVar1 = 0;
    if (0 < buffer_size) {
      do {
        iVar2 = iVar2 + 1;
        *(undefined4 *)((int)string_buffer + iVar1) = 0xffffffff;
        iVar1 = iVar1 + 4;
      } while (iVar2 < buffer_size);
    }
    buffer_initialized_flag = 0;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
