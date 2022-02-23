
# import file kelas Processor, Disk, Ram, dan PC
from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc


# inputan atribut data Processor yaitu nama, dan harga
print(">> MASUKKAN DATA PROCESSOR <<")

name = input("Processor      : ")
priceP = input("Price(USD)     : ")

# instansi objek kelas Processor dengan memanggil constructor parameter sesuai inputan user
P1 = Processor(name, priceP)


# inputan atribut data Disk yaitu tipe, kapasitas, dan harga
print("\n>> MASUKKAN DATA DISK <<")

typeD = input("Disk Type(SSD/HDD) : ")
capacityD = input("Capacity(GB)       : ")
priceD = input("Price(USD)         : ")

# instansi objek kelas Disk dengan memanggil constructor parameter sesuai inputan user
D1 = Disk(typeD, capacityD, priceD)


# inputan atribut data RAM yaitu kapasitas dan harga
print("\n>> MASUKKAN DATA RAM <<")

capacityR = input("Capacity(GB)       : ")
priceR = input("Price(USD)         : ")

# instansi objek kelas RAM dengan memanggil constructor parameter sesuai inputan user
R1 = Ram(capacityR, priceR)


# instansi objek PC
PC1 = Pc

# panggil method Constructor untuk mengisi data Processor, Disk, dan RAM pada objek PC
PC1 = Pc(P1, D1, R1)

# panggil method Setter untuk mengisi harga dari Processor, Disk, dan RAM
PC1.setTotalPrice(P1.getPriceP(), D1.getPriceD(), R1.getPriceR())


# tampilkan data PC SPEC 
print("\n===== PC SPECIFICATION =====\n")


# panggil method display untuk menampilkan data spek PC dan countTotal total harga keseluruhan
P1.displayProcessor();
D1.displayDisk();
R1.displayRam();
PC1.countTotal(); 


