from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, kapasitasGB=0, ddr="", merk="", nama=""):
        super().__init__(merk, nama)
        self.kapasitasGB = kapasitasGB
        self.ddr = ddr

    def setKapasitasGB(self, kapasitasGB):
        self.kapasitasGB = kapasitasGB

    def setDdr(self, ddr):
        self.ddr = ddr

    def getKapasitasGB(self):
        return self.kapasitasGB

    def getDdr(self):
        return self.ddr
