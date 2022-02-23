// import Scanner untuk inputan
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        
        // deklarasi var. inputan data
        int priceP, priceD, priceR, capacityD, capacityR;
        String[] name = new String[5];
        String typeD;

        // deklarasi scanner dengan nama input
        Scanner input = new Scanner(System.in);

        
        // inputan atribut data Processor yaitu nama, dan harga
        System.out.println(">> MASUKKAN DATA PROCESSOR <<");

        System.out.print("Processor      : ");
        for (int i = 0; i < 3; i++) {

            name[i] = input.next();
        }

        System.out.print("Price(USD)     : ");
        priceP = input.nextInt();

        // instansi objek kelas Processor dengan memanggil constructor parameter sesuai inputan user
        Processor P1 = new Processor(name, priceP);

        
        // inputan atribut data Disk yaitu tipe, kapasitas, dan harga
        System.out.println("\n>> MASUKKAN DATA DISK <<");

        System.out.print("Disk Type(SSD/HDD) : ");
        typeD = input.next();

        System.out.print("Capacity(GB)       : ");
        capacityD = input.nextInt();

        System.out.print("Price(USD)         : ");
        priceD = input.nextInt();

        // instansi objek kelas Disk dengan memanggil constructor parameter sesuai inputan user
        Disk D1 = new Disk(typeD, capacityD, priceD);


        // inputan atribut data RAM yaitu kapasitas dan harga
        System.out.println("\n>> MASUKKAN DATA RAM <<");

        System.out.print("Capacity(GB)       : ");
        capacityR = input.nextInt();

        System.out.print("Price(USD)         : ");
        priceR = input.nextInt();

        // instansi objek kelas RAM dengan memanggil constructor parameter sesuai inputan user
        Ram R1 = new Ram(capacityR, priceR);


        // instansi objek PC
        Pc PC1 = new Pc();

        // panggil method Setter untuk mengisi harga dari Processor, Disk, dan RAM
        PC1.setTotal(P1.getPriceP(), D1.getPriceD(), R1.getPriceR());

        // tampilkan data PC SPEC 
        System.out.println("\n===== PC SPECIFICATION =====\n");

        // panggil method display untuk menampilkan data spek PC dan countTotal total harga keseluruhan
        P1.displayProcessor();
        D1.displayDisk();
        R1.displayRam();
        PC1.countTotal();

    }
}
