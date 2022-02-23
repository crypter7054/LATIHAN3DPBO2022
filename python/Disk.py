
class Disk():

    # deklarasi dan inisialisasi atribut private
    __type = ""
    __capacity = 0
    __price = 0


    # constructor tanpa parameter
    def __init__(self):
        __type = ""
        __capacity = 0
        __price = 0

    # constructor dengan parameter
    def __init__(self, type = "", capacity = 0, price = 0):

        self.__type = type
        self.__capacity = capacity
        self.__price = price


    # deklarasi setter sebagai method (Write)
    def setType(self, type):
        self.__type = type
        
    def setCap(self, capacity):
        self.__capacity = capacity

    def setPrice(self, price):
        self.__price = price
        

    # deklarasi getter sebagai method (Read Only)
    def getType(self):
        return self.__type
    
    def getCap(self):
        return self.__capacity
    
    def getPriceD(self):
        return self.__price


    # deklarasi method Display untuk menampilkan data menggunakan method Getter
    def displayDisk(self):
        print("Disk Type      = " + str(self.getType()))
        print("Disk Capacity  = " + str(self.getCap()) + " GB")