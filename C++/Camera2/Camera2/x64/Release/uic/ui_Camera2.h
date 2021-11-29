/********************************************************************************
** Form generated from reading UI file 'Camera2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA2_H
#define UI_CAMERA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Camera2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Camera2Class)
    {
        if (Camera2Class->objectName().isEmpty())
            Camera2Class->setObjectName(QString::fromUtf8("Camera2Class"));
        Camera2Class->resize(600, 400);
        menuBar = new QMenuBar(Camera2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Camera2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Camera2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Camera2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Camera2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Camera2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Camera2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Camera2Class->setStatusBar(statusBar);

        retranslateUi(Camera2Class);

        QMetaObject::connectSlotsByName(Camera2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Camera2Class)
    {
        Camera2Class->setWindowTitle(QCoreApplication::translate("Camera2Class", "Camera2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Camera2Class: public Ui_Camera2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA2_H
