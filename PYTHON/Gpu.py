from Komponen import Komponen

class Gpu(Komponen):
    def __init__(self, vramGB=0, tipeMemory="", merk="", nama=""):
        super().__init__(merk, nama)
        self.vramGB = vramGB
        self.tipeMemory = tipeMemory

    def setVramGB(self, vramGB):
        self.vramGB = vramGB

    def setTipeMemory(self, tipeMemory):
        self.tipeMemory = tipeMemory

    def getVramGB(self):
        return self.vramGB

    def getTipeMemory(self):
        return self.tipeMemory
