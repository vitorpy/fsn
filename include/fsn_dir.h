/**
 * fsn_dir.h - Directory node structure for 64-bit systems
 *
 * Phase 18: File System Arc
 *
 * This provides a proper 64-bit safe directory entry structure
 * that replaces the original 32-bit MIPS undefined4[] layout.
 */

#ifndef FSN_DIR_H
#define FSN_DIR_H

#include <stdint.h>

/**
 * DirectoryNode - 64-bit safe directory entry
 *
 * Original 32-bit MIPS layout offsets (for reference):
 *   +0x00: char* name
 *   +0x04: int name_len
 *   +0x08: void* parent
 *   +0x0c: int file_count
 *   +0x10: void** file_array
 *   +0x14: int child_count
 *   +0x18: void** child_array
 *   ...
 *   +0x34: float pos_x
 *   +0x38: float pos_y
 *   +0x3c: float height
 *   ...
 *   +0x4c: float offset_x
 *   +0x50: float offset_y
 *   ...
 *   +0x5e: short name_index
 *   ...
 *   +0x74: uint render_flags
 *
 * On 64-bit systems, pointers are 8 bytes, so we use a proper struct.
 */
typedef struct DirectoryNode {
    /* Offset 0x00-0x07: Name pointer (8 bytes on 64-bit) */
    char *name;

    /* Offset 0x08-0x0B: Name length */
    int name_len;

    /* Padding to align next pointer */
    int _pad1;

    /* Offset 0x10-0x17: Parent pointer */
    struct DirectoryNode *parent;

    /* Offset 0x18-0x1B: File count */
    int file_count;

    /* Padding */
    int _pad2;

    /* Offset 0x20-0x27: File array pointer */
    void *file_array;

    /*
     * ORIGINAL FSN TERNARY CHILDREN (32-bit offsets +0x28, +0x2c, +0x30):
     * Three fixed child positions for directory tree layout
     */
    struct DirectoryNode *child_center;   /* +0x28: Center child (x=0) */
    struct DirectoryNode *child_left;     /* +0x2c: Left child (x=-item_spacing_x) */
    struct DirectoryNode *child_right;    /* +0x30: Right child (x=+item_spacing_x) */

    /* Original +0x14/+0x18: num_files and files_array */
    int num_files;                        /* Number of file entries */
    int _pad3;
    struct DirectoryNode **files_array;   /* Array of file node pointers */

    /* Offset 0x38-0x3B: Total size */
    int total_size;

    /* Offset 0x3C-0x3F: Total blocks */
    int total_blocks;

    /* Offset 0x40-0x43: Modification time */
    int mtime;

    /* Offset 0x44-0x47: Flags */
    unsigned int flags;

    /* Offset 0x48-0x4F: Bounding box min */
    float bound_min_x;
    float bound_min_y;

    /* Offset 0x50-0x57: Position in 3D space */
    float pos_x;
    float pos_y;

    /* Offset 0x58-0x5B: Height/Z extent */
    float height;

    /* Offset 0x5C-0x5F: Reserved */
    float _reserved1;

    /* Offset 0x60-0x67: Offset from parent */
    float offset_x;
    float offset_y;

    /* Offset 0x68-0x6B: Reserved */
    float _reserved2;
    float _reserved3;

    /* Offset 0x70-0x73: Initial value */
    int initial_val;

    /* Offset 0x74-0x75: Selection name index for picking */
    short name_index;

    /* Offset 0x76-0x77: Reserved */
    short _reserved4;

    /* Offset 0x78-0x7B: Render flags (visibility/type) */
    unsigned int render_flags;

    /* Offset 0x7C-0x7D: Depth indicator */
    short depth_indicator;

    /* Offset 0x7E-0x7F: Reserved */
    short _reserved5;

} DirectoryNode;

/* Accessor macros - original FSN fields */
#define DIR_NAME(node)        ((node)->name)
#define DIR_NAME_LEN(node)    ((node)->name_len)
#define DIR_NUM_FILES(node)   ((node)->num_files)
#define DIR_FILES_ARRAY(node) ((node)->files_array)
#define DIR_CHILD_CENTER(node) ((node)->child_center)
#define DIR_CHILD_LEFT(node)  ((node)->child_left)
#define DIR_CHILD_RIGHT(node) ((node)->child_right)
#define DIR_POS_X(node)       ((node)->pos_x)
#define DIR_POS_Y(node)       ((node)->pos_y)
#define DIR_HEIGHT(node)      ((node)->height)
#define DIR_OFFSET_X(node)    ((node)->offset_x)
#define DIR_OFFSET_Y(node)    ((node)->offset_y)
#define DIR_NAME_INDEX(node)  ((node)->name_index)
#define DIR_RENDER_FLAGS(node) ((node)->render_flags)

/* Render flag bits */
#define DIR_FLAG_VISIBLE      0x10000000  /* Bit 28: visible */
#define DIR_FLAG_DIRECTORY    0x20000000  /* Bit 29: is directory */
#define DIR_FLAG_SELECTED     0x00080000  /* Bit 19: selected/active */

/* Check if visible (bit 28 set - original check: (flags << 3) < 0) */
#define DIR_IS_VISIBLE(node)  ((node)->render_flags & DIR_FLAG_VISIBLE)

/* Check if selected (bit 19 set - original check: (flags << 0xd) < 0) */
#define DIR_IS_SELECTED(node) ((node)->render_flags & DIR_FLAG_SELECTED)

/*=============================================================================
 * Height mode functions (dir_simple.c)
 *============================================================================*/
/* Recalculate heights for all nodes after displayHeight mode change */
extern void recalculate_tree_heights(void);

/*=============================================================================
 * Memory management (dir_simple.c)
 *============================================================================*/
/* Free all directory pool blocks - call on shutdown or rescan */
extern void free_directory_pool(void);

#endif /* FSN_DIR_H */
