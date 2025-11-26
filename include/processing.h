/**
 * processing.h - Header for processing module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_PROCESSING_H
#define FSN_PROCESSING_H

#include "fsn_types.h"

void process_search_results(void);
void process_directory_data(int param_1);
void process_child_directory(int param_1);
void process_child_recursive(undefined4 *param_1);
void process_data_section(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void process_data_recursive(undefined4 param_1,undefined4 param_2,int param_3,int *param_4);
void process_file_data(int param_1,undefined4 param_2);

#endif /* FSN_PROCESSING_H */
