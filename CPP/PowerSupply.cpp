#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

class PowerSupply : public Komponen {
    private:
        int watt;
    
    public:
        PowerSupply() {}
    
        PowerSupply(int watt, string merk, string nama): Komponen(merk, nama), watt(watt) {

        }
    
        void setWattage(int watt) { this->watt = watt; }
        int getWattage() { return watt; }
    
        ~PowerSupply() {}
    };

