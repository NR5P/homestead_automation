import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4

GridLayout {
    id: mainScreen
    columns: 6
    anchors.fill: parent
    ///////////////////////////////////
    Button {
        Layout.columnSpan: 2
        text: "All Off"
        Layout.fillWidth: true
    }
    Button {
        Layout.columnSpan: 2
        text: "Add New"
        Layout.fillWidth: true
    }
    Button {
        Layout.columnSpan: 2
        text: "Main"
        Layout.fillWidth: true
    }
    /////////////////////////////////////
    Button {
        Layout.columnSpan: 1
        icon.source: "icons/baseline_delete_black_18dp.png"
        icon.color: "black"
        Layout.fillWidth: true
    }
    Button {
        Layout.columnSpan: 4
        text: "Valve 1"
        font.family: "ubuntu"
        font.pixelSize: 20
        Layout.fillWidth: true
    }
    Button {
        Layout.columnSpan: 1
        text: "ON"
        font.family: "ubuntu"
        Layout.fillWidth: true
    }
    //////////////////////////////////////

    Item {
        Layout.fillHeight: true
        Layout.columnSpan: 6
    }
}

