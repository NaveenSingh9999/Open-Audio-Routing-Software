#!/bin/bash

# Open Audio Router - Build Script
# iOS-inspired audio device manager for Linux

set -e

echo "🎵 Building Open Audio Router..."

# Create build directory
mkdir -p build
cd build

# Configure with CMake
echo "⚙️ Configuring build..."
cmake .. \
    -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

# Build the application
echo "🔨 Building application..."
make -j$(nproc)

echo "✅ Build complete!"
echo "📁 Executable: ./build/open-audio-router"
echo ""
echo "To run the application:"
echo "  cd build && ./open-audio-router"
echo ""
echo "To install system-wide:"
echo "  sudo make install"
