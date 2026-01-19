import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15


Rectangle {
    height: 64
    color: "white"
    Layout.fillWidth: true
    border.color: "#d1d5db"
    border.width: 1

    RowLayout {
        anchors.fill: parent
        anchors.margins: 16
        spacing: 16

        Text {
            text: "Gestion d'Intervention"
            font.pixelSize: 28
            color: "#1f2937"
        }

        Item { Layout.fillWidth: true }

        RowLayout {
            spacing: 16
            Image { source: "icons/help.svg"; width: 24; height: 24 }
            Image { source: "icons/menu.svg"; width: 24; height: 24 }
        }
    }
}
