# Open Audio Routing Software

**A modern, iOS-inspired audio device manager and router for Linux (and beyond).**

<div align="center">

![Open Audio Router](resources/app-icon.svg)

*Making audio routing as simple and elegant as iOS*

</div>

---

## 🎯 Overview

Open Audio Routing Software is a cross-platform desktop application built in C++ using Qt6, designed to make audio input/output device management and routing effortless for all users. Inspired by the simplicity and elegance of iOS, the app brings intuitive audio controls, live device switching, and per-application routing to Linux desktops.

## ✨ Key Features

### 🎵 **Live Device Management**
- Instantly view all detected audio input (microphones) and output (speakers, headphones, Bluetooth devices)
- Real-time device discovery and updates
- Smart device icons based on device type and connection

### 🔄 **One-Tap Device Switching**
- Tap any device to set as the default input or output
- Smooth, iOS-style animations and transitions
- System tray quick-access menu for instant switching

### 🎛️ **Per-App Audio Routing**
- Assign audio streams from specific applications to different devices
- Drag-and-drop interface for intuitive routing
- Live application monitoring and control

### 🔊 **Volume and Mute Controls**
- Adjust master, per-device, and per-app volumes with iOS-style sliders
- One-tap mute/unmute for any device or application
- Visual feedback and smooth animations

### 📋 **Audio Profiles**
- Save and recall custom audio setups for different workflows
- Perfect for work, gaming, meetings, or entertainment setups
- JSON-based profile storage with instant switching

### 📊 **Live Audio Meters**
- Real-time visualization of audio levels for inputs/outputs
- Peak level indicators and visual feedback
- Color-coded meters for easy monitoring

### 🚀 **Quick Actions**
- System tray mini-panel for instant device switching
- Notification support for device changes
- Background operation with minimal resource usage

## 🎨 UI/UX

- **Framework:** Qt6 (C++/QML) for modern, responsive UI
- **Design:** iOS-inspired with rounded corners, clean typography, and intuitive controls
- **Navigation:** Bottom tab bar with "Devices", "Routing", and "Profiles" sections
- **Theme:** Light theme with accent colors, soft shadows, and smooth animations
- **Accessibility:** Large, touch-friendly controls and colorblind-friendly palette

## 🛠️ Technical Stack

- **Audio Backend:** PulseAudio (libpulse) for Linux audio system integration
- **GUI Framework:** Qt6 (C++/QML) with custom iOS-style components
- **Architecture:** Modern MVC pattern with controllers, models, and views
- **System Integration:** XDG autostart, Qt SystemTray, and desktop notifications
- **Build System:** CMake with automated dependency management

## 🚀 Getting Started

### Prerequisites

- **Qt6** (Core, Quick, QuickControls2, Widgets, Multimedia, DBus, Svg)
- **PulseAudio** development libraries (`libpulse-dev`)
- **CMake** 3.21 or higher
- **C++17** compatible compiler

### Ubuntu/Debian Installation

```bash
# Install dependencies
sudo apt update
sudo apt install qt6-base-dev qt6-declarative-dev qt6-tools-dev \
                 qt6-multimedia-dev qt6-svg-dev libpulse-dev \
                 cmake build-essential pkg-config

# Clone repository
git clone https://github.com/yourusername/Open-Audio-Routing-Software.git
cd Open-Audio-Routing-Software

# Build and run
./build.sh
cd build && ./OpenAudioRouter
```

### Manual Build

```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make -j$(nproc)
sudo make install  # Optional: install system-wide
```

## 📱 Example Screens

### 1. **Devices Tab**
- Clean list of all audio devices with device-specific icons
- One-tap switching with visual feedback
- Volume sliders and mute toggles for each device
- Real-time audio level meters

### 2. **Routing Tab**
- Visual representation of running applications
- Drag-and-drop app routing to different devices
- Per-application volume and mute controls
- Live routing status and device assignments

### 3. **Profiles Tab**
- Create, save, and manage audio setups
- Quick profile switching for different scenarios
- Profile templates for common use cases
- Export/import functionality for sharing setups

## 👥 User Story

> *Sarah plugs in her USB microphone for a podcast recording. Open Audio Router instantly detects it and shows a notification: "New input detected: Blue Yeti. Use as main mic?" She taps "Yes" and the system immediately switches. Later, while listening to music, she drags Spotify to her Bluetooth headphones while keeping video calls routed to her speakers—all with smooth, iOS-style animations.*

## 🗺️ Roadmap

### Current Status (v1.0)
- ✅ Complete PulseAudio backend integration
- ✅ iOS-inspired Qt6/QML interface
- ✅ Device management and switching
- ✅ Application routing controls
- ✅ Profile system with persistence
- ✅ System tray integration

### Planned Features (v1.1+)
- 🔄 **PipeWire Support** - Modern Linux audio server compatibility
- 🪟 **Windows Support** - Core Audio API integration
- 🎚️ **Advanced EQ** - Per-device and per-app equalizers
- 🌐 **Network Audio** - Stream audio to remote devices
- 🎨 **Themes** - Dark mode and custom color schemes
- 🔌 **Plugin System** - Extensible audio processing pipeline

## 🤝 Contributing

We welcome contributions! Please see our [Contributing Guidelines](CONTRIBUTING.md) for details.

### Development Setup

```bash
# Fork and clone the repository
git clone https://github.com/yourusername/Open-Audio-Routing-Software.git

# Install development dependencies
sudo apt install qt6-base-dev-tools qtcreator

# Open in Qt Creator or build manually
./build.sh
```

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- **Qt Project** - For the excellent Qt6 framework
- **PulseAudio Team** - For the robust Linux audio system
- **iOS Design Team** - For the inspiration behind our UI/UX design
- **Open Source Community** - For tools, libraries, and feedback

---

<div align="center">

**Made with ❤️ for the Linux audio community**

[Report Bug](https://github.com/yourusername/Open-Audio-Routing-Software/issues) • [Request Feature](https://github.com/yourusername/Open-Audio-Routing-Software/issues) • [Contribute](CONTRIBUTING.md)

</div>