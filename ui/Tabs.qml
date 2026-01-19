RowLayout {
    spacing: 8
    Layout.fillWidth: true
    height: 56
    anchors.margins: 16

    signal tabChanged(string tab)
    property string activeTab

    function createTab(label, value) {
        return Button {
            text: label
            font.pixelSize: 16
            background: Rectangle {
                color: activeTab === value ? "#3b4a6b" : "#9ca3af"
                radius: 8
                Behavior on color { ColorAnimation { duration: 200 } }
            }
            contentItem.color: "white"
            onClicked: tabChanged(value)
        }
    }

    Loader { sourceComponent: createTab("Nouvelle Intervention", "nouvelle") }
    Loader { sourceComponent: createTab("Alerte & Moyens", "alerte") }
    Loader { sourceComponent: createTab("Gestion des Renforts", "gestion") }
}
