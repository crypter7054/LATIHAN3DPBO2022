#include <iostream>
#include <string>

using namespace std;

class Disk {

    // deklarasi dan inisialisasi atribut private
    private:
        string type = "-";
        int capacity = 0;
        int price = 0;

    public:

        // constructor tanpa parameter
        Disk(){
            
        }

        // constructor dengan parameter
        Disk(string type, int capacity,int price){
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        
        // deklarasi setter sebagai method (Write)
        void setType(string type){
            this->type = type;
        }

        void setCapacity(int capacity){
            this->capacity = capacity;
        }

        void setPrice(int price){
            this->price = price;
        }

        
        // deklarasi getter sebagai method (Read Only)
        string getType(){
            return this->type;
        }

        int getCapacity(){
            return this->capacity;
        }

        int getPriceD(){
            return this->price;
        }

        // deklarasi method Display untuk menampilkan data menggunakan method Getter
        void displayDisk(){

            cout << "Disk Type      = " << this->getType() << endl; 
            cout << "Disk Capacity  = " << this->getCapacity() <<  " GB" << endl; 

        }

        // destructor
        ~Disk(){

        }

};
