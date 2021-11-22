<?php 

class Cam {
    
    // Init variables
    private $id;
    private $localisation;
    private $ipAddress;
    private $port;

    public function __construct($_SQL) 
    {
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
    public function createCam($localisation, $ipAddress, $port) 
    {
        $this->_localisation = $localisation;
        $this->_ipaddress = $ipAddress;
        $this->_port = $port;

        $stmt = $this->_sql->prepare("INSERT INTO `cam`(`Localisation`, `IP`, `Port`) VALUES (?, ?, ?)");
        $stmt->execute(array($localisation, $ipAddress, $port));
        $stmt = $stmt->fetch();
        if (!$stmt) 
        {
            //echo "<script type='text/javascript'>alert('j pu la merde')</script>";
            echo "Les Problème";
        } else 
        {
            $stmt = $this->_sql->prepare("SELECT `ID` FROM `cam` WHERE `Localisation`= ? AND `IP`= ? AND `Port` = ?");
            $stmt->execute(array($localisation, $ipAddress, $port));
            $stmt = $stmt->fetch();
            $this->_id = $stmt;
            ?>

            <script type="text/javascript">
                let Creation = document.getElementById("NewCam");
                let Edit = document.getElementById("EditCam");
                let Bouton = document.getElementById("Boutton");
                let Suppr = document.getElementById("Suppr")
            
                Creation.style.display = "block"
                Edit.style.display = "none";
                Bouton.style.display = "none";
                Suppr.style.display = "none";
            </script>

            <?php
            //Création de camMove maintenant qu'on a l'ID
            $camMove = new CamMove($this->_id);
        }
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
    public function editCam($localisation, $ipAddress, $port)
    {
        $this->_localisation = $localisation;
        $this->_ipaddress = $ipAddress;
        $this->_port = $port;

        $stmt = $this->_sql->prepare("UPDATE `cam` SET `Localisation`='?',`IP`='?',`Port`='?' WHERE `ID`=?");
        $stmt->execute(array($localisation, $ipAddress, $port, $this->_id));
        $stmt = $stmt->fetch();
        ?>
        <script type="text/javascript">

            let Creation = document.getElementById("NewCam");
            let Edit = document.getElementById("EditCam");
            let Bouton = document.getElementById("Boutton");
            let Suppr = document.getElementById("Suppr")
        
            Creation.style.display = "none"
            Edit.style.display = "block";
            Bouton.style.display = "block";
            Suppr.style.display = "block";
        </script>
        <?php
    }

    /** 
     * 
     * Delete camera in database 
     * 
     * id : $_POST['idCamera']
     * 
     */
    public function delCam($id)
    {
        $stmt = $this->_sql->prepare("DELETE FROM `cam` WHERE `ID`=?");
        $stmt->execute(array($this->_id));
        $stmt = $stmt->fetch();
        
        ?>
        <script type="text/javascript">
            let Creation = document.getElementById("NewCam");
            let Edit = document.getElementById("EditCam");
            let Bouton = document.getElementById("Boutton");
            let Suppr = document.getElementById("Suppr")
        
            Creation.style.display = "block"
            Edit.style.display = "none";
            Bouton.style.display = "none";
            Suppr.style.display = "none";
        </script>
        <?php
    }

    public function getID()
    {
        return $this->_id;
    }

}