#include "Camera.h"
#define PORT "COM1"

Camera::Camera(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

// Initialisation du port série
port = new QSerialPort(this);
port->setPortName(PORT);
port->setBaudRate(QSerialPort::Baud9600);
port->setDataBits(QSerialPort::DataBits::Data8);
port->setParity(QSerialPort::Parity::NoParity);
port->setStopBits(QSerialPort::StopBits::OneStop);
port->setFlowControl(QSerialPort::NoFlowControl);
port->open(QIODevice::ReadWrite);

// Initialisation Tcp
socket = new QTcpSocket(this);
QObject::connect(socket, SIGNAL(clicked()), this, SLOT(onConnectButtonClicked()));
QObject::connect(socket, SIGNAL(readyRead()), this, SLOT(onSocketReadyRead()));

server = new QTcpServer(this);
QObject::connect(server, SIGNAL(newConnection()), this, SLOT(onServerNewConnection()));
server->listen(QHostAddress::AnyIPv4, 4321);

}

void Camera::onConnectButtonClicked() {
	QString ip = ui.IPLineEdit->text();
	QString port = ui.portLineEdit->text();

	bool ok;
	int portAsInt = port.toInt(&ok);
	if (ok) {
		socket->connectToHost(ip, portAsInt);
	}
}

void Camera::onSendMessageButtonClicked() {
	if (socket->state() == QTcpSocket::ConnectedState) {
		socket->write("81 01 06 04 FF");
	}

}

void Camera::onSocketReadyRead() {
	QByteArray data = socket->read(socket->bytesAvailable());
	QString str(data);
	ui.connectionStatusLabel->setText("Status connexion: Message recu = " + str);
}

void Camera::onServerNewConnection() {
	ui.connectionStatusLabel->setText("Un client s'est connecte");
	QTcpSocket * client = server->nextPendingConnection();
	QObject::connect(client, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
	QObject::connect(client, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));

}

void Camera::onClientReadyRead() {
	QTcpSocket * obj = qobject_cast<QTcpSocket*>(sender());
	QByteArray data = socket->read(socket->bytesAvailable());
	QString str(data);
	ui.messageLabel->setText(data);
	obj->write(data);
}

void Camera::onClientDisconnected() {
	QTcpSocket * obj = qobject_cast<QTcpSocket*>(sender());
	QObject::disconnect(obj, SIGNAL(readyRead()), this, SLOT(onClientReadyRead()));
	QObject::disconnect(obj, SIGNAL(disconnected()), this, SLOT(onClientDisconnected()));
	obj->deleteLater();
}
