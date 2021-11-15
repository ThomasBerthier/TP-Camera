<?php
include "inc/config.php";
include "inc/db.php";

    if($_SESSION && $_SESSION['Connect'] == true){
        //Si session existe :
        //echo "Je suis co BG";
    }else{
        $User = new User($_SQL);
        ?>
            <div id="container">
            <!-- zone de connexion avec formulaire -->
                
            <form method="POST">
                <h1>Connexion</h1>
                    
                <label><strong>Email</strong></label>
                <input type="text" placeholder="Entrer l'email" name="email" required>

                <label><strong>Mot de passe</strong></label>
                <input type="password" placeholder="Entrer le mot de passe" name="password" required>

                <input type="submit" name='submit' value='LOGIN' onclick="<?php $user->login ?>">
                <a href='Inscription.php'> S'inscrir </a>
            </form>
        </div>
        <?php
    }
?>