import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import OpenAudioRouter 1.0

Rectangle {
    id: deviceCard
    height: 100
    color: "#FFFFFF"
    radius: 12
    
    property var device
    property bool isSelected: device ? device.isDefault : false
    
    signal deviceSelected(var device)
    
    // Subtle shadow effect
    Rectangle {
        anchors.fill: parent
        anchors.margins: 1
        color: "transparent"
        radius: parent.radius
        border.color: isSelected ? "#007AFF" : "#E5E5EA"
        border.width: isSelected ? 2 : 1
    }
    
    RowLayout {
        anchors.fill: parent
        anchors.margins: 16
        spacing: 16
        
        // Device icon and info
        RowLayout {
            Layout.fillWidth: true
            spacing: 12
            
            // Device icon
            Rectangle {
                width: 48
                height: 48
                color: isSelected ? "#007AFF" : "#F2F2F7"
                radius: 12
                
                Text {
                    anchors.centerIn: parent
                    text: getDeviceIcon()
                    font.pixelSize: 24
                    color: isSelected ? "white" : "#8E8E93"
                }
            }
            
            // Device info
            Column {
                Layout.fillWidth: true
                spacing: 4
                
                Text {
                    text: device ? device.description : "Unknown Device"
                    font.pixelSize: 16
                    font.weight: Font.Medium
                    color: "#000000"
                    elide: Text.ElideRight
                    width: parent.width
                }
                
                RowLayout {
                    spacing: 8
                    
                    Text {
                        text: isSelected ? "Default" : "Available"
                        font.pixelSize: 14
                        color: isSelected ? "#007AFF" : "#8E8E93"
                        font.weight: isSelected ? Font.Medium : Font.Normal
                    }
                    
                    Text {
                        text: "•"
                        font.pixelSize: 14
                        color: "#C7C7CC"
                        visible: device && device.isMuted
                    }
                    
                    Text {
                        text: "Muted"
                        font.pixelSize: 14
                        color: "#FF3B30"
                        visible: device && device.isMuted
                    }
                }
            }
        }
        
        // Volume control
        VolumeSlider {
            id: volumeSlider
            Layout.preferredWidth: 100
            value: device ? device.volume : 0
            enabled: device && !device.isMuted
            
            onValueChanged: {
                if (device && Math.abs(device.volume - value) > 0.01) {
                    deviceController.setDeviceVolume(device, value)
                }
            }
        }
        
        // Mute button
        Button {
            width: 44
            height: 44
            
            background: Rectangle {
                color: device && device.isMuted ? "#FF3B30" : "#F2F2F7"
                radius: 8
            }
            
            contentItem: Text {
                text: device && device.isMuted ? "🔇" : "🔊"
                font.pixelSize: 18
                anchors.centerIn: parent
            }
            
            onClicked: {
                if (device) {
                    deviceController.setDeviceMute(device, !device.isMuted)
                }
            }
        }
    }
    
    MouseArea {
        anchors.fill: parent
        onClicked: {
            if (device && !isSelected) {
                deviceSelected(device)
            }
        }
    }
    
    function getDeviceIcon() {
        if (!device) return "❓"
        
        const iconName = device.iconName
        switch (iconName) {
            case "microphone-internal": return "🎤"
            case "microphone-usb": return "🎙️"
            case "microphone-headset": return "🎧"
            case "microphone": return "🎤"
            case "speaker-internal": return "🔊"
            case "speaker-bluetooth": return "📶"
            case "speaker-usb": return "🔌"
            case "speaker-hdmi": return "📺"
            case "headphones": return "🎧"
            case "speaker": return "🔊"
            default: return device.type === 0 ? "🎤" : "🔊" // Input = 0, Output = 1
        }
    }
}
