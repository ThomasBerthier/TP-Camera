//*********************************************************************************************
//* Programme : EVID30.cpp date : 19/10/2021
//*---------------------------------------------------------------------------------------------------------
//* dernière mise a jour : 19/10/2021
//*
//*Programmeurs : Yann Martin, Julien Lussiez, Julien Laridant classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT : Gestion de la caméra Sony EVID30
//*********************************************************************************************

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EVID30.h"

// On inclus les lib nécessaires
#include <QSerialPort>
#include <QSerialPortInfo>

// On ajoute le débuggeur
#include <qDebug>

// Besoin supplémentaires
#include <QThread>

class EVID30 : public QMainWindow
{
    Q_OBJECT

public:
    EVID30(QWidget *parent = Q_NULLPTR);

private:
    Ui::EVID30Class ui;

	// On instance les pointeurs nécessaires
	QSerialPort *port;

public slots:
	// Boutons marche arrêt
	void onStartButtonClicked();
	void onShutdownButtonClicked();

	// Envoi des données à la caméra par port série
	void issue(const QByteArray data);

	// Déplacement de la caméra sur l'axe X ou Y 
	void onMoveUpXButtonClicked();
	void onMoveDownXButtonClicked();

	void onMoveUpYButtonClicked();
	void onMoveDownYButtonClicked();

	// Mise en marche du mode automatique de balayage
	void onAutoModeButtonClicked();

	// Boutons de réinitialisation
	void onResetPositionButtonClicked();

	// Bouton pour stop le mouvement
	void onStopMoveButtonClicked();

	// Boutons Zoom
	void onZoomMinButtonClicked();
	void onZoomMaxButtonClicked();
	void onStopZoomButton();

	// Fonction pour remettre la caméra a sa place au démarrage 
	void goHome();
};
