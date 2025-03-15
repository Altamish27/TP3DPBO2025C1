public class Gpu extends Komponen {
    private int vramGB;
    private String tipeMemory;

    public Gpu() {}

    public Gpu(int vramGB, String tipeMemory, String merk, String nama) {
        super(merk, nama);
        this.vramGB = vramGB;
        this.tipeMemory = tipeMemory;
    }

    public void setVramGB(int vramGB) {
        this.vramGB = vramGB;
    }

    public void setTipeMemory(String tipeMemory) {
        this.tipeMemory = tipeMemory;
    }

    public int getVramGB() {
        return vramGB;
    }

    public String getTipeMemory() {
        return tipeMemory;
    }
}