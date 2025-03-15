#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "Motherboard.cpp"
#include "PowerSupply.cpp"
#include "Gpu.cpp"
#include "SmartPowerSupply.cpp"

using namespace std;

int main(){

    ios::sync_with_stdio(0); cin.tie();


    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");
    Motherboard motherboard("Z690", "LGA1700", "ASUS", "ROG STRIX");
    SmartPowerSupply psu(750, "Corsair", "RM750x");
    Gpu gpu1(8, "GDDR6", "NVIDIA", "RTX 3070");
    Gpu gpu2(12, "GDDR6X", "NVIDIA", "RTX 3080");



    Komputer komputer("PC Gaming", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, {gpu1, gpu2}, harddrive, motherboard, psu);

    komputer.addRam(Ram(16, "DDR5", "Corsair", "FURY"));
    komputer.addGpu(Gpu(6, "GDDR6", "AMD", "RX 6600"));

    cout << "Informasi Komputer:" << endl;
    cout << "Nama       : " << komputer.getNama() << endl;
    cout << "CPU        : " << komputer.getCpu().getMerk() << " " << komputer.getCpu().getNama() << " (" << komputer.getCpu().getJumlahCore() << " Core, " << komputer.getCpu().getKecepatanGHz() << "GHz)\n";
    cout << "Motherboard: " << komputer.getMotherboard().getMerk() << " " << komputer.getMotherboard().getNama() << " (" << komputer.getMotherboard().getChipset() << " Chipset, " << komputer.getMotherboard().getSoket() << " Soket)\n";
    cout << "PowerSupply: " << komputer.getPsu().getMerk() << " " << komputer.getPsu().getNama() << " (" << komputer.getPsu().getWattage() << "W)\n";

    for (Ram& ram : komputer.getRamList()) {
        cout << "RAM        : " << ram.getMerk() << " " << ram.getNama() << " (" << ram.getKapasitasGB() << " GB, " << ram.getDdr() << ")\n";
    }

    for (Gpu& gpu : komputer.getGpuList()) {
        cout << "GPU        : " << gpu.getMerk() << " " << gpu.getNama() << " (" << gpu.getVramGB() << " GB, " << gpu.getTipeMemory() << ")\n";
    }

    cout << "Harddrive  : " << komputer.getHarddrive().getTipeDrive() << " " << komputer.getHarddrive().getMerk() << " " << komputer.getHarddrive().getNama() << " (" << komputer.getHarddrive().getKapasitasGB() << " GB)\n";
    psu.coolDown();
    psu.adjustFanSpeed(2000);
    psu.energySavingMode();
    
    return 0;
    



    
    
    

}