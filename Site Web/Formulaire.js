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

function CacherCreation()
{
    let Creation = document.getElementById("NewCam");
    let Edit = document.getElementById("EditCam");
    let Bouton = document.getElementById("Boutton");
    let Suppr = document.getElementById("Suppr")

    Creation.style.display = "none"
    Edit.style.display = "block";
    Bouton.style.display = "block";
    Suppr.style.display = "block";
}