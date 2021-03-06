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
        <script>
            var socket;
            console.log("socket : "+socket);
        </script>
        <!-- Créer variable de socket pour l'avoir en global -->
        <?php
        //$Editfulldick = "ws://:";
        if($_SESSION && $_SESSION['Connect'] == true)
        {
            $localisation = !empty($_POST['localisation']) ? $_POST['localisation'] : "";
            $ipadress = !empty($_POST['ipadress']) ? $_POST['ipadress'] : "";
            $port = !empty($_POST['port']) ? $_POST['port'] : "";

            //$fulldick = "ws://".$ipadress.":".$port;

           // console_log("PHP : ".$fulldick);

            $IDUser = $_SESSION['ID'];
            $permission = $user->isEditor($IDUser);

            console_log("Perm : ".$permission);
            //Vérifier si il y a 1 caméra en base : 
            $IDCam = $cam->verifCam();
            console_log("ID Cam : ".$IDCam["ID"]);

            //Si la cam existe en base :
            if ($IDCam["ID"] > 1)
            {
                //Si l'utilisateur est admin
                if ($permission == 1)
                {
                    ?>
                    <!-- Formulaire pour connecter la cam -->
                    <form id="NewCam" method="POST" onsubmit="return false">
                        <h1 id="InfoTypeFormulaire">Configuration caméra :</h1>
                        <!-- Unexpected indentifier -->
                        <label><strong>Localisation</strong></label>
                        <input id="localisation" type="text" placeholder="Localisation" name="localisation" required>
        
                        <label><strong>Adresse IP</strong></label>
                        <input id="ipadress" type="text" placeholder="Adresse IP" name="ipadress" required>
        
                        <label><strong>Port</strong></label>
                        <input id="port" type="text" placeholder="Port" name="port" required>
    
                        <input class="favorite styled" type="submit" name="newCam" onclick="creerCam(socket);" value="Créer Caméra">
                    </form>
                    <?php
                } elseif($permission == 0) //Si le serv est connecté
                {
                    ?>
                    <div>
                        Aucune caméra n'est enregistré en base, merci de contacter les personnes compétantes pour le faire.
                    </div>
                    <?php
                }
            } else //Si il y a une cam
            {
                if($permission == 1)
                {
                    ?>
                    <form id="NewCam" method="POST">
                        <h1 id="InfoTypeFormulaire"> Edit Configuration caméra : </h1>
                        <!-- Unexpected indentifier -->
                        <label><strong>Localisation</strong></label>
                        <input type="text" placeholder="Localisation" name="localisation" required>

                        <label><strong>Adresse IP</strong></label>
                        <input type="text" placeholder="Adresse IP" name="ipadress" required>
                
                        <label><strong>Port</strong></label>
                        <input type="text" placeholder="Port" name="port" required>
            
                        <input class="favorite styled"  type="submit" name="editCam" onclick="creerCam('<?=$fulldick?>');" value="Edit Cam">
                    </form>
                    <?php
                }
                ?>
                <form onsubmit="return false">
                    <a href="?method=start">
                        <input class="favorite styled"  type="submit" onclick="Ordre('camOn', '<?=$fulldick?>');" value="Démarrer">
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=stop">
                        <button class="favorite styled"  type="submit" onclick="Ordre('camOff');">Eteindre</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=up">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveUp');">Haut</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=down">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveDown');">Bas</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=left">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveLeft');">Gauche</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=right">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveRight');">Droite</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=stop">
                        <button class="favorite styled"  type="submit" onclick="Ordre('movementStop');">Stop</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=reset">
                        <button class="favorite styled"  type="submit" onclick="Ordre('moveReset');">Reset</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=zoom">
                        <button class="favorite styled"  type="submit" onclick="Ordre('zoomMax');">Zoom</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=dezoom">
                        <button class="favorite styled"  type="submit" onclick="Ordre('zoomMin');">Dézoom</button>
                    </a>
                </form>

                <form onsubmit="return false">
                    <a href="?method=stopzoom">
                        <button class="favorite styled"  type="submit" onclick="Ordre('zoomStop');">Stop Zoom</button>
                    </a>
                </form>
                <?php
            }
            ?>
            <div id="Deco">
            <!-- Déconnexion de l'utilisateur -->
                <button class="favorite styled " type="button" onclick="window.location.href='inc/logout.php';">
                    Déconnexion
                </button>
            </div>
                
            <?php 
                
            if(isset($_GET["method"])) 
            {
                if($_GET["method"] == "start") {
                    $camMove->camStart($fulldick);
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
        ?>

        <script type="text/javascript" src="Formulaire.js"></script>
        <script type="text/javascript" src="jQuery.js"></script>
        <script type="text/javascript" src="inc/cookie.js"></script>
        
        <script>
            function Ordre(method, ValeurCam)
            {
                socket.send(method);   
            }
        </script>
        <script>
            function creerCam(socket)
            {
                //Récuperer les valeurs depuis l'ID
                var Localisation = document.getElementById("localisation").value
                var IP = document.getElementById("ipadress").value
                var Port = document.getElementById("port").value

                socket = "ws://"+IP+":"+Port;
                socket = new WebSocket(socket);
                createCookie(socket);



                $.ajax({
                    url: "tamere.php",
                    type: "POST",
                    data: {Localisation : Localisation, IP: IP, Port : Port, action: "newCam"},
                    success: function(data)
                    {
                        console.log(Localisation);
                        console.log(IP);
                        console.log(Port);

                    },
                    error : function(code_html, statut)
                    {
                        alert("Tuez moi");
                    },
                });
            }
        </script>
        <script>
            function editCam(editvaleurCam)
            {
                socket = new WebSocket(editValeurCam);
            }
        </script>
    </body>
</html>