/**
 * tree.h - Header for tree module
 *
 * Extracted from fsn.c using tree-sitter
 */

#ifndef FSN_TREE_H
#define FSN_TREE_H

#include "fsn_types.h"

void calculate_tree_layout(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
void layout_tree_recursive(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void dump_directory_tree(FILE *param_1,undefined4 *param_2,int param_3);
void pruneSubTree(int param_1);
void pruneTree(int param_1);
void unpruneTree(int param_1);
void process_tree_node(ulonglong param_1,int param_2,char param_3);
void update_tree_bounds(int param_1);
void free_child_nodes(int param_1);
void update_child_nodes(int param_1);
void traverse_directories(int param_1);

#endif /* FSN_TREE_H */
