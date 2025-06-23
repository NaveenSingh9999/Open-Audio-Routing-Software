import QtQuick 2.15

Rectangle {
    id: tabButton
    
    property string text: ""
    property string icon: ""
    property bool isSelected: false
    property color accentColor: "#007AFF"
    property color secondaryColor: "#8E8E93"
    
    signal clicked()
    
    color: "transparent"
    
    Column {
        anchors.centerIn: parent
        spacing: 4
        
        Text {
            text: tabButton.icon
            font.pixelSize: 24
            anchors.horizontalCenter: parent.horizontalCenter
            opacity: tabButton.isSelected ? 1.0 : 0.5
        }
        
        Text {
            text: tabButton.text
            font.pixelSize: 11
            font.weight: Font.Medium
            color: tabButton.isSelected ? tabButton.accentColor : tabButton.secondaryColor
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }
    
    MouseArea {
        anchors.fill: parent
        onClicked: tabButton.clicked()
    }
}
