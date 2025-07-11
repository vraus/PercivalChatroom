#pragma once

// Qt
#include <QObject>
#include <QTcpSocket>

class DeviceController : public QObject
{
	Q_OBJECT

public:
	explicit DeviceController(QObject* parent = nullptr);

	void ConnectToDevice(QString ip, int port);

signals:

private:
	QTcpSocket m_socket;
	QString m_deviceIp;
	int m_devicePort;
};

