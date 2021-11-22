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