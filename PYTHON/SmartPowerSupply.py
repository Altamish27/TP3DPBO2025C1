from CoolingSystem import CoolingSystem
from PowerSupply import PowerSupply

class SmartPowerSupply(PowerSupply, CoolingSystem):
    def __init__(self, watt, merk, nama):
        super().__init__(watt, merk, nama)

    def energy_saving_mode(self):
        print("Mengaktifkan mode hemat energi pada power supply...")
