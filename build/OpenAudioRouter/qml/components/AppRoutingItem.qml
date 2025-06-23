import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import OpenAudioRouter 1.0

Rectangle {
    id: appRoutingItem
    height: 120
    color: "#FFFFFF"
    radius: 12
    
    property var application
    
    signal routeToDevice(var device)
    
    // Subtle border
    Rectangle {
        anchors.fill: parent
        anchors.margins: 1
        color: "transparent"
        radius: parent.radius
        border.color: "#E5E5EA"
        border.width: 1
    }
    
    RowLayout {
        anchors.fill: parent
        anchors.margins: 16
        spacing: 16
        
        // App icon and info
        RowLayout {
            Layout.fillWidth: true
            spacing: 12
            
            // App icon
            Rectangle {
                width: 48
                height: 48
                color: "#F2F2F7"
                radius: 12
                
                Text {
                    anchors.centerIn: parent
                    text: getAppIcon()
                    font.pixelSize: 24
                }
            }
            
            // App info
            Column {
                Layout.fillWidth: true
                spacing: 4
                
                Text {
                    text: application ? application.name : "Unknown Application"
                    font.pixelSize: 16
                    font.weight: Font.Medium
                    color: "#000000"
                    elide: Text.ElideRight
                    width: parent.width
                }
                
                Text {
                    text: application ? application.processName : ""
                    font.pixelSize: 14
                    color: "#8E8E93"
                    elide: Text.ElideRight
                    width: parent.width
                }
                
                // Current routing info
                RowLayout {
                    spacing: 8
                    
                    Text {
                        text: "🔀"
                        font.pixelSize: 12
                        color: "#8E8E93"
                    }
                    
                    Text {
                        text: getCurrentDeviceName()
                        font.pixelSize: 12
                        color: "#8E8E93"
                    }
                }
            }
        }
        
        // Volume control
        VolumeSlider {
            Layout.preferredWidth: 80
            value: application ? application.volume : 0
            enabled: application && !application.isMuted
            
            onValueChanged: {
                if (application && Math.abs(application.volume - value) > 0.01) {
                    routingController.setApplicationVolume(application, value)
                }
            }
        }
        
        // Mute button
        Button {
            width: 36
            height: 36
            
            background: Rectangle {
                color: application && application.isMuted ? "#FF3B30" : "#F2F2F7"
                radius: 6
            }
            
            contentItem: Text {
                text: application && application.isMuted ? "🔇" : "🔊"
                font.pixelSize: 16
                anchors.centerIn: parent
            }
            
            onClicked: {
                if (application) {
                    routingController.setApplicationMute(application, !application.isMuted)
                }
            }
        }
        
        // Device selection button
        Button {
            width: 80
            height: 36
            text: "Route"
            
            background: Rectangle {
                color: "#007AFF"
                radius: 6
            }
            
            contentItem: Text {
                text: parent.text
                color: "white"
                font.pixelSize: 14
                font.weight: Font.Medium
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
            
            onClicked: deviceSelectionMenu.open()
        }
    }
    
    // Device selection menu
    Menu {
        id: deviceSelectionMenu
        
        Repeater {
            model: deviceModel ? deviceModel : []
            
            MenuItem {
                text: modelData.description
                icon.source: ""
                
                onTriggered: {
                    routeToDevice(modelData)
                }
            }
        }
    }
    
    function getAppIcon() {
        if (!application) return "📱"
        
        const iconName = application.iconName
        switch (iconName) {
            case "web-browser": return "🌐"
            case "music-player": return "🎵"
            case "video-player": return "🎬"
            case "communication": return "💬"
            case "game": return "🎮"
            case "audio-system": return "⚙️"
            default: return "📱"
        }
    }
    
    function getCurrentDeviceName() {
        if (!application || !deviceModel) {
            return "Unknown device"
        }
        
        const device = deviceModel.getDeviceByIndex(application.deviceIndex)
        return device ? device.description : "Unknown device"
    }
}
