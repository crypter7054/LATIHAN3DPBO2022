public class Disk {
    
    // deklarasi dan inisialisasi atribut private
    private String type = "-";
    private int capacity = 0; 
    private int price = 0;
    
    
    // constructor tanpa parameter
    public Disk(){
        
    }

    // constructor dengan parameter
    public Disk(String type, int capacity, int price){
        this.type = type;
        this.capacity = capacity;
        this.price = price;
    }


    // deklarasi setter sebagai method (Write)
    public void setType(String type){
        this.type = type;
    }

    public void setCap(int capacity){
        this.capacity = capacity;
    }

    public void setPrice(int price){
        this.price = price;
    }


    // deklarasi getter sebagai method (Read Only)
    public String getType(){
        return this.type;
    }

    public int getCap(){
        return this.capacity;
    }

    public int getPriceD(){
        return this.price;
    }


    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public void displayDisk(){

        System.out.println("\nDisk Type      = " + this.getType());
        System.out.println("Disk Capacity  = " + this.getCap() + " GB");
    }

}
