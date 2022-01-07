//Envoyer commande en Héxa au C++
//Envoier commande en héxa

function Ordre(Ordre)
{
    //Envoier commande en héxa
    var socket = new WebSocket("ws://192.168.65.153:16050");
    socket.send(Ordre);
}

function Connect(lien)
{
    //Envoier commande en héxa
    var socket = new WebSocket(lien);
}

function CacherEdit()
{
    let Creation = document.getElementById("NewCam");
    let Edit = document.getElementById("EditCam");
    let Bouton = document.getElementById("Boutton");
    let Suppr = document.getElementById("Suppr")

    Creation.style.display = "block"
    Edit.style.display = "none";
    Bouton.style.display = "none";
    Suppr.style.display = "none";
}
