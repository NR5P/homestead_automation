import QtQuick 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4


Rectangle {
    color: "white"
    Layout.fillHeight: true
    Layout.fillWidth: true
    Layout.maximumHeight: 40

    Rectangle {
        color: "green"
        radius: 100
        Layout.fillHeight: true
        Layout.fillWidth: true
        width: 40
        height: 40
        anchors.centerIn: parent
        Label {
            text: "ON"
            font.pixelSize: 20
            font.family: "ubuntu"
            anchors.centerIn: parent
        }
    }
}
