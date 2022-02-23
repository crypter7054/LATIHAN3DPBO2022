public class Ram {

    // deklarasi dan inisialisasi atribut private
    private int capacity = 0;
    private int price = 0;


    // constructor tanpa parameter
    public Ram(){
        
    }

    // constructor dengan parameter
    public Ram(int capacity, int price){
        this.capacity = capacity;
        this.price = price;
    }


    // deklarasi setter sebagai method (Write)
    public void setCap(int capacity){
        this.capacity = capacity;
    }

    public void setPrice(int price){
        this.price = price;
    }


    // deklarasi getter sebagai method (Read Only)
    public int getCap(){
        return this.capacity;
    }

    public int getPriceR(){
        return this.price;
    }


    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public void displayRam(){

        System.out.println("RAM Capacity   = " + this.getCap() + " GB");

    }

}
