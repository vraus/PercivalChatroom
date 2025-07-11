#pragma once

// Qt
#include <QTcpServer>
#include <QtNetwork>

// std
#include <iostream>

class Server : public QTcpServer
{
	Q_OBJECT

public:
	explicit Server(QObject *parent = nullptr);

signals:
	void newConnection();

protected:
	void incomingConnection(qintptr socketDescriptor) override;

		
};

