//Envoyer commande en Héxa au C++
function Ordre(OrdreHexa)
{
    //Envoier commande en héxa
    var socket = null;

    socket = new WebSocket("ws://127.0.0.1:1234");

    socket.send(OrdreHexa);   
}