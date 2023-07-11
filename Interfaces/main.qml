import QtQuick
import QtQuick.Controls
Window{
    visible: true
    width: 250
    height: 50
    Row{
        anchors.centerIn: parent
        spacing: 50
        Repeater{
            model:2
            Button{
                text:model.index ? "ON" : "OFF"
                onClicked: {
                    consumer.modify(model.index)
                }
            }
        }
    }
}