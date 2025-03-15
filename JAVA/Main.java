import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Cpu cpu = new Cpu(8, 3.6, "Intel", "Core i7-11700K");
        Ram ram1 = new Ram(16, "DDR5", "Corsair", "Vengeance");
        Harddrive harddrive = new Harddrive(1024, "SSD", "Samsung", "Evo");
        Motherboard motherboard = new Motherboard("Z690", "LGA1700", "ASUS", "ROG STRIX");
       PowerSupply psu = new PowerSupply(750, "Corsair", "RM750x");
        Gpu gpu1 = new Gpu(8, "GDDR6", "NVIDIA", "RTX 3070");
        Gpu gpu2 = new Gpu(12, "GDDR6X", "NVIDIA", "RTX 3080");

        List<Ram> ramList = new ArrayList<>();
        ramList.add(ram1);
        ramList.add(new Ram(8, "DDR4", "Corsair", "Vengeance"));

        List<Gpu> gpuList = new ArrayList<>();
        gpuList.add(gpu1);
        gpuList.add(gpu2);

        Komputer komputer = new Komputer("PC Gaming", cpu, ramList, gpuList, harddrive, motherboard, psu);

        komputer.addRam(new Ram(16, "DDR5", "Corsair", "FURY"));
        komputer.addGpu(new Gpu(6, "GDDR6", "AMD", "RX 6600"));

        System.out.println("Informasi Komputer:");
        System.out.println("Nama       : " + komputer.getNama());
        System.out.println("CPU        : " + komputer.getCpu().getMerk() + " " + komputer.getCpu().getNama() + " (" + komputer.getCpu().getJumlahCore() + " Core, " + komputer.getCpu().getKecepatanGHz() + "GHz)");
        System.out.println("Motherboard: " + komputer.getMotherboard().getMerk() + " " + komputer.getMotherboard().getNama() + " (" + komputer.getMotherboard().getChipset() + " Chipset, " + komputer.getMotherboard().getSoket() + " Soket)");
        System.out.println("PowerSupply: " + komputer.getPsu().getMerk() + " " + komputer.getPsu().getNama() + " (" + komputer.getPsu().getWattage() + "W)");

        for (Ram ram : komputer.getRamList()) {
            System.out.println("RAM        : " + ram.getMerk() + " " + ram.getNama() + " (" + ram.getKapasitasGB() + " GB, " + ram.getDdr() + ")");
        }

        for (Gpu gpu : komputer.getGpuList()) {
            System.out.println("GPU        : " + gpu.getMerk() + " " + gpu.getNama() + " (" + gpu.getVramGB() + " GB, " + gpu.getTipeMemory() + ")");
        }

        System.out.println("Harddrive  : " + komputer.getHarddrive().getTipeDrive() + " " + komputer.getHarddrive().getMerk() + " " + komputer.getHarddrive().getNama() + " (" + komputer.getHarddrive().getKapasitasGB() + " GB)");
    }
}
