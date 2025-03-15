#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Motherboard.cpp"
#include "PowerSupply.cpp"
#include "Gpu.cpp"



using namespace std;


class Komputer
{
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;
    Motherboard motherboard;
    PowerSupply psu;
    vector<Gpu> gpuList;

public:
    Komputer()
    {
    }


    Komputer(string nama, Cpu cpu, vector<Ram> ramList, vector<Gpu> gpuList, Harddrive harddrive, Motherboard motherboard, PowerSupply psu)
    {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->gpuList = gpuList;
        this->harddrive = harddrive;
        this->motherboard = motherboard;
        this->psu = psu;
    }

    void setNama(string nama)
    {
        this->nama = nama;
    }

    void setCpu(Cpu cpu)
    {
        this->cpu = cpu;
    }


    void setRam(vector<Ram> ramList)
    {
        this->ramList = ramList;
    }    

    void setGpu(vector<Gpu> gpuList)
    {
        this->gpuList = gpuList;
    }
   
    void setHarddrive(Harddrive harddrive)
    {
        this->harddrive = harddrive;
    }

    void setMotherboard(Motherboard motherboard)
    {
        this->motherboard = motherboard;
    }

    void setPsu(PowerSupply psu)
    {
        this->psu = psu;
    }

    void addRam(Ram ram)
    {
        this->ramList.push_back(ram);
    }

    void addGpu(Gpu gpu)
    {
        this->gpuList.push_back(gpu);
    }


    string getNama()
    {
        return this->nama;
    }


    Cpu getCpu()
    {
        return this->cpu;
    }


    vector<Ram> getRamList() // return vector
    {
        return this->ramList;
    }

    vector<Gpu> getGpuList() // return vector
    {
        return this->gpuList;
    }


    Harddrive getHarddrive()
    {
        return this->harddrive;
    }

    Motherboard getMotherboard()
    {
        return this->motherboard;
    }

    PowerSupply getPsu()
    {
        return this->psu;
    }

    ~Komputer()
    {
    }


};
