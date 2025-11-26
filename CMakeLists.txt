cmake_minimum_required(VERSION 3.15)
project(fsn C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

# Compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -O0")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O3")

# Find required libraries
find_package(X11 REQUIRED)
find_package(OpenGL REQUIRED)

# Find OpenMotif (optional for now - required in Phase 6)
find_library(XM_LIBRARY Xm)
find_library(XT_LIBRARY Xt)
find_path(XM_INCLUDE_DIR Xm/Xm.h)

if(NOT XM_LIBRARY OR NOT XT_LIBRARY OR NOT XM_INCLUDE_DIR)
    message(WARNING "OpenMotif not found - will be required for Phase 6 (Integration & Build)")
    message(WARNING "Install with: sudo pacman -S motif  (or apt-get install libmotif-dev)")
endif()

# Find GLM (header-only library)
find_package(glm QUIET)
if(NOT glm_FOUND)
    find_path(GLM_INCLUDE_DIR glm/glm.hpp)
    if(GLM_INCLUDE_DIR)
        message(STATUS "Found GLM: ${GLM_INCLUDE_DIR}")
    else()
        message(WARNING "GLM not found - will be needed for Phase 5 (raycasting)")
    endif()
endif()

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${X11_INCLUDE_DIR}
    ${OPENGL_INCLUDE_DIR}
)

if(XM_INCLUDE_DIR)
    include_directories(${XM_INCLUDE_DIR})
endif()

if(glm_FOUND OR GLM_INCLUDE_DIR)
    if(glm_FOUND)
        include_directories(${GLM_INCLUDE_DIRS})
    else()
        include_directories(${GLM_INCLUDE_DIR})
    endif()
endif()

# FSN IrisGL Compatibility Layer (64-bit safe SGI GL to OpenGL)
set(FSN_IGL_SOURCES
    src/fsn_igl.c
)

add_library(fsn_igl STATIC ${FSN_IGL_SOURCES})
target_link_libraries(fsn_igl
    ${OPENGL_LIBRARIES}
)
target_include_directories(fsn_igl PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${OPENGL_INCLUDE_DIR}
)

# Source files (Phase 6: Full integration)
# Files with Ghidra artifacts (unaff_gp, code**) need cleanup before enabling
set(FSN_SOURCES_CLEAN
    src/checks.c
    src/cicon.c
    src/color.c
    src/colormap.c
    src/context_funcs.c
    src/convert.c
    src/delete.c
    src/drawing.c
    src/dump.c
    src/edit.c
    src/fam_monitor.c
    src/fsn_state.c
    src/highlight.c
    src/landscape.c
    src/main_entry.c
    src/messaging.c
    src/movement.c
    src/persistence.c
    src/preferences.c
    src/rule_info.c
    src/scan.c
    src/sgi_utils.c
    src/sorting.c
    src/string_utils.c
    src/swapping.c
    src/warp.c
    src/window.c
    src/zoom.c
)

# Files needing Ghidra artifact cleanup (53 files)
set(FSN_SOURCES_NEED_CLEANUP
    src/buffer.c
    src/bytecode.c
    src/calc.c
    src/clipboard.c
    src/context.c
    src/database.c
    src/database_io.c
    src/dir_core.c
    src/directory.c
    src/display.c
    src/events.c
    src/fam.c
    src/file_core.c
    src/file_ops.c
    src/finalize.c
    src/gl_utils.c
    src/help.c
    src/icons.c
    src/init.c
    src/interpreter.c
    src/io.c
    src/items.c
    src/layout.c
    src/legend.c
    src/main.c
    src/marks.c
    src/menus.c
    src/messages.c
    src/network.c
    src/overview.c
    src/panels.c
    src/pathutil.c
    src/picking.c
    src/position.c
    src/processing.c
    src/refresh.c
    src/rendering.c
    src/reset.c
    src/resources.c
    src/search.c
    src/search_func.c
    src/selection.c
    src/selection2.c
    src/setup.c
    src/state.c
    src/status.c
    src/tree.c
    src/view_camera.c
    src/viewport.c
    src/visibility.c
    src/widget.c
)

# Stub implementations
set(FSN_STUBS
    src/stubs.c
)

# Start with clean files only + stubs
set(FSN_SOURCES ${FSN_SOURCES_CLEAN} ${FSN_STUBS})

# Phase 5: Test that headers compile correctly
add_executable(test_headers
    src/test_headers.c
    src/fsn_state.c
    src/fam_monitor.c
)
target_link_libraries(test_headers
    fsn_igl
    ${XM_LIBRARY}
    ${XT_LIBRARY}
    ${X11_LIBRARIES}
    ${OPENGL_LIBRARIES}
    m
)

# Phase 5: Test fsn_igl compilation
add_executable(test_igl
    src/test_igl.c
)
target_link_libraries(test_igl
    fsn_igl
    ${OPENGL_LIBRARIES}
    m
)

# Main FSN executable (Phase 6: Integration & Build)
add_executable(fsn ${FSN_SOURCES})
target_link_libraries(fsn
    fsn_igl
    ${XM_LIBRARY}
    ${XT_LIBRARY}
    ${X11_LIBRARIES}
    ${OPENGL_LIBRARIES}
    m
)

# Installation
install(TARGETS fsn DESTINATION bin)

message(STATUS "FSN Build Configuration:")
message(STATUS "  Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "  X11 libraries: ${X11_LIBRARIES}")
message(STATUS "  OpenMotif library: ${XM_LIBRARY}")
message(STATUS "  Xt library: ${XT_LIBRARY}")
message(STATUS "  OpenGL libraries: ${OPENGL_LIBRARIES}")
message(STATUS "")
message(STATUS "Phase 6: Full FSN build enabled")
message(STATUS "  Targets: fsn, fsn_igl, test_headers, test_igl")
