/********************************************************************************
** Form generated from reading UI file 'Camera.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraClass
{
public:
    QWidget *centralWidget;
    QPushButton *connectButton;
    QPushButton *sendButton;
    QLineEdit *IPLineEdit;
    QLineEdit *portLineEdit;
    QLabel *connectionStatusLabel;
    QLabel *messageLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CameraClass)
    {
        if (CameraClass->objectName().isEmpty())
            CameraClass->setObjectName(QString::fromUtf8("CameraClass"));
        CameraClass->resize(408, 281);
        centralWidget = new QWidget(CameraClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(30, 130, 75, 23));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(260, 200, 111, 23));
        IPLineEdit = new QLineEdit(centralWidget);
        IPLineEdit->setObjectName(QString::fromUtf8("IPLineEdit"));
        IPLineEdit->setGeometry(QRect(30, 30, 113, 20));
        portLineEdit = new QLineEdit(centralWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(30, 70, 113, 20));
        connectionStatusLabel = new QLabel(centralWidget);
        connectionStatusLabel->setObjectName(QString::fromUtf8("connectionStatusLabel"));
        connectionStatusLabel->setGeometry(QRect(166, 30, 231, 41));
        messageLabel = new QLabel(centralWidget);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(170, 80, 171, 31));
        CameraClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CameraClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 408, 21));
        CameraClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CameraClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CameraClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CameraClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CameraClass->setStatusBar(statusBar);

        retranslateUi(CameraClass);
        QObject::connect(connectButton, SIGNAL(clicked()), CameraClass, SLOT(onConnectButtonClicked()));
        QObject::connect(sendButton, SIGNAL(clicked()), CameraClass, SLOT(onSendMessageButtonClicked()));

        QMetaObject::connectSlotsByName(CameraClass);
    } // setupUi

    void retranslateUi(QMainWindow *CameraClass)
    {
        CameraClass->setWindowTitle(QCoreApplication::translate("CameraClass", "Camera", nullptr));
        connectButton->setText(QCoreApplication::translate("CameraClass", "Connexion", nullptr));
        sendButton->setText(QCoreApplication::translate("CameraClass", "Envoyer", nullptr));
        connectionStatusLabel->setText(QString());
        messageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CameraClass: public Ui_CameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
