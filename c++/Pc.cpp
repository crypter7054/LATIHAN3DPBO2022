#include <iostream>
#include <string>

using namespace std;

// import file yang akan composition pada kelas PC
#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

// deklarasi kelas Pc 
class Pc {
    
    // deklarasi dan inisialisasi atribut private termasuk composition dengan objek Processor, Disk, dan Ram
    private:
        Processor Pobj;
        Disk Dobj;
        Ram Robj;
        int totalPrice = 0;

    public:

        // constructor tanpa parameter
        Pc(){
            
        }

        // constructor dengan parameter kelas dan atribut
        Pc(Processor inputP, Disk inputD, Ram inputR){
            this->Pobj = inputP;
            this->Dobj = inputD;
            this->Robj = inputR;
        }

        
        // deklarasi setter sebagai method (Write)
        void setP(Processor P){
            this->Pobj = P;
        }

        void setD(Disk D){
            this->Dobj = D;
        }

        void setR(Ram R){
            this->Robj = R;
        }

        // setter pada total price adalah penjumlahan terhadap ketiga harga pada kelas spek PC
        void setTotalPrice(int priceP, int priceD, int priceR){
            this->totalPrice = priceP + priceD + priceR;
        }


        // deklarasi getter sebagai method (Read Only)
        Processor getP(){
            return this->Pobj;
        }

        Disk getD(){
            return this->Dobj;
        }

        Ram getR(){
            return this->Robj;
        }

        int getTotal(){
            return this->totalPrice;
        }

        // deklarasi method countTotal untuk menampilkan hasil penjumlahan harga dengan menggunakan method Getter
        void countTotal(){
            cout << "Total Price    = $" << this->getTotal() << endl;
        }

        // destructor
        ~Pc(){

        }

};