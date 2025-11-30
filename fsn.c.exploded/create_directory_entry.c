/**
 * create_directory_entry
 *
 * Extracted from fsn.c lines 39156-39167
 * Category: UI
 */

void create_directory_entry(void)

{
  void *pvVar1;
  
  if ((file_memory_pool_ptr == 0) || (file_pool_limit <= file_memory_pool_ptr)) {
    pvVar1 = calloc(100,0x2c);
    file_pool_limit = (int)pvVar1 + 0x1130;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
