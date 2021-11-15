#pragma once
#include <qwebsocket.h>
#include <QWebSocketServer>
#include <qtcpsocket.h>

#include <QObject>

class Communication : public QObject
{
	Q_OBJECT

private:
	QWebSocketServer * webServer;
	QVector<QWebSocket *> allWebClients;
public:
	Communication(QObject *parent);
	~Communication();
public slots:
	void onWebServerNewConnection();
	void onWebClientDisconnected();
	void onWebClientCommunication();
	void sendMessage(QString message);
};
