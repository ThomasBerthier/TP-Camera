#include "Communication.h"
//Initialise une instance de web server et tcp client, connecte les signaux et définit sur quel port et adresse IP ils écoutent.
Communication::Communication(QObject *parent)
	: QObject(parent)
{

}



Communication::~Communication()
{
}
//Récupère la connexion et connecte les signaux 
void Communication::onWebServerNewConnection()
{

}
//Déconnecte les signaux et le client
void Communication::onWebClientDisconnected()
{

}
//Recupere un json, le traite et envoie les trames au moxa en fonctions de la méthode recue
void Communication::onWebClientCommunication()
{

}
//Méthode qui envoie le message au MOXA qui prend en paramètre le message a envoyer
void Communication::sendMessage(QString message)
{

}
