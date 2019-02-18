import QtQuick 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4

Rectangle {
    property alias text: deviceName.text

    color: "white"
    Layout.fillHeight: true
    Layout.fillWidth: true
    Layout.maximumHeight: 40
    Label {
        id: deviceName
        font.pixelSize: 20
        font.family: "ubuntu"
        anchors.centerIn: parent
    }
}
