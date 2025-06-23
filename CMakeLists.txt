cmake_minimum_required(VERSION 3.21)

project(OpenAudioRouter VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Qt MOC and RCC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Set executable name
set(EXECUTABLE_NAME open-audio-router)

# Find required Qt6 components
find_package(Qt6 REQUIRED COMPONENTS
    Core
    Quick
    QuickControls2
    Widgets
    Multimedia
    DBus
    Svg
)

# Find PulseAudio
find_package(PkgConfig REQUIRED)
pkg_check_modules(PULSEAUDIO REQUIRED libpulse)

# Source files
set(SOURCES
    src/main.cpp
    src/audio/AudioManager.cpp
    src/audio/PulseAudioBackend.cpp
    src/models/DeviceListModel.cpp
    src/models/ApplicationListModel.cpp
    src/controllers/MainController.cpp
    src/controllers/DeviceController.cpp
    src/controllers/RoutingController.cpp
    src/controllers/ProfileController.cpp
    src/utils/AudioDevice.cpp
    src/utils/AudioApplication.cpp
    src/utils/SystemTray.cpp
)

set(HEADERS
    src/audio/AudioManager.h
    src/audio/PulseAudioBackend.h
    src/models/DeviceListModel.h
    src/models/ApplicationListModel.h
    src/controllers/MainController.h
    src/controllers/DeviceController.h
    src/controllers/RoutingController.h
    src/controllers/ProfileController.h
    src/utils/AudioDevice.h
    src/utils/AudioApplication.h
    src/utils/SystemTray.h
)

# QML files
set(QML_FILES
    qml/main.qml
    qml/components/DeviceCard.qml
    qml/components/VolumeSlider.qml
    qml/components/AudioMeter.qml
    qml/components/AppRoutingItem.qml
    qml/components/ProfileCard.qml
    qml/components/TabButton.qml
    qml/views/DevicesView.qml
    qml/views/RoutingView.qml
    qml/views/ProfilesView.qml
)

# Create executable
qt6_add_executable(${EXECUTABLE_NAME} ${SOURCES} ${HEADERS})

# Add QML module
qt6_add_qml_module(${EXECUTABLE_NAME}
    URI OpenAudioRouter
    VERSION 1.0
    QML_FILES ${QML_FILES}
    RESOURCES 
        resources/icons.qrc
        resources/styles.qrc
)

# Link libraries
target_link_libraries(${EXECUTABLE_NAME} PRIVATE
    Qt6::Core
    Qt6::Quick
    Qt6::QuickControls2
    Qt6::Widgets
    Qt6::Multimedia
    Qt6::DBus
    Qt6::Svg
    ${PULSEAUDIO_LIBRARIES}
)

# Include directories
target_include_directories(${EXECUTABLE_NAME} PRIVATE
    src
    ${PULSEAUDIO_INCLUDE_DIRS}
)

# Compiler flags
target_compile_options(${EXECUTABLE_NAME} PRIVATE
    ${PULSEAUDIO_CFLAGS_OTHER}
)

# Install rules
install(TARGETS ${EXECUTABLE_NAME}
    RUNTIME DESTINATION bin
)

install(FILES resources/open-audio-router.desktop
    DESTINATION share/applications
)

install(FILES resources/icons/open-audio-router.svg
    DESTINATION share/icons/hicolor/scalable/apps
)
