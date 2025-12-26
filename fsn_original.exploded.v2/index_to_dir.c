/**
 * index_to_dir
 *
 * Extracted from fsn.c lines 52624-52629
 * Category: Filesystem
 */

void index_to_dir(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411e5c):
     * Function: index_to_dir
     *
     * Looking at this assembly:
     * 1. **What it does**: Converts a flat index into a pointer to a directory entry. The index is split into two parts: bits 6+ select a block from a block table, bits 0-5 (masked with 0x3f = 63) select an entry within that block. Each entry is 120 bytes (index * 16 - index) * 8 = index * 120.
     * 2. **C pseudocode**:
     * ```c
     * DirEntry* index_to_dir(int index) {
     * int block_index = index >> 6;           // index / 64
     * int entry_index = index & 0x3f;         // index % 64
     * void** block_table = *dir_block_table;  // GP-30140 -> global block table ptr
     * char* block = block_table[block_index];
     * return (DirEntry*)(block + entry_index * 120);
     * }
     * ```
     * The structure size is 120 bytes, calculated as: `(i << 4) - i) << 3` = `(i * 15) * 8` = `i * 120`.
     */
halt_baddata();
}
