#include "AdminApp.h"

AdminApp::AdminApp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AdminAppClass())
{
    ui->setupUi(this);
}

AdminApp::~AdminApp()
{
    delete ui;
}

