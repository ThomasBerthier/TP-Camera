/********************************************************************************
** Form generated from reading UI file 'EVID30.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVID30_H
#define UI_EVID30_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EVID30Class
{
public:
    QWidget *centralWidget;
    QPushButton *startButton;
    QPushButton *shutdownButton;
    QPushButton *autoModeButton;
    QPushButton *moveUpOnXButton;
    QPushButton *moveUpOnYButton;
    QPushButton *moveDownOnXButton;
    QPushButton *moveDownOnYButton;
    QPushButton *ResetPositionButton;
    QPushButton *stopMoveButton;
    QPushButton *zoomMinButton;
    QPushButton *zoomMaxButton;
    QPushButton *stopZoomButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EVID30Class)
    {
        if (EVID30Class->objectName().isEmpty())
            EVID30Class->setObjectName(QString::fromUtf8("EVID30Class"));
        EVID30Class->resize(543, 408);
        centralWidget = new QWidget(EVID30Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(20, 10, 91, 41));
        startButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));
        shutdownButton = new QPushButton(centralWidget);
        shutdownButton->setObjectName(QString::fromUtf8("shutdownButton"));
        shutdownButton->setGeometry(QRect(20, 60, 91, 41));
        shutdownButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        autoModeButton = new QPushButton(centralWidget);
        autoModeButton->setObjectName(QString::fromUtf8("autoModeButton"));
        autoModeButton->setGeometry(QRect(20, 150, 91, 41));
        autoModeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);"));
        moveUpOnXButton = new QPushButton(centralWidget);
        moveUpOnXButton->setObjectName(QString::fromUtf8("moveUpOnXButton"));
        moveUpOnXButton->setGeometry(QRect(160, 10, 111, 91));
        moveUpOnXButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        moveUpOnYButton = new QPushButton(centralWidget);
        moveUpOnYButton->setObjectName(QString::fromUtf8("moveUpOnYButton"));
        moveUpOnYButton->setGeometry(QRect(400, 10, 111, 91));
        moveUpOnYButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        moveDownOnXButton = new QPushButton(centralWidget);
        moveDownOnXButton->setObjectName(QString::fromUtf8("moveDownOnXButton"));
        moveDownOnXButton->setGeometry(QRect(160, 110, 111, 91));
        moveDownOnXButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        moveDownOnYButton = new QPushButton(centralWidget);
        moveDownOnYButton->setObjectName(QString::fromUtf8("moveDownOnYButton"));
        moveDownOnYButton->setGeometry(QRect(400, 110, 111, 91));
        moveDownOnYButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        ResetPositionButton = new QPushButton(centralWidget);
        ResetPositionButton->setObjectName(QString::fromUtf8("ResetPositionButton"));
        ResetPositionButton->setGeometry(QRect(260, 220, 151, 23));
        ResetPositionButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        stopMoveButton = new QPushButton(centralWidget);
        stopMoveButton->setObjectName(QString::fromUtf8("stopMoveButton"));
        stopMoveButton->setGeometry(QRect(280, 10, 111, 191));
        stopMoveButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        zoomMinButton = new QPushButton(centralWidget);
        zoomMinButton->setObjectName(QString::fromUtf8("zoomMinButton"));
        zoomMinButton->setGeometry(QRect(160, 260, 111, 91));
        zoomMinButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        zoomMaxButton = new QPushButton(centralWidget);
        zoomMaxButton->setObjectName(QString::fromUtf8("zoomMaxButton"));
        zoomMaxButton->setGeometry(QRect(400, 260, 111, 91));
        zoomMaxButton->setStyleSheet(QString::fromUtf8("background-color: rgb(185, 95, 95);"));
        stopZoomButton = new QPushButton(centralWidget);
        stopZoomButton->setObjectName(QString::fromUtf8("stopZoomButton"));
        stopZoomButton->setGeometry(QRect(280, 260, 111, 91));
        stopZoomButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        EVID30Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EVID30Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 543, 21));
        EVID30Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EVID30Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        EVID30Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EVID30Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EVID30Class->setStatusBar(statusBar);

        retranslateUi(EVID30Class);
        QObject::connect(startButton, SIGNAL(clicked()), EVID30Class, SLOT(onStartButtonClicked()));
        QObject::connect(shutdownButton, SIGNAL(clicked()), EVID30Class, SLOT(onShutdownButtonClicked()));
        QObject::connect(autoModeButton, SIGNAL(clicked()), EVID30Class, SLOT(onAutoModeButtonClicked()));
        QObject::connect(moveUpOnXButton, SIGNAL(clicked()), EVID30Class, SLOT(onMoveUpXButtonClicked()));
        QObject::connect(moveUpOnYButton, SIGNAL(clicked()), EVID30Class, SLOT(onMoveUpYButtonClicked()));
        QObject::connect(moveDownOnXButton, SIGNAL(clicked()), EVID30Class, SLOT(onMoveDownXButtonClicked()));
        QObject::connect(moveDownOnYButton, SIGNAL(clicked()), EVID30Class, SLOT(onMoveDownYButtonClicked()));
        QObject::connect(ResetPositionButton, SIGNAL(clicked()), EVID30Class, SLOT(onResetPositionButtonClicked()));
        QObject::connect(stopMoveButton, SIGNAL(clicked()), EVID30Class, SLOT(onStopMoveButtonClicked()));
        QObject::connect(zoomMinButton, SIGNAL(clicked()), EVID30Class, SLOT(onZoomMinButtonClicked()));
        QObject::connect(zoomMaxButton, SIGNAL(clicked()), EVID30Class, SLOT(onZoomMaxButtonClicked()));
        QObject::connect(stopZoomButton, SIGNAL(clicked()), EVID30Class, SLOT(onStopZoomButton()));

        QMetaObject::connectSlotsByName(EVID30Class);
    } // setupUi

    void retranslateUi(QMainWindow *EVID30Class)
    {
        EVID30Class->setWindowTitle(QCoreApplication::translate("EVID30Class", "EVID30", nullptr));
        startButton->setText(QCoreApplication::translate("EVID30Class", "Allumer", nullptr));
        shutdownButton->setText(QCoreApplication::translate("EVID30Class", "Eteindre", nullptr));
        autoModeButton->setText(QCoreApplication::translate("EVID30Class", "Mode auto", nullptr));
        moveUpOnXButton->setText(QCoreApplication::translate("EVID30Class", "Vers la droite", nullptr));
        moveUpOnYButton->setText(QCoreApplication::translate("EVID30Class", "Vers le haut", nullptr));
        moveDownOnXButton->setText(QCoreApplication::translate("EVID30Class", "Vers la gauche", nullptr));
        moveDownOnYButton->setText(QCoreApplication::translate("EVID30Class", "Vers le bas", nullptr));
        ResetPositionButton->setText(QCoreApplication::translate("EVID30Class", "Remettre la position \303\240 Z\303\251ro", nullptr));
        stopMoveButton->setText(QCoreApplication::translate("EVID30Class", "STOP", nullptr));
        zoomMinButton->setText(QCoreApplication::translate("EVID30Class", "Zoom Min", nullptr));
        zoomMaxButton->setText(QCoreApplication::translate("EVID30Class", "Zoom Max", nullptr));
        stopZoomButton->setText(QCoreApplication::translate("EVID30Class", "STOP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EVID30Class: public Ui_EVID30Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVID30_H
