#!/bin/bash

echo "🔍 Open Audio Router - Build Validation"
echo "======================================"

# Check if executable exists
if [ -f "./build/open-audio-router" ]; then
    echo "✅ Executable exists: ./build/open-audio-router"
    echo "📊 File size: $(du -h ./build/open-audio-router | cut -f1)"
    echo "🔧 File type: $(file ./build/open-audio-router)"
else
    echo "❌ Executable not found"
    exit 1
fi

# Check dependencies
echo ""
echo "📚 Checking dependencies:"
ldd ./build/open-audio-router | grep -E "(Qt6|pulse)" | head -10

echo ""
echo "🎯 Build validation complete!"
echo ""
echo "ℹ️  To run on a system with display:"
echo "   cd build && ./open-audio-router"
echo ""
echo "ℹ️  To install system-wide:"
echo "   cd build && sudo make install"
