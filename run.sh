#!/bin/bash

# Determine directory where the script is located
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Define possible binary paths
RELEASE_BIN="${SCRIPT_DIR}/out/build/linux-amd64-release/svr07"
DEBUG_BIN="${SCRIPT_DIR}/out/build/linux-amd64-debug/svr07"
LOCAL_BIN="${SCRIPT_DIR}/svr07"

# Choose the binary
if [ -f "$LOCAL_BIN" ]; then
    GAME_BIN="$LOCAL_BIN"
elif [ -f "$RELEASE_BIN" ]; then
    GAME_BIN="$RELEASE_BIN"
elif [ -f "$DEBUG_BIN" ]; then
    GAME_BIN="$DEBUG_BIN"
else
    echo "Error: WWE SmackDown vs. Raw 2007 binary not found."
    echo "Please download the compiled binary and place it in this directory as 'svr07',"
    echo "or compile it from source using the instructions in README.md."
    exit 1
fi

# Check assets folder
ASSETS_DIR="${SCRIPT_DIR}/assets"
if [ ! -d "$ASSETS_DIR" ]; then
    echo "Error: 'assets' directory not found at: $ASSETS_DIR"
    echo "Please extract your copy of WWE SmackDown vs. Raw 2007 (Xbox 360) files"
    echo "and place them inside a folder named 'assets' in this directory."
    exit 1
fi

# Ensure executable permissions
chmod +x "$GAME_BIN"

# Start the game
echo "Starting WWE SmackDown vs. Raw 2007..."
exec "$GAME_BIN" "$ASSETS_DIR"
