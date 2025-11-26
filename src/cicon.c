/**
 * cicon.c - Extracted from fsn.c using tree-sitter
 *
 * AS-IS extraction preserving all decompilation artifacts.
 */

#include "cicon.h"
#include "fsn_types.h"
#include "fsn_state.h"

void cIconInit(undefined4 param_1)

{
  parse_context_data(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cIconToTypeName(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cIconGetValue(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cFindIconByName(undefined4 param_1)

{
  load_context_block(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cFindIconByType(undefined4 param_1)

{
  load_context_data(&context_data_block,param_1);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cGetBounds(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38);
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
  *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x40);
  *param_5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x44);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}

void cSetState(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6)

{
  setState__13ByteCodedIconFiN41(param_1,param_2,param_3,param_4,param_5,param_6);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}
