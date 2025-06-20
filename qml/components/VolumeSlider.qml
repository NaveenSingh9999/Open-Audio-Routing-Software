import QtQuick 2.15
import QtQuick.Controls 2.15

Item {
    id: volumeSlider
    height: 44
    
    property real value: 0.5
    property real minimum: 0.0
    property real maximum: 1.0
    property bool enabled: true
    
    Rectangle {
        id: track
        anchors.centerIn: parent
        width: parent.width
        height: 4
        color: "#E5E5EA"
        radius: 2
        
        Rectangle {
            id: progress
            anchors.left: parent.left
            anchors.verticalCenter: parent.verticalCenter
            width: parent.width * ((volumeSlider.value - volumeSlider.minimum) / (volumeSlider.maximum - volumeSlider.minimum))
            height: parent.height
            color: volumeSlider.enabled ? "#007AFF" : "#C7C7CC"
            radius: parent.radius
        }
    }
    
    Rectangle {
        id: handle
        width: 24
        height: 24
        radius: 12
        color: volumeSlider.enabled ? "#FFFFFF" : "#F2F2F7"
        border.color: volumeSlider.enabled ? "#007AFF" : "#C7C7CC"
        border.width: 2
        
        x: track.width * ((volumeSlider.value - volumeSlider.minimum) / (volumeSlider.maximum - volumeSlider.minimum)) - width/2
        anchors.verticalCenter: parent.verticalCenter
        
        MouseArea {
            id: mouseArea
            anchors.fill: parent
            anchors.margins: -8
            enabled: volumeSlider.enabled
            
            drag.target: parent
            drag.axis: Drag.XAxis
            drag.minimumX: -handle.width/2
            drag.maximumX: track.width - handle.width/2
            
            onPositionChanged: {
                if (drag.active) {
                    var newValue = volumeSlider.minimum + (volumeSlider.maximum - volumeSlider.minimum) * 
                                   ((handle.x + handle.width/2) / track.width)
                    newValue = Math.max(volumeSlider.minimum, Math.min(volumeSlider.maximum, newValue))
                    volumeSlider.value = newValue
                }
            }
        }
    }
    
    // Click on track to jump to position
    MouseArea {
        anchors.fill: track
        enabled: volumeSlider.enabled
        
        onClicked: {
            var newValue = volumeSlider.minimum + (volumeSlider.maximum - volumeSlider.minimum) * 
                           (mouse.x / track.width)
            newValue = Math.max(volumeSlider.minimum, Math.min(volumeSlider.maximum, newValue))
            volumeSlider.value = newValue
        }
    }
}
