<?php 
session_start();

// Include DB CONFIG 
require_once "db.php";

// TABLE OF CONFIG
$_CONFIG = array();

// Init class
require "class/user.class.php";
$user = new User($_SQL);

require "class/cam.class.php";
$cam = new Cam($_SQL);

require "class/move.class.php";
//$camMove = new CamMove($idCam);