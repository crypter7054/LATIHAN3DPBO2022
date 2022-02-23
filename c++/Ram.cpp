#include <iostream>
#include <string>

using namespace std;

class Ram {

    // deklarasi dan inisialisasi atribut private
    private:
        int capacity = 0;
        int price = 0;

    public:

        // constructor tanpa parameter
        Ram(){
            
        }

        // constructor dengan parameter
        Ram(int capacity, int price){
            this->capacity = capacity;
            this->price = price;
        }


        // deklarasi setter sebagai method (Write)
        void setCapacity(int capacity){
            this->capacity = capacity;
        }

        void setPrice(int price){
            this->price = price;
        }

        
        // deklarasi getter sebagai method (Read Only)
        int getCapacity(){
            return this->capacity;
        }

        int getPriceR(){
            return this->price;
        }


        // deklarasi method Display untuk menampilkan data menggunakan method Getter
        void displayRam(){

            cout << "RAM Capacity   = " << this->getCapacity() << " GB" << endl; 

        }

        // destructor
        ~Ram(){

        }

};
