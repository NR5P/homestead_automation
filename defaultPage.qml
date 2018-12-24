import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4

GridLayout {
    id: mainScreen
    columns: 2
    anchors.fill: parent

    Button {
        id: settingsButton
        Layout.columnSpan: 2
        icon.source: "icons/baseline_settings_black_18dp.png"
        icon.color: "black"
        Layout.bottomMargin: 10
        Layout.fillWidth: true
    }

    // end of top menu buttons

    Rectangle {
        color: "cornsilk"
        height: 30
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.maximumHeight: 40
        Label {
            text: "Current Status"
            font.pixelSize: 20
            font.family: "ubuntu"
            anchors.centerIn: parent
        }
    }
    Rectangle {
        color: "cornsilk"
        height: 30
        Layout.fillHeight: true
        Layout.fillWidth: true
        Layout.maximumHeight: 40
        Label {
            text: "Name"
            font.pixelSize: 20
            font.family: "ubuntu"
            anchors.centerIn: parent
        }
    }

    // end of column label buttons

    OnIndicator {

    }

    DeviceName {
        text: "Valve 1"
    }

    OffIndicator {

    }

    DeviceName {
        text: "Heater 2"
    }

    OnIndicator {

    }

    DeviceName {
        text: "Valve 3"
    }

    Item {
        Layout.fillHeight: true
        Layout.columnSpan: 2
    }
}
