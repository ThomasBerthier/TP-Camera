<?php 

class CamMove {

    // Init variables
    private $idCam;

    private $method;
    private $speed;

    public function __construct($idCam) {
        $this->_idCam = $idCam;
    }

    /**
     * Set position up 
     */
    public function camUp() 
    {
        //Ordre(81 01 06 01 08 08 03 01 FF);
    }

    /**
     * Set position down 
     */
    public function camDown() 
    {
        //Ordre(81 01 06 01 08 08 03 02 FF);
    }

    /**
     * Set position left 
     */
    public function camLeft() 
    {
        //Ordre(81 01 06 01 08 08 01 03 FF);
    }

    /**
     * Set position right 
     */
    public function camRight() 
    {
        //Ordre(81 01 06 01 08 08 02 03 FF);
    }

    /**
     * Set zoom + 
     */
    public function camZoomP() 
    {
        //Ordre(81 01 04 07 02 FF);
    }

    /**
     * Set zoom -
     */
    public function camZoomM() 
    {
        //Ordre(81 01 04 07 00 FF);
    }

    /**
     * Set status ON
     */
    public function camStart() 
    {
        //Ordre(81 01 04 00 02 FF);
    }

    /**
     * Set status OFF 
     */
    public function camStop() 
    {
        //Ordre(81 01 04 00 03 FF);
    }

    /**
     * Reset camera
     */
    public function camReset() 
    {
        //Ordre(81 01 06 02 08 08 0Y 0Y 0Y 0Y 0Z 0Z 0Z 0Z FF);
    }

}