from Komponen import Komponen

class Motherboard(Komponen):
    def __init__(self, chipset="", soket="", merk="", nama=""):
        super().__init__(merk, nama)
        self.chipset = chipset
        self.soket = soket

    def set_chipset(self, chipset):
        self.chipset = chipset

    def set_soket(self, soket):
        self.soket = soket

    def get_chipset(self):
        return self.chipset

    def get_soket(self):
        return self.soket
