#pragma once
#include <iostream>
using namespace std;

class CoolingSystem {
public:
    void coolDown() {
        cout << "Sistem pendingin aktif: Menurunkan suhu komponen..." << endl;
    }

    void adjustFanSpeed(int speed) {
        cout << "Menyesuaikan kecepatan kipas menjadi " << speed << " RPM" << endl;
    }
};
