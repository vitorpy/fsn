/**
 * FindIconByType__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 72876-72894
 * Category: Other
 */

void FindIconByType__14ByteCodeLoaderFPc(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x004349ec):
     * Function: FindIconByType__14ByteCodeLoaderFPc
     *
     * Looking at this assembly:
     * 1. **What it does:** Walks a linked list starting at `this->head` (offset 0), comparing each node's name (offset 0) against the input string using strcmp. Returns the matching node, or calls a function (likely error/default handler) with NULL and the last checked node if not found. Next pointer is at offset 104 (0x68).
     * 2. **C pseudocode:**
     * ```c
     * IconNode* FindIconByType(ByteCodeLoader* this, char* type) {
     * IconNode* node = this->head;
     * while (node != NULL) {
     * if (strcmp(type, node->name) == 0) {
     * return node;
     * }
     * node = node->next;  // offset 0x68
     * }
     * return default_icon_handler(NULL, node);  // gp-0x8864
     * }
     * ```
     * GP offsets: -32564 (0x80cc) = strcmp, -30620 (0x8864) = fallback/default handler function
     */
halt_baddata();
    }
    iVar1 = strcmp(param_2,(char *)*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
  FUN_00435034(0,puVar2);
      /*
     * BADDATA ANALYSIS (from binary @ 0x004349ec):
     * Function: FindIconByType__14ByteCodeLoaderFPc
     *
     * Looking at this assembly snippet:
     * **What it does:**
     * This is the tail end of a linked-list traversal loop. It calls a function via GP-30620 with args (NULL, s0), then either returns that result OR continues walking a linked list at offset 0x68, returning NULL if the list ends.
     * **C pseudocode:**
     * ```c
     * // ... earlier loop at 434a1c iterates while s0 != NULL ...
     * // When match found:
     * return some_function(NULL, s0);  // GP[-30620] - likely creates/returns icon
     * // Loop continuation (at 434a54):
     * next_node:
     * s0 = s0->next;  // offset 0x68 in node struct
     * if (s0 != NULL) goto loop_top;  // back to 434a1c
     * return NULL;  // list exhausted, icon not found
     * ```
     * GP offset -30620 (0x8864) likely resolves to an icon creation or lookup function. The structure at s0 has a `next` pointer at offset 0x68 (104 bytes in).
     */
halt_baddata();
}
