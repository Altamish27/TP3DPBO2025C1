from Komponen import Komponen

class PowerSupply(Komponen):
    def __init__(self, watt=0, merk="", nama=""):
        super().__init__(merk, nama)
        self.watt = watt

    def set_wattage(self, watt):
        self.watt = watt

    def get_wattage(self):
        return self.watt
