#include "ClientApp.h"

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

