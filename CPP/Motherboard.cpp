#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"
using namespace std;

class Motherboard : public Komponen {
private:
    string chipset;
    string soket;

public:
    Motherboard() {}

    Motherboard(string chipset, string soket, string merk, string nama) : Komponen(merk, nama) {
        this->chipset = chipset;
        this->soket = soket;
    }

    void setChipset(string chipset) { this->chipset = chipset; }
    void setSoket(string soket) { this->soket = soket; }
    string getChipset() { return chipset; }
    string getSoket() { return soket; }

    ~Motherboard() {}
};