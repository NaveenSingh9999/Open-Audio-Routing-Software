import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import OpenAudioRouter 1.0

Rectangle {
    id: profilesView
    color: "transparent"
    
    ScrollView {
        anchors.fill: parent
        contentWidth: availableWidth
        
        Column {
            width: parent.width
            spacing: 24
            
            // Header with create button
            RowLayout {
                width: parent.width
                
                Text {
                    text: "Audio Profiles"
                    font.pixelSize: 22
                    font.weight: Font.Bold
                    color: "#000000"
                    Layout.fillWidth: true
                }
                
                Button {
                    text: "Create"
                    background: Rectangle {
                        color: "#007AFF"
                        radius: 8
                    }
                    contentItem: Text {
                        text: parent.text
                        color: "white"
                        font.weight: Font.Medium
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                    }
                    
                    onClicked: createProfileDialog.open()
                }
            }
            
            // Profiles list
            Repeater {
                model: profileController.profileNames
                
                ProfileCard {
                    width: parent.width
                    profileName: modelData
                    isActive: profileController.currentProfile === modelData
                    
                    onLoadProfile: {
                        profileController.loadProfile(profileName)
                        mainWindow.statusBar.showMessage("Loaded profile: " + profileName, 2000)
                    }
                    
                    onDeleteProfile: {
                        profileController.deleteProfile(profileName)
                        mainWindow.statusBar.showMessage("Deleted profile: " + profileName, 2000)
                    }
                }
            }
            
            // Placeholder if no profiles
            Rectangle {
                width: parent.width
                height: 120
                color: "#FFFFFF"
                radius: 12
                visible: !profileController || profileController.profileNames.length === 0
                
                Column {
                    anchors.centerIn: parent
                    spacing: 12
                    
                    Text {
                        text: "⚙️"
                        font.pixelSize: 48
                        anchors.horizontalCenter: parent.horizontalCenter
                        opacity: 0.5
                    }
                    
                    Text {
                        text: "No profiles saved"
                        font.pixelSize: 16
                        color: "#8E8E93"
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    
                    Text {
                        text: "Create a profile to save your current audio setup"
                        font.pixelSize: 14
                        color: "#C7C7CC"
                        anchors.horizontalCenter: parent.horizontalCenter
                        wrapMode: Text.WordWrap
                        width: parent.parent.width - 40
                        horizontalAlignment: Text.AlignHCenter
                    }
                }
            }
        }
    }
    
    // Create Profile Dialog
    Dialog {
        id: createProfileDialog
        anchors.centerIn: parent
        width: Math.min(parent.width - 40, 320)
        height: 200
        
        background: Rectangle {
            color: "#FFFFFF"
            radius: 12
        }
        
        Column {
            anchors.fill: parent
            anchors.margins: 24
            spacing: 16
            
            Text {
                text: "Create Profile"
                font.pixelSize: 18
                font.weight: Font.Bold
                color: "#000000"
            }
            
            TextField {
                id: profileNameField
                width: parent.width
                placeholderText: "Profile name"
                selectByMouse: true
                
                background: Rectangle {
                    color: "#F2F2F7"
                    radius: 8
                    border.color: parent.activeFocus ? "#007AFF" : "transparent"
                    border.width: 2
                }
            }
            
            RowLayout {
                width: parent.width
                
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
                    
                    onClicked: {
                        profileNameField.text = ""
                        createProfileDialog.close()
                    }
                }
                
                Button {
                    text: "Create"
                    Layout.fillWidth: true
                    enabled: profileNameField.text.trim().length > 0
                    
                    background: Rectangle {
                        color: parent.enabled ? "#007AFF" : "#C7C7CC"
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
                        if (profileNameField.text.trim().length > 0) {
                            profileController.saveProfile(profileNameField.text.trim())
                            mainWindow.statusBar.showMessage("Created profile: " + profileNameField.text.trim(), 2000)
                            profileNameField.text = ""
                            createProfileDialog.close()
                        }
                    }
                }
            }
        }
    }
}
