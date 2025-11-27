/**
 * dir_simple.c - Simplified directory scanning implementation
 *
 * Phase 18: File System Arc - Directory Tree Population
 *
 * This provides working implementations of the directory functions
 * needed to populate topdir for visualization.
 *
 * Uses the proper 64-bit DirectoryNode struct from fsn_dir.h.
 */

#include "fsn_types.h"
#include "fsn_state.h"
#include "fsn_dir.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include <math.h>

/* Memory pool for directory entries */
static DirectoryNode *entry_pool = NULL;
static int pool_size = 0;
static int pool_used = 0;
static short next_name_index = 1;

/* Forward declarations */
static void scan_directory_recursive(DirectoryNode *entry, const char *path, int depth);
static void layout_directory(DirectoryNode *entry, float x, float y, int depth);

/**
 * allocate_directory_entry - Allocate a new directory entry
 */
undefined4 *allocate_directory_entry(void)
{
    DirectoryNode *entry;

    /* Grow pool if needed */
    if (pool_used >= pool_size) {
        int new_size = pool_size ? pool_size * 2 : 256;
        DirectoryNode *new_pool = realloc(entry_pool, new_size * sizeof(DirectoryNode));
        if (!new_pool) {
            fprintf(stderr, "allocate_directory_entry: out of memory\n");
            return NULL;
        }
        entry_pool = new_pool;
        pool_size = new_size;
    }

    entry = &entry_pool[pool_used++];
    memset(entry, 0, sizeof(DirectoryNode));

    /* Set name index for picking */
    entry->name_index = next_name_index++;

    /* Set visibility flag (bit 28 = visible) */
    entry->render_flags = DIR_FLAG_VISIBLE;

    return (undefined4 *)entry;
}

/**
 * hash_filename - Store filename in entry
 */
undefined4 hash_filename(const char *filename)
{
    return (undefined4)(intptr_t)strdup(filename);
}

/**
 * create_root_directory - Create and populate the root directory tree
 */
void create_root_directory(char *param_1)
{
    struct stat st;
    char *path = param_1;
    DirectoryNode *root;

    fprintf(stderr, "create_root_directory: scanning %s\n", path);

    /* Verify path exists and is a directory */
    if (lstat(path, &st) < 0) {
        fprintf(stderr, "create_root_directory: cannot stat %s\n", path);
        return;
    }

    if (!S_ISDIR(st.st_mode)) {
        fprintf(stderr, "create_root_directory: %s is not a directory\n", path);
        return;
    }

    /* Allocate root entry */
    root = (DirectoryNode *)allocate_directory_entry();
    if (root == NULL) {
        fprintf(stderr, "create_root_directory: allocation failed\n");
        return;
    }

    /* Set root entry fields */
    root->name = strdup(path);
    root->name_len = strlen(path);
    root->parent = NULL;
    root->flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;
    root->render_flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;

    /* Set initial position at origin */
    root->pos_x = 0.0f;
    root->pos_y = 0.0f;
    root->height = 1.0f;

    /* Scan the directory tree (limited depth for performance) */
    scan_directory_recursive(root, path, 0);

    /* Layout the tree in 3D space */
    layout_directory(root, 0.0f, 0.0f, 0);

    /* Set global topdir */
    topdir = (undefined4 *)root;

    fprintf(stderr, "create_root_directory: scanned %d entries, topdir=%p\n",
            pool_used, (void *)topdir);
}

/**
 * scan_directory_recursive - Recursively scan directory contents
 */
static void scan_directory_recursive(DirectoryNode *entry, const char *path, int depth)
{
    DIR *dir;
    struct dirent *ent;
    struct stat st;
    char fullpath[1024];
    DirectoryNode **children = NULL;
    int child_count = 0;
    int child_capacity = 0;
    int file_count = 0;

    /* Limit recursion depth for performance */
    if (depth > 3) {
        return;
    }

    dir = opendir(path);
    if (dir == NULL) {
        return;
    }

    /* Scan entries */
    while ((ent = readdir(dir)) != NULL) {
        /* Skip . and .. */
        if (ent->d_name[0] == '.' &&
            (ent->d_name[1] == '\0' ||
             (ent->d_name[1] == '.' && ent->d_name[2] == '\0'))) {
            continue;
        }

        snprintf(fullpath, sizeof(fullpath), "%s/%s", path, ent->d_name);
        if (lstat(fullpath, &st) < 0) {
            continue;
        }

        if (S_ISDIR(st.st_mode)) {
            /* Grow children array if needed */
            if (child_count >= child_capacity) {
                child_capacity = child_capacity ? child_capacity * 2 : 16;
                children = realloc(children, child_capacity * sizeof(DirectoryNode *));
            }

            /* Create child entry */
            DirectoryNode *child = (DirectoryNode *)allocate_directory_entry();
            if (child == NULL) continue;

            child->name = strdup(ent->d_name);
            child->name_len = strlen(ent->d_name);
            child->parent = entry;
            child->flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;
            child->render_flags = DIR_FLAG_VISIBLE | DIR_FLAG_DIRECTORY;

            children[child_count++] = child;

            /* Recurse into subdirectory */
            scan_directory_recursive(child, fullpath, depth + 1);
        } else {
            file_count++;
        }
    }
    closedir(dir);

    /* Store children in parent */
    entry->child_count = child_count;
    entry->children = children;
    entry->file_count = file_count;
    entry->total_size = file_count * 4096;  /* Estimate */
}

/**
 * layout_directory - Position directory entries in 3D space
 */
static void layout_directory(DirectoryNode *entry, float x, float y, int depth)
{
    int child_count = entry->child_count;
    DirectoryNode **children = entry->children;
    float spacing = 3.0f / (depth + 1);
    float angle_step = (child_count > 0) ? (3.14159f * 2.0f / child_count) : 0;
    float radius = spacing * 2.0f;
    int i;

    /* Set this directory's position */
    entry->pos_x = x;
    entry->pos_y = y;
    entry->height = 1.0f + depth * 0.5f;

    /* Position children in a circle around this directory */
    for (i = 0; i < child_count && children != NULL; i++) {
        DirectoryNode *child = children[i];
        float angle = angle_step * i;
        float child_x = x + radius * cosf(angle);
        float child_y = y + radius * sinf(angle);

        /* Store offset from parent */
        child->offset_x = child_x - x;
        child->offset_y = child_y - y;

        /* Recurse to layout children */
        layout_directory(child, child_x, child_y, depth + 1);
    }
}
