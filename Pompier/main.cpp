#include "superviseurope.h"

#include <QApplication>

#include <QSslSocket>
#include <QDebug>
#include <QSslConfiguration>
#include <QSslSocket>

#include <QApplication>
#include <QQuickWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QQmlContext>

int main(int argc, char *argv[])
{

    qDebug() << "SSL support:" << QSslSocket::supportsSsl();
    qDebug() << "SSL build version:" << QSslSocket::sslLibraryBuildVersionString();
    qDebug() << "SSL runtime version:" << QSslSocket::sslLibraryVersionString();


    QSslConfiguration sslConfig = QSslConfiguration::defaultConfiguration();
    sslConfig.setPeerVerifyMode(QSslSocket::VerifyPeer);
    sslConfig.setProtocol(QSsl::TlsV1_2OrLater);
    QSslConfiguration::setDefaultConfiguration(sslConfig);


    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Gestion d'Intervention");
    window.resize(1920, 1080);

    QVBoxLayout *layout = new QVBoxLayout(&window);

    QQuickWidget *quickWidget = new QQuickWidget;
    quickWidget->setSource(QUrl("qrc:/ui/App.qml"));
    quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

    layout->addWidget(quickWidget);

    window.show();
    return app.exec();

    // QApplication a(argc, argv);
    // SuperviseurOPE w;
    // w.show();
    // return a.exec();
}
