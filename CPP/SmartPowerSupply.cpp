#pragma once
#include "PowerSupply.cpp"
#include "CoolingSystem.cpp"

class SmartPowerSupply : public PowerSupply, public CoolingSystem {
public:
    SmartPowerSupply(int watt, string merk, string nama)
        : PowerSupply(watt, merk, nama) {}

    void energySavingMode() {
        cout << "Mengaktifkan mode hemat energi pada power supply..." << endl;
    }
};
