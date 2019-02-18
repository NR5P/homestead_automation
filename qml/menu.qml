import QtQuick 2.12
import QtQuick.Window 2.11
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4
import QtQuick.Controls.Styles 1.4

GridLayout {
    id: mainScreen
    columns: 3
    anchors.fill: parent

    ///////////////////////////////////
    Button {
        Layout.columnSpan: 1
        text: "All Off"
        Layout.fillWidth: true
        Layout.bottomMargin: 10
    }
    Button {
        Layout.columnSpan: 1
        text: "Add New"
        Layout.fillWidth: true
        Layout.bottomMargin: 10
    }
    Button {
        Layout.columnSpan: 1
        text: "Main"
        Layout.fillWidth: true
        Layout.bottomMargin: 10
    }
    /////////////////////////////////////
    /*
    Button {

        icon.source: "icons/baseline_delete_black_18dp.png"
        icon.color: "black"
        height: 30
        Layout.fillWidth: true
        Layout.columnSpan: 1
        Layout.topMargin: 10
    }
    */
    Rectangle {
        id: valveOneColorRect
        Layout.columnSpan: 3
        color: "limegreen"
        height: button3.implicitHeight + 20
        Layout.fillWidth: true
        RowLayout {
             //columns: 3
             anchors.fill: parent
             Button {
                id: button3
                text: "ON"
                font.family: "ubuntu"
                height: 40
                Layout.fillWidth: true
                Layout.columnSpan: 1
                onClicked: {
                    button3.text = button3.text == "ON" ? "OFF" : "ON"
                    valveOneColorRect.color = button3.text == "ON" ? "limegreen" : "darksalmon"
                }
            }
            Button {
                text: "Valve 1"
                font.family: "ubuntu"
                font.pixelSize: 20
                height: 40
                Layout.fillWidth: true
                Layout.columnSpan: 2
                //Layout.topMargin: 10
                onClicked: pageTwoLoader.source = "irrigationSettings.qml"
            }
        }
   }
    //////////////////////////////////////
     Rectangle {
        id: valveOneColorRect2
        Layout.columnSpan: 3
        color: "darksalmon"
        height: button3.implicitHeight + 20
        Layout.fillWidth: true
        RowLayout {
             //columns: 3
             anchors.fill: parent
             Button {
                id: button4
                text: "OFF"
                font.family: "ubuntu"
                height: 40
                Layout.fillWidth: true
                Layout.columnSpan: 1
                onClicked: {
                    button4.text = button4.text == "ON" ? "OFF" : "ON"
                    valveOneColorRect2.color = button4.text == "ON" ? "limegreen" : "darksalmon"
                }
            }
            Button {
                text: "Heater 2"
                font.family: "ubuntu"
                font.pixelSize: 20
                height: 40
                Layout.fillWidth: true
                Layout.columnSpan: 2
                //Layout.topMargin: 10
                onClicked: pageTwoLoader.source = "irrigationSettings.qml"
            }
        }
   }



    //////////////////////////////////////

    Item {
        Layout.fillHeight: true
        Layout.columnSpan: 3
    }

}

