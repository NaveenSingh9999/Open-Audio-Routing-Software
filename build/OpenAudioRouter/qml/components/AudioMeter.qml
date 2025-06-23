import QtQuick 2.15

Rectangle {
    id: audioMeter
    width: 100
    height: 6
    color: "#E5E5EA"
    radius: 3
    
    property real level: 0.0 // 0.0 to 1.0
    property real peakLevel: 0.0
    property bool isInput: false
    
    // Level indicator
    Rectangle {
        id: levelBar
        anchors.left: parent.left
        anchors.verticalCenter: parent.verticalCenter
        width: parent.width * audioMeter.level
        height: parent.height
        radius: parent.radius
        
        gradient: Gradient {
            orientation: Gradient.Horizontal
            GradientStop { 
                position: 0.0
                color: audioMeter.isInput ? "#34C759" : "#007AFF"
            }
            GradientStop { 
                position: 0.7
                color: audioMeter.isInput ? "#34C759" : "#007AFF"
            }
            GradientStop { 
                position: 0.85
                color: "#FF9500"
            }
            GradientStop { 
                position: 1.0
                color: "#FF3B30"
            }
        }
        
        Behavior on width {
            NumberAnimation { 
                duration: 100
                easing.type: Easing.OutQuad
            }
        }
    }
    
    // Peak indicator
    Rectangle {
        id: peakIndicator
        width: 2
        height: parent.height
        color: "#FF3B30"
        radius: 1
        x: parent.width * audioMeter.peakLevel - width/2
        anchors.verticalCenter: parent.verticalCenter
        visible: audioMeter.peakLevel > 0.8
        
        Behavior on x {
            NumberAnimation { 
                duration: 150
                easing.type: Easing.OutQuad
            }
        }
        
        // Peak hold timer
        Timer {
            interval: 1000
            running: peakIndicator.visible
            onTriggered: audioMeter.peakLevel = Math.max(0, audioMeter.peakLevel - 0.1)
        }
    }
    
    // Update peak level when level changes
    onLevelChanged: {
        if (level > peakLevel) {
            peakLevel = level
        }
    }
    
    // Simulate audio level for demo (remove when real audio monitoring is implemented)
    Timer {
        id: demoTimer
        interval: 50
        running: false // Set to true for demo
        repeat: true
        
        property real phase: 0
        
        onTriggered: {
            phase += 0.2
            audioMeter.level = Math.max(0, 0.3 + 0.4 * Math.sin(phase) + 0.2 * Math.random())
        }
    }
}
