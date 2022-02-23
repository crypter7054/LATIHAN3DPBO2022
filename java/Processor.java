
public class Processor {
    
    // deklarasi dan inisialisasi atribut private
    private String[] name = new String[5];
    private int price = 0;


    // constructor tanpa parameter
    public Processor(){
        
    }

    // constructor dengan parameter
    public Processor(String[] name, int price){
        
        for (int i = 0; i < 3; i++) {
            this.name[i] = name[i];
        }

        this.price = price;

    }

    
    // deklarasi setter sebagai method (Write)
    public void setName(String[] name){
        for (int i = 0; i < 3; i++) {
            this.name[i] = name[i];
        }
    }

    public void setPrice(int price){
        this.price = price;
    }

    
    // deklarasi getter sebagai method (Read Only)
    public String getName(int temp){
        return this.name[temp];
    }

    public int getPriceP(){
        return this.price;
    }


    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public void displayProcessor(){

        System.out.print("Processor      = ");

        for (int i = 0; i < 3; i++) {
            System.out.print(this.getName(i) + " ");
            if (i == 3) {
                System.out.print(this.getName(i));
            }
        }
    }
}
