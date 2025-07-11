#include "Server.h"

Server::Server(QObject* parent)
{
	listen(QHostAddress::Any);
}

void Server::incomingConnection(qintptr socketDescriptor)
{
	// Connection *connection = new Connection(socketDescriptor, this);
	emit newConnection();
}
