import QtQuick 2.11
import QtQuick.Window 2.11
import QtQuick.Layouts 1.3
import QtQuick.Extras 1.4

GridLayout {
    id: irrigationSettings
    columns: 2
    //anchors.fill: parent
    Rectangle {
        Layout.alignment: Qt.AlignTop
        Layout.columnSpan: 2
        color: "grey"
        Layout.fillWidth: true
        height: valveNameHere.implicitHeight + 20
        Text {
            id: valveNameHere
            anchors.centerIn: parent
            text: qsTr("valve 1")
        }
    }
/////////////////////////////////////////////////
    Text {
        id: name
        height: implicitHeight + 10
        Layout.fillWidth: true
        text: qsTr("Name")
    }

    Rectangle {
        id: nameInputRect
        color: "beige"
        Layout.fillWidth: true
        height: 50
        TextInput {
            id: nameInput
            height: name.height
            Layout.fillWidth: true
            text: valveNameHere.text
            onEditingFinished: valveNameHere.text = nameInput.text
        }
    }

/////////////////////////////////////////////////
     Text {
        id: time
        height: implicitHeight + 10
        Layout.fillWidth: true
        text: qsTr("Time")
     }


    Tumbler {
        TumblerColumn {
            model: 5
        }
        TumblerColumn {
            model: [0, 1, 2, 3, 4]
        }
        TumblerColumn {
            model: [0, 1, 2, 3, 4]
        }
    }
/////////////////////////////////////////////////





/////////////////////////////////////////////////
    Rectangle {
        Layout.alignment: Qt.AlignBottom
        Layout.columnSpan: 2
        color: "grey"
        Layout.fillWidth: true
        height: valveNameHere.implicitHeight + 20
        Text {
            id: backButton
            anchors.centerIn: parent
            text: qsTr("go back")
        }
        MouseArea {
            anchors.fill: parent
            onClicked: {
                onClicked: pageTwoLoader.source = "menu.qml"
            }
        }
    }
}
