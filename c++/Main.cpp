#include <iostream>
#include <string>

// import file kelas PC
#include "Pc.cpp"

using namespace std;

int main(){

    // deklarasi var. inputan data
    int priceP, priceD, priceR, capacityD, capacityR; 
    string nameP[5], typeD;


    // inputan atribut data Processor yaitu nama, dan harga
    cout << ">> MASUKKAN DATA PROCESSOR <<" << endl;

    cout << "Processor      : ";

    for (int i = 0; i < 3; i++)
    {
        cin >> nameP[i];
    }

    cout << "Price(USD)     : ";
    cin >> priceP;

    // instansi objek kelas Processor dengan memanggil constructor parameter sesuai inputan user
    Processor P1 = Processor(nameP, priceP);


    // inputan atribut data Disk yaitu tipe, kapasitas, dan harga
    cout << "\n>> MASUKKAN DATA DISK <<" << endl;

    cout << "Disk Type(SSD/HDD) : ";
    cin >> typeD;

    cout << "Capacity(GB)       : ";
    cin >> capacityD;

    cout << "Price(USD)         : ";
    cin >> priceD;

    // instansi objek kelas Disk dengan memanggil constructor parameter sesuai inputan user
    Disk D1 = Disk(typeD, capacityD, priceD);


    // inputan atribut data RAM yaitu kapasitas dan harga
    cout << "\n>> MASUKKAN DATA RAM <<" << endl;

    cout << "Capacity(GB)   : ";
    cin >> capacityR;

    cout << "Price(USD)     : ";
    cin >> priceR;

    // instansi objek kelas RAM dengan memanggil constructor parameter sesuai inputan user
    Ram R1 = Ram(capacityR, priceR);

    
    // instansi objek PC
    Pc PC1;

    // panggil method Setter untuk mengisi data Processor, Disk, dan RAM pada objek PC
    PC1.setP(P1);
    PC1.setD(D1);
    PC1.setR(R1);

    // panggil method Setter untuk mengisi harga dari Processor, Disk, dan RAM
    PC1.setTotalPrice(P1.getPriceP(), D1.getPriceD(), R1.getPriceR());

    // tampilkan data PC SPEC 
    cout << "\n===== PC SPECIFICATION =====\n" << endl;

    // panggil method display untuk menampilkan data spek PC dan countTotal total harga keseluruhan
    P1.displayProcessor();
    D1.displayDisk();
    R1.displayRam();
    PC1.countTotal();   

    return 0;
    
}