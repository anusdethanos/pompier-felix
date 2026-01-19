import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15


Rectangle {
    property string title: "Card Title"
    property color headerColor: "#f97316"
    property Item cardContent
    radius: 12
    color: "white"
    Layout.fillWidth: true

    ColumnLayout {
        anchors.fill: parent

        Rectangle {
            height: 48
            color: headerColor
            Layout.fillWidth: true
            Text {
                anchors.centerIn: parent
                text: title
                color: "white"
                font.pixelSize: 18
            }
        }

        Rectangle {
            Layout.fillWidth: true
            Layout.fillHeight: true
            color: "transparent"
            Item {
                anchors.fill: parent
                Loader { sourceComponent: cardContent }
            }
        }
    }
}
