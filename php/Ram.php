<?php

class Ram{

    // deklarasi dan inisialisasi atribut private
    private $capacity = 0;
    private $price = 0;
    

    // constructor dengan parameter
    public function __construct($cap = 0, $price = 0){
        $this->capacity = $cap;
        $this->price = $price;
    }
    

    // deklarasi setter sebagai method (Write)
    public function setCap($cap){
        $this->capacity = $cap;
    }
    public function setPriceR($price){
        $this->price = $price;
    }
    

    // deklarasi getter sebagai method (Read Only)
    public function getCap(){
        return $this->capacity;
    }
    public function getPriceR(){
        return $this->price;
    }
    

    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public function displayRam(){
        echo "RAM Capacity   = ". $this->getCap(). " GB". "<br>";
    }


    // destructor
    public function __destruct(){
    }
        
    }

?>