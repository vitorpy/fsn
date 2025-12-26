/**
 * FindInfoByType__14ByteCodeLoaderFPc
 *
 * Extracted from fsn.c lines 73056-73068
 * Category: Other
 */

void FindInfoByType__14ByteCodeLoaderFPc(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = strcmp(param_2,(char *)*puVar2), iVar1 != 0))) {
    puVar2 = (undefined4 *)puVar2[0x1a];
  }
                    // WARNING: Bad instruction - Truncating control flow here
      /*
     * BADDATA ANALYSIS (from binary @ 0x00434cc4):
     * Function: FindInfoByType__14ByteCodeLoaderFPc
     *
     * ## Analysis
     * **What it does:**
     * Searches a linked list starting at `this->head` (offset 0) for a node whose first field (offset 0) matches the input string `type` using strcmp. Returns the matching node or NULL. Nodes are linked via offset 104 (0x68).
     * **C pseudocode:**
     * ```c
     * // GP offset -32564 (0x80cc) = strcmp
     * void* FindInfoByType(ByteCodeLoader* this, char* type) {
     * void* node = this->head;  // offset 0
     * while (node != NULL) {
     * char* node_type = *(char**)node;  // offset 0 of node
     * if (strcmp(type, node_type) == 0) {
     * return node;
     * }
     * node = *(void**)((char*)node + 104);  // next pointer at offset 0x68
     * }
     * return NULL;
     * }
     * ```
     */
halt_baddata();
}
