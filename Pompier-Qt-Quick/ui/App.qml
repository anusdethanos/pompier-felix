import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15


ApplicationWindow {
    id: appWindow
    width: 1920
    height: 1080
    visible: true
    title: "Gestion d'Intervention"
    color: "#e5e7eb"  // bg-gray-200

    property string activeTab: "nouvelle"

    GridLayout {
        anchors.fill: parent
        rows: 2
        columns: 1
        rowSpacing: 0

        // --- Header ---
        Header { Layout.row: 0 }

        ColumnLayout {
            Layout.row: 1
            Layout.fillWidth: true
            Layout.fillHeight: true
            spacing: 0

            Tabs {
                activeTab: appWindow.activeTab
                onTabChanged: appWindow.activeTab = tab
            }

            GridLayout {
                Layout.fillWidth: true
                Layout.fillHeight: true
                columns: 3
                columnSpacing: 16
                rowSpacing: 16
                anchors.margins: 16

                // --- Left Column: Form ---
                InterventionForm {
                    Layout.columnSpan: 2
                    Layout.fillWidth: true
                    Layout.fillHeight: true
                }

                // --- Right Column: Info Cards ---
                ColumnLayout {
                    spacing: 16
                    Layout.fillWidth: true
                    Layout.fillHeight: true

                    CaserneCard {}
                    MoyensCard {}
                    RenfortsCard {}
                }
            }
        }
    }
}
