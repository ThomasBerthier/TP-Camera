#ifndef CAMERA_H
#define CAMERA_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QtWebSockets/QtWebSockets>
#include <QDebug>
#include <QtCore>

namespace Ui {
class Camera;
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
    Ui::Camera *ui;

    QTcpSocket *socket;

    QWebSocketServer *webSocketServer;
    QWebSocket * obj;

   public slots:
    void issue(QByteArray data);

    void onSocketConnected();
    void newWebConnexion();
    void processTextMessage(QString message);
    void webSocketDisonnected();

// Camera functions

    void camOn();
    void camOff();

// Camera mouvement functions

    void camRight();
    void camLeft();
    void camUp();
    void camDown();
    void camMovementStop();

    void camPositionReset();

// Camera zoom functions

    void camZoomMin();
    void camZoomMax();
    void camZoomStop();
};

#endif // CAMERA_H
