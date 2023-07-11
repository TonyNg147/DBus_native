import QtQuick
Window{
    width: 640
    height: 480
    visible: true
    Rectangle{
        anchors.centerIn: parent
        width: 300
        height: 300
        color: controller.status ? "red" : "blue"
        Text{
            anchors.centerIn: parent
            text: controller.status ? "ON" : "OFF"
        }
    }
}