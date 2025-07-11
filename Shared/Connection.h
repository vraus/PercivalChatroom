#pragma once

// Qt
#include <QBasicTimer>
#include <QTimer>
#include <QTcpSocket>
#include <QCborStreamWriter>
#include <QCborStreamReader>

class Connection : public QTcpSocket
{
	Q_OBJECT

public:
    enum ConnectionState {
        WaitingForGreeting,
        ReadingGreeting,
        ProcessingGreeting,
        ReadyForUse
    };
    enum DataType {
        PlainText,
        Ping,
        Pong,
        Greeting,
        Undefined
    };

	explicit Connection(QObject* parent = nullptr);
	explicit Connection(qintptr socketDescriptor, QObject* parent = nullptr);
	~Connection();

	QString name() const;

private slots:
    void processReadyRead();
    void sendPing();
    void sendGreetingMessage();

private:
	qintptr m_socketDescriptor;
	QString m_name;

	QCborStreamWriter m_writer;
	QCborStreamReader m_reader;

	QTimer m_pingTimer;
};

