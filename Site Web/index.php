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
        <script src="Formulaire.js"></script>
    </head>
    <body>
        <?php
        if($_SESSION && $_SESSION['Connect'] ==true)
        {
            //Instancier cam :
            $Camera = new Cam($_SQL);
            ?>
            <!-- Formulaire pour connecter la cam -->
            <form id="NewCam" method="POST">
                <h1>Configuration caméra :</h1>
                <!-- Unexpected indentifier -->
                <label><strong>Localisation</strong></label>
                <input type="text" placeholder="Localisation" name="localisation" required>

                <label><strong>Adresse IP</strong></label>
                <input type="text" placeholder="Adresse IP" name="ipadress" required>

                <label><strong>Port</strong></label>
                <input type="text" placeholder="Port" name="port" required>

                <input type="button" name='submit' value='Nouvelle Caméra' onclick="<?php $Camera->createCam($_POST['localisation'], $_POST['ipadress'], $_POST['port']) ?>">
            </form>

            <!-- Formulaire d'édit -->
            <form id="EditCam" method="POST">
                <h1>Edit Configuration caméra :</h1>
                <label><strong>Changer Localisation</strong></label>
                <input type="text" placeholder="Changer Localisation" name="Editlocalisation" required>

                <label><strong>Changer Adresse IP</strong></label>
                <input type="text" placeholder="Changer Adresse IP" name="Editipadress" required>

                <label><strong>Changer Port</strong></label>
                <input type="text" placeholder="Changer Port" name="Editport" required>

                <input type="button" name='EditSubmit' value='Editer Caméra' onclick="<?php $Camera->editCam($_POST['localisation'], $_POST['ipadress'], $_POST['port']) ?>">
            </form>

            <form id="Suppr" method="POST">
                <input type="button" name='DelSubmit' value='Supprimer Caméra' onclick="<?php $Camera->delCam($_POST['localisation'], $_POST['ipadress'], $_POST['port']) ?>">
            </form>

            <!-- Bouton pour donner ordre -->
            <div id="Boutton">
                <button class="favorite styled " type="button" onclick='$camMove->camStart()'>
                    Allumer
                </button>
                <button class="favorite styled" type="button" onclick='$camMove->camStop()'>
                    Eteindre
                </button>

                <button class="favorite styled" type="button" onclick='$camMove->camUp()'>
                    Haut
                </button>
                <button class="favorite styled" type="button" onclick='$camMove->camDown()'>
                    Bas
                </button>
                <button class="favorite styled" type="button" onclick='$camMove->camLeft()'>
                    Gauche
                </button>
                <button class="favorite styled" type="button" onclick='$camMove->camRight()'>
                    Droite
                </button>
                <button class="favorite styled" type="button" onclick='$camMove->camReset()'>
                    Position Initiale
                </button>
                <button class="favorite styled" type="button" onclick=>
                    Stop
                </button>

                <button class="favorite styled position-absolute top-0 end-0" type="button" onclick='$camMove->camZoomP()'>
                    Zoom
                </button>
                <button class="favorite styled position-absolute top-50 end-0" type="button" onclick='$camMove->camZoomM()'>
                    Dézoom
                </button>
                <button class="favorite styled position-absolute top-100 end-0" type="button" onclick=>
                    Stop Zoom
                </button>
            </div>

            <div id="Deco">
            <!-- Déconnexion de l'utilisateur -->
                <button class="favorite styled " type="button" onclick="window.location.href='inc/logout.php';">
                    Déconnexion
                </button>
            </div>
        <?php 
        } else 
        {

        }
        echo '<script type="text/javascript">CacherEdit();</script>';
        ?>
    </body>
</html>

<!-- Doit envoyer JSON avec methode JS vers websocket-->