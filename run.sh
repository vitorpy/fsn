#!/bin/bash
# Run FSN with resources loaded from the project directory
cd "$(dirname "$0")"
XAPPLRESDIR="$(pwd)/resources" ./build/fsn "$@"
