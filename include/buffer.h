/**
 * buffer.h - Header for buffer module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_BUFFER_H
#define FSN_BUFFER_H

#include "fsn_types.h"

void gl_swap_buffers(undefined1 param_1);
void glx_swap_buffers_wrapper(void);
void copy_buffer_data(int param_1,undefined4 *param_2);
void parse_data_buffer(int param_1,undefined4 param_2,int *param_3,int param_4);
void lookup_buffer_index(int param_1);
void write_data_buffer(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void read_file_buffer(int *param_1,int param_2,undefined1 *param_3,int param_4);

#endif /* FSN_BUFFER_H */
