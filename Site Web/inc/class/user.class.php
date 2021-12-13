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
    public function register($email, $password, $confirmPassword) 
    {
        if($password == $confirmPassword)
        {
            //requete préparé
            $stmt = $this->_sql->prepare("SELECT * FROM user WHERE email = ? AND mdp = ?");
            $stmt->execute(array($email, $password));
            $stmt = $stmt->fetch();
            //si ce n'est pas le bon MdP :
            if (!$stmt) 
            {
                $this->_email = $email;

                $stmt = $this->_sql->prepare("INSERT INTO `user`(`email`, `mdp`) VALUES (?,?)");
                $stmt->execute(array($email, $password));
                $stmt = $stmt->fetch();

                $stmt = $this->_sql->prepare("SELECT `ID`, `permission` FROM `user` WHERE `email` = ? AND `mdp` = ?");
                $stmt->execute(array($email, $password));
                $stmt = $stmt->fetch();

                $this->_id = $stmt['ID'];
                $this->_permissions = $stmt['permission'];

                echo "ID : "+$this->_id;

                $_SESSION['Connect']=true;
                //Refresh la page pour pouvoir acceder au autres page.
                header("Location: index.php");
            } else 
            {
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
        $stmt = $this->_sql->prepare("SELECT * FROM user WHERE email = ? AND mdp = ?");
        $stmt->execute(array($email, $password));
        $stmt = $stmt->fetch();
        //si ce n'est pas le bon MdP :
        if (!$stmt) 
        {
            echo "Mauvais nom d'utilisateur ou mot de passe.";
        } else 
        {   
            $this->_email = $email;
            $this->_id = $stmt['ID'];
            $this->_permissions = $stmt['permission'];

            echo "ID : "+$this->_id;

            $_SESSION['ID']=$this->_id;
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
    public function isEditor($ID)
    {
        $stmt = $this->_sql->prepare("SELECT permission FROM user WHERE ID = ?");
        $stmt->execute(array($ID));
        $stmt = $stmt->fetch();

        $perm = $stmt['permission'];
        console_log("Perm stmt : ".$perm);

        return $perm;
    }

    /**
     * 
     * Check if user is Spectator
     * 
     */
    public function isSpectator() {
        
    }
}