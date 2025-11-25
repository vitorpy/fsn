/**
 * fsn.h
 *
 * Main header file for FSN (File System Navigator).
 * Include this file to get all FSN types, libraries, and APIs.
 */

#ifndef FSN_H
#define FSN_H

/* FSN core headers */
#include "fsn_types.h"    /* Basic type definitions */
#include "fsn_std.h"      /* Standard C library includes */
#include "fsn_motif.h"    /* X11/Motif UI toolkit */
#include "fsn_gl.h"       /* OpenGL/GLM graphics */

/* FSN version information */
#define FSN_VERSION_MAJOR  0
#define FSN_VERSION_MINOR  1
#define FSN_VERSION_PATCH  0
#define FSN_VERSION_STRING "0.1.0-dev"

/* FSN configuration constants */
#define FSN_MAX_PATH       4096
#define FSN_MAX_FILENAME   256
#define FSN_MAX_DEPTH      64     /* Maximum directory tree depth */

/* Forward declarations for FSN-specific types (to be defined in Phase 3/4) */
typedef struct fsn_node fsn_node_t;
typedef struct fsn_tree fsn_tree_t;
typedef struct fsn_config fsn_config_t;
typedef struct fsn_state fsn_state_t;

#endif /* FSN_H */
