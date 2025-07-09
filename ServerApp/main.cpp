// Qt
#include <QtCore/QCoreApplication>

// std
#include <iostream>

// sln
#include "test_shared.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    std::cout << "Server test shared: " << test_shared() << '\n';

    return app.exec();
}
