//*********************************************************************************************
//* Programme : EVID30.cpp date : 19/10/2021
//*---------------------------------------------------------------------------------------------------------
//* derni�re mise a jour : 19/10/2021
//*
//*Programmeurs : Yann Martin, Julien Lussiez, Julien Laridant classe : BTSSN2
//*--------------------------------------------------------------------------------------------------------
//* BUT : Gestion de la cam�ra Sony EVID30
//*********************************************************************************************

#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EVID30.h"

// On inclus les lib n�cessaires
#include <QSerialPort>
#include <QSerialPortInfo>

// On ajoute le d�buggeur
#include <qDebug>

// Besoin suppl�mentaires
#include <QThread>

class EVID30 : public QMainWindow
{
    Q_OBJECT

public:
    EVID30(QWidget *parent = Q_NULLPTR);

private:
    Ui::EVID30Class ui;

	// On instance les pointeurs n�cessaires
	QSerialPort *port;

public slots:
	// Boutons marche arr�t
	void onStartButtonClicked();
	void onShutdownButtonClicked();

	// Envoi des donn�es � la cam�ra par port s�rie
	void issue(const QByteArray data);

	// D�placement de la cam�ra sur l'axe X ou Y 
	void onMoveUpXButtonClicked();
	void onMoveDownXButtonClicked();

	void onMoveUpYButtonClicked();
	void onMoveDownYButtonClicked();

	// Mise en marche du mode automatique de balayage
	void onAutoModeButtonClicked();

	// Boutons de r�initialisation
	void onResetPositionButtonClicked();

	// Bouton pour stop le mouvement
	void onStopMoveButtonClicked();

	// Boutons Zoom
	void onZoomMinButtonClicked();
	void onZoomMaxButtonClicked();
	void onStopZoomButton();

	// Fonction pour remettre la cam�ra a sa place au d�marrage 
	void goHome();
};
