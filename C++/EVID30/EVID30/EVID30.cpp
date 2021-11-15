//*********************************************************************************************
//* Programme : EVID30.cpp date : 19/10/2021
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 19/10/2021
//*
//*Programmeurs : Yann Martin, Julien Lussiez, Julien Laridant classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT : Gestion de la caméra Sony EVID30
//*********************************************************************************************

#include "EVID30.h"
#define PORT "COM1"


EVID30::EVID30(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	// On instancie le Port Série
	port = new QSerialPort(this);
	port->setPortName(PORT);
	port->setBaudRate(QSerialPort::Baud9600);
	port->setDataBits(QSerialPort::DataBits::Data8);
	port->setParity(QSerialPort::Parity::NoParity);
	port->setStopBits(QSerialPort::StopBits::OneStop);
	port->setFlowControl(QSerialPort::NoFlowControl);
	port->open(QIODevice::ReadWrite);
	
	// On replace la camréra à la position standard au démarrage du logiciel
	goHome();
}

void EVID30::goHome() {
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 06 04 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::issue(const QByteArray data) {
	// On envois les données reçue dans data sur le port série
	port->write(data);
	port->flush();
}

void EVID30::onStartButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 04 00 02 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onShutdownButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 04 00 03 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onMoveUpXButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 06 01 08 08 02 03 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onMoveDownXButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 06 01 08 08 01 03 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onMoveUpYButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 06 01 08 08 03 01 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onMoveDownYButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 06 01 08 08 03 02 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onResetPositionButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 06 02 08 08 0Y 0Y 0Y 0Y 0Z 0Z 0Z 0Z FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onStopMoveButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 06 01 08 08 03 03 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onZoomMinButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 04 07 03 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onZoomMaxButtonClicked()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 04 07 02 FF");

	// On envoi la fonction de communication
	issue(method);
}

void EVID30::onStopZoomButton()
{
	// On convertie la commande en hex
	QByteArray method = QByteArray::fromHex("81 01 04 07 00 FF");

	// On envoi la fonction de communication
	issue(method);
}



void EVID30::onAutoModeButtonClicked()
{	
	onMoveUpXButtonClicked(); // A droite
	QThread::usleep(5000000);
	onMoveDownXButtonClicked(); // A gauche
	QThread::usleep(5000000);
	onResetPositionButtonClicked(); // Centre
}
