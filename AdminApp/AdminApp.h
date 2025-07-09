#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AdminApp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class AdminAppClass; };
QT_END_NAMESPACE

class AdminApp : public QMainWindow
{
    Q_OBJECT

public:
    AdminApp(QWidget *parent = nullptr);
    ~AdminApp();

private:
    Ui::AdminAppClass *ui;
};

