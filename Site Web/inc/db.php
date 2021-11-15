<?php 

// Configuration of database connection
$_DB = array(
    "hostname" => "",
    "username" => "",
    "password" => "",
    "db_name" => ""
);

// Create connexion to database
try {
    $_SQL = new PDO("mysql:host=".$_DB["hostname"].";dbname=".$_DB["db_name"].";charset=utf8;", $_DB["username"], $_DB["password"]);
} catch(Exception $e) {
    echo "Erreur de connexion à la base de données";
}