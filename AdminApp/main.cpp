#include "AdminApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    AdminApp window;
    window.show();
    return app.exec();
}
