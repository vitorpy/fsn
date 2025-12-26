/**
 * FUN_004349f8
 *
 * Extracted from fsn.c lines 72900-72919
 * Ghidra address: 0x004349f8
 * Category: Other
 */

void FUN_004349f8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_gp;
  
  puVar2 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
                    // WARNING: Bad instruction - Truncating control flow here
          /*
     * BADDATA ANALYSIS (from binary @ 0x004349f8):
     * Function: FUN_004349f8
     *
     * Looking at the assembly:
     * 1. **What it does**: Iterates through a linked list (next pointer at offset +0x68/104), calling strcmp on each node's string field (offset 0) against the search parameter. When strcmp returns 0 (match), calls another function (likely returning the found node). Returns NULL if not found.
     * 2. **C pseudocode**:
     * ```c
     * void* FindIconByType(void* list_head, char* type_name) {
     * IconNode* node = *(IconNode**)list_head;  // dereference to get first node
     * while (node != NULL) {
     * if (strcmp(type_name, node->name) == 0) {  // gp-0x80cc = strcmp
     * return SomeCallback(NULL, node);        // gp-0x8864 = unknown func
     * }
     * node = node->next;  // offset 0x68 = next pointer
     * }
     * return NULL;
     * }
     * ```
     * The GP offsets: -32564 (0x80cc) is strcmp, -30620 (0x8864) is likely a callback/lookup function that returns the matched icon data.
     */
halt_baddata();
    }
    iVar1 = /* TODO: GP:-0x7f34 */ (**(code **)(unaff_gp + -0x7f34) /* -> EXTERNAL_0x0fabf768 */)(param_2,*puVar2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
  (**(code **)(unaff_gp + -0x779c) /* -> FUN_00435034 */)(0,puVar2) /* =FUN_00435034 */;
      /*
     * BADDATA ANALYSIS (from binary @ 0x004349f8):
     * Function: FUN_004349f8
     *
     * Looking at this assembly snippet:
     * **1. What it does:**
     * This is the tail end of a linked-list traversal loop. It calls a function via GP offset -30620 (0x8864) with args (0, s0), then either returns the result or continues iterating through a linked list at offset +104 (0x68) until NULL, returning NULL if not found.
     * **2. C pseudocode:**
     * ```c
     * // Inside a loop that started earlier...
     * result = gp_func_8864(0, s0);  // GP[-30620] - likely strcmp or match function
     * return result;
     * // Alternate path - continue linked list traversal:
     * s0 = s0->next;  // offset 0x68 (104 bytes into struct)
     * if (s0 != NULL) goto loop_top;
     * return NULL;
     * ```
     * The function name `FindIconByType__14ByteCodeLoaderFPc` (C++ mangled: `ByteCodeLoader::FindIconByType(char*)`) confirms this walks a linked list of icons comparing types, returning the matching icon or NULL. The GP call at offset -30620 is likely `strcmp` comparing the type string.
     */
halt_baddata();
}
