#include "Connection.h"

#include <QTimerEvent>

using namespace std::chrono_literals;

static constexpr auto PingInterval = 5s;

Connection::Connection(QObject* parent) : QTcpSocket(parent), m_writer(this)
{
	m_pingTimer.setInterval(PingInterval);

	connect(this, &QTcpSocket::readyRead, this, &Connection::processReadyRead);
    connect(this, &QTcpSocket::disconnected, &m_pingTimer, &QTimer::stop);
    connect(&m_pingTimer, &QTimer::timeout, this, &Connection::sendPing);
    connect(this, &QTcpSocket::connected, this, &Connection::sendGreetingMessage);
}

