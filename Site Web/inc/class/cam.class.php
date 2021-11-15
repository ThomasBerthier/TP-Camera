<?php 

class Cam {
    
    // Init variables
    private $id;
    private $localisation;
    private $ipAddress;
    private $port;

    public function __construct($_SQL) {
        $this->_sql = $_SQL;
    }

    /** 
     * 
     * Create camera in database
     * 
     * localisation : $_POST['localisation']
     * ipAddress : $_POST['ipAddress']
     * port : $_POST['port']
     * 
     */
    public function createCam($localisation, $ipAddress, $port) {

    }

    /** 
     * 
     * Edit camera in database
     * 
     * localisation : $_POST['localisation']
     * ipAddress : $_POST['ipAddress']
     * port : $_POST['port']
     * 
     */
    public function editCam($localisation, $ipAddress, $port) {

    }

    /** 
     * 
     * Delete camera in database 
     * 
     * id : $_POST['idCamera']
     * 
     */
    public function delCam($id) {

    }

}