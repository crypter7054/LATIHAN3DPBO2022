

class Ram():

    # deklarasi dan inisialisasi atribut private
    __capacity = 0
    __price = 0


    # constructor tanpa parameter
    def __init__(self):
        __capacity = 0
        __price = 0

    # constructor dengan parameter
    def __init__(self, capacity = 0, price = 0):

        self.__capacity = capacity
        self.__price = price


    # deklarasi setter sebagai method (Write)
    def setCap(self, cap):
        self.__capacity = cap

    def setPrice(self, price):
        self.__price = price


    # deklarasi getter sebagai method (Read Only)
    def getCap(self):
        return self.__capacity
    
    def getPriceR(self):
        return self.__price

    
    # deklarasi method Display untuk menampilkan data menggunakan method Getter
    def displayRam(self):
        print("RAM Capacity   = " + str(self.getCap()) + " GB")