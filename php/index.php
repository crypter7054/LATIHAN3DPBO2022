<?php

// import file kelas Processcor, Disk, Ram, dan PC
include "Processor.php";
include "Disk.php";
include "Ram.php";
include "Pc.php";


    // tampilkan data PC SPEC 
    echo "===== PC SPECIFICATION =====\n". "<br>";

    // instansi objek kelas Processor dengan memanggil constructor parameter
    $P1 = new Processor("Intel", 330);
    $P1->displayProcessor();

    // instansi objek kelas Disk dengan memanggil constructor parameter 
    $D1 = new Disk("SSD", 1000, 50);
    $D1->displayDisk();

    // instansi objek kelas RAM dengan memanggil constructor parameter 
    $R1 = new Ram(16, 91);
    $R1->displayRam();

    // instansi objek kelas Pc dengan memanggil constructor parameter 
    $PC1 = new Pc($P1, $D1, $R1);

    // panggil method Setter untuk mengisi harga dari Processor, Disk, dan RAM
    $PC1->setTotalPrice($P1->getPriceP(), $D1->getPriceD(), $R1->getPriceR());

    // panggil method display untuk menampilkan data spek PC dan countTotal total harga keseluruhan
    $PC1->countTotal();





?>