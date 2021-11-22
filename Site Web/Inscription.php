<?php
include "inc/config.php";
include "inc/db.php";

        $User = new User($_SQL);
        ?>
            <div id="container">
            <!-- zone de connexion avec formulaire -->
                
            <form method="POST">
                <h1>Inscription</h1>
                    
                <label><strong>Email</strong></label>
                <input type="text" placeholder="Entrer l'email" name="email" required>

                <label><strong>Mot de passe</strong></label>
                <input type="password" placeholder="Entrer le mot de passe" name="password" required>

                <label><strong>Confirmer le mot de passe</strong></label>
                <input type="password" placeholder="Confirmer le mot de passe" name="confirmPassword" required>

                <button type="submit" name='submit' value='Inscription'> Inscription </button>
            </form>
        </div>
        <?php

if (isset($_POST["submit"])) 
{
    $user->register($_POST['email'], $_POST['password'], $_POST['confirmPassword']);
}    
        

?>