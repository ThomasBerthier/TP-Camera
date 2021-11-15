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
    public function register($email, $password, $confirmPassord) 
    {
        if($password == $confirmPassord)
        {
            //requete préparé
            $stmt = $dbh->prepare("SELECT * FROM user WHERE email = ? AND mdp = ?");
            $stmt->execute(array($email, $password));
            $stmt = $stmt->fetch();
            //si ce n'est pas le bon MdP :
            if (!$stmt) {
                $_SESSION['Connect']=true;
                //Refresh la page pour pouvoir acceder au autres page.
                header("Refresh:0");
            } else {
                echo "L'utilisateur existe déjà.";
            }  
        } else 
        {
            echo "Merci d'entrer le même mot de passe";
        }

    }

    /**
     * 
     * Connection of user
     * 
     * email : $_POST['email']
     * password : $_POST['password'] -> sha512
     * 
     */
    public function login($email, $password) 
    {
        //requete préparé
        $stmt = $dbh->prepare("SELECT * FROM user WHERE email = ? AND mdp = ?");
        $stmt->execute(array($email, $password));
        $stmt = $stmt->fetch();
        //si ce n'est pas le bon MdP :
        if (!$stmt) {
            echo "'Mauvais nom d'utilisateur ou mot de passe' ";
        } else {
            $_SESSION['Connect']=true;
            //Refresh la page pour pouvoir acceder au autres page.
            header("Refresh:0");
        }   
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