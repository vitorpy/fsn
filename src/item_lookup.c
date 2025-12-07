/**
 * item_lookup.c - Lookup helper for name_index → DirectoryNode mapping
 *
 * Implements get_item_by_index using a recursive search from the global
 * top-level directory node. This replaces the generated stub so picking
 * code can resolve selection IDs to actual nodes.
 */

#include "fsn_types.h"
#include "fsn_stubs_generated.h"
#include "fsn_dir.h"
#include "fsn_state.h"
#include <stdint.h>

static DirectoryNode *find_node_recursive(DirectoryNode *node, int name_index) {
    if (node == NULL) {
        return NULL;
    }
    if (node->name_index == name_index) {
        return node;
    }

    /* Search ternary children */
    if (node->child_center) {
        DirectoryNode *found = find_node_recursive(node->child_center, name_index);
        if (found) return found;
    }
    if (node->child_left) {
        DirectoryNode *found = find_node_recursive(node->child_left, name_index);
        if (found) return found;
    }
    if (node->child_right) {
        DirectoryNode *found = find_node_recursive(node->child_right, name_index);
        if (found) return found;
    }

    /* Search files array */
    if (node->files_array && node->num_files > 0) {
        for (int i = 0; i < node->num_files; i++) {
            DirectoryNode *child = node->files_array[i];
            DirectoryNode *found = find_node_recursive(child, name_index);
            if (found) return found;
        }
    }

    return NULL;
}

int get_item_by_index(int name_index)
{
    if (name_index <= 0) {
        return 0;
    }

    DirectoryNode *root = (DirectoryNode *)(uintptr_t)topdir;
    DirectoryNode *found = find_node_recursive(root, name_index);
    return (int)(intptr_t)found;
}
