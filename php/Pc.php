<?php 

class Pc{

    // deklarasi dan inisialisasi atribut private termasuk composition dengan objek Processor, Disk, dan Ram
    private Processor $Pobj;
    private Disk $Dobj;
    private Ram $Robj;
    private $totalPrice = 0;


    // constructor dengan parameter
    public function __construct($Pobj = Processor, $Dobj = Disk, $Robj = Ram){
        $this->Pobj = $Pobj;
        $this->Dobj = $Dobj;
        $this->Robj = $Robj;
    }


    // deklarasi setter sebagai method (Write)
    public function setP($Pobj){
        $this->Pobj = $freq;
    }

    public function setD($Dobj){
        $this->Dobj = $size;
    }

    public function setR($Robj){
        $this->Robj = $supCuda;
    }

    // setter pada total price adalah penjumlahan terhadap ketiga harga pada kelas spek PC
    public function setTotalPrice($priceP = 0, $priceD = 0, $priceR = 0){
        $this->totalPrice = $priceP + $priceD  + $priceR;
    }

    
    // deklarasi getter sebagai method (Read Only)
    public function getP(){
        return $this->Pobj;
    }

    public function getD(){
        return $this->Dobj;
    }

    public function getR(){
        return $this->Robj;
    }

    public function getTotal(){
        return $this->totalPrice;
    }

    
    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public function countTotal(){
        echo "Total Price    = $". $this->getTotal(). "<br>";
    }


    // destructor
    public function __destruct(){

    }
        
        
}

?>