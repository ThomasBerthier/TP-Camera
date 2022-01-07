<?php
    switch ($_POST['action']) 
    {

        case 'newCam' :
            console_log("Localisation : ".$Localisation);
            console_log("IP : ".$IP);
            console_log("Port : ".$Port);

            $cam->createCam($Localisation, $IP, $Port);
            break;
    }
?>