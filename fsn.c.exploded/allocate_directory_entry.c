/**
 * allocate_directory_entry
 *
 * Extracted from fsn.c lines 39173-39194
 * Category: Filesystem
 */

void allocate_directory_entry(void)

{
  if ((directory_memory_pool == (void *)0x0) || (directory_pool_limit <= directory_memory_pool)) {
    directory_memory_pool = calloc(0x40,0x78);
    directory_pool_limit = (void *)((int)directory_memory_pool + 0x1e00);
    if (directory_pool_index == 0) {
      dir_index = malloc(0x40);
      directory_pool_capacity = 0x10;
    }
    else if (directory_pool_index == directory_pool_capacity) {
      directory_pool_capacity = directory_pool_capacity + 0x10;
      dir_index = realloc(dir_index,directory_pool_capacity * 4);
    }
    *(void **)((int)dir_index + directory_pool_index * 4) = directory_memory_pool;
    directory_pool_index = directory_pool_index + 1;
  }
  *(undefined4 *)((int)directory_memory_pool + 0x5c) = dir_entry_initial_value;
  directory_memory_pool = (void *)((int)directory_memory_pool + 0x78);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
