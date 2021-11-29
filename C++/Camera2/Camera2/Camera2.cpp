#include "camera2.h"
#include "ui_camera2.h"
#include "QtWebSockets/qwebsocketserver.h"
#include "QtWebSockets/qwebsocket.h"

Camera::Camera(QWidget *parent) :
	QMainWindow(parent),
	uisetupUi(this),
	m_pWebSocketServer(new QWebSocketServer(QStringLiteral("WebServer"),
		QWebSocketServer::NonSecureMode, this)),
	m_clients(),
	m_debug()
{

	QObject::connect(m_pWebSocketServer, SIGNAL(newConnection()), this, SLOT(newWebConnexion()));
	m_pWebSocketServer->listen(QHostAddress::AnyIPv4, 168);

	socket = new QTcpSocket(this);
	QObject::connect(socket, SIGNAL(connected()), this, SLOT(onSocketConnected()));
	socket->connectToHost("192.168.64.150", 4001);
}

void Camera::onSocketConnected()
{
	// Receive JSON
	qDebug() << "Socket connected";
}

void Camera::newWebConnexion()
{
	QWebSocket *pSocket = m_pWebSocketServer->nextPendingConnection();
	qDebug() << "WebServer connexion ok";
	QObject::connect(pSocket, &QWebSocket::textMessageReceived, this, &Camera::processTextMessage);
}

void Camera::processTextMessage(QString message)
{
	if (message == "start") {
		camOn();
	}

	if (message == "stop") {

	}

	if (message == "moveUp") {
		// Move up function
	}

	if (message == "moveDown") {

	}

	if (message == "moveRight") {

	}

	if (message == "moveLeft") {

	}

}

void Camera::camOn() {
	// Convert string to hex
	QByteArray data = QByteArray::fromHex("81 01 04 00 02 FF");

	// Send data to issue function
	issue(data);
}

void Camera::issue(QByteArray data)
{
	socket->write(data);
	socket->flush();
}

Camera::~Camera()
{
	delete ui;
}
