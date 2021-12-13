<?php 

class CamMove 
{
    // Init variables
    private $method;
    private $speed;

    public function __construct() {
        
    }

    /**
     * Set position up 
     */
    public function camUp($socket) 
    {
        ?>
        <script type="text/javascript" src="Ordre.js">
            console.log("frhefrefui");
            Ordre("camUp", socket);
        </script>
        <?php
    }

    /**
     * Set position down 
     */
    public function camDown($socket) 
    {
        ?>
        <script type="text/javascript" src="Ordre.js">
            Ordre('moveDown', $socket);
        </script>
        <?php
    }

    /**
     * Set position left 
     */
    public function camLeft($socket) 
    {
        ?>
        <script type="text/javascript" src="Ordre.js">
            Ordre('moveLeft', $socket);
        </script>
        <?php

    }

    /**
     * Set position right 
     */
    public function camRight($socket) 
    {
        ?>
        <script type='text/javascript' src='Ordre.js'>
            Ordre('moveRight', $socket);
        </script>
        <?php

    }

    /**
     * Set zoom + 
     */
    public function camZoomP($socket) 
    {
        ?>
        <script type='text/javascript' src='Ordre.js'>
            Ordre('zoomMax', $socket);
        </script>
        <?php

    }

    /**
     * Set zoom -
     */
    public function camZoomM($socket) 
    {
        ?>
        <script type='text/javascript' src='Ordre.js'>
        Ordre('zoomMin', $socket);
        </script>
        <?php

    }

    /**
     * Set status ON
     */
    public function camStart() 
    {
        ?>
            <script type='text/javascript' src='Ordre.js'>
                console.log('fjrjgrje');
                Ordre('camStart');
                console.log('fujrehfuirefurhefuhruefhurefhuirefhuirehfu');
            </script>
        <?php
    }

    /**
     * Set status OFF 
     */
    public function camStop() 
    {
        ?>
        <script type="text/javascript" src="Ordre.js">
            Ordre("camOff");
        </script>
        <?php
    }

    /**
     * Reset camera
     */
    public function camReset() 
    {
        ?>
        <script type='text/javascript' src='Ordre.js'>
        Ordre('moveReset');
        </script>
        <?php

    }

}