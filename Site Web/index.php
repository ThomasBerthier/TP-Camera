<!-- Pour piloter la caméra : 
Allumer         
Eteindre        
Vers le haut    
Vers le bas     
Gauche          
Droite          
Reset position  
Zoom            
Dézoom          
Stop            
Balayage ???    

Session
Bouton pour piloter cam
-->
<?php
    require "Session.php";

?>
<!DOCTYPE html>
<html>
    <head>
        <link rel="icon" href="Image/Shellos-Icone.ico">
        <title>Control Caméra</title>
        <script type="text/javascript" src="Ordre.js"></script>
        <!-- Bootstrap -->
        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
    </head>
    <body>
        <?php
        if($_SESSION && $_SESSION['Connect'] ==true)
        {
            //Instancier cam :
            $Camera = new Cam($_SQL);
            ?>
            <button class="favorite styled " type="button" onclick=>
                Allumer
            </button>
            <button class="favorite styled" type="button" onclick=>
                Eteindre
            </button>

            <button class="favorite styled" type="button" onclick=>
                Haut
            </button>
            <button class="favorite styled" type="button" onclick=>
                Bas
            </button>
            <button class="favorite styled" type="button" onclick=>
                Gauche
            </button>
            <button class="favorite styled" type="button" onclick=>
                Droite
            </button>
            <button class="favorite styled" type="button" onclick=>
                Position Initiale
            </button>
            <button class="favorite styled" type="button" onclick=>
                Stop
            </button>

            <button class="favorite styled position-absolute top-0 end-0" type="button" onclick=>
                Zoom
            </button>
            <button class="favorite styled position-absolute top-50 end-0" type="button" onclick=>
                Dézoom
            </button>
            <button class="favorite styled position-absolute top-100 end-0" type="button" onclick=>
                Stop Zoom
            </button>


            <button class="favorite styled " type="button" onclick=>
                Déconnexion
            </button>
        <?php 
        } else 
        {
        }?>
    </body>
</html>

<!-- Doit envoyer JSON avec methode JS vers websocket-->