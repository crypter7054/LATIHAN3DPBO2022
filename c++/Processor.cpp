#include <iostream>
#include <string>

using namespace std;

class Processor {

    // deklarasi dan inisialisasi atribut private
    private:
        string name[5];
        int price = 0;

    public:

        // constructor tanpa parameter
        Processor(){
            
        }

        // constructor dengan parameter
        Processor(string name[5], int price){
            for (int i = 0; i < 3; i++)
            {
                this->name[i] = name[i];
            }
            
            this->price = price;
        }


        // deklarasi setter sebagai method (Write)
        void setName(string name[5]){

            for (int i = 0; i < 3; i++)
            {
                this->name[i] = name[i];
            }
        }

        void setPrice(int price){
            this->price = price;
        }


        // deklarasi getter sebagai method (Read Only)
        string getName(int temp){
            return this->name[temp];
        }

        int getPriceP(){
            return this->price;
        }

        // deklarasi method Display untuk menampilkan data menggunakan method Getter
        void displayProcessor(){
            
            cout << "Processor      = ";

            for (int i = 0; i < 3; i++)
            {
                cout << this->getName(i) << " ";
            } 

            cout << "\n";
        
        }

        // destructor
        ~Processor(){

        }

};
