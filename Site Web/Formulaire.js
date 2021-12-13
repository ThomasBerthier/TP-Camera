/*
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
*/

function AfficheEdit()
{
    let Creation = document.getElementById("InfoTypeFormulaire");
    Creation.innerText ="Edit Configuration Caméra" ;
}

function createCam(localisation, ipAdresse, port)
{
    //METHOD PERSO
 //--------------------------------------------------------------------------
    $.ajax({
        url : 'tamere.php',
        type : 'POST',
        data : { localisation: localisation, ipAdresse : ipAdresse, port : port, action: "createCam" },

        success : function(code_html, statut)
        {
            //return rien
            console.log(code_html);
            let userData = JSON.parse(code_html);
            let Creation = document.getElementById("InfoTypeFormulaire");
            
            let Edit = document.getElementById("EditCam");
            let Bouton = document.getElementById("Boutton");
            let Suppr = document.getElementById("Suppr");
            
            Creation.innerText ="Edit Configuration Caméra" ;
            Edit.style.display = "none";
            Bouton.style.display = "none";
            Suppr.style.display = "none";
            

        },
        error : function(code_html, statut)
        {
            alert("Problème création cam");
        },
    })
}