Rectangle {
    color: "white"
    radius: 12
    border.color: "#d1d5db"
    Layout.fillWidth: true
    Layout.fillHeight: true
    ColumnLayout {
        anchors.fill: parent

        // Form Header
        Rectangle {
            height: 64
            color: "#dc2626"
            Layout.fillWidth: true
            Text {
                anchors.centerIn: parent
                text: "Création d'Intervention"
                font.pixelSize: 22
                color: "white"
            }
        }

        Flickable {
            Layout.fillWidth: true
            Layout.fillHeight: true
            contentHeight: formContent.height
            clip: true

            ColumnLayout {
                id: formContent
                spacing: 16
                padding: 16

                // Type d'intervention
                ComboBox {
                    id: interventionType
                    model: ["Incendie", "Accident", "Inondation", "Secours à personne"]
                    currentIndex: 0
                    Layout.fillWidth: true
                }

                // Adresse
                TextField {
                    placeholderText: "Adresse du Sinistre"
                    Layout.fillWidth: true
                }

                // Gravité
                ComboBox {
                    model: ["Urgence", "Normal", "Faible"]
                    currentIndex: 0
                    Layout.fillWidth: true
                }

                // Commentaires
                TextArea {
                    placeholderText: "Informations supplémentaires..."
                    Layout.fillWidth: true
                    Layout.preferredHeight: 120
                }

                // Date / Heure
                RowLayout {
                    spacing: 16
                    Layout.fillWidth: true

                    TextField { placeholderText: "Date"; Layout.fillWidth: true }
                    TextField { placeholderText: "Heure"; Layout.fillWidth: true }
                }

                // Button Valider
                Button {
                    text: "Valider"
                    font.pixelSize: 18
                    background: Rectangle {
                        color: "#dc2626"
                        radius: 8
                        Behavior on color { ColorAnimation { duration: 200 } }
                    }
                    contentItem.color: "white"
                    Layout.alignment: Qt.AlignHCenter
                    Layout.margins: 16
                }
            }
        }
    }
}
