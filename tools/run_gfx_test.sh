#!/bin/bash
# Run a graphics test case using the mock IGL layer.
# Usage: ./tools/run_gfx_test.sh tests/my_test.c

if [ -z "$1" ]; then
    echo "Usage: $0 <test_file.c>"
    exit 1
fi

TEST_FILE="$1"
OUTPUT_BIN="tests/runner_$(basename "$TEST_FILE" .c)"

# Compile with Mock IGL and FSN State
# We include X11/Motif libs because fsn_state.c depends on them.
gcc -g -O0 \
    -Iinclude \
    -Isrc \
    -o "$OUTPUT_BIN" \
    "$TEST_FILE" \
    tools/mock_fsn_igl.c \
    src/fsn_state.c \
    -lXm -lXt -lX11 -lm \
    -Wno-incompatible-pointer-types

if [ $? -eq 0 ]; then
    echo "Running $OUTPUT_BIN..."
    echo "----------------------------------------"
    "$OUTPUT_BIN"
else
    echo "Compilation failed."
    exit 1
fi
