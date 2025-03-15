#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

class Gpu : public Komponen {
    private:
        int vramGB;
        string tipeMemory;
    
    public:
        Gpu() {}
    
        Gpu(int vramGB, string tipeMemory, string merk, string nama) : Komponen(merk, nama) {
            this->vramGB = vramGB;
            this->tipeMemory = tipeMemory;
        }
    
        void setVramGB(int vramGB) { this->vramGB = vramGB; }
        void setTipeMemory(string tipeMemory) { this->tipeMemory = tipeMemory; }
        int getVramGB() { return vramGB; }
        string getTipeMemory() { return tipeMemory; }
    
        ~Gpu() {}
    };
    