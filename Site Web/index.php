<?php
    require "Session.php";
    include "console_log.php";
    include "tamere.php";
?>

<!DOCTYPE html>
<html>
    <head>
        <link rel="icon" href="Image/Shellos-Icone.ico">
        <title>Control Caméra</title>
        <!-- Bootstrap -->
        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
        <script type="text/javascript" src="https://ajax.googleapis.com/ajax/libs/jquery/3.1.0/jquery.min.js"></script>

    </head>
    <body>
        <?php
        if($_SESSION && $_SESSION['Connect'] == true)
        {
            
            $localisation = !empty($_POST['localisation']) ? $_POST['localisation'] : "";
            $ipadress = !empty($_POST['ipadress']) ? $_POST['ipadress'] : "";
            $port = !empty($_POST['port']) ? $_POST['port'] : "";

            $fulldick = "ws://".$ipadress.":".$port;
            console_log($fulldick);
            if($fulldick == "ws://:")
            {
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


                <input class="favorite styled"  type="submit" name="newCam" onclick="créerCam(<?= $fulldick ?>);" value="Créer Caméra">

            </form>

            <?php
            }
            if($fulldick != "ws://:")
            {
                $Editlocalisation = !empty($_POST['Editlocalisation']) ? $_POST['Editlocalisation'] : "";
                $Editipadress = !empty($_POST['Editipadress']) ? $_POST['Editipadress'] : "";
                $Editport = !empty($_POST['Editport']) ? $_POST['Editport'] : "";
    
                $Editfulldick = "ws://".$Editipadress.":".$Editport;
                console_log($fulldick);
                ?>

                <form id="EditCam" method="POST">
                    <h1>Edit Configuration caméra :</h1>
                    <label><strong>Changer Localisation</strong></label>
                    <input type="text" placeholder="Changer Localisation" name="Editlocalisation" required>

                    <label><strong>Changer Adresse IP</strong></label>
                    <input type="text" placeholder="Changer Adresse IP" name="Editipadress" required>

                    <label><strong>Changer Port</strong></label>
                    <input type="text" placeholder="Changer Port" name="Editport" required>

                    <input class="favorite styled"  type="submit" name="editCam" onclick="editCam(<?= $Editfulldick ?>);" value="Edite Caméra">
                </form>

                <form onsubmit="return false">
                    <a href="?method=start">
                        <input class="favorite styled"  type="submit" onclick="Ordre('camOn');" value="Démarrer">
                    </a>

                    <a href="?method=stop">
                        <button class="favorite styled"  type="submit" onclick="Ordre('camOff');">Eteindre</button>
                    </a>

                    <a href="?method=up">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveUp');">Haut</button>
                    </a>

                    <a href="?method=down">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveDown');">Bas</button>
                    </a>

                    <a href="?method=left">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveLeft');">Gauche</button>
                    </a>

                    <a href="?method=right">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveRight');">Droite</button>
                    </a>

                    <a href="?method=stop">
                        <button class="favorite styled"  type="submit" onclick="Ordre('movementStop');">Stop</button>
                    </a>

                    <a href="?method=reset">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveReset');">Reset</button>
                    </a>

                    <a href="?method=zoom">
                        <button class="favorite styled"  type="submit" onclick="Ordre('zoomMax');">Zoom</button>
                    </a>

                    <a href="?method=dezoom">
                        <button class="favorite styled"  type="submit" onclick="Ordre('zoomMin');">Dézoom</button>
                    </a>

                    <a href="?method=stopzoom">
                        <button class="favorite styled"  type="submit" onclick="Ordre('zoomStop');">Stop Zoom</button>
                    </a>
                </form>
                    <div id="Deco">
                    <!-- Déconnexion de l'utilisateur -->
                        <button class="favorite styled " type="button" onclick="window.location.href='inc/logout.php';">
                            Déconnexion
                        </button>
                    </div>
                    
                <?php 

                if(isset($_GET["method"])) {
                    if($_GET["method"] == "start") {
                        $camMove->camStart();
                    }
            
                    if($_GET["method"] == "stop") {
                        $camMove->camStop();
                    }

                    if($_GET["method"] == "up") {
                        
                        $camMove->camUp();
                    }

                    if($_GET["method"] == "down") {
                        
                        $camMove->camDown();
                    }

                    if($_GET["method"] == "left") {
                        
                        $camMove->camLeft();
                    }

                    if($_GET["method"] == "right") {
                        
                        $camMove->camRight();
                    }

                    if($_GET["method"] == "stop") {
                        
                        $camMove->camStop();
                    }

                    if($_GET["method"] == "zoom") {
                        
                        $camMove->camZoomM();
                    }

                    if($_GET["method"] == "dezoom") {
                        
                        $camMove->camZoomP();
                    }

                    if($_GET["method"] == "stopzoom") {
                        
                        $camMove->camStop();
                    }
                }
            }
        }    
        ?>

        <script type="text/javascript" src="Formulaire.js"></script>
        <script type="text/javascript" src="jQuery.js"></script>
        
        <script>
            function Ordre(method)
            {
                //Envoier commande en héxa
                //var socket = new WebSocket("ws://192.168.65.28:16050");    
                socket.send(method);
            }
        </script>
        <script>
            function créerCam(valeurCam)
            {
                var socket = new WebSocket(ValeurCam);
            }
        </script>
        <script>
            function editCam(editvaleurCam)
            {
                socket.close();
                var socket = new WebSocket(editValeurCam);
            }
        </script>

    </body>
</html>