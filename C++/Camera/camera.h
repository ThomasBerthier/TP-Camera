#ifndef CAMERA_H
#define CAMERA_H

#include "QtWebSockets/qwebsocketserver.h"
#include "QtWebSockets/qwebsocket.h"

#include <QTcpSocket>
#include <QtWebSockets/QtWebSockets>
#include <QDebug>
#include <QtCore>
#include <QObject>

class Camera : public QObject
{
    public:
        Camera(QObject *parent = Q_NULLPTR);

    private:

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
