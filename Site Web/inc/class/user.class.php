<?php 

class User {

    // Init variables
    private $id;
    private $email;
    private $permissions;
    private $sql;

    public function __construct($_SQL) {
        $this->_sql = $_SQL;
    }

    /**
     * 
     * Creation of user in database
     * 
     * email : $_POST['email']
     * password : $_POST['password'] -> sha512
     * confirmPassword : $_POST['confirmPassword'] -> sha512
     * 
     * Permissions : 0 -> Spectator AND 1 -> Editor
     * 
     */
    public function register($email, $password, $confirmPassord) {

    }

    /**
     * 
     * Connection of user
     * 
     * email : $_POST['email']
     * password : $_POST['password'] -> sha512
     * 
     */
    public function login($email, $password) {

    }

    /**
     * 
     * Check if user is Editor
     * 
     */
    public function isEditor() {
        
    }

    /**
     * 
     * Check if user is Spectator
     * 
     */
    public function isSpectator() {
        
    }

}