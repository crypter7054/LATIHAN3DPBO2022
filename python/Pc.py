
# import file kelas Processor, Disk dan Ram untuk digunakan composition
from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc():

    # deklarasi dan inisialisasi atribut private termasuk composition dengan objek Processor, Disk, dan Ram
    __Pobj = Processor
    __Dobj = Disk
    __Robj = Ram
    __totalPrice = 0


    # constructor tanpa parameter
    def __init__(self):
        self.__Pobj = Processor
        self.__Dobj = Disk
        self.__Robj = Ram
        self.__totalPrice = 0

    # constructor dengan parameter
    def __init__(self, inputP = Processor, inputD = Disk, inputR = Ram):
        self.__Pobj = inputP
        self.__Dobj = inputD
        self.__Robj = inputR


    # deklarasi setter sebagai method (Write)
    def setP(self, inputP = Processor):
        self.__Pobj = inputP

    def setD(self, inputD = Disk):
        self.__Dobj = inputD
    
    def setR(self, inputR = Ram):
        self.__Robj = inputR
    
    # setter pada total price adalah penjumlahan terhadap ketiga harga pada kelas spek PC
    def setTotalPrice(self, priceP = 0, priceD = 0, priceR = 0):
        self.__totalPrice =  float(priceP) + float(priceD) + float(priceR)



    # deklarasi getter sebagai method (Read Only)
    def getP(self):
        return self.__Pobj
    
    def getD(self):
        return self.__Dobj
    
    def getR(self):
        return self.__Robj
    
    def getTotal(self):
        return self.__totalPrice


    # deklarasi method Display untuk menampilkan data menggunakan method Getter
    def countTotal(self):
        print("Total Price    = $" + str(self.getTotal()))   