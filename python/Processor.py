
class Processor():

    # deklarasi dan inisialisasi atribut private
    __name = []
    __price = 0


    # constructor tanpa parameter
    def __init__(self):
        __name = []
        __price = 0

    # constructor dengan parameter
    def __init__(self, name = [], price = 0):
        
        self.__name = name
        self.__price = price


    # deklarasi setter sebagai method (Write)
    def setName(self, name):
        self.__name = name

    def setPrice(self, price):
        self.__price = price

    
    # deklarasi getter sebagai method (Read Only)
    def getName(self):
        return self.__name

    def getPriceP(self):
        return self.__price
    

    # deklarasi method Display untuk menampilkan data menggunakan method Getter
    def displayProcessor(self):
        print("Processor      = " + str(self.getName()))