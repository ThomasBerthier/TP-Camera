#include "Communication.h"
//Initialise une instance de web server et tcp client, connecte les signaux et d�finit sur quel port et adresse IP ils �coutent.
Communication::Communication(QObject *parent)
	: QObject(parent)
{

}



Communication::~Communication()
{
}
//R�cup�re la connexion et connecte les signaux 
void Communication::onWebServerNewConnection()
{

}
//D�connecte les signaux et le client
void Communication::onWebClientDisconnected()
{

}
//Recupere un json, le traite et envoie les trames au moxa en fonctions de la m�thode recue
void Communication::onWebClientCommunication()
{

}
//M�thode qui envoie le message au MOXA qui prend en param�tre le message a envoyer
void Communication::sendMessage(QString message)
{

}
