<?php

class Processor{
    
    // deklarasi dan inisialisasi atribut private
    private $name = "-";
    private $price = 0;

    // constructor dengan parameter
    public function __construct($inputName = "", $inputPrice = 0){
        $this->name = $inputName;
        $this->price = $inputPrice;
    }


    // deklarasi setter sebagai method (Write)
    public function setName($name){
        $this->name = $name;
    }
    public function setPriceP($price){
        $this->price = $price;
    }

    
    // deklarasi getter sebagai method (Read Only)
    public function getName(){
        return $this->name;
    }
    public function getPriceP(){
        return $this->price;
    }

    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public function displayProcessor(){
        echo "Processor      = ". $this->getName(). "<br>";
    }

    
    // destructor
    public function __destruct(){
        
    }
}

?>