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

# Source files (to be populated as we modularize)
set(FSN_SOURCES
    # Phase 4: Module extraction in progress
    src/datastructures.c
    src/picking.c
    src/utility.c
    src/filesystem.c
    # TODO: Add more modules as extracted
    # src/graphics_gl.c
    # src/ui_motif.c
    # src/main.c
)

# Phase 2: Test that headers compile correctly
add_executable(test_headers src/test_headers.c)
target_link_libraries(test_headers
    ${XM_LIBRARY}
    ${XT_LIBRARY}
    ${X11_LIBRARIES}
    ${OPENGL_LIBRARIES}
    m
)

# Main executable (disabled until we have buildable source - Phase 6)
# add_executable(fsn ${FSN_SOURCES})
# target_link_libraries(fsn
#     ${XM_LIBRARY}
#     ${XT_LIBRARY}
#     ${X11_LIBRARIES}
#     ${OPENGL_LIBRARIES}
#     m
# )

# Installation
# install(TARGETS fsn DESTINATION bin)

message(STATUS "FSN Build Configuration:")
message(STATUS "  Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "  X11 libraries: ${X11_LIBRARIES}")
message(STATUS "  OpenMotif library: ${XM_LIBRARY}")
message(STATUS "  Xt library: ${XT_LIBRARY}")
message(STATUS "  OpenGL libraries: ${OPENGL_LIBRARIES}")
message(STATUS "")
message(STATUS "Phase 2: test_headers target enabled")
message(STATUS "Main fsn target will be enabled in Phase 6")
