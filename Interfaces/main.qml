import QtQuick
import QtQuick.Controls
Window{
    visible: true
    width: 640
    height: 480
    Row{
        anchors.fill: parent
        spacing: 50
        Repeater{
            model:2
            Button{
                text:model.index ? "ON" : "OFF"
                onClicked: {
                    // if (){
                        consumer.modify(model.index)
                    // }
                }
            }
        }
    }
}