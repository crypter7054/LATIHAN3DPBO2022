<?php
class Disk{
    
    // deklarasi dan inisialisasi atribut private
    private $type = "";
    private $capacity = 0;
    private $price = 0;


    // deklarasi setter sebagai method (Write)
    public function __construct($type = "", $cap = 0, $price = 0){
        $this->type = $type;
        $this->capacity = $cap;
        $this->price = $price;
    }
    

    // deklarasi getter sebagai method (Read Only)
    public function setType($type){
        $this->type = $type;
    }
    public function setCap($cap){
        $this->capacity = $cap;
    }
    public function setPriceD($price){
        $this->price = $price;
    }
    

    // deklarasi getter sebagai method (Read Only)
    public function getType(){
        return $this->type;
    }
    public function getCap(){
        return $this->capacity;
    }
    public function getPriceD(){
        return $this->price;
    }


    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public function displayDisk(){
        echo "Disk Type      = ". $this->getType(). "<br>";
        echo "Disk Capacity  = ". $this->getCap(). " GB". "<br>";
    }


    // destructor
    public function __destruct(){
    }
}

?>