import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15
import OpenAudioRouter 1.0

ApplicationWindow {
    id: mainWindow
    width: 420
    height: 680
    minimumWidth: 380
    minimumHeight: 600
    visible: true
    title: "Open Audio Router"
    
    // iOS-style properties
    property color backgroundColor: "#F2F2F7"
    property color cardBackgroundColor: "#FFFFFF"
    property color accentColor: "#007AFF"
    property color secondaryColor: "#8E8E93"
    property color textColor: "#000000"
    property color subtitleTextColor: "#6D6D70"
    
    // iOS-style corner radius
    property int cornerRadius: 12
    property int smallCornerRadius: 8
    
    color: backgroundColor
    
    // Connect to system tray
    Connections {
        target: systemTray
        function onShowMainWindow() {
            mainWindow.show()
            mainWindow.raise()
            mainWindow.requestActivate()
        }
        
        function onDeviceSwitchRequested(deviceName) {
            statusBar.showMessage("Switched to: " + deviceName, 2000)
        }
    }
    
    // Header
    Rectangle {
        id: header
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
        height: 100
        color: cardBackgroundColor
        
        // Subtle shadow effect
        Rectangle {
            anchors.fill: parent
            anchors.topMargin: parent.height
            height: 1
            color: "#E5E5EA"
        }
        
        Column {
            anchors.centerIn: parent
            spacing: 4
            
            Text {
                text: "Audio Router"
                font.pixelSize: 28
                font.weight: Font.Bold
                color: textColor
                anchors.horizontalCenter: parent.horizontalCenter
            }
            
            Text {
                text: mainController.statusMessage
                font.pixelSize: 14
                color: subtitleTextColor
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }
    
    // Tab Bar (iOS style)
    Rectangle {
        id: tabBar
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: parent.right
        height: 83
        color: cardBackgroundColor
        
        // Top border
        Rectangle {
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            height: 1
            color: "#E5E5EA"
        }
        
        RowLayout {
            anchors.fill: parent
            anchors.margins: 0
            spacing: 0
            
            TabButton {
                id: devicesTab
                Layout.fillWidth: true
                Layout.fillHeight: true
                text: "Devices"
                icon: "🎵"
                isSelected: stackView.currentItem === devicesView
                onClicked: stackView.currentIndex = 0
            }
            
            TabButton {
                id: routingTab
                Layout.fillWidth: true
                Layout.fillHeight: true
                text: "Routing"
                icon: "🔀"
                isSelected: stackView.currentItem === routingView
                onClicked: stackView.currentIndex = 1
            }
            
            TabButton {
                id: profilesTab
                Layout.fillWidth: true
                Layout.fillHeight: true
                text: "Profiles"
                icon: "⚙️"
                isSelected: stackView.currentItem === profilesView
                onClicked: stackView.currentIndex = 2
            }
        }
    }
    
    // Main Content Area
    StackLayout {
        id: stackView
        anchors.top: header.bottom
        anchors.bottom: tabBar.top
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 16
        currentIndex: 0
        
        // Devices View
        DevicesView {
            id: devicesView
        }
        
        // Routing View
        RoutingView {
            id: routingView
        }
        
        // Profiles View
        ProfilesView {
            id: profilesView
        }
    }
    
    // Status bar for notifications
    Rectangle {
        id: statusBar
        anchors.bottom: tabBar.top
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 16
        height: 0
        color: accentColor
        radius: smallCornerRadius
        opacity: 0
        
        property alias text: statusText.text
        
        function showMessage(message, duration) {
            text = message
            showAnimation.restart()
            hideTimer.interval = duration || 3000
            hideTimer.restart()
        }
        
        Text {
            id: statusText
            anchors.centerIn: parent
            color: "white"
            font.pixelSize: 14
            font.weight: Font.Medium
        }
        
        PropertyAnimation {
            id: showAnimation
            target: statusBar
            properties: "height,opacity"
            to: 44
            duration: 300
            easing.type: Easing.OutCubic
        }
        
        PropertyAnimation {
            id: hideAnimation
            target: statusBar
            properties: "height,opacity"
            to: 0
            duration: 300
            easing.type: Easing.InCubic
        }
        
        Timer {
            id: hideTimer
            onTriggered: hideAnimation.restart()
        }
    }
}

// Custom iOS-style Tab Button
component TabButton: Rectangle {
    property string text: ""
    property string icon: ""
    property bool isSelected: false
    
    signal clicked()
    
    color: "transparent"
    
    Column {
        anchors.centerIn: parent
        spacing: 4
        
        Text {
            text: parent.parent.icon
            font.pixelSize: 24
            anchors.horizontalCenter: parent.horizontalCenter
            opacity: parent.parent.isSelected ? 1.0 : 0.5
        }
        
        Text {
            text: parent.parent.text
            font.pixelSize: 11
            font.weight: Font.Medium
            color: parent.parent.isSelected ? mainWindow.accentColor : mainWindow.secondaryColor
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    
    MouseArea {
        anchors.fill: parent
        onClicked: parent.clicked()
    }
}
