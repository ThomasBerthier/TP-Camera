#pragma once

#include <QtWidgets/QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <qtcpsocket.h>
#include <qtcpserver.h>
#include <qDebug>
#include "ui_Camera.h"

class Camera : public QMainWindow
{
    Q_OBJECT

public:
    Camera(QWidget *parent = Q_NULLPTR);

private:
    Ui::CameraClass ui;

	QSerialPort *port;
	QTcpSocket * socket;
	QTcpServer * server;

public slots:

	void onConnectButtonClicked();
	void onSendMessageButtonClicked();
};
