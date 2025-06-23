import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import OpenAudioRouter 1.0

Rectangle {
    id: routingView
    color: "transparent"
    
    ScrollView {
        anchors.fill: parent
        contentWidth: availableWidth
        
        Column {
            width: parent.width
            spacing: 24
            
            // Header
            Text {
                text: "App Routing"
                font.pixelSize: 22
                font.weight: Font.Bold
                color: "#000000"
                leftPadding: 4
            }
            
            // Applications list
            Repeater {
                model: applicationModel
                
                AppRoutingItem {
                    width: parent.width
                    application: model.application
                    
                    onRouteToDevice: function(device) {
                        routingController.routeApplicationToDevice(application, device)
                        mainWindow.statusBar.showMessage("Routed " + application.name + " to " + device.description, 2000)
                    }
                }
            }
            
            // Placeholder if no applications
            Rectangle {
                width: parent.width
                height: 120
                color: "#FFFFFF"
                radius: 12
                visible: !applicationModel || applicationModel.count === 0
                
                Column {
                    anchors.centerIn: parent
                    spacing: 12
                    
                    Text {
                        text: "🔀"
                        font.pixelSize: 48
                        anchors.horizontalCenter: parent.horizontalCenter
                        opacity: 0.5
                    }
                    
                    Text {
                        text: "No applications playing audio"
                        font.pixelSize: 16
                        color: "#8E8E93"
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    
                    Text {
                        text: "Start playing audio in an app to see routing options"
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
}
