<?php 
session_start();

// Include DB CONFIG 
require_once "db.php";

// TABLE OF CONFIG
$_CONFIG = array();

// Init class
require "user.class.php";
$user = new User($_SQL);

require "cam.class.php";
$cam = new Cam($_SQL);

require "move.class.php";
//$camMove = new CamMove($idCam);