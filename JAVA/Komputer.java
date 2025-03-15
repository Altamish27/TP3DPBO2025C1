import java.util.List;

public class Komputer {
    private String nama;
    private Cpu cpu;
    private List<Ram> ramList;
    private Harddrive harddrive;
    private Motherboard motherboard;
    private PowerSupply psu;
    private List<Gpu> gpuList;

    public Komputer() {
    }

    public Komputer(String nama, Cpu cpu, List<Ram> ramList, List<Gpu> gpuList, Harddrive harddrive, Motherboard motherboard, PowerSupply psu) {
        this.nama = nama;
        this.cpu = cpu;
        this.ramList = ramList;
        this.gpuList = gpuList;
        this.harddrive = harddrive;
        this.motherboard = motherboard;
        this.psu = psu;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setCpu(Cpu cpu) {
        this.cpu = cpu;
    }

    public void setRam(List<Ram> ramList) {
        this.ramList = ramList;
    }

    public void setGpu(List<Gpu> gpuList) {
        this.gpuList = gpuList;
    }

    public void setHarddrive(Harddrive harddrive) {
        this.harddrive = harddrive;
    }

    public void setMotherboard(Motherboard motherboard) {
        this.motherboard = motherboard;
    }

    public void setPsu(PowerSupply psu) {
        this.psu = psu;
    }

    public void addRam(Ram ram) {
        this.ramList.add(ram);
    }

    public void addGpu(Gpu gpu) {
        this.gpuList.add(gpu);
    }

    public String getNama() {
        return this.nama;
    }

    public Cpu getCpu() {
        return this.cpu;
    }

    public List<Ram> getRamList() {
        return this.ramList;
    }

    public List<Gpu> getGpuList() {
        return this.gpuList;
    }

    public Harddrive getHarddrive() {
        return this.harddrive;
    }

    public Motherboard getMotherboard() {
        return this.motherboard;
    }

    public PowerSupply getPsu() {
        return this.psu;
    }
}
