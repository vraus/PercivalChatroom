#include "ClientApp.h"

#include <QStyle>
#include <QHostAddress>

ClientApp::ClientApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ClientAppClass())
{
    ui->setupUi(this);
}

ClientApp::~ClientApp()
{
    delete ui;
}

void ClientApp::on_ledIPAddress_textChanged(const QString& arg1)
{
    QHostAddress address(arg1);

    QString state = "0";
    if (QAbstractSocket::IPv4Protocol == address.protocol())
        state = "1";

    ui->ledIPAddress->setProperty("state", state);
	style()->polish(ui->ledIPAddress);
}