/**
 * FUN_00411c04
 *
 * Extracted from fsn.c lines 52556-52577
 * Ghidra address: 0x00411c04
 * Category: Memory
 */

void FUN_00411c04(void)

{
  if ((DAT_100001f4 == (void *)0x0) || (DAT_10016b14 <= DAT_100001f4)) {
    DAT_100001f4 = calloc(0x40,0x78);
    DAT_10016b14 = (void *)((int)DAT_100001f4 + 0x1e00);
    if (DAT_100001f8 == 0) {
      dir_index = malloc(0x40);
      DAT_10016b18 = 0x10;
    }
    else if (DAT_100001f8 == DAT_10016b18) {
      DAT_10016b18 = DAT_10016b18 + 0x10;
      dir_index = realloc(dir_index,DAT_10016b18 * 4);
    }
    *(void **)((int)dir_index + DAT_100001f8 * 4) = DAT_100001f4;
    DAT_100001f8 = DAT_100001f8 + 1;
  }
  *(undefined4 *)((int)DAT_100001f4 + 0x5c) = DAT_100001fc;
  DAT_100001f4 = (void *)((int)DAT_100001f4 + 0x78);
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00411c04):
     * Function: FUN_00411c04
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * Allocates a new node (120 bytes) from a pool, stores a value into the node, adds the node pointer to an array, and increments both the node count and array index. This is a pool allocator "alloc and register" operation.
     * **C pseudocode:**
     * ```c
     * // GP-32664 is curcontext, GP-30140 is a node pointer array
     * // curcontext+500 = next_free_ptr, +504 = node_count, +508 = generation/id
     * int *node_array = gp_array;           // GP-30140
     * int idx = curcontext->node_count;     // offset 504
     * int *new_node = curcontext->next_free_ptr;  // offset 500
     * *node_array = result;                 // store result from earlier code
     * node_array[idx] = (int)new_node;      // add node to array
     * curcontext->node_count = idx + 1;     // increment count
     * int gen = curcontext->generation;     // offset 508
     * new_node[29] = gen;                   // store generation at node+116 (0x74)
     * curcontext->next_free_ptr = new_node + 30;  // advance by 120 bytes
     * curcontext->generation = gen + 1;     // increment generation
     * return new_node;  // v0 = a0 before increment
     * ```
     */
halt_baddata();
}
