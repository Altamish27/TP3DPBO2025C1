from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Komputer import Komputer
from Motherboard import Motherboard
from PowerSupply import PowerSupply
from Gpu import Gpu
from SmartPowerSupply import SmartPowerSupply

def main():
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", "Corsair", "Vengeance")
    harddrive = Harddrive(1024, "SSD", "Samsung", "Evo")
    motherboard = Motherboard("Z690", "LGA1700", "ASUS", "ROG STRIX")
    psu = SmartPowerSupply(750, "Corsair", "RM750x")
    gpu1 = Gpu(8, "GDDR6", "NVIDIA", "RTX 3070")
    gpu2 = Gpu(12, "GDDR6X", "NVIDIA", "RTX 3080")

    komputer = Komputer("PC Gaming", cpu, [ram1, Ram(8, "DDR4", "Corsair", "Vengeance")], [gpu1, gpu2], harddrive, motherboard, psu)

    komputer.add_ram(Ram(16, "DDR5", "Corsair", "FURY"))
    komputer.add_gpu(Gpu(6, "GDDR6", "AMD", "RX 6600"))

    print("Informasi Komputer:")
    print(f"Nama       : {komputer.get_nama()}")
    print(f"CPU        : {komputer.get_cpu().get_merk()} {komputer.get_cpu().get_nama()} ({komputer.get_cpu().get_jumlah_core()} Core, {komputer.get_cpu().get_kecepatan_ghz()}GHz)")
    print(f"Motherboard: {komputer.get_motherboard().get_merk()} {komputer.get_motherboard().get_nama()} ({komputer.get_motherboard().get_chipset()} Chipset, {komputer.get_motherboard().get_soket()} Soket)")
    print(f"PowerSupply: {komputer.get_psu().get_merk()} {komputer.get_psu().get_nama()} ({komputer.get_psu().get_wattage()}W)")

    for ram in komputer.get_ram_list():
        print(f"RAM        : {ram.get_merk()} {ram.get_nama()} ({ram.getKapasitasGB()} GB, {ram.getDdr()})")

    for gpu in komputer.get_gpu_list():
        print(f"GPU        : {gpu.get_merk()} {gpu.get_nama()} ({gpu.getVramGB()} GB, {gpu.getTipeMemory()})")

    print(f"Harddrive  : {komputer.get_harddrive().getTipeDrive()} {komputer.get_harddrive().get_merk()} {komputer.get_harddrive().get_nama()} ({komputer.get_harddrive().getKapasitasGB()} GB)")
    psu.cool_down()
    psu.adjust_fan_speed(2000)
    psu.energy_saving_mode()

if __name__ == "__main__":
    main()
