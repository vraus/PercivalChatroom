#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ClientApp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ClientAppClass; };
QT_END_NAMESPACE

class ClientApp : public QMainWindow
{
    Q_OBJECT

public:
    ClientApp(QWidget *parent = nullptr);
    ~ClientApp();

private slots:
    void on_ledIPAddress_textChanged(const QString &arg1);

private:
    Ui::ClientAppClass *ui;
};

