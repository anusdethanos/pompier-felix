import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15

RowLayout {
    id: root
    spacing: 8
    height: 56
    Layout.fillWidth: true
    anchors.margins: 16

    property string activeTab
    signal tabChanged(string tab)

    Repeater {
        model: [
            { label: "Nouvelle Intervention", value: "nouvelle" },
            { label: "Alerte & Moyens", value: "alerte" },
            { label: "Gestion des Renforts", value: "gestion" }
        ]

        delegate: Button {
            text: modelData.label
            font.pixelSize: 16

            // Couleur du texte
            palette.text: "white"

            background: Rectangle {
                radius: 8
                color: root.activeTab === modelData.value
                       ? "#3b4a6b"
                       : "#9ca3af"
                Behavior on color { ColorAnimation { duration: 200 } }
            }

            onClicked: root.tabChanged(modelData.value)
        }
    }
}
