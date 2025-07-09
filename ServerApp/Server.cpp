#include "Server.h"

Server::Server(QObject* parent)
{
	listen(QHostAddress::Any);
}

void Server::incomingConnection(qintptr socketDescriptor)
{
	QTcpServer::incomingConnection(socketDescriptor);

	std::cout << "New connection !\n";
}
