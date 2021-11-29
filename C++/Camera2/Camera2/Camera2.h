#ifndef CAMERA_H
#define CAMERA_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QtWebSockets/QtWebSockets>
#include <QDebug>
#include <QtCore>

namespace Ui {
	class Camera2;
}

QT_FORWARD_DECLARE_CLASS(QWebSocketServer)
QT_FORWARD_DECLARE_CLASS(QWebSocket)

class Camera : public QMainWindow
{
	Q_OBJECT

public:
	explicit Camera(QWidget *parent = nullptr);
	~Camera();

private:
	Ui::Camera2 *ui;

	QTcpSocket *socket;

	QWebSocketServer *m_pWebSocketServer;
	QList<QWebSocket *> m_clients;
	bool m_debug;

public slots:
	void issue(QByteArray data);

	void onSocketConnected();
	void newWebConnexion();
	void processTextMessage(QString message);

	// Camera mouvement functions
	void camOn();
	//void camOff();

	//void camRight();
};

#endif // CAMERA_H
