import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import OpenAudioRouter 1.0

Rectangle {
    id: devicesView
    color: "transparent"
    
    ScrollView {
        anchors.fill: parent
        contentWidth: availableWidth
        
        Column {
            width: parent.width
            spacing: 24
            
            // Input Devices Section
            Column {
                width: parent.width
                spacing: 12
                
                Text {
                    text: "Input Devices"
                    font.pixelSize: 22
                    font.weight: Font.Bold
                    color: "#000000"
                    leftPadding: 4
                }
                
                // Input devices list
                Repeater {
                    model: deviceModel ? deviceModel.getInputDevices() : []
                    
                    DeviceCard {
                        width: parent.width
                        device: modelData
                        onDeviceSelected: {
                            deviceController.setDefaultDevice(device)
                            // Show feedback
                            if (device) {
                                mainWindow.statusBar.showMessage("Set " + device.description + " as default input", 2000)
                            }
                        }
                    }
                }
                
                // Placeholder if no devices
                Rectangle {
                    width: parent.width
                    height: 80
                    color: "#FFFFFF"
                    radius: 12
                    visible: !deviceModel || deviceModel.getInputDevices().length === 0
                    
                    Column {
                        anchors.centerIn: parent
                        spacing: 8
                        
                        Text {
                            text: "🎤"
                            font.pixelSize: 32
                            anchors.horizontalCenter: parent.horizontalCenter
                            opacity: 0.5
                        }
                        
                        Text {
                            text: "No input devices found"
                            font.pixelSize: 16
                            color: "#8E8E93"
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                    }
                }
            }
            
            // Output Devices Section
            Column {
                width: parent.width
                spacing: 12
                
                Text {
                    text: "Output Devices"
                    font.pixelSize: 22
                    font.weight: Font.Bold
                    color: "#000000"
                    leftPadding: 4
                }
                
                // Output devices list
                Repeater {
                    model: deviceModel ? deviceModel.getOutputDevices() : []
                    
                    DeviceCard {
                        width: parent.width
                        device: modelData
                        onDeviceSelected: {
                            deviceController.setDefaultDevice(device)
                            // Show feedback
                            if (device) {
                                mainWindow.statusBar.showMessage("Set " + device.description + " as default output", 2000)
                            }
                        }
                    }
                }
                
                // Placeholder if no devices
                Rectangle {
                    width: parent.width
                    height: 80
                    color: "#FFFFFF"
                    radius: 12
                    visible: !deviceModel || deviceModel.getOutputDevices().length === 0
                    
                    Column {
                        anchors.centerIn: parent
                        spacing: 8
                        
                        Text {
                            text: "🔊"
                            font.pixelSize: 32
                            anchors.horizontalCenter: parent.horizontalCenter
                            opacity: 0.5
                        }
                        
                        Text {
                            text: "No output devices found"
                            font.pixelSize: 16
                            color: "#8E8E93"
                            anchors.horizontalCenter: parent.horizontalCenter
                        }
                    }
                }
            }
        }
    }
}
