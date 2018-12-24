import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.4

Window {
    visible: true
    width: 300
    height: 480
    title: qsTr("Homestead Automation")

    Page {
        id: pageId
        anchors.fill: parent

        SwipeView {
            id: swipeViewId
            anchors.fill: parent
            currentIndex: tabBarId.currentIndex

            Item {
                id: firstItem
                Loader {
                    id: pageOneLoader
                    source: "defaultPage.qml"
                    anchors.fill: parent

                }
            }

            Item {
                id: secondItem
                Loader {
                    id: pageTwoLoader
                    source: "menu.qml"
                    anchors.fill: parent
                }
            }
        }

        footer: TabBar {
            id: tabBarId
            currentIndex: swipeViewId.currentIndex

            TabButton {
               text: "Main"
            }

            TabButton {
                text: "Items"
            }
        }
    }
}
