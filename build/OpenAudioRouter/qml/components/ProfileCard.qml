import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import OpenAudioRouter 1.0

Rectangle {
    id: profileCard
    height: 80
    color: "#FFFFFF"
    radius: 12
    
    property string profileName: ""
    property bool isActive: false
    
    signal loadProfile(string profileName)
    signal deleteProfile(string profileName)
    
    // Subtle border with active state
    Rectangle {
        anchors.fill: parent
        anchors.margins: 1
        color: "transparent"
        radius: parent.radius
        border.color: isActive ? "#007AFF" : "#E5E5EA"
        border.width: isActive ? 2 : 1
    }
    
    RowLayout {
        anchors.fill: parent
        anchors.margins: 16
        spacing: 16
        
        // Profile icon
        Rectangle {
            width: 48
            height: 48
            color: isActive ? "#007AFF" : "#F2F2F7"
            radius: 12
            
            Text {
                anchors.centerIn: parent
                text: "⚙️"
                font.pixelSize: 24
                color: isActive ? "white" : "#8E8E93"
            }
        }
        
        // Profile info
        Column {
            Layout.fillWidth: true
            spacing: 4
            
            Text {
                text: profileName
                font.pixelSize: 16
                font.weight: Font.Medium
                color: "#000000"
                elide: Text.ElideRight
                width: parent.width
            }
            
            Text {
                text: isActive ? "Currently active" : "Tap to load"
                font.pixelSize: 14
                color: isActive ? "#007AFF" : "#8E8E93"
                font.weight: isActive ? Font.Medium : Font.Normal
            }
        }
        
        // Action buttons
        RowLayout {
            spacing: 8
            
            Button {
                width: 44
                height: 44
                visible: !isActive
                
                background: Rectangle {
                    color: "#34C759"
                    radius: 8
                }
                
                contentItem: Text {
                    text: "▶️"
                    font.pixelSize: 16
                    anchors.centerIn: parent
                }
                
                onClicked: loadProfile(profileName)
            }
            
            Button {
                width: 44
                height: 44
                
                background: Rectangle {
                    color: "#FF3B30"
                    radius: 8
                }
                
                contentItem: Text {
                    text: "🗑️"
                    font.pixelSize: 16
                    anchors.centerIn: parent
                }
                
                onClicked: deleteConfirmDialog.open()
            }
        }
    }
    
    // Load profile on tap (when not active)
    MouseArea {
        anchors.fill: parent
        enabled: !isActive
        onClicked: loadProfile(profileName)
    }
    
    // Delete confirmation dialog
    Dialog {
        id: deleteConfirmDialog
        anchors.centerIn: parent
        width: Math.min(parent.width + 40, 300)
        height: 180
        
        background: Rectangle {
            color: "#FFFFFF"
            radius: 12
        }
        
        Column {
            anchors.fill: parent
            anchors.margins: 20
            spacing: 16
            
            Text {
                text: "Delete Profile"
                font.pixelSize: 18
                font.weight: Font.Bold
                color: "#000000"
                width: parent.width
                horizontalAlignment: Text.AlignHCenter
            }
            
            Text {
                text: "Are you sure you want to delete \"" + profileName + "\"?"
                font.pixelSize: 14
                color: "#8E8E93"
                width: parent.width
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.WordWrap
            }
            
            RowLayout {
                width: parent.width
                spacing: 12
                
                Button {
                    text: "Cancel"
                    Layout.fillWidth: true
                    
                    background: Rectangle {
                        color: "#F2F2F7"
                        radius: 8
                    }
                    
                    contentItem: Text {
                        text: parent.text
                        color: "#007AFF"
                        font.weight: Font.Medium
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                    
                    onClicked: deleteConfirmDialog.close()
                }
                
                Button {
                    text: "Delete"
                    Layout.fillWidth: true
                    
                    background: Rectangle {
                        color: "#FF3B30"
                        radius: 8
                    }
                    
                    contentItem: Text {
                        text: parent.text
                        color: "white"
                        font.weight: Font.Medium
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                    
                    onClicked: {
                        deleteProfile(profileName)
                        deleteConfirmDialog.close()
                    }
                }
            }
        }
    }
}
