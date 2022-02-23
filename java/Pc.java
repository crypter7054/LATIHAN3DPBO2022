public class Pc {
    
    // deklarasi dan inisialisasi atribut private termasuk composition dengan objek Processor, Disk, dan Ram
    private Processor Pobj;
    private Disk Dobj;
    private Ram Robj;
    int totalPrice = 0;


    // constructor tanpa parameter
    public void Pc(){
        
    }

    // constructor dengan parameter
    public void Pc(Processor inputP, Disk inputD, Ram inputR, int total){
        this.Pobj = inputP;
        this.Dobj = inputD;
        this.Robj = inputR;

        // jumlahkan seluruh dengan memanggil masing-masing Getter price kemudian ditampung dalam atribut totalPrice
        this.totalPrice = Pobj.getPriceP() + Dobj.getPriceD() + Robj.getPriceR();
    }

    
    // deklarasi setter sebagai method (Write)
    public void setP(Processor P){
        this.Pobj = P;
    }

    public void setD(Disk D){
        this.Dobj = D;
    }

    public void setR(Ram R){
        this.Robj = R;
    }

    public void setTotal(int priceP, int priceD, int priceR){
        this.totalPrice = priceP + priceD + priceR;
    }


    // deklarasi getter sebagai method (Read Only)
    public Processor getP(){
        return this.Pobj;
    }

    public Disk getD(){
        return this.Dobj;
    }

    public Ram getR(){
        return this.Robj;
    }

    public int getTotal(){
        return this.totalPrice;
    }


    // deklarasi method Display untuk menampilkan data menggunakan method Getter
    public void countTotal(){
        System.out.println("Total Price    = $" + this.getTotal());
    }
}
