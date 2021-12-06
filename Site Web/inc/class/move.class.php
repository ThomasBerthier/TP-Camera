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
    public function camUp() 
    {
        ?>
        <script type="text/javascript" src="Ordre.js">
            Ordre("camUp");
        </script>
        <?php
    }

    /**
     * Set position down 
     */
    public function camDown() 
    {
        ?>
        <script type="text/javascript" src="Ordre.js">
        Ordre('moveDown');
        </script>
        <?php
    }

    /**
     * Set position left 
     */
    public function camLeft() 
    {
        ?>
        <script type="text/javascript" src="Ordre.js">
        Ordre('moveLeft');
        </script>
        <?php

    }

    /**
     * Set position right 
     */
    public function camRight() 
    {
        ?>
        <script type='text/javascript' src='Ordre.js'>
        Ordre('moveRight');
        </script>
        <?php

    }

    /**
     * Set zoom + 
     */
    public function camZoomP() 
    {
        ?>
        <script type='text/javascript' src='Ordre.js'>
        Ordre('zoomMax');
        </script>
        <?php

    }

    /**
     * Set zoom -
     */
    public function camZoomM() 
    {
        ?>
        <script type='text/javascript' src='Ordre.js'>
        Ordre('zoomMin');
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