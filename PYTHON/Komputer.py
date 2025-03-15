from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Motherboard import Motherboard
from PowerSupply import PowerSupply
from Gpu import Gpu
from SmartPowerSupply import SmartPowerSupply



class Komputer:
    def __init__(self, nama="", cpu=None, ram_list=None, gpu_list=None, harddrive=None, motherboard=None, psu=None):
        self.nama = nama
        self.cpu = cpu
        self.ram_list = ram_list if ram_list is not None else []
        self.gpu_list = gpu_list if gpu_list is not None else []
        self.harddrive = harddrive
        self.motherboard = motherboard
        self.psu = psu

    def set_nama(self, nama):
        self.nama = nama

    def set_cpu(self, cpu):
        self.cpu = cpu

    def set_ram(self, ram_list):
        self.ram_list = ram_list

    def set_gpu(self, gpu_list):
        self.gpu_list = gpu_list

    def set_harddrive(self, harddrive):
        self.harddrive = harddrive

    def set_motherboard(self, motherboard):
        self.motherboard = motherboard

    def set_psu(self, psu):
        self.psu = psu

    def add_ram(self, ram):
        self.ram_list.append(ram)

    def add_gpu(self, gpu):
        self.gpu_list.append(gpu)

    def get_nama(self):
        return self.nama

    def get_cpu(self):
        return self.cpu

    def get_ram_list(self):
        return self.ram_list

    def get_gpu_list(self):
        return self.gpu_list

    def get_harddrive(self):
        return self.harddrive

    def get_motherboard(self):
        return self.motherboard

    def get_psu(self):
        return self.psu
